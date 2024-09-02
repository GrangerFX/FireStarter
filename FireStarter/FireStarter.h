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

    void ControlRandom(const FireStarterSettings& randomSettings);
    void ControlEvolve(const FireStarterSettings& evolveSettings);
    void ControlSolution(void);
    void ControlThread(void);

public:
    FireStarter(const FireStarterWindow &window);
    ~FireStarter(void);
}; // class FireStarter