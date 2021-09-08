#pragma once
#include <vector>
#include <cuda.h>
#include "FireStarter2Defines.h"
#include "FireStarterUtil.h"

class FireStarter2 {
public:
    SimpleTimer timer;
    FrameBuffer theBuffer;
    FireStarter2Results* results0;
    FireStarter2Results* results1;
    FireStarter2Result curState;
    FireStarter2Result bestState;
    CUmodule module;
    long long generation;
    long long lastGeneration;
    long long bestGeneration;
    char statusString[1024];

    void EraseFrameBuffer(FrameBuffer &buffer);
    void CopyFrameBuffer(FrameBuffer &dstBuffer, FrameBuffer &srcBuffer);
    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    bool GetResults(FireStarter2Results* results);
    void InitResults(void);
    void FreeResults(void);
    void CompileProgram(const char *source);
    void RunProgram(unsigned int population);
    void DrawGraph(void);
    void InitProgram(void);
    void LoadProgram(std::string &code);
    void RenderImage(void* hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter2(void);
    ~FireStarter2(void);
}; // class FireStarter2