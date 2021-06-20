#pragma once
#include "FireStarterUtil.h"
#include <vector>
#include <cuda.h>

#define PROGRAM_DATA 8
#define PROGRAM_ITERATIONS 16384
#define PROGRAM_POPULATION 262144
#define SAMPLE_ITERATIONS 15
#define MAX_RESULTS 16384
#define SMART_RANDOM_FACTOR 0.1f
#define SMART_AGE_FACTOR 0.01f
#define SMART_EVOLVE_AGE 10
#define SMART_DEVOLVE_AGE 50
#define START_RESULT 10.0f
#define RESET_DATA 1

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

typedef struct {
    int a, b, c, d;
} FireStarterInstruction;

typedef FireStarterInstruction FireStarterInstructions[PROGRAM_DATA];

typedef struct FireStarterState {
    FireStarterInstructions instructions;
    FireStarterData data;
    float result;
} FireStarterState;

typedef std::vector<FireStarterState> FireStarterStates;

class FireStarter {
public:
    SimpleTimer timer;
    FrameBuffer theBuffer;
    FireStarterResults *results;
    FireStarterResults *results1;
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
    bool GetResults1(void);
    void InitResults(void);
    void InitResults1(void);
    void FreeResults(void);
    void FreeResults1(void);
    void CompileProgram(const char *source);
    void RunProgram(unsigned int population, unsigned int maxResults);
    void RunProgram1(unsigned int population, unsigned int maxResults);
    void DrawGraph(void);
    void DrawGraph1(void);
    void RandomProgram(void);
    void MakeProgram(std::string &code);
    void RenderImage(HWND hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter