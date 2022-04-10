#pragma once
#include <vector>
#include "FireStarterResults.h"
#include "FireStarterOrder.h"
#include "FireStarterUtil.h"
#include "SerialThread.h"
#include "HashRandom.h"

#include "FireStarter_Solution.h"
#include "FireStarterTarget.h"

#define DATA_CODE           "// DATA //"
#define INSTRUCTIONS_CODE   "// INSTRUCTIONS //"
#define PROGRAM_CODE        "// PROGRAM //"
#define EVALUATE_CODE       "// EVALUATE //"
#define OPTIMIZE_CODE       "// OPTMIZE //"
#define END_CODE            "// END //"

#define FIREMAKER           "FireMaker"
#define FIRESTARTER         "FireStarter"

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
    void RandomProgram(unsigned int& seed);
    void RandomInstruction(unsigned int& seed);
    void LoadInstructions(FireStarterInstructions instructions);
    void SaveInstructions(FireStarterInstructions &instructions);
    void GenerateCode(std::string& code, unsigned int tabs, bool optimize = true);
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
    float m_bestResult;      // Best result for all threads and variations.

    void SaveState(std::string& code);
    void SaveSolution(std::string& code);
    void OptimizeData(void);
    FireStarterState(void);
}; // class FireStarterState;

class FireStarterUnit : public SerialThread {
public:
    SimpleTimer m_timer;
    class FireStarter* m_fireStarter;
    char* m_deviceResults;
    char* m_hostResults;
    FireStarterResults* m_deviceResults0;
    FireStarterResults* m_deviceResults1;
    FireStarterResults* m_hostResults0;
    FireStarterResults* m_hostResults1;
    FireStarterState m_states[PROGRAM_STATES];
    FireStarterState m_bestState;
    CUdevice m_unitDevice;
    CUcontext m_unitContext;
    CUstream m_unitStream;
    CUmodule m_evolveModule;
    CUmodule m_unitsModule;
    CUmodule m_optimizeModule;
    CUfunction m_evolveFunction;
    CUfunction m_unitFunction[PROGRAM_STATES];
    CUfunction m_optimizeFunction;
    std::string m_evolveCode;
    std::string m_unitsCode;
    std::string m_unitCode;
    std::string m_optimizeCode;
    size_t m_resultsSize;
    unsigned int m_evolveMode;
    unsigned int m_evolveGeneration;
    unsigned int m_unitIndex;
    unsigned int m_seed;
    volatile bool m_quit;

    void GenerateEvolve(void);
    void GenerateUnits(void);
    void GenerateOptimize(void);
    void EvolveGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void UnitsGenerations(unsigned int version, unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void OptimizeGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void ExecuteEvolve(void);
    void ExecuteUnits(void);
    void ExecuteOptimize(void);
    void Execute(void);
    void UpdateProgram(FireStarterState* &bestState, unsigned int* &generation);
    void UpdateCode(std::string& code);
    void InitUnit(unsigned int programMode);
    void FinishUnit(void);
    FireStarterUnit(FireStarter* fireStarter, unsigned int unitIndex, CUdevice device);
    ~FireStarterUnit(void);
}; // class FireStarterUnit

class FireStarterProcess : public SerialThread {
private:
    HANDLE m_inputRead = NULL;
    HANDLE m_inputWrite = NULL;
    HANDLE m_outputRead = NULL;
    HANDLE m_outputWrite = NULL;
    STARTUPINFO m_processStartupInfo = {};
    PROCESS_INFORMATION m_processInformation = {};
    std::string m_processName;
    std::string m_processPath;
    bool m_pipesCreated = false;
    bool m_processStarted = false;
public:
    bool CreatePipes(void);
    bool StartProcess(void);
    bool WriteData(void* data, size_t size);
    FireStarterProcess(const std::string& name = FIREMAKER);
    ~FireStarterProcess(void);
}; // class FireStarterProcess

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
    std::string m_solutionTargetCode;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    std::string m_fireShowCode;
    std::string m_bestCode;
    FireStarterState m_bestEvaluateState;
    std::vector<FireStarterUnit*> m_units;
    FireStarterProcess* m_testProcess;
    FrameBuffer m_buffer;
    char m_statusString[1024];
    unsigned int m_evolveMode;
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
    static bool FindCode(const std::string& code, const std::string startString, size_t& start, size_t& length);
    static void ExtractProgram(const std::string& code, std::string& extractCode, const std::string& startString);
    static void UpdateProgram(std::string& code, const std::string& replacementCode, const std::string& startString);
    void BuildData(std::string& code);
    bool LoadTargetCode(void);
    bool LoadFireStarterCode(void);
    bool LoadFireShowCode(void);
    void SaveBestState(void);
    void SaveBestCode(void);
    void SaveSolution(void);
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