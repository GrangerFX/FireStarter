#include "FireStarterProcess.h"
#include "PrintF.h"

#define PIPE_BUFFER_SIZE   512
#define TEST_CONNECTION 0
#define TEST_TERMINATE 0
#define TEST_OUTPUT 0
#if TEST_OUTPUT
#define TESTPRINTF printf
#else
#define TESTPRINTF
#endif

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

size_t FireStarterProcess::ProcessIndex(void)
{
    return m_processIndex;
} // ProcessIndex

std::string FireStarterProcess::ProcessPrefix(void)
{
    return (m_client ? "Client " : "Server ") + std::to_string(m_processIndex);
} // ProcessText

void FireStarterProcess::Terminate(void)
{
    if (m_terminate) {
        TESTPRINTF("%s: Will terminate.\n", ProcessPrefix().c_str());
        *m_terminate = true;
    }
} // Terminate

bool FireStarterProcess::ShouldTerminate(void)
{
    return m_terminate ? *m_terminate : false;
} // ShouldTerminate

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
        if (m_terminate && *m_terminate)
            return false;
        readSize += bytesRead;
        DWORD lastError = GetLastError();
        if (!result && (lastError != ERROR_MORE_DATA))
            break;
    } while (!result && (readSize < size));  // repeat loop if ERROR_MORE_DATA
    if (!result || (size != readSize)) {
        Terminate();
        return false;
    }
    return true;
} // ReceiveData

bool FireStarterProcess::SendTerminate(void)
{
    size_t zeroSize = 0;
    return SendData(&zeroSize, sizeof(size_t));
} // SendTerminate

bool FireStarterProcess::SendPacket(const FireStarterPacket& packet)
{
    // Note: Maximum size is 32 bits (4GB).
    // TODO: Break up larger data blocks into smaller chunks if needed.
    const std::string& packetCommand = packet.Command();
    TESTPRINTF("%s: Sending command: %s\n", ProcessPrefix().c_str(), packetCommand.c_str());
    size_t size = packet.size();
    return SendData(&size, sizeof(size_t)) && SendData(packet.data(), size);
} // SendPacket

bool FireStarterProcess::ReceivePacket(FireStarterPacket& packet, const std::string& command)
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
    const std::string& packetCommand = packet.Command();
    TESTPRINTF("%s: Received command: %s\n", ProcessPrefix().c_str(), packetCommand.c_str());
    if (!command.empty() && (command != packetCommand)) {
        TESTPRINTF("%s: Error! Received command: %s  Expected command: %s\n", ProcessPrefix().c_str(), packet.Command().c_str(), command.c_str());
        return false;
    }
    return true;
} // ReceivePacket

bool FireStarterProcess::SendCommand(const std::string& command)
{
    FireStarterPacket packet(command);
    return SendPacket(packet);
} // SendCommand

bool FireStarterProcess::ReceiveCommand(const std::string& command)
{
    FireStarterPacket packet(command);
    return ReceivePacket(packet, command);
} // ReceiveCommand

bool FireStarterProcess::SendString(const std::string& string)
{
    size_t size = string.size();
    return SendData(&size, sizeof(size_t)) && SendData(string.data(), size);
} // SendString

bool FireStarterProcess::ReceiveString(std::string& string)
{
    size_t size = 0;
    string.clear();
    if (!ReceiveData(&size, sizeof(size_t)))
        return false;
    if (!size) {
        Terminate(); // Server commanded the client to terminate.
        return false;
    }
    string.resize(size);
    if (!ReceiveData(string.data(), size)) {
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
            m_pipeName.c_str(),        // pipe name 
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

        // Send the process index to the client.
        bool indexResult = SendData(&m_processIndex, sizeof(m_processIndex));
        if (indexResult)
            TESTPRINTF("%s: Index sent to client: %llu\n", ProcessPrefix().c_str(), m_processIndex);
        else {
            TESTPRINTF("%s: Failed to send index to client. Error=%d\n", ProcessPrefix().c_str(), GetLastError());
            StopProcess();
            return false;
        }

#if TEST_CONNECTION
        // Send a message to the pipe client.
        std::string sendMessage = "Hello from server " + m_pipeName;
        bool sendResult = SendString(sendMessage);
        if (sendResult)
            TESTPRINTF("%s: Message sent to client: %s\n", ProcessPrefix().c_str(), sendMessage.c_str());
        else {
            TESTPRINTF("%s: Message send failed. Error=%d\n", ProcessPrefix().c_str(), GetLastError());
            StopProcess();
            return false;
        }

        // Receive a message from the pipe client
        std::string receiveMessage;
        bool receiveResult = ReceiveString(receiveMessage);
        if (receiveResult)
            TESTPRINTF("%s: Message received from client: %s\n", ProcessPrefix().c_str(), receiveMessage.c_str());
        else {
            TESTPRINTF("%s: Message receive failed. Error=%d\n", ProcessPrefix().c_str(), GetLastError());
            StopProcess();
            return false;
        }

#endif
#if TEST_TERMINATE
        // Test the termination command.
        if (m_connected) {
            if (SendTerminate()) {
                printf("Termination command sent to client.\n");
                // Wait for process to terminate.
                DWORD result = WaitForSingleObject(m_processInformation.hProcess, 2000); // Wait two seconds.
                if (!result)
                    TESTPRINTF("%s: Client terminated.\n", ProcessPrefix().c_str());
                else
                    TESTPRINTF("%s: Client termination timed out. Error=%d\n", ProcessPrefix().c_str(), result);
                m_connected = result != 0;
            }
            else
                TESTPRINTF("%s: Termination command failed. Error=%d.\n", ProcessPrefix().c_str(), GetLastError());
        }
#endif
    }
    return m_connected;
} // StartProcess

void FireStarterProcess::StopClient(void)
{
    if (m_pipe != INVALID_HANDLE_VALUE) {
        CloseHandle(m_pipe);
        TESTPRINTF("%s: Disconnected.\n", ProcessPrefix().c_str());
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
            TESTPRINTF("Could not open pipe. Error=%d\n", GetLastError());
            return false;
        }

        // All pipe instances are busy, so wait for 20 seconds. 
        if (!WaitNamedPipe(m_pipeName.c_str(), 20000)) {
            TESTPRINTF("Could not open pipe: 20 second wait timed out.");
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
            TESTPRINTF("SetNamedPipeHandleState failed. Error=%d\n", GetLastError());
            StopClient();
            return false;
        }

        // Receive the process index from the server.
        bool indexResult = ReceiveData(&m_processIndex, sizeof(m_processIndex));
        if (indexResult)
            TESTPRINTF("\nIndex received from server: %llu\n", m_processIndex);
        else {
            TESTPRINTF("Failed to receive index via pipe. Error=%d\n", GetLastError());
            StopClient();
            return false;
        }

#if TEST_CONNECTION
        // Receive a message from the pipe server
        std::string receiveMessage;
        bool receiveResult = ReceiveString(receiveMessage);
        if (receiveResult)
            TESTPRINTF("\nMessage received from server: %s\n", receiveMessage.c_str());
        else {
            TESTPRINTF("Message receive from pipe failed. Error=%d\n", GetLastError());
            StopClient();
            return false;
        }

        // Send a message to the pipe server.
        std::string sendMessage = "Hello from client " + m_pipeName;
        bool sendResult = SendString(sendMessage);
        if (sendResult)
            TESTPRINTF("\nMessage sent to server: %s\n", sendMessage.c_str());
        else {
            TESTPRINTF("Message send to server failed. Error=%d\n", GetLastError());
            StopClient();
            return false;
        }
#endif
#if TEST_TERMINATE
        // Receive a message from the pipe server
        std::string terminateMessage;
        bool terminateResult = ReceiveString(receiveMessage);
        if (terminateResult)
            TESTPRINTF("\nError: Message received instead of terminate: %s\n", receiveMessage.c_str());
        else {
            TESTPRINTF("Termination command received.\n");
            StopClient();
            return false;
        }
#endif
    }
    return m_connected;
} // StartClient

bool FireStarterProcess::IsClient(void)
{
    return m_client;
} // IsClient

bool FireStarterProcess::Start(void)
{
    if (m_client)
        return StartClient();
    else
        return StartProcess();
} // Start

void FireStarterProcess::Stop(void)
{
    if (m_client)
        StopClient();
    else
        StopProcess();
} // Stop

FireStarterProcess::FireStarterProcess(const std::string& pipeName, const std::string& processPath, size_t index)
{
    m_processPath = processPath;
    m_pipeName = pipeName;
    m_processIndex = index;
} // FireStarterProcess

FireStarterProcess::FireStarterProcess(const std::string& pipeName, volatile bool* terminate)
{
    m_pipeName = pipeName;
    m_terminate = terminate;
    m_processIndex = 0;
    m_client = true;
} // FireStarterProcess

FireStarterProcess::~FireStarterProcess(void)
{
} // ~FireStarterProcess

const std::string& FireStarterServer::ModulePath(void) const
{
    return GetModulePath();
} // ModulePath

FireStarterProcess* FireStarterServer::Process(size_t index)
{
    if (index >= m_processes.size())
        return nullptr;
    return m_processes[index];
} // Process

FireStarterProcess* FireStarterServer::AddProcess(const std::string& name)
{
    size_t processIndex = m_processes.size() + 1;
    std::string processPipeName = "\\\\.\\pipe\\" + name + std::to_string(processIndex);
    std::string processPath = ModulePath() + name + ".exe";
    FireStarterProcess* process = new FireStarterProcess(processPipeName, processPath, processIndex);
    m_processes.push_back(process);
    return process;
} // AddProcess

void FireStarterServer::ClearProcesses(void)
{
    for (FireStarterProcess* process : m_processes)
        delete process;
    m_processes.clear();
} // ClearProcesses

FireStarterServer::FireStarterServer(const std::string& name)
{
    m_processServerName = name;
} // FireStarterServer

FireStarterServer::~FireStarterServer(void)
{
    ClearProcesses();
} // ~FireStarterServer