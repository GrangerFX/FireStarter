#pragma once
#include "Defines.h"
#include "FireStarterUtil.h"
#include <vector>

typedef struct FireStarter2Data {
    float d[PROGRAM_DATA];

    inline float& operator[](int i)
    {
        return d[i];
    } // operator[]
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

typedef struct {
    int a, b, c, d;
} FireStarter2Instruction;

typedef FireStarter2Instruction FireStarter2Instructions[PROGRAM_DATA];

typedef struct FireStarter2State {
    FireStarter2Instructions instructions;
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
    void RandomProgram(void);
    void MakeProgram(std::string &code);
    void RenderImage(HWND hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter2(void);
    ~FireStarter2(void);
}; // class FireStarter2