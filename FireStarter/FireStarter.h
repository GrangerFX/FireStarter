#pragma once
#include <vector>
#include "FireStarterDefines.h"
#include "FireStarterUtil.h"
#include "SerialThread.h"
#include "HashRandom.h"

#define PROGRAM_INSTRUCTIONS PROGRAM_DATA * 2

typedef enum {
    Program_accumulate,
    Program_accumulate_load,
    Program_accumulate_store,
    Program_accumulate_load_store,
    Program_multiply_add,
    Program_multiply_add_store
} FireStarterProgramMode;

#define PROGRAM_MODE Program_accumulate
#define PROGRAM_RANDOM_INSTRUCTIONS 0
#define PROGRAM_RANDOM_DATA 1

typedef enum {
    Operation_multiply_add_store,
    Operation_multiply_add,
    Operation_multiply,
    Operation_add,
    Operation_load,
    Operation_store,
} FireStarterOpcode;

union FireStarterInstruction {
    unsigned int opcode;
    struct {
        FireStarterOpcode operation : 4;
        unsigned dataA : 7;
        unsigned dataB : 7;
        unsigned dataC : 7;
        unsigned dataD : 7;
    } opdata;

    inline FireStarterOpcode Operation(void)
    {
        return opdata.operation;
    } // Operation

    inline unsigned char DataA(void)
    {
        return opdata.dataA;
    } // DataA

    inline unsigned char DataB(void)
    {
        return opdata.dataB;
    } // DataB

    inline unsigned char DataC(void)
    {
        return opdata.dataC;
    } // DataC

    inline unsigned char DataD(void)
    {
        return opdata.dataD;
    } // DataD

    inline FireStarterInstruction(FireStarterOpcode operation, unsigned char dataA, unsigned char dataB = 0, unsigned char dataC = 0, unsigned char dataD = 0)
    {
        opdata.operation = operation;
        opdata.dataA = dataA;
        opdata.dataB = dataB;
        opdata.dataC = dataC;
        opdata.dataD = dataD;
    } // FireStarterInstruction

    inline FireStarterInstruction(unsigned int code = 0) : opcode(code)
    {
    } // FireStarterInstruction
}; // union FireStarterInstruction

class FireStarterProgram {
private:
    std::vector<FireStarterOpcode> m_opcodes;
public:
    std::vector<FireStarterInstruction> m_instructions;
    FireStarterProgramMode m_programMode;

    void RandomInstruction(unsigned int index, unsigned int& seed);
    void EvolveInstruction(unsigned int index, unsigned int& seed);
    void InitProgram(unsigned int& seed);
    void GenerateProgram(std::string& code);
    FireStarterProgram(void);
}; // class FireStarterProgram

class FireStarterState {
public:
    FireStarterProgram m_program;
    FireStarterResult m_result0;
    FireStarterResult m_result1;
    double m_processingTime;
    float m_maxResult;

    FireStarterState(void);
}; /// class FireStarterState;

class FireStarterUnit : public SerialThread {
public:
    SimpleTimer m_timer;
    char* m_deviceResults;
    char* m_hostResults;
    FireStarterResults* m_deviceResults0;
    FireStarterResults* m_deviceResults1;
    FireStarterResults* m_hostResults0;
    FireStarterResults* m_hostResults1;
    FireStarterState m_curState;
    FireStarterState m_bestState;
    CUdevice m_device;
    CUcontext m_fireStarterContext;
    CUstream m_fireStarterStream;
    CUmodule m_fireStarterModule;
    std::string m_fireStarterCode;
    std::string m_evaluateCode;
    std::string m_bestEvaluateCode;
    size_t m_resultsSize;
    unsigned long long m_programGeneration;
    unsigned long long m_unitGeneration;
    unsigned int m_unitIndex;
    unsigned int m_seed;
    volatile bool m_quit;

    void GetResults(FireStarterResults* results, FireStarterResult& bestResult);
    void CopyResultsDeviceToHost(void);
    void InitResults(void);
    void FreeResults(void);
    void RunProgram(unsigned int variation, FireStarterResult& result);
    void GenerateProgram(void);
    void EvolveProgram(void);
    void RandomProgram(void);
    void EvaluateProgram(void);
    void ExecuteProgram(void);
    float UpdateProgram(std::string* &bestEvaluateCode, FireStarterState* &bestState, unsigned long long* &generation);
    void InitProgram(void);
    void FinishProgram(void);
    FireStarterUnit(unsigned int unitIndex, CUdevice device, const std::string& fireStarterCode);
    ~FireStarterUnit(void);
}; // class FireStarterUnit

class FireStarter : public SerialThread {
public:
    SimpleTimer m_controlTimer;
    double m_controlTime;
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
    unsigned long long m_generation;
    unsigned long long m_bestGeneration;
    float m_bestResult;
    float m_worstResult;
    void* m_window;
    unsigned int m_seed;
    unsigned long m_width;
    unsigned long m_height;
    bool m_controlUpdate;
    volatile bool m_bufferUpdate;
    volatile bool m_quitControlThread;

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
    void RenderImage(void);
    void RenderStatus(void);
    void ControlThread(void);
    bool Init(void* window, unsigned long width, unsigned long height);
    void Quit(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter