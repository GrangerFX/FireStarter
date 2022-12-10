#pragma once
#include <vector>
#include "FireStarterResults.h"
#include "FireStarterUnit.h"
#include "FireStarterProcess.h"
#include "FireStarterComplete.h"
#include "HashRandom.h"
#include "SerialOutput.h"

class FireStarter : public SerialThread {
public:
    SimpleTimer m_controlTimer;
    std::string m_fireSettingsCode;
    CUDAContext* m_CUDAContext;
    CUmodule m_fireSettingsModule;
    CUfunction m_fireSettingsFunction;
    FireStarterState m_bestState;
    FireStarterSettings m_settings;
    FireStarterComplete* m_complete;
    void* m_window = nullptr;
    unsigned int m_width = 0;
    unsigned int m_height = 0;
    volatile bool m_quitControlThread = false;

    bool LoadFireSettingsCode(void);
    void FireSettings(FireStarterSettings& settings, unsigned int firestarterMode);
    void ControlDeallocate(void);
    void ControlAllocate(void);
    void ControlUnits(void);
    void ControlTest(void);
    void ControlRandom(void);
    void ControlEvolve(void);
    void ControlOptimize(void);
    void ControlSolution(void);
    void ControlThread(void);
    bool Init(void* window, unsigned int width, unsigned int height);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter