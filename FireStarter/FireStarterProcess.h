#pragma once
#include <windows.h>
#include "SerialThread.h"

#define FIREMAKER           "FireMaker"
#define FIRESTARTER         "FireStarter"

class FireStarterProcess : public SerialThread {
private:
    HANDLE m_inputRead = NULL;
    HANDLE m_inputWrite = NULL;
    HANDLE m_outputRead = NULL;
    HANDLE m_outputWrite = NULL;
    STARTUPINFO m_processStartupInfo = {};
    PROCESS_INFORMATION m_processInformation = {};
    std::string m_processName;
    std::string m_processPath;
    bool m_pipesCreated = false;
    bool m_processStarted = false;
public:
    const std::string& ModulePath(void) const;
    bool CreatePipes(void);
    bool StartProcess(void);
    bool WriteData(void* data, size_t size);
    FireStarterProcess(const std::string& name = FIREMAKER);
    ~FireStarterProcess(void);
}; // class FireStarterProcess
