#pragma once
#include "Defines.h"
#include <time.h>
#include <windows.h>
#include <string>

#define PROGRAM_DATA 8
#define PROGRAM_INSTRUCTIONS 16
#define PROGRAM_ITERATIONS 4096
#define PROGRAM_POPULATION 262144
#define SAMPLE_ITERATIONS 16
#define MAX_RESULTS 1024

typedef enum {
    Instruction_noop = 0,
    Instruction_store,      // data[d] = r;
    Instruction_square,     // r *= r;
    Instruction_add,        // r += data[d];
    Instruction_subtract,   // r -= data[d];
    Instruction_multiply,   // r *= data[d];
    Instruction_divide,     // r /= data[d];
    Instruction_max,        // r = data[d] >= r ? data[d] : r;
    Instruction_min,        // r = data[d] <= r ? data[d] : r;
    NumInstructions
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
    float error;
} FireStarterResult;

typedef struct FireStarterResults {
    unsigned int numResults;
    float minError;
    FireStarterResult results[1];
} FireStarterResults;

class FireStarter {
public:
    SimpleTimer timer;
    FrameBuffer theBuffer;
    FireStarterResults *hostResults;
    FireStarterResults *deviceResults;
    std::string code;
    CUmodule module;
    ProgramInstruction bestInstructions[PROGRAM_INSTRUCTIONS];
    ProgramInstruction curInstructions[PROGRAM_INSTRUCTIONS];
    FireStarterData bestData;
    FireStarterData curData;
    long long generation;
    float minError;
    bool update;

    bool haveDoubles;
    int numSMs;                     // number of multiprocessors

    char statusString[1024];

    void EraseFrameBuffer(FrameBuffer &buffer);
    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    void GetResults(void);
    void InitResults(void);
    void FreeResults(void);
    void CompileProgram(const char *source);
    void RunProgram(unsigned int population, unsigned int maxResults, FireStarterResults *results);
    void DrawGraph(FireStarterResults *results);
    void RandomProgram(void);
    void MakeProgram(void);
    void RenderImage(HWND hwnd);
    void Init(void);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter