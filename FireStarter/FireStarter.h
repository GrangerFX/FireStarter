#pragma once
#include "FireStarterUtil.h"
#include "FireStarterDefines.h"
#include <cuda.h>

class FireStarter {
public:
    SimpleTimer timer;
    FrameBuffer theBuffer;
    FireStarterResults *results;
    FireStarterStates states;
    FireStarterState *curState;
    FireStarterState *bestState;
    CUmodule module;
    long long generation;
    long long lastGeneration;
    long long bestGeneration;
    char statusString[1024];

    void EraseFrameBuffer(FrameBuffer &buffer);
    void CopyFrameBuffer(FrameBuffer &dstBuffer, FrameBuffer &srcBuffer);
    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    bool GetResults(void);
    void InitResults(void);
    void FreeResults(void);
    void CompileProgram(const char *source);
    void RunProgram(unsigned int population, unsigned int maxResults);
    void DrawGraph(void);
    void InitProgram(void);
    void RandomProgram(void);
    void MakeProgram(std::string &code);
    void RenderImage(void* hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter