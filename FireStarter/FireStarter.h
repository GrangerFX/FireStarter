#pragma once
#include "FireStarterState.h"
#include "FireStarterBuildSettings.h"

class FireStarter : public SerialThread {
private:
    FireStarterBuildSettings m_buildSettings;
    FireStarterSettings m_settings;
    void* m_window = nullptr;
    unsigned int m_width = 0;
    unsigned int m_height = 0;
    volatile bool m_quitControlThread = false;

    void ControlUnits(const FireStarterState* evolveState = nullptr);
    void ControlTest(void);
    void ControlRandom(void);
    void ControlEvolve(unsigned int test = 0);
    void ControlOptimize(unsigned int test = 0, const FireStarterState* evolveState = nullptr);
    void ControlSolution(void);
    void ControlThread(void);

public:
    FireStarter(void* window, unsigned int width, unsigned int height);
    ~FireStarter(void);
}; // class FireStarter