#pragma once
#include <vector>
#include "FireStarterResults.h"
#include "FireStarterUtil.h"
#include "SerialThread.h"
#include "HashRandom.h"

#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
#include "FireStarter_Solution.h"
#else
#include "FireStarterTarget.h"
#endif

#define DATA_CODE           "// DATA //"
#define INSTRUCTIONS_CODE   "// INSTRUCTIONS //"
#define PROGRAM_CODE        "// PROGRAM //"
#define EVALUATE_CODE       "// EVALUATE //"
#define END_CODE            "// END //"

struct FireStarterRegister {
    unsigned int dataIndex;
    unsigned int registerIndex;
    unsigned int instructionFirst;
    unsigned int instructionLast;
}; // struct FireStarterRegister

class FireStarterProgram {
public:
    FireStarterInstructions m_instructions;
    std::vector<FireStarterRegister> m_registers;
    std::vector<FireStarterOpcode> m_opcodes;
    FireStarterProgramMode m_programMode;
    unsigned int m_dataSize;
    unsigned int m_maxRegisters;

    void OptimizeRegisters(void);
    void LoadInstructions(FireStarterInstructions instructions);
    void GenerateEvaluate(std::string& code, bool optimize = true);
    void GenerateSolution(std::string& code, FireStarterData& data, bool optimize = true);
    void SaveProgram(std::string& code, unsigned int species = 0xFFFFFFFF);
    float EmulateProgram(FireStarterData& data, float n);
    FireStarterProgram(void);
}; // class FireStarterProgram

class FireStarterState {
public:
    FireStarterProgram m_program;
    FireStarterResult m_result;
    FireStarterOrder m_order;
    float m_processingTime;
    float m_bestResult;      // Best result for all threads and variations.

    void SaveState(std::string& code);
    void SaveSolution(std::string& code);
    void OptimizeData(void);
    void SortVariations(void);
    FireStarterState(void);
}; // class FireStarterState;

class FireStarterUnit : public SerialThread {
public:
    class FireStarter* m_fireStarter;
    SimpleTimer m_timer;
    char* m_deviceResults;
    char* m_hostResults;
    FireStarterResults* m_deviceResults0;
    FireStarterResults* m_deviceResults1;
    FireStarterResults* m_hostResults0;
    FireStarterResults* m_hostResults1;
    FireStarterState m_curState;
    FireStarterState m_bestState;
    CUdevice m_unitDevice;
    CUcontext m_unitContext;
    CUstream m_unitStream;
    CUmodule m_evolveModule;
    CUmodule m_optimizeModule;
    CUfunction m_evolveFunction;
    CUfunction m_optimizeFunction;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    size_t m_resultsSize;
    unsigned int m_programGeneration;
    unsigned int m_unitIndex;
    unsigned int m_seed;
    volatile bool m_quit;

    void GenerateProgram(void);
    void InitResults(void);
    void FreeResults(void);
    void EvolveGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void OptimizeGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void ExecuteProgram(void);
    void UpdateProgram(FireStarterState* &bestState, unsigned int* &generation);
    void UpdateCode(std::string& code);
    void InitUnit(void);
    void FinishUnit(void);
    FireStarterUnit(unsigned int unitIndex, CUdevice device, class FireStarter *fireStarter);
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
    std::string m_bestCode;
    FireStarterState m_bestEvaluateState;
    std::vector<FireStarterUnit*> m_units;
    FrameBuffer m_buffer;
    char m_statusString[1024];
    unsigned int m_generation;
    unsigned int m_bestGeneration;
    float m_bestResult;
    float m_worstResult;
    void* m_window;
    unsigned int m_seed;
    unsigned int m_width;
    unsigned int m_height;
    bool m_controlUpdate;
    volatile bool m_bufferUpdate;
    volatile bool m_quitControlThread;

    static void SaveCode(const std::string& filePath, const std::string& code);
    static bool LoadCode(const std::string& filePath, std::string& code);
    static void ReplaceCode(std::string& code, const std::string& search, const std::string& replace);
    static void UpdateProgram(std::string& code, const std::string& replacementCode, std::string startString);
    void BuildData(std::string& code);
    static CUfunction CompileProgram(const std::string& program, CUmodule& cuda_module, const char* functionName);
    bool LoadTargetCode(void);
    bool LoadFireStarterCode(void);
    bool LoadFireShowCode(void);
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
    void SaveBestState(void);
#endif
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
    void SaveBestCode(void);
    void SaveSolution(void);
#endif
    void FireShow(void);
    void RenderImage(unsigned int width, unsigned int height, const unsigned char* pixels);
    void RenderStatus(void);
    void ControlThread(void);
    float DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation);
    bool Init(void* window, unsigned int width, unsigned int height);
    void Quit(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter