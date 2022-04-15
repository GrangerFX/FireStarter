#include "FireStarterProcess.h"
#include "PrintF.h"

#define SERVER_PIPE_BUFFER_SIZE   512

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

const std::string& FireStarterProcess::ModulePath(void) const
{
    return GetModulePath();
} // ModulePath

bool FireStarterProcess::WriteData(void* data, size_t size)
{
    // Note: Maximum size is 32 bits (4GB).
    // TODO: Break up larger data blocks into smaller chunks if needed.
    DWORD dataWritten = 0;
    bool result = WriteFile(m_pipe, &size, (DWORD)sizeof(size_t), &dataWritten, NULL) && (dataWritten == (DWORD)sizeof(size_t));
    result = result && WriteFile(m_pipe, data, (DWORD)size, &dataWritten, NULL) && (dataWritten == (DWORD)size);
    return result;
} // WriteData

bool FireStarterProcess::StartProcess(void)
{
    if (m_pipe != INVALID_HANDLE_VALUE)
        return false;

    m_processStartupInfo.cb = sizeof(STARTUPINFO);
    //  m_processStartupInfo.hStdError = m_outputWrite;
    m_processStartupInfo.hStdOutput = m_pipe;
    m_processStartupInfo.hStdInput = m_pipe;
    m_processStartupInfo.dwFlags |= STARTF_USESTDHANDLES;
    m_processStartupInfo.dwFlags |= STARTF_USESHOWWINDOW;
    m_processStartupInfo.wShowWindow = SW_SHOWMINIMIZED;
    //  m_processStartupInfo.wShowWindow = SW_HIDE;

    if (CreateProcess(
        m_processPath.c_str(),  // module name
        NULL,                   // Command line
        NULL,                   // Process handle not inheritable
        NULL,                   // Thread handle not inheritable
        FALSE,                  // Set handle inheritance to FALSE
        0,                      // No creation flags
        NULL,                   // Use parent's environment block
        NULL,                   // Use parent's starting directory
        &m_processStartupInfo,  // Pointer to STARTUPINFO structure
        &m_processInformation)) { // Pointer to PROCESS_INFORMATION structure

        m_pipe = CreateNamedPipeA(
            m_processPipeName.c_str(), // pipe name 
            PIPE_ACCESS_DUPLEX,       // read/write access 
            PIPE_TYPE_MESSAGE |       // message type pipe 
            PIPE_READMODE_MESSAGE |   // message-read mode 
            PIPE_WAIT,                // blocking mode (required)
            PIPE_UNLIMITED_INSTANCES, // max. instances  
            SERVER_PIPE_BUFFER_SIZE,  // output buffer size (defined above)
            SERVER_PIPE_BUFFER_SIZE,  // input buffer size (defined above)
            0,                        // client time-out (0 = default: 50ms)
            NULL);                    // default security attribute 

        if (m_pipe != INVALID_HANDLE_VALUE)
            m_connected = ConnectNamedPipe(m_pipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);
    }
    return m_connected;
} // StartProcess

FireStarterProcess::FireStarterProcess(FireStarterServer* server, size_t index, const std::string& name)
{
    m_server = server;
    m_processIndex = index;
    m_processName = name;
    m_processPath = ModulePath() + m_processName + ".exe";
    m_processPipeName = "\\\\.\\pipe\\" + name + std::to_string(index);
    m_connected = false;
    StartProcess();
} // FireStarterProcess

FireStarterProcess::~FireStarterProcess(void)
{
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
} // ~FireStarterProcess

FireStarterProcess* FireStarterServer::AddProcess(const std::string& name)
{
    FireStarterProcess* process = new FireStarterProcess(this, m_processes.size() + 1, name);
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