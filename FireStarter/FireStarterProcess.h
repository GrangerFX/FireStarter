#pragma once
#include <windows.h>
#include "SerialThread.h"

#define FIREMAKER           "FireMaker"
#define FIRESTARTER         "FireStarter"

class FireStarterProcess : public SerialThread {
private:
    class FireStarterServer* m_server = nullptr;
    HANDLE m_pipe = INVALID_HANDLE_VALUE;
    STARTUPINFO m_processStartupInfo = {};
    PROCESS_INFORMATION m_processInformation = {};
    std::string m_processName;
    std::string m_processPath;
    std::string m_processPipeName;
    size_t m_processIndex = 0;
    bool m_connected = false;
public:
    const std::string& ModulePath(void) const;
    bool WriteData(void* data, size_t size);
    bool StartProcess(void);
    FireStarterProcess(class FireStarterServer *server, size_t index, const std::string& name = FIREMAKER);
    ~FireStarterProcess(void);
}; // class FireStarterProcess

class FireStarterServer : public SerialThread {
private:
    std::vector<FireStarterProcess*> m_processes;
    std::string m_processServerName;
public:
    FireStarterProcess* AddProcess(const std::string& name = FIREMAKER);
    FireStarterServer(const std::string& name = FIRESTARTER);
    ~FireStarterServer(void);
}; // class FireStarterServer
