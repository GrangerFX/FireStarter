#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterComplete.h"
#include "FireStarterManager.h"
#include "CUDAThread.h"

class FireStarterBestCodes {
private:
    TestedInstructions m_testedInstructions;
    std::vector<FireStarterCode*> m_bestCodes;
    std::vector<float> m_bestResults;
    FireStarterSettings m_settings;
    size_t m_codeSize;
    size_t m_maxCodes;
    size_t m_numCodes;
    float m_worstResult;

public:
    FireStarterCode* GetBestCode(void);
    bool AddCode(const FireStarterCode* code, const std::vector<unsigned char>& instructions, float result);
    float WorstResult(void);
    FireStarterBestCodes(const FireStarterSettings& settings, size_t maxCodes = FIRESTARTER_NUM_BEST);
    ~FireStarterBestCodes(void);
}; // FireStarterBestCodes

class FireStarterExecute : public CUDAThread {
private:
    float* m_hostResults = nullptr;
    float* m_deviceResults = nullptr;
    FireStarterResult* m_hostPopulation = nullptr;
    std::vector<FireStarterResult*> m_devicePopulation0;
    std::vector<FireStarterResult*> m_devicePopulation1;
    FireStarterCode* m_hostCode = nullptr;
    FireStarterCode* m_deviceCode = nullptr;
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    SerialThread m_compilerThread;
    CUmodule m_executeModule = nullptr;
    CUfunction m_executeFunction = nullptr;
    std::string m_executeCode;
    size_t m_resultSize = 0;
    size_t m_resultsSize = 0;
    size_t m_populationSize = 0;
    size_t m_codeSize = 0;
    size_t m_executeIndex = 0;

    void FinishPopulation(void);
    bool InitPopulation(const FireStarterSettings& settings);
    void ExecuteEvolvePass(FireStarterState& state, FireStarterBestCodes& bestCodes, unsigned int variation = 0);
    void ExecuteOptimizePass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteOptimizePasses(FireStarterState& state);
    void ExecuteSmartOptimizePasses(FireStarterState& state);
    bool GenerateEvolver(void);
    bool GenerateOptimize(FireStarterState& state);
    bool GenerateSpeedTest(FireStarterState& state);
    bool Compile(FireStarterJob* &job);
    bool ExecuteJob(void);

public:
    void ExecuteCompileOptimize(const FireStarterState& initState);
    bool ExecuteGenerateEvolver(void);
    bool ExecuteGenerateOptimize(const FireStarterState& initState);
    bool ExecuteGenerateSpeedTest(const FireStarterState& initState);
    void ExecuteInitPopulation(const FireStarterState& state);
    void ExecuteEvolve(FireStarterState& state, FireStarterBestCodes &bestCodes);
    void ExecuteEvolveOptimize(FireStarterComplete* complete, FireStarterState& state, FireStarterState& bestState);
    void ExecuteOptimize(FireStarterState& state);
    void ExecuteOptimizeCount(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    FireStarterExecute(FireStarterManager* manager, size_t index = 0, int priority = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute
