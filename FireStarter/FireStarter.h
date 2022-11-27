#pragma once
#include <vector>
#include "FireStarterResults.h"
#include "FireStarterUnit.h"
#include "FireStarterProcess.h"
#include "SerialOutput.h"
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
    FrameBuffer m_buffer;
    FireStarterSettings m_settings;
    SerialOutput m_output;
    void* m_window;
    size_t m_resultsCount;
    size_t m_resultsGeneration;
    double m_resultsTime;
    double m_smoothTime;
    double m_totalResult;
    unsigned int m_width;
    unsigned int m_height;
    volatile bool m_quitControlThread;

    bool LoadTargetCode(void);
    bool LoadFireShowCode(void);
    bool LoadFireSettingsCode(void);
    void SaveBestState(void);
    void SaveBestCode(void);
    void SaveSolution(unsigned int generation, double generationTime);
    void FireSettings(FireStarterSettings& settings, unsigned int firestarterMode);
    void FireShow(const FireStarterState& state);
    void RenderStatus(const FireStarterState& state, double generationTimee, double result, double average, double testError);
    void RenderImage(unsigned int width, unsigned int height, const unsigned char* pixels);
    void ControlDeallocate(void);
    void ControlAllocate(void);
    void ControlResults(const FireStarterState& state, FireStarterState& oldState);
    bool CompleteJob(FireStarterManager* manager, std::vector<FireStarterState>& allStates);
    void ControlTest(void);
    void ControlRandom(void);
    void ControlEvolve(void);
    void ControlUnits(void);
    void ControlOptimize(void);
    void ControlThread(void);
    float DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation);
    bool Init(void* window, unsigned int width, unsigned int height);
    void Quit(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter