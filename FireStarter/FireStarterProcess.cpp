#include "FireStarterProcess.h"
#include "PrintF.h"

#define PIPE_BUFFER_SIZE   512
#define TEST_CONNECTION 1

static const std::string& GetModulePath(void)
{
    static std::string modulePath;
    if (modulePath.empty()) {
        HMODULE hModule = NULL;
        if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCTSTR)GetModulePath, &hModule)) {
            char path[MAX_PATH] = { 0 };
            GetModuleFileName(hModule, path, sizeof(path));
            modulePath = path;

            // Remove the module name leaving just the path.
            size_t i = modulePath.length();
            while (i) {
                char c = path[i - 1];
                if ((c == '/') || (c == '\\'))
                    break;
                i--;
            }
            modulePath.resize(i);
        }
        if (modulePath.empty())
            modulePath = "./";
    }
    return modulePath;
} // GetModulePath

bool FireStarterProcess::SendData(const void* data, size_t size)
{
    // Note: Maximum size is 32 bits (4GB).
    // TODO: Break up larger data blocks into smaller chunks if needed.
    DWORD bytesToWrite = (DWORD)size;
    DWORD bytesWritten = 0;
    bool result = WriteFile(
        m_pipe,        // pipe handle 
        data,          // message 
        bytesToWrite,  // message length 
        &bytesWritten, // bytes written 
        NULL);         // not overlapped 
    return result && (bytesWritten == bytesToWrite);
} // SendData

bool FireStarterProcess::ReceiveData(void* data, size_t size)
{
    unsigned char* readBuffer = (unsigned char*)data;
    size_t readSize = 0;
    bool result = false;
    do {
        // Read from the pipe. 
        DWORD bytesRead = 0;
        DWORD bytesRemaining = (DWORD)(size - readSize);
        result = ReadFile(
            m_pipe,                 // pipe handle 
            readBuffer + readSize,  // buffer + offset to receive reply 
            bytesRemaining,         // size of buffer 
            &bytesRead,             // number of bytes read 
            NULL);                  // not overlapped 
        readSize += bytesRead;
        if (!result && (GetLastError() != ERROR_MORE_DATA))
            break;
    } while (!result && (readSize < size));  // repeat loop if ERROR_MORE_DATA
    if (!result || (size != readSize)) {
        Terminate();
        return false;
    }
    return true;
} // ReceiveData

void FireStarterProcess::Terminate(void)
{
    if (m_terminate) {
        printf("Client will terminate.\n");
        *m_terminate = true;
    }
} // Terminate

bool FireStarterProcess::SendTerminate(void)
{
    size_t zeroSize = 0;
    return SendData(&zeroSize, sizeof(size_t));
} // SendTerminate

bool FireStarterProcess::SendPacket(const FireStarterPacket& packet)
{
    // Note: Maximum size is 32 bits (4GB).
    // TODO: Break up larger data blocks into smaller chunks if needed.
    size_t size = packet.size();
    return SendData(&size, sizeof(size_t)) && SendData(packet.data(), size);
} // SendPacket

bool FireStarterProcess::ReceivePacket(FireStarterPacket& packet)
{
    size_t size = 0;
    packet.clear();
    if (!ReceiveData(&size, sizeof(size_t)))
        return false;
    if (size == 0) {
        Terminate(); // Server commanded the client to terminate.
        return false;
    }
    packet.resize(size);
    if (!ReceiveData(packet.data(), size)) {
        packet.clear();
        return false;
    }
    return true;
} // ReceivePacket

bool FireStarterProcess::SendString(const std::string& string)
{
    size_t size = string.size();
    return SendData(&size, sizeof(size_t)) && SendData(string.data(), size);
} // SendString

bool FireStarterProcess::ReceiveString(std::string& string)
{
    size_t length = 0;
    string.clear();
    if (!ReceiveData(&length, sizeof(size_t)))
        return false;
    if (!length) {
        Terminate(); // Server commanded the client to terminate.
        return false;
    }
    string.resize(length);
    if (!ReceiveData(string.data(), length)) {
        string.clear();
        return false;
    }
    return true;
} // ReceiveString

void FireStarterProcess::StopProcess(void)
{
    // Command the process to terminate.
    if (m_connected) {
        if (SendTerminate()) {
            // Wait for process to terminate.
            DWORD result = WaitForSingleObject(m_processInformation.hProcess, 2000); // Wait two seconds.
            m_connected = result != 0;
        }
    }

    // Close handles to the stdin and stdout pipes no longer needed by the child process.
    // If they are not explicitly closed, there is no way to recognize that the child process has ended.(?)
    if (m_pipe != INVALID_HANDLE_VALUE) {
        CloseHandle(m_pipe);
        m_pipe = INVALID_HANDLE_VALUE;
        m_connected = false;
    }

    // Close handles to the child process and its primary thread.
    if (m_started) {
        bool closeHandleResult1 = CloseHandle(m_processInformation.hProcess);
        bool closeHandleResult2 = CloseHandle(m_processInformation.hThread);
        m_processInformation.hProcess = INVALID_HANDLE_VALUE;
        m_processInformation.hThread = INVALID_HANDLE_VALUE;
        m_started = false;
    }
} // StopProcess

bool FireStarterProcess::StartProcess(void)
{
    // Create the process communication pipe.
    if (m_pipe == INVALID_HANDLE_VALUE) {
        m_pipe = CreateNamedPipe(
            m_pipeName.c_str(), // pipe name 
            PIPE_ACCESS_DUPLEX,        // read/write access 
            PIPE_TYPE_MESSAGE |        // message type pipe 
            PIPE_READMODE_MESSAGE |    // message-read mode 
            PIPE_WAIT,                 // blocking mode (required)
            PIPE_UNLIMITED_INSTANCES,  // max. instances  
            PIPE_BUFFER_SIZE,          // output buffer size (defined above)
            PIPE_BUFFER_SIZE,          // input buffer size (defined above)
            0,                         // client time-out (0 = default: 50ms)
            NULL);                     // default security attribute 
        if (m_pipe == INVALID_HANDLE_VALUE)
            return false;
    }

    // Start the process.
    if (!m_started) {
        m_processStartupInfo.cb = sizeof(STARTUPINFO);
        m_processStartupInfo.dwFlags |= STARTF_USESTDHANDLES;
        m_processStartupInfo.dwFlags |= STARTF_USESHOWWINDOW;
        m_processStartupInfo.wShowWindow = SW_SHOWMINIMIZED;
        //  m_processStartupInfo.wShowWindow = SW_HIDE;

        LPSTR commandLine = (LPSTR)m_pipeName.c_str();
        m_started = CreateProcess(
            m_processPath.c_str(),  // module name
            commandLine,            // Command line
            NULL,                   // Process handle not inheritable
            NULL,                   // Thread handle not inheritable
            FALSE,                  // Set handle inheritance to FALSE
            0,                      // No creation flags
            NULL,                   // Use parent's environment block
            NULL,                   // Use parent's starting directory
            &m_processStartupInfo,  // Pointer to STARTUPINFO structure
            &m_processInformation); // Pointer to PROCESS_INFORMATION structure
        if (!m_started) {
            StopProcess();
            return false;
        }
    }

    // Connect the client process to the server communication pipe.
    if (!m_connected)
        m_connected = ConnectNamedPipe(m_pipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);

    // Start the communication.
    if (m_connected) {
        // The pipe connected; change to message-read mode. 
        DWORD dwMode = PIPE_READMODE_MESSAGE;
        if (!SetNamedPipeHandleState(
            m_pipe,   // pipe handle 
            &dwMode,  // new pipe mode 
            NULL,     // don't set maximum bytes 
            NULL))    // don't set maximum time 
        {
            StopProcess();
            return false;
        }

#if TEST_CONNECTION
        // Send a message to the pipe client.
        std::string sendMessage = "Hello from server " + m_pipeName;
        bool sendResult = SendString(sendMessage);
        if (sendResult)
            printf("Message sent to client: %s\n", sendMessage.c_str());
        else {
            printf("Message send failed. Error=%d\n", GetLastError());
            StopProcess();
            return false;
        }

        // Receive a message from the pipe client
        std::string receiveMessage;
        bool receiveResult = ReceiveString(receiveMessage);
        if (receiveResult)
            printf("Message received from client: %s\n", receiveMessage.c_str());
        else {
            printf("Message receive failed. Error=%d\n", GetLastError());
            StopProcess();
            return false;
        }

        // Test the termination command.
        if (m_connected) {
            if (SendTerminate()) {
                printf("Termination command sent to client.\n");
                // Wait for process to terminate.
                DWORD result = WaitForSingleObject(m_processInformation.hProcess, 2000); // Wait two seconds.
                if (!result)
                    printf("Client terminated.\n");
                else
                    printf("Client termination timed out. Error=%d\n", result);
                m_connected = result != 0;
            } else
                printf("Termination command failed. Error=%d.\n", GetLastError());
        }

        // Stop the process. Note: The terminate command will be sent if the above code failed.
        StopProcess();
#endif
    }
    return m_connected;
} // StartProcess

void FireStarterProcess::StopClient(void)
{
    if (m_pipe != INVALID_HANDLE_VALUE) {
        CloseHandle(m_pipe);
        printf("Client disconnected.\n");
        m_pipe = INVALID_HANDLE_VALUE;
        m_connected = false;
    }
} // StopClient

bool FireStarterProcess::StartClient(void)
{
    while (1) {
        m_pipe = CreateFile(
            m_pipeName.c_str(), // pipe name 
            GENERIC_READ |      // read and write access 
            GENERIC_WRITE,
            0,                  // no sharing 
            NULL,               // default security attributes
            OPEN_EXISTING,      // opens existing pipe 
            0,                  // default attributes 
            NULL);              // no template file 

        // Break if the pipe handle is valid. 
        if (m_pipe != INVALID_HANDLE_VALUE) {
            m_connected = true;
            break;
        }

        // Exit if an error other than ERROR_PIPE_BUSY occurs. 
        if (GetLastError() != ERROR_PIPE_BUSY) {
            printf("Could not open pipe. Error=%d\n", GetLastError());
            return false;
        }

        // All pipe instances are busy, so wait for 20 seconds. 
        if (!WaitNamedPipe(m_pipeName.c_str(), 20000)) {
            printf("Could not open pipe: 20 second wait timed out.");
            return false;
        }
    }

    if (m_connected) {
        // The pipe connected; change to message-read mode. 
        DWORD dwMode = PIPE_READMODE_MESSAGE;
        if (!SetNamedPipeHandleState(
            m_pipe,   // pipe handle 
            &dwMode,  // new pipe mode 
            NULL,     // don't set maximum bytes 
            NULL))    // don't set maximum time 
        {
            printf("SetNamedPipeHandleState failed. Error=%d\n", GetLastError());
            StopClient();
            return false;
        }

#if TEST_CONNECTION
        // Receive a message from the pipe server
        std::string receiveMessage;
        bool receiveResult = ReceiveString(receiveMessage);
        if (receiveResult)
            printf("\nMessage received from server: %s\n", receiveMessage.c_str());
        else {
            printf("ReadFile from pipe failed. Error=%d\n", GetLastError());
            StopClient();
            return false;
        }

        // Send a message to the pipe server.
        std::string sendMessage = "Hello from client " + m_pipeName;
        bool sendResult = SendString(sendMessage);
        if (sendResult)
            printf("\nMessage sent to server: %s\n", sendMessage.c_str());
        else {
            printf("WriteFile to pipe failed. Error=%d\n", GetLastError());
            StopClient();
            return false;
        }

        // Receive a message from the pipe server
        std::string terminateMessage;
        bool terminateResult = ReceiveString(receiveMessage);
        if (terminateResult)
            printf("\nError: Message received instead of terminate: %s\n", receiveMessage.c_str());
        else {
            printf("Termination command received.\n");
            StopClient();
            return false;
        }
#endif
    }
    return m_connected;
} // StartClient

FireStarterProcess::FireStarterProcess(const std::string& pipeName, const std::string& processPath)
{
    m_processPath = processPath;
    m_pipeName = pipeName;
    m_client = false;
    DispatchAsync([this] { StartProcess(); });
} // FireStarterProcess

FireStarterProcess::FireStarterProcess(const std::string& pipeName, bool* terminate)
{
    m_pipeName = pipeName;
    m_terminate = terminate;
    m_client = true;
    DispatchAsync([this] { StartClient(); });
} // FireStarterProcess

FireStarterProcess::~FireStarterProcess(void)
{
    if (m_client)
        DispatchSync([this] { StopClient(); });
    else
        DispatchSync([this] { StopProcess(); });
} // ~FireStarterProcess

const std::string& FireStarterServer::ModulePath(void) const
{
    return GetModulePath();
} // ModulePath

FireStarterProcess* FireStarterServer::AddProcess(const std::string& name)
{
    size_t processIndex = m_processes.size() + 1;
    std::string processPipeName = "\\\\.\\pipe\\" + name + std::to_string(processIndex);
    std::string processPath = ModulePath() + name + ".exe";
    FireStarterProcess* process = new FireStarterProcess(processPipeName, processPath);
    m_processes.push_back(process);
    return process;
} // AddProcess

FireStarterServer::FireStarterServer(const std::string& name)
{
    m_processServerName = name;
} // FireStarterServer

FireStarterServer::~FireStarterServer(void)
{
    for (FireStarterProcess* process : m_processes)
        delete process;
} // ~FireStarterServer