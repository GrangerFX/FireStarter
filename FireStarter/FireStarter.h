#pragma once
#include "FireStarterState.h"
#include "FireStarterBuildSettings.h"
#include "FireStarterWindow.h"
#include "FireStarterProcess.h"

class FireStarter : public SerialThread {
private:
    FireStarterBuildSettings m_buildSettings;
    FireStarterWindow m_window;
    FireStarterServer* m_server = nullptr;

    void ControlSolution(void);
    void ControlRandom(const FireStarterSettings& randomSettings);
    void ControlStreams(const FireStarterSettings& evolveSettings);
    void ControlThread(void);

public:
    FireStarter(const FireStarterWindow &window);
    ~FireStarter(void);
}; // class FireStarter