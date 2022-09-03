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
    size_t m_processIndex = 0;
    volatile bool* m_terminate = nullptr;
    bool m_started = false;
    bool m_connected = false;
    bool m_client = false;
public:
    size_t ProcessIndex(void);
    void Terminate(void);
    bool ShouldTerminate(void);
    bool WaitForData(void);
    bool SendData(const void* data, size_t size);
    bool ReceiveData(void* data, size_t size);
    bool SendTerminate(void);
    bool SendPacket(const FireStarterPacket& packet);
    bool SendCommand(const std::string &command);
    bool ReceivePacket(FireStarterPacket& packet, const std::string& command = std::string());
    bool SendString(const std::string& string);
    bool ReceiveString(std::string& string);
    bool StartProcess(void);
    void StopProcess(void);
    bool StartClient(void);
    void StopClient(void);
    bool IsClient(void);
    bool Start(void);
    void Stop(void);
    FireStarterProcess(const std::string& pipeName, const std::string& processPath, size_t index = 0);
    FireStarterProcess(const std::string& pipeName, volatile bool *terminate);
    ~FireStarterProcess(void);
}; // class FireStarterProcess

class FireStarterServer : public SerialThread {
private:
    std::vector<FireStarterProcess*> m_processes;
    std::string m_processServerName;
public:
    const std::string& ModulePath(void) const;
    FireStarterProcess* Process(size_t index);
    FireStarterProcess* AddProcess(const std::string& name = FIREMAKER);
    void ClearProcesses(void);
    FireStarterServer(const std::string& name = FIRESTARTER);
    ~FireStarterServer(void);
}; // class FireStarterServer
