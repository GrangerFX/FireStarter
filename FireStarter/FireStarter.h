#pragma once
#include <vector>
#include "FireStarterResults.h"
#include "FireStarterOrder.h"
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
    double m_controlTime;
    CUdevice m_device;
    CUcontext m_fireShowContext;
    CUstream m_fireShowStream;
    CUmodule m_fireShowModule;
    CUfunction m_fireShowFunction;
    std::string m_solutionTargetCode;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    std::string m_fireShowCode;
    std::string m_bestCode;
    FireStarterState m_bestEvaluateState;
    std::vector<FireStarterUnit*> m_units;
    FireStarterServer m_server;
    FrameBuffer m_buffer;
    char m_statusString[1024];
    unsigned int m_evolveMode;
    unsigned int m_generation;
    unsigned int m_bestGeneration;
    float m_bestResult;
    float m_worstResult;
    void* m_window;
    unsigned int m_seed;
    unsigned int m_width;
    unsigned int m_height;
    bool m_controlUpdate;
    volatile bool m_bufferUpdate;
    volatile bool m_quitControlThread;

    void BuildData(std::string& code);
    bool LoadTargetCode(void);
    bool LoadFireStarterCode(void);
    bool LoadFireShowCode(void);
    void SaveBestState(void);
    void SaveBestCode(void);
    void SaveSolution(void);
    void FireShow(void);
    void RenderImage(unsigned int width, unsigned int height, const unsigned char* pixels);
    void RenderStatus(void);
    void ControlThread(void);
    float DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation);
    bool Init(void* window, unsigned int width, unsigned int height);
    void Quit(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter