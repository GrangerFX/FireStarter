#pragma once
#include "FireStarterUtil.h"
#include <vector>
#include <cuda.h>

#define FS2_PROGRAM_DATA 6
#define FS2_PROGRAM_ITERATIONS 16000
#define FS2_PROGRAM_POPULATION 4352 * 16
#define FS2_SAMPLE_ITERATIONS 15
#define FS2_MAX_RESULTS 16384
#define FS2_SMART_RANDOM_FACTOR 0.1f
#define FS2_SMART_AGE_FACTOR 0.01f
#define FS2_SMART_EVOLVE_AGE 10
#define FS2_SMART_DEVOLVE_AGE 50
#define FS2_START_RESULT 10.0f

typedef struct FireStarter2Data {
    float d[FS2_PROGRAM_DATA][FS2_PROGRAM_DATA];
} FireStarter2Data;

typedef struct FireStarter2Result {
    FireStarter2Data data;
    float result;
    unsigned int member;
} FireStarter2Result;

typedef struct FireStarter2Results {
    unsigned int numResults;
    float minResult;
    float curResult;
    float startResult;
    FireStarter2Data bestData;
    FireStarter2Result results[1];
} FireStarter2Results;

typedef struct FireStarter2State {
    FireStarter2Data data;
    float result;
} FireStarter1State;

typedef std::vector<FireStarter2State> FireStarter2States;

class FireStarter2 {
public:
    SimpleTimer timer;
    FrameBuffer theBuffer;
    FireStarter2Results *results;
    FireStarter2Results *results1;
    FireStarter2States states;
    FireStarter2State curState;
    FireStarter2State bestState;
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
    void InitProgram(void);
    void RandomProgram(void);
    void MakeProgram(std::string &code);
    void RenderImage(HWND hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter2(void);
    ~FireStarter2(void);
}; // class FireStarter2