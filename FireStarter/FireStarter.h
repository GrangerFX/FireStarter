#pragma once
#include "FireStarterState.h"
#include "FireStarterBuildSettings.h"
#include "FireStarterWindow.h"

class FireStarter : public SerialThread {
private:
    FireStarterBuildSettings m_buildSettings;
    FireStarterWindow m_window;

    void ControlUnits(const FireStarterState* evolveState = nullptr, bool optimizePass = false);
    void ControlTest(void);
    void ControlRandom(void);
    void ControlRevolve(void);
    void ControlEvolve(void);
    void ControlSolution(void);
    void ControlThread(void);

public:
    FireStarter(const FireStarterWindow &window);
    ~FireStarter(void);
}; // class FireStarter