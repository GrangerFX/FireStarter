#pragma once
#include "FireStarterState.h"
#include "FireStarterBuildSettings.h"
#include "FireStarterWindow.h"

class FireStarter : public SerialThread {
private:
    FireStarterBuildSettings m_buildSettings;
    FireStarterSettings m_optimizeSettings;
    FireStarterWindow m_window;

    void ControlUnits(const FireStarterState* evolveState = nullptr);
    void ControlTest(void);
    void ControlRandom(void);
    void ControlEvolve(void);
    void ControlSolution(void);
    void ControlThread(void);

public:
    FireStarter(const FireStarterWindow &window);
    ~FireStarter(void);
}; // class FireStarter