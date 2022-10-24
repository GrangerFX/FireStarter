#pragma once
#include <vector>
#include "FireStarterResults.h"
#include "FireStarterUnit.h"
#include "FireStarterProcess.h"
#include "SerialThread.h"
#include "HashRandom.h"

class FireStarter : public SerialThread {
public:
    SimpleTimer m_runTimer;
    SimpleTimer m_controlTimer;
    std::string m_fireSettingsCode;
    std::string m_fireShowCode;
    CUDAContext* m_CUDAContext;
    CUmodule m_fireSettingsModule;
    CUmodule m_fireShowModule;
    CUfunction m_fireSettingsFunction;
    CUfunction m_fireShowFunction;
    FireStarterResult* m_fireShowResult;
    FireStarterInstructions* m_fireShowInstructions;
    FireStarterGenerate* m_fireStarterGenerate;
    std::string m_solutionTargetCode;
    FireStarterState m_bestState;
    std::vector<FireStarterState> m_allStates;
    std::vector<FireStarterUnit*> m_units;
    FireStarterServer m_server;
    FrameBuffer m_buffer;
    FireStarterSettings m_settings;
    unsigned int m_fireStarterMode;
    float m_totalResult;
    float m_averageResult;
    void* m_window;
    unsigned int m_width;
    unsigned int m_height;
    volatile bool m_quitControlThread;

    bool LoadTargetCode(void);
    bool LoadFireShowCode(void);
    bool LoadFireSettingsCode(void);
    void SaveBestState(void);
    void SaveBestCode(void);
    void SaveSolution(unsigned int generation, double generationTime);
    void FireSettings(FireStarterSettings& settings, unsigned int firestarterMode = FIRESTARTER_MODE);
    void FireShow(void);
    void RenderStatus(const FireStarterState& state, double generationTimee, float result, float testError);
    void RenderImage(unsigned int width, unsigned int height, const unsigned char* pixels);
    void ClearUnits(void);
    void ControlDeallocate(void);
    void ControlAllocate(void);
    void ControlResults(const FireStarterState& state);
    void ControlTest(void);
    void ControlRandom(void);
    void ControlEvolve(void);
    void ControlUnits(void);
    void ControlThread(void);
    float DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation);
    bool Init(void* window, unsigned int width, unsigned int height);
    void Quit(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter