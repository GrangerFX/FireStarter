#pragma once
#include <vector>
#include "FireStarterResults.h"
#include "FireStarterUnit.h"
#include "FireStarterProcess.h"
#include "SerialThread.h"
#include "HashRandom.h"

#include "FireStarter_Solution.h"
#include "FireStarterTarget.h"

class FireStarter : public SerialThread {
public:
    SimpleTimer m_runTimer;
    SimpleTimer m_controlTimer;
    std::string m_fireSettingsCode;
    std::string m_fireGenerateCode;
    std::string m_fireShowCode;
    CUDAContext* m_fireStarterContext;
    CUmodule m_fireSettingsModule;
    CUmodule m_fireGenerateModule;
    CUmodule m_fireShowModule;
    CUfunction m_fireSettingsFunction;
    CUfunction m_fireGenerateEvaluateFunction;
    CUfunction m_fireGenerateSolutionFunction;
    CUfunction m_fireShowFunction;
    FireStarterSettings* m_fireSettings;
    FireStarterResult* m_fireShowResult;
    FireStarterInstructions* m_fireShowInstructions;
    FireStarterGenerate* m_fireStarterGenerate;
    double m_controlTime;
    std::string m_solutionTargetCode;
    FireStarterState m_bestState;
    std::vector<FireStarterState> m_allStates;
    std::vector<FireStarterUnit*> m_units;
    FireStarterServer m_server;
    FrameBuffer m_buffer;
    char m_statusString[1024];
    FireStarterSettings m_settings;
    unsigned int m_fireStarterMode;
    unsigned int m_generation;
    unsigned int m_bestGeneration;
    float m_bestResult;
    void* m_window;
    unsigned int m_width;
    unsigned int m_height;
    bool m_controlUpdate;
    volatile bool m_bufferUpdate;
    volatile bool m_quitControlThread;

    bool LoadTargetCode(void);
    bool LoadFireShowCode(void);
    bool LoadFireSettingsCode(void);
    bool LoadFireGenerateCode(void);
    void SaveBestState(void);
    void SaveBestCode(void);
    void SaveSolution(void);
    void FireSettings(void);
    void FireShow(void);
    void RenderImage(unsigned int width, unsigned int height, const unsigned char* pixels);
    void RenderStatus(void);
    void ControlDeallocate(void);
    void ControlAllocate(void);
    void ControlLoop(void);
    void ControlThread(void);
    float DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation);
    bool Init(void* window, unsigned int width, unsigned int height);
    void Quit(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter