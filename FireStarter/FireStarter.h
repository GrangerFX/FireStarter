#pragma once
#include <vector>
#include "FireStarterDefines.h"
#include "FireStarterUtil.h"
#include "SerialThread.h"
#include "HashRandom.h"

#define FIRESTARTER_EVOLVE   0
#define FIRESTARTER_OPTIMIZE 1
#define FIRESTARTER_SOLUTION 2
#define FIRESTARTER_MODE     FIRESTARTER_EVOLVE

#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
#include "FireStarter_Solution.h"
#else
#include "FireStarterTarget.h"
#endif

//#define PROGRAM_POPULATION 4352
#define PROGRAM_POPULATION 4352
#define PROGRAM_PRECISION 1024

#define PROGRAM_UNITS 1
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
#define PROGRAM_SPECIES 1
#define PROGRAM_GENERATIONS 50  // Must be even!
#else
#define PROGRAM_SPECIES 1
#define PROGRAM_GENERATIONS 100 // Must be even!
#endif

#define PROGRAM_ITERATIONS 512
#define TARGET_VARIATIONS 4
#define FUNCTION_POINTERS 0

#define PROGRAM_CODE    "// PROGRAM //"
#define EVALUATE_CODE   "// EVALUATE //"
#define DATA_CODE       "// DATA //"
#define END_CODE        "// END //"

typedef enum {
    Program_multiply_add,
    Program_multiply_add_abs,
} FireStarterProgramMode;

#if 1
#define PROGRAM_MODE Program_multiply_add_abs
#define PROGRAM_RANDOM_INSTRUCTIONS 1
#else
#define PROGRAM_MODE Program_multiply_add
#define PROGRAM_RANDOM_INSTRUCTIONS 0
#endif

struct FireStarterRegister {
    unsigned int dataIndex;
    unsigned int registerIndex;
    unsigned int instructionFirst;
    unsigned int instructionLast;
}; // struct FireStarterRegister

class FireStarterProgram {
public:
    FireStarterInstructions m_instructions;
    std::vector<FireStarterOpcode> m_opcodes;
    std::vector<FireStarterRegister> m_registers;
    FireStarterProgramMode m_programMode;
    unsigned int m_dataSize;
    unsigned int m_maxRegisters;

    void RandomInstruction(unsigned int index, unsigned int& seed);
    void OptimizeData(void);
    void InitProgram(unsigned int& seed);
    static void GenerateProgram(std::string& code);
    void GenerateEvaluate(std::string& code, bool optimize = true);
    void GenerateSolution(std::string& code, FireStarterData& data, bool optimize = true);
    void SaveProgram(std::string& code, unsigned int species = 0xFFFFFFFF);
    float EmulateProgram(FireStarterData& data, float n);
    FireStarterProgram(void);
}; // class FireStarterProgram

class FireStarterSpecies {
public:
    FireStarterProgram m_program;
    FireStarterResult m_result[TARGET_VARIATIONS];

    void SaveSolution(std::string& code);
    FireStarterSpecies(void);
}; // class FireStarterSpecies

class FireStarterState {
public:
    FireStarterSpecies m_species[PROGRAM_SPECIES];
    unsigned int m_order[TARGET_VARIATIONS];
    double m_processingTime;
    float m_maxResult;
    unsigned int m_bestSpecies;

    void SaveState(std::string& code);
    void SaveSolution(std::string& code);
    void SortResults(void);
    FireStarterState(void);
}; // class FireStarterState;

class FireStarterUnit : public SerialThread {
public:
    SimpleTimer m_timer;
    char* m_deviceResults;
    char* m_hostResults;
    FireStarterResults* m_deviceResults0[PROGRAM_SPECIES];
    FireStarterResults* m_deviceResults1[PROGRAM_SPECIES];
    FireStarterResults* m_hostResults0[PROGRAM_SPECIES];
    FireStarterResults* m_hostResults1[PROGRAM_SPECIES];
    FireStarterState m_curState;
    FireStarterState m_bestState;
    CUdevice m_device;
    CUcontext m_fireStarterContext;
    CUstream m_fireStarterStream;
    CUmodule m_fireStarterModule;
    CUfunction m_fireStarterFunction;
    std::string m_fireStarterCode;
    std::string m_programCode;
    std::string m_evaluateCode;
    std::string m_bestProgramCode;
    std::string m_bestEvaluateCode;
    size_t m_resultsSize;
    unsigned long long m_programGeneration;
    unsigned long long m_unitGeneration;
    unsigned int m_unitIndex;
    unsigned int m_seed;
    volatile bool m_quit;

    void GenerateProgram(unsigned int species);
    void EvolveProgram(void);
    void RandomProgram(void);
    void InitResults(void);
    void FreeResults(void);
    void GetResults(unsigned int variation);
    void RunGenerations(unsigned int population, unsigned int iterations, unsigned int precision, unsigned int generations, unsigned long long generation, unsigned int variation);
    void RunVariations(void);
    void ExecuteProgram(void);
    float UpdateProgram(std::string*& bestProgramCode, std::string* &bestEvaluateCode, FireStarterState* &bestState, unsigned long long* &generation);
    void InitUnit(void);
    void FinishUnit(void);
    FireStarterUnit(unsigned int unitIndex, CUdevice device, const std::string& fireStarterCode);
    ~FireStarterUnit(void);
}; // class FireStarterUnit

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
    std::string m_targetCode;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    std::string m_fireShowCode;
    std::string m_bestProgramCode;
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
    void BuildData(std::string& code);
    static CUfunction CompileProgram(const std::string& program, CUmodule& cuda_module, const char* functionName);
    bool LoadTargetCode(void);
    bool LoadFireStarterCode(void);
    void SaveFireStarterCode(void);
    bool LoadFireShowCode(void);
    void SaveFireShowCode(void);
    void SaveBestState(void);
    void SaveSolution(void);
    void DrawGraph(unsigned int variation);
    void RenderImage(void);
    void RenderStatus(void);
    void ControlThread(void);
    float DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation);
    bool Init(void* window, unsigned long width, unsigned long height);
    void Quit(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter