#pragma once
#include "FireStarterState.h"
#include "FireStarterBuildSettings.h"

class FireStarter : public SerialThread {
private:
    FireStarterBuildSettings m_buildSettings;
    void* m_window = nullptr;
    unsigned int m_width = 0;
    unsigned int m_height = 0;

    void ControlUnits(const FireStarterState* evolveState = nullptr);
    void ControlTest(void);
    void ControlRandom(void);
    void ControlEvolve(void);
    void ControlOptimize(const FireStarterState* evolveState = nullptr, unsigned int evolveTest = 0);
    void ControlSolution(void);
    void ControlThread(void);

public:
    FireStarter(void* window, unsigned int width, unsigned int height);
    ~FireStarter(void);
}; // class FireStarter