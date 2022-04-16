#include "FireStarterProcess.h"
#include "PrintF.h"

#define PIPE_BUFFER_SIZE   512

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

void FireStarterProcess::WriteData(void* data, size_t size)
{
    // Note: Maximum size is 32 bits (4GB).
    // TODO: Break up larger data blocks into smaller chunks if needed.
    DispatchSync([this, data, size] {
        DWORD dataWritten = 0;
        bool result = WriteFile(m_pipe, &size, (DWORD)sizeof(size_t), &dataWritten, NULL) && (dataWritten == (DWORD)sizeof(size_t));
        result = result && WriteFile(m_pipe, data, (DWORD)size, &dataWritten, NULL) && (dataWritten == (DWORD)size);
    }); // This will wait for ControlThread() to exit.
} // WriteData

void FireStarterProcess::StartProcess(void)
{
    if (!m_started) {
        m_processStartupInfo.cb = sizeof(STARTUPINFO);
        //  m_processStartupInfo.hStdError = m_outputWrite;
        m_processStartupInfo.hStdOutput = m_pipe;
        m_processStartupInfo.hStdInput = m_pipe;
        m_processStartupInfo.dwFlags |= STARTF_USESTDHANDLES;
        m_processStartupInfo.dwFlags |= STARTF_USESHOWWINDOW;
        m_processStartupInfo.wShowWindow = SW_SHOWMINIMIZED;
        //  m_processStartupInfo.wShowWindow = SW_HIDE;

        LPSTR commandLine = (LPSTR)m_processPipeName.c_str();
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
        if (!m_started)
            return;
    }

    if (m_pipe == INVALID_HANDLE_VALUE) {
        m_pipe = CreateNamedPipe(
            m_processPipeName.c_str(), // pipe name 
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
            return;
    }

    if (!m_connected)
        m_connected = ConnectNamedPipe(m_pipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);
} // StartProcess

void FireStarterProcess::StopProcess(void)
{
    if (m_started) {
        // Note: TODO: Tell the process to quit.
        unsigned int result = WaitForSingleObject(m_processInformation.hProcess, INFINITE);

        // Close handles to the child process and its primary thread.
        bool closeHandleResult1 = CloseHandle(m_processInformation.hProcess);
        bool closeHandleResult2 = CloseHandle(m_processInformation.hThread);

        // Close handles to the stdin and stdout pipes no longer needed by the child process.
        // If they are not explicitly closed, there is no way to recognize that the child process has ended.(?)
        if (m_pipe != INVALID_HANDLE_VALUE) {
            CloseHandle(m_pipe);
            m_pipe = INVALID_HANDLE_VALUE;
        }
    }
} // StopProcess

void FireStarterProcess::StartClient(void)
{
    while (1)
    {
        m_pipe = CreateFile(
            m_processPipeName.c_str(), // pipe name 
            GENERIC_READ |             // read and write access 
            GENERIC_WRITE,
            0,                         // no sharing 
            NULL,                      // default security attributes
            OPEN_EXISTING,             // opens existing pipe 
            0,                         // default attributes 
            NULL);                     // no template file 

        // Break if the pipe handle is valid. 

        if (m_pipe != INVALID_HANDLE_VALUE)
            break;

        // Exit if an error other than ERROR_PIPE_BUSY occurs. 

        if (GetLastError() != ERROR_PIPE_BUSY)
        {
            printf("Could not open pipe. GLE=%d\n", GetLastError());
            return;
        }

        // All pipe instances are busy, so wait for 20 seconds. 

        if (!WaitNamedPipe(m_processPipeName.c_str(), 20000))
        {
            printf("Could not open pipe: 20 second wait timed out.");
            return;
        }
    }
    // The pipe connected; change to message-read mode. 

    DWORD dwMode = PIPE_READMODE_MESSAGE;
    BOOL fSuccess = SetNamedPipeHandleState(
        m_pipe,   // pipe handle 
        &dwMode,  // new pipe mode 
        NULL,     // don't set maximum bytes 
        NULL);    // don't set maximum time 
    if (!fSuccess)
    {
        printf("SetNamedPipeHandleState failed. GLE=%d\n", GetLastError());
        return;
    }

    // Send a message to the pipe server. 
    std::string sendMessage = "Hello from client " + m_processPipeName;
    DWORD sendMessageLength = (DWORD)(sendMessage.length() + 1);
    DWORD bytesWritten = 0;
    fSuccess = WriteFile(
        m_pipe,              // pipe handle 
        sendMessage.c_str(), // message 
        sendMessageLength,   // message length 
        &bytesWritten,       // bytes written 
        NULL);               // not overlapped 

    if (!fSuccess)
    {
        printf("WriteFile to pipe failed. GLE=%d\n", GetLastError());
        return;
    }

    printf("\nMessage sent to server, receiving reply as follows:\n");

    do {
        // Read from the pipe. 
        char buffer[PIPE_BUFFER_SIZE + 1] = {};
        DWORD bytesRead = 0;
        fSuccess = ReadFile(
            m_pipe,           // pipe handle 
            buffer,           // buffer to receive reply 
            PIPE_BUFFER_SIZE, // size of buffer 
            &bytesRead,       // number of bytes read 
            NULL);            // not overlapped 

        if (!fSuccess && GetLastError() != ERROR_MORE_DATA)
            break;

        buffer[bytesRead] = 0;
        printf(buffer);
    } while (!fSuccess);  // repeat loop if ERROR_MORE_DATA 

    if (!fSuccess)
    {
        printf("ReadFile from pipe failed. GLE=%d\n", GetLastError());
        return;
    }
} // StartClient

void FireStarterProcess::StopClient(void)
{
    if (m_pipe != INVALID_HANDLE_VALUE) {
        CloseHandle(m_pipe);
        m_pipe = INVALID_HANDLE_VALUE;
    }
} // StopClient

FireStarterProcess::FireStarterProcess(const std::string& pipeName, const std::string& processPath)
{
    m_processPipeName = pipeName;
    m_processPath = processPath;
    m_client = m_processPath.length() == 0;
    DispatchAsync([this] {
        if (m_client)
            StartClient();
        else
            StartProcess();
    });
} // FireStarterProcess

FireStarterProcess::~FireStarterProcess(void)
{
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