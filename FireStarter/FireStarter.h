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

class FrameBuffer {
public:
    unsigned char* m_hostBase;		// Pointer to the alligned native pixel format buffer in host memory
    unsigned char* m_deviceBase;	// Pointer to the alligned native pixel format buffer in device memory
    unsigned long m_width;			// Number of columns
    unsigned long m_height;			// Number of rows
    long m_rowbytes;			    // Number of bytes per row
    size_t m_size;                  // The total size of the buffer in bytes

    void Erase(void);
    const unsigned char* Get(void);
    void Resize(unsigned long width, unsigned long height);

    FrameBuffer(void);
    ~FrameBuffer(void);
}; // class FrameBuffer

class FireStarterProgram {
public:
    unsigned int m_instructions[PROGRAM_OPERATIONS];

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
    float m_maxResult;

    void Init(unsigned int& seed);
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
    unsigned long long m_generation;
    unsigned long long m_age;
    unsigned int m_unitIndex;
    unsigned int m_seed;

    void GetResults(FireStarterResults* results, FireStarterResult& bestResult);
    void CopyResultsDeviceToHost(void);
    void InitResults(void);
    void FreeResults(void);
    void RunProgram(unsigned int variation, FireStarterResult& result);
    void DevolveProgram(void);
    void EvolveProgram(void);
    void EvaluateProgram(void);
    void ExecuteProgram(void);
    float UpdateProgram(std::string* &bestEvaluateCode, FireStarterState* &bestState, unsigned long long* &age);
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