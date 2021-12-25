#pragma once
#include <vector>
#include "FireStarterDefines.h"
#include "FireStarterUtil.h"
#include "SerialThread.h"

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

class FireStarterProgram {
public:
    unsigned int m_instructions[PROGRAM_OPERATIONS];
    unsigned long long m_generation;

    void RandomInstruction(unsigned int index, unsigned int& seed);
    void RandomProgram(unsigned int seed);
    FireStarterProgram(void);
}; // class FireStarterProgram

class FireStarterState {
public:
    FireStarterProgram m_program;
    FireStarterResult m_result0;
    FireStarterResult m_result1;
    double m_processingTime;
    float  m_maxResult;
    int m_unitIndex;
    unsigned int m_devolve;

    void Init(void);
    FireStarterState(int unitIndex = -1);
}; /// class FireStarterState;

class FireStarterUnit : public SerialThread {
public:
    std::mutex m_mutex;
    SimpleTimer m_timer;
    char* m_deviceResults;
    char* m_hostResults;
    FireStarterResults* m_deviceResults0;
    FireStarterResults* m_deviceResults1;
    FireStarterResults* m_hostResults0;
    FireStarterResults* m_hostResults1;
    std::vector<FireStarterState> m_states;
    FireStarterState m_curState;
    FireStarterState m_bestEvaluateState;
    CUdevice m_device;
    CUcontext m_fireStarterContext;
    CUstream m_fireStarterStream;
    CUmodule m_fireStarterModule;
    std::string m_fireStarterCode;
    std::string m_evaluateCode;
    std::string m_bestEvaluateCode;
    size_t m_resultsSize;
    unsigned long long m_generation;
    unsigned long long m_lastGeneration;
    unsigned long long m_bestGeneration;
    unsigned int m_unitIndex;
    volatile bool m_update;

    void GetResults(FireStarterResults* results, FireStarterResult& bestResult);
    void CopyResultsDeviceToHost(void);
    void InitResults(void);
    void FreeResults(void);
    void RunProgram(unsigned int variation, FireStarterResult& result);
    void DevolveProgram(void);
    void EvolveProgram(void);
    void EvaluateProgram(void);
    void ExecuteProgram(void);
    bool UpdateProgram(std::string& bestEvaluateCode, FireStarterState& bestState);
    void InitProgram(void);
    void FinishProgram(void);
    FireStarterUnit(unsigned int unitIndex, CUdevice device, const std::string& fireStarterCode);
    ~FireStarterUnit(void);
}; // class FireStarterUnit

class FireStarter {
public:
    std::mutex m_controlMutex;
    std::thread m_controlThread;
    CUdevice m_device;
    CUcontext m_fireShowContext;
    CUstream m_fireShowStream;
    CUmodule m_fireShowModule;
    std::string m_fireStarterCode;
    std::string m_fireShowCode;
    std::string m_bestFireStarterCode;
    std::string m_bestFireShowCode;
    std::string m_bestEvaluateCode;
    FireStarterState m_bestEvaluateState;
    std::vector<FireStarterUnit*> m_units;
    FrameBuffer m_buffer;
    char m_statusString[1024];
    unsigned long long m_bestGeneration;
    size_t m_bestStates;
    float m_bestResult;
    volatile bool m_quitControlThread;

    void EraseFrameBuffer(FrameBuffer& buffer);
    void InitFrameBuffer(FrameBuffer& buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer& buffer);
    const unsigned char* GetFrameBuffer(FrameBuffer& buffer);
    static bool LoadCode(const std::string& filePath, std::string& code);
    static void SaveCode(const std::string& filePath, const std::string& code);
    static void ReplaceCode(std::string& code, const std::string& search, const std::string& replace);
    static void UpdateProgram(std::string& code, const std::string& replacementCode, std::string startString);
    static void UpdateData(std::string& code, const FireStarterResult& result, std::string startString);
    static void CompileProgram(const std::string& program, CUmodule& cuda_module);
    bool LoadFireStarterCode(void);
    void SaveFireStarterCode(void);
    bool LoadFireShowCode(void);
    void SaveFireShowCode(void);
    void DrawGraph(unsigned int variation);
    void RenderImage(void* hwnd);
    const char* RenderStatus(void);
    void ControlThread(void);
    bool Init(unsigned long width, unsigned long height);
    void Quit(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter