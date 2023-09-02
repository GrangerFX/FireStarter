#pragma once
#include "FireStarterState.h"
#include "FireStarterBuildSettings.h"
#include "FireStarterWindow.h"
#include "FireStarterProcess.h"

class FireStarter : public SerialThread {
private:
    FireStarterBuildSettings m_buildSettings;
    FireStarterWindow m_window;
    FireStarterServer* m_server;

    void ControlUnits(const FireStarterState* evolveState = nullptr, bool optimizePass = false);
    void ControlTest(void);
    void ControlRandom(void);
    void ControlTEvolve(void);
    void ControlREvolve(void);
    void ControlEvolve(void);
    void ControlSolution(void);
    void ControlThread(void);

public:
    FireStarter(const FireStarterWindow &window);
    ~FireStarter(void);
}; // class FireStarter