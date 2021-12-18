#pragma once
#include <vector>
#include <mutex>
#include <thread>
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

class FireStarterUnit {
public:
    std::mutex m_mutex;
    std::thread m_thread;
    SimpleTimer m_timer;
    FrameBuffer m_buffer;
    char* m_deviceResults;
    char* m_hostResults;
    FireStarterResults* m_deviceResults0;
    FireStarterResults* m_deviceResults1;
    FireStarterResults* m_hostResults0;
    FireStarterResults* m_hostResults1;
    std::vector<FireStarterState> m_states;
    FireStarterState m_curState;
    FireStarterState m_bestState;
    CUdevice m_device;
    CUcontext m_fireStarterContext;
    CUcontext m_fireShowContext;
    CUstream m_fireStarterStream;
    CUstream m_fireShowStream;
    CUmodule m_fireStarterModule;
    CUmodule m_fireShowModule;
    std::string m_fireStarterCode;
    std::string m_fireShowCode;
    std::string m_evaluateCode;
    std::string m_bestEvaluateCode;
    size_t m_resultsSize;
    unsigned long long m_generation;
    unsigned long long m_lastGeneration;
    unsigned long long m_bestGeneration;
    double m_processingTime;
    unsigned int m_variation0;
    unsigned int m_variation1;
    volatile bool m_quitThread;
    volatile bool m_update;

    void EraseFrameBuffer(FrameBuffer &buffer);
    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    const unsigned char* GetFrameBuffer(FrameBuffer& buffer);
    void RandomInstruction(unsigned int index, unsigned int &seed);
    void GetResults(FireStarterResults* results, FireStarterResult& bestResult);
    void CopyResultsDeviceToHost(void);
    void InitResults(void);
    void FreeResults(void);
    void CompileProgram(const std::string& program, CUmodule& cuda_module);
    void RunProgram(unsigned int population, unsigned int generations, unsigned long long generation0, unsigned int variation, FireStarterResult& result);
    void DrawGraph(unsigned int variation);
    bool LoadCode(const std::string& filePath, std::string& code);
    void SaveCode(const std::string& filePath, const std::string& code);
    void ReplaceCode(std::string& code, const std::string& search, const std::string& replace);
    bool LoadProgram(void);
    void SaveProgram(const std::string& evaluateCode);
    void UpdateProgram(std::string& code, const std::string& replacementCode, std::string startString);
    void UpdateData(std::string& code, const FireStarterResult& result, std::string startString);
    void DevolveProgram(void);
    void EvolveProgram(void);
    void EvaluateProgram(void);
    void ProcessThread(void);
    void StopThread(void);
    void RenderImage(void* hwnd);
    bool Init(unsigned long width, unsigned long height);
    FireStarterUnit(void);
    ~FireStarterUnit(void);
}; // class FireStarterUnit

class FireStarter {
public:
    FireStarterUnit m_unit;
    char m_statusString[1024];

    void RenderImage(void* hwnd);
    const char* RenderStatus(void);
    bool Init(unsigned long width, unsigned long height);
    void Quit(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter