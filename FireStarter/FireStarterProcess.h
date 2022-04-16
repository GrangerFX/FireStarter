#pragma once
#include <windows.h>
#include "SerialThread.h"

#define FIREMAKER           "FireMaker"
#define FIRESTARTER         "FireStarter"

class FireStarterProcess : public SerialThread {
private:
    HANDLE m_pipe = INVALID_HANDLE_VALUE;
    STARTUPINFO m_processStartupInfo = {};
    PROCESS_INFORMATION m_processInformation = {};
    std::string m_processPath;
    std::string m_processPipeName;
    bool m_started = false;
    bool m_connected = false;
    bool m_client = false;
public:
    void WriteData(void* data, size_t size);
    void StartProcess(void);
    void StopProcess(void);
    void StartClient(void);
    void StopClient(void);
    FireStarterProcess(const std::string& pipeName, const std::string& processPath = "");
    ~FireStarterProcess(void);
}; // class FireStarterProcess

class FireStarterServer : public SerialThread {
private:
    std::vector<FireStarterProcess*> m_processes;
    std::string m_processServerName;
public:
    const std::string& ModulePath(void) const;
    FireStarterProcess* AddProcess(const std::string& name = FIREMAKER);
    FireStarterServer(const std::string& name = FIRESTARTER);
    ~FireStarterServer(void);
}; // class FireStarterServer
