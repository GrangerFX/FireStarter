#pragma once
#include <vector>
#include <cuda.h>
#include "FireStarterDefines.h"
#include "FireStarterUtil.h"

typedef enum {
    Operation_add,
    Operation_multiply,
#if PROGRAM_LOAD_STORE
    Operation_load,
    Operation_store,
#endif
    PROGRAM_OPCODES
} FireStarterOpcode;

#define PROGRAM_OPERATIONS (PROGRAM_OPCODES * PROGRAM_INSTRUCTIONS * PROGRAM_DATA)

typedef struct {
    unsigned int instructions[PROGRAM_OPERATIONS];
    unsigned long long generation;
} FireStarterProgram;

typedef struct {
    FireStarterProgram program;
    FireStarterResult result0;
    FireStarterResult result1;
    float maxResult;
    unsigned int devolve;
} FireStarterState;

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
    std::string m_fireStarterCode;
    std::string m_fireShowCode;
    std::string m_evaluateCode;
    std::string m_updatedCode;
    std::string m_bestShowCode;
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
    bool LoadCode(const std::string& filePath, std::string& code);
    void SaveCode(const std::string& filePath, const std::string& code);
    void ReplaceCode(std::string& code, const std::string& search, const std::string& replace);
    bool LoadProgram(void);
    void SaveProgram(void);
    bool EvaluateProgram(void);
    void UpdateProgram(std::string& code, const std::string& replacementCode, std::string startString);
    void UpdateData(std::string& code, const FireStarterResult& result, std::string startString);
    void DevolveProgram(void);
    void EvolveProgram(void);
    void RenderImage(void* hwnd);
    bool Init(unsigned long width, unsigned long height);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter