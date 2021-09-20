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
    std::vector<FireStarter2State> states;
    FireStarter2State curState;
    FireStarter2State bestState;
    CUmodule module;
    std::string sourceCode;
    std::string updatedCode;
    std::string bestCode;
    unsigned long long generation;
    unsigned long long lastGeneration;
    char statusString[1024];

    void EraseFrameBuffer(FrameBuffer &buffer);
    void CopyFrameBuffer(FrameBuffer &dstBuffer, FrameBuffer &srcBuffer);
    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    bool GetResults(FireStarter2Results* results);
    void InitResults(void);
    void FreeResults(void);
    void CompileProgram(const std::string& program);
    bool RunProgram(unsigned int population, unsigned int generations);
    void DrawGraph(void);
    void LoadProgram(void);
    void SaveProgram(void);
    void InitProgram(void);
    void UpdateProgram(const std::string& replacementCode);
    void EvolveProgram(void);
    void RenderImage(void* hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter2(void);
    ~FireStarter2(void);
}; // class FireStarter2