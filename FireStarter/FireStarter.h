#pragma once
#include <vector>
#include <cuda.h>
#include "FireStarterDefines.h"
#include "FireStarterUtil.h"

class FireStarter {
public:
    SimpleTimer timer;
    FrameBuffer theBuffer;
    FireStarterResults* results0;
    FireStarterResults* results1;
    std::vector<FireStarterState> states;
    FireStarterState curState;
    FireStarterState bestState;
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
    void GetResults(FireStarterResults* results, FireStarterResult& bestResult);
    bool SaveResults(FireStarterResult& result0, FireStarterResult& result1);
    void InitResults(void);
    void FreeResults(void);
    void CompileProgram(const std::string& program);
    void RunProgram(unsigned int population, unsigned int generations, unsigned int variation, FireStarterResult& result);
    void DrawGraph(unsigned int variation);
    void LoadProgram(void);
    void SaveProgram(void);
    void InitProgram(void);
    void UpdateProgram(const std::string& replacementCode);
    void EvolveProgram(void);
    void RenderImage(void* hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter