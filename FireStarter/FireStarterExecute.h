#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterComplete.h"
#include "FireStarterManager.h"
#include "CUDAThread.h"

class FireStarterBestStates {
private:
    TestedInstructions m_testedInstructions;
    FireStarterStates m_allStates;
    std::vector<FireStarterState*> m_bestStates;
    FireStarterSettings m_settings;
    size_t m_maxStates;
    size_t m_numStates;
    float m_worstResult;

    bool CheckStates(void);
public:
    bool GetBestState(FireStarterState& state);
    bool AddState(const FireStarterState& state, float maxResult = 0.0f);
    float WorstResult(void);
    FireStarterBestStates(const FireStarterSettings& settings, size_t maxStates = FIRESTARTER_BESTSTATES);
}; // FireStarterBestStates

class FireStarterExecute : public CUDAThread {
private:
    std::vector<float*> m_hostResults;
    std::vector<float*> m_deviceResults;
    std::vector<FireStarterResult*> m_hostPopulation;
    std::vector<FireStarterResult*> m_devicePopulation0;
    std::vector<FireStarterResult*> m_devicePopulation1;
    std::vector<FireStarterCode*> m_hostCode;
    std::vector<FireStarterCode*> m_deviceCode;
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    SerialThread m_compilerThread;
    CUmodule m_executeModule = nullptr;
    CUfunction m_executeFunction = nullptr;
    std::string m_executeCode;
    size_t m_resultsSize = 0;
    size_t m_populationSize = 0;
    size_t m_codeSize = 0;
    size_t m_executeIndex = 0;

    void FinishPopulation(void);
    bool InitPopulation(const FireStarterSettings& settings);
    void ExecuteEvolvePass(FireStarterState& state, FireStarterBestStates& bestStates, unsigned int variation = 0);
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
    void ExecuteEvolve(FireStarterState& state, FireStarterBestStates &bestStates);
    void ExecuteEvolveOptimize(FireStarterComplete* complete, FireStarterState& state, FireStarterState& bestState);
    void ExecuteOptimize(FireStarterState& state);
    void ExecuteOptimizeCount(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    FireStarterExecute(FireStarterManager* manager, size_t index = 0, int priority = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute
