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
    void ControlEvolveCPU(const FireStarterSettings& evolveSettings);
    void ControlEvolveGPU(const FireStarterSettings& evolveSettings);
    void ControlOptimize(const FireStarterSettings& optimizeSettings);
    void ControlSolution(void);
    void ControlThread(void);

public:
    FireStarter(const FireStarterWindow &window);
    ~FireStarter(void);
}; // class FireStarter