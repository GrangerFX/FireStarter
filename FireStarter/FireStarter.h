#pragma once
#include "Defines.h"
#include <time.h>
#include <windows.h>
#include <string>
#include <vector>

#define PROGRAM_DATA 8
#define PROGRAM_INSTRUCTIONS 32
#define PROGRAM_ITERATIONS 4096
#define PROGRAM_POPULATION 262144
#define EVOLUTION_SIZE 256
#define SAMPLE_ITERATIONS 15
#define MAX_RESULTS 16384
#define SMART_RANDOM_FACTOR 0.1f
#define SMART_AGE_FACTOR 0.01f
#define SMART_EVOLVE_AGE 10
#define SMART_DEVOLVE_AGE 100
#define START_RESULT 10.0f

typedef enum {
    Instruction_add = 0,    // r += data[d];
    Instruction_multiply,   // r *= data[d];
    Instruction_store,      // data[d] = r;
    NumInstructions,
    Instruction_fetch,      // r = data[d];
    Instruction_subtract,   // r -= data[d];
    Instruction_square,     // r *= r;
    Instruction_divide,     // r /= data[d];
    Instruction_max,        // r = data[d] >= r ? data[d] : r;
    Instruction_min,        // r = data[d] <= r ? data[d] : r;
} Instruction;

typedef struct {
    Instruction instruction;
    int d;
} ProgramInstruction;

class SimpleTimer {
public:
    time_t m_second;
    long m_nanosecond;
    
    inline void Start(void)
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        m_second = time.tv_sec;
        m_nanosecond = time.tv_nsec;
    } // Start
    
    inline double Duration(void)
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        return (double)(time.tv_sec - m_second) + (double)(time.tv_nsec - m_nanosecond) * 0.000000001;
    } // Duration
    
    inline SimpleTimer(void)
    {
        Start();
    } // Start
}; // SimpleTimer
    
typedef struct FrameBuffer {
	uchar4 *base;			        // Pointer to the alligned native pixel format buffer
	long rowbytes;					// Number of bytes per row
	unsigned long width;			// Number of columns
	unsigned long height;			// Number of rows
} FrameBuffer;

typedef struct FireStarterData {
    float d[PROGRAM_DATA];

    inline float& operator[](int i)
    {
        return d[i];
    } // operator[]
} FireStarterData;

typedef struct FireStarterResult {
    FireStarterData data;
    float result;
    unsigned int member;
} FireStarterResult;

typedef struct FireStarterResults {
    unsigned int numResults;
    float minResult;
    float curResult;
    float startResult;
    FireStarterData bestData;
    FireStarterResult results[1];
} FireStarterResults;

typedef struct FireStarterState {
    ProgramInstruction instructions[PROGRAM_INSTRUCTIONS];
    FireStarterData data;
    float result;
} FireStarterState;

typedef std::vector<FireStarterState> FireStarterStates;

class FireStarter {
public:
    SimpleTimer timer;
    FrameBuffer theBuffer;
    FireStarterResults *results;
    float *lastValues;
    float *bestValues;
    FireStarterStates states;
    FireStarterState curState;
    FireStarterState bestState;
    CUmodule module;
    long long generation;
    long long lastGeneration;
    long long bestGeneration;
    char statusString[1024];

    void EraseFrameBuffer(FrameBuffer &buffer);
    void CopyFrameBuffer(FrameBuffer &dstBuffer, FrameBuffer &srcBuffer);
    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    bool GetResults(void);
    void InitResults(void);
    void FreeResults(void);
    void CompileProgram(const char *source);
    void RunProgram(unsigned int population, unsigned int maxResults);
    void DrawGraph(bool update);
    void RandomProgram(void);
    void MakeProgram(std::string &code);
    void RenderImage(HWND hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter