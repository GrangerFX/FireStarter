#pragma once
#include "SerialThread.h"
#include "FireStarterPacket.h"
#include <windows.h>

#define FIREMAKER           "FireMaker"
#define FIRESTARTER         "FireStarter"

class FireStarterProcess : public SerialThread {
private:
    HANDLE m_pipe = INVALID_HANDLE_VALUE;
    std::string m_pipeName;
    STARTUPINFO m_processStartupInfo = {};
    PROCESS_INFORMATION m_processInformation = {};
    std::string m_processPath;
    volatile bool* m_terminate = nullptr;
    bool m_started = false;
    bool m_connected = false;
    bool m_client = false;
public:
    void Terminate(void);
    bool WaitForData(void);
    bool SendData(const void* data, size_t size);
    bool ReceiveData(void* data, size_t size);
    bool SendTerminate(void);
    bool SendPacket(const FireStarterPacket& packet);
    bool ReceivePacket(FireStarterPacket& packet);
    bool SendString(const std::string& string);
    bool ReceiveString(std::string& string);
    bool StartProcess(void);
    void StopProcess(void);
    bool StartClient(void);
    void StopClient(void);
    FireStarterProcess(const std::string& pipeName, const std::string& processPath);
    FireStarterProcess(const std::string& pipeName, volatile bool *terminate);
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
