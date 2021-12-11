#pragma once
#include <vector>
#include <cuda.h>
#include "FireStarterDefines.h"
#include "FireStarterUtil.h"

class FireStarter {
public:
    SimpleTimer m_timer;
    FrameBuffer m_buffer;
    FireStarterResults* m_results0;
    FireStarterResults* m_results1;
    std::vector<FireStarterState> m_states;
    FireStarterState m_curState;
    FireStarterState m_bestState;
    CUmodule m_module;
    std::string m_sourceCode;
    std::string m_updatedCode;
    std::string m_bestCode;
    unsigned long long m_generation;
    unsigned long long m_lastGeneration;
    unsigned long long m_bestGeneration;
    char m_statusString[1024];

    void EraseFrameBuffer(FrameBuffer &buffer);
    void CopyFrameBuffer(FrameBuffer &dstBuffer, FrameBuffer &srcBuffer);
    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    void RandomInstruction(unsigned int index, unsigned int &seed);
    void GetResults(FireStarterResults* results, FireStarterResult& bestResult);
    void InitResults(void);
    void FreeResults(void);
    void CompileProgram(const std::string& program);
    void RunProgram(unsigned int population, unsigned int generations, unsigned long long generation0, unsigned int variation, FireStarterResult& result);
    void DrawGraph(unsigned int variation);
    void LoadProgram(void);
    bool SaveProgram(void);
    void UpdateProgram(std::string& code, const std::string& replacementCode, std::string startString);
    void UpdateOperations(std::string& code);
    void UpdateData(std::string& code, const FireStarterResult& result, std::string startString);
    void DevolveProgram(void);
    void EvolveProgram(void);
    void InitProgram(void);
    void RenderImage(void* hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter