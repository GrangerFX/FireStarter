#include "FireStarterProcess.h"
#include "PrintF.h"

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

bool FireStarterProcess::CreatePipes(void)
{
    if (!m_pipesCreated) {
        // Set the bInheritHandle flag so pipe handles are inherited. 
        SECURITY_ATTRIBUTES securityAttributes;
        securityAttributes.nLength = sizeof(SECURITY_ATTRIBUTES);
        securityAttributes.bInheritHandle = TRUE;
        securityAttributes.lpSecurityDescriptor = NULL;

        // Create a pipe for the child process's STDOUT. 
        if (!CreatePipe(&m_outputRead, &m_outputWrite, &securityAttributes, 0))
            return false;

        // Ensure the read handle to the pipe for STDOUT is not inherited.
        if (!SetHandleInformation(m_outputRead, HANDLE_FLAG_INHERIT, 0))
            return false;

        // Create a pipe for the child process's STDIN. 
        if (!CreatePipe(&m_inputRead, &m_inputWrite, &securityAttributes, 0))
            return false;

        // Ensure the write handle to the pipe for STDIN is not inherited. 
        if (!SetHandleInformation(m_inputWrite, HANDLE_FLAG_INHERIT, 0))
            return false;
    }
    m_pipesCreated = true;
    return true;
} // CreatePipes

bool FireStarterProcess::StartProcess(void)
{
    if (!m_pipesCreated)
        return false;

    m_processStartupInfo.cb = sizeof(STARTUPINFO);
    //  m_processStartupInfo.hStdError = m_outputWrite;
    m_processStartupInfo.hStdOutput = m_outputWrite;
    m_processStartupInfo.hStdInput = m_inputRead;
    m_processStartupInfo.dwFlags |= STARTF_USESTDHANDLES;
    m_processStartupInfo.dwFlags |= STARTF_USESHOWWINDOW;
    m_processStartupInfo.wShowWindow = SW_SHOWMINIMIZED;
    //  m_processStartupInfo.wShowWindow = SW_HIDE;

    return CreateProcess(
        m_processPath.c_str(),  // module name
        NULL,                   // Command line
        NULL,                   // Process handle not inheritable
        NULL,                   // Thread handle not inheritable
        FALSE,                  // Set handle inheritance to FALSE
        0,                      // No creation flags
        NULL,                   // Use parent's environment block
        NULL,                   // Use parent's starting directory
        &m_processStartupInfo,  // Pointer to STARTUPINFO structure
        &m_processInformation); // Pointer to PROCESS_INFORMATION structure
} // StartProcess

bool FireStarterProcess::WriteData(void* data, size_t size)
{
    // Note: Maximum size is 32 bits (4GB).
    // TODO: Break up larger data blocks into smaller chunks if needed.
    DWORD dataWritten = 0;
    bool result = WriteFile(m_inputWrite, &size, (DWORD)sizeof(size_t), &dataWritten, NULL) && (dataWritten == (DWORD)sizeof(size_t));
    result = result && WriteFile(m_inputWrite, data, (DWORD)size, &dataWritten, NULL) && (dataWritten == (DWORD)size);
    return result;
} // WriteData

FireStarterProcess::FireStarterProcess(const std::string& name)
{
    m_processName = name;
    m_processPath = ModulePath() + m_processName + ".exe";
    CreatePipes();
} // FireStarterProcess

FireStarterProcess::~FireStarterProcess(void)
{
    unsigned int result = WaitForSingleObject(m_processInformation.hProcess, INFINITE);

    // Close handles to the child process and its primary thread.
    bool closeHandleResult1 = CloseHandle(m_processInformation.hProcess);
    bool closeHandleResult2 = CloseHandle(m_processInformation.hThread);

    // Close handles to the stdin and stdout pipes no longer needed by the child process.
    // If they are not explicitly closed, there is no way to recognize that the child process has ended.(?)
    CloseHandle(m_outputRead);
    CloseHandle(m_outputWrite);
    CloseHandle(m_inputRead);
    CloseHandle(m_inputWrite);
} // ~FireStarterProcess