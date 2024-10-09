#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterComplete.h"
#include "FireStarterManager.h"
#include "CUDAThread.h"

class FireStarterExecute : public CUDAThread {
private:
    FireStarterPopulation* m_hostPopulation = nullptr;
    FireStarterPopulation* m_devicePopulation = nullptr;
    FireStarterPopulation* m_devicePopulation0 = nullptr;
    FireStarterPopulation* m_devicePopulation1 = nullptr;
    FireStarterResults* m_deviceInitResults = nullptr;
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    CUmodule m_executeModule = nullptr;
    CUfunction m_executeEvolveFunction = nullptr;
    CUfunction m_executeOptimizeFunction = nullptr;
    std::string m_executeProgramName;
    std::string m_executeCode;
    size_t m_populationSize = 0;
    size_t m_evolutionsSize = 0;
    size_t m_initResultsSize = 0;
    size_t m_executeIndex = 0;

    void FinishResults(void);
    bool InitResults(const FireStarterSettings& settings);
    void FinishPopulation(void);
    bool InitPopulation(const FireStarterSettings& settings);
    void ExecuteEvolvePass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteOptimizePass(FireStarterState& state, unsigned int variation = 0);
    void ExecutePass(FireStarterState& state);
    void ExecuteSmartPass(FireStarterState& state);
    bool GenerateOptimize(FireStarterState& state);
    bool Compile(FireStarterJob* &job);
    bool ExecuteJob(void);

public:
    bool ExecuteCompileEvolver(void);
    bool ExecuteGenerateOptimize(const FireStarterState& initState);
    bool ExecuteGenerateSpeedTest(const FireStarterState& initState);
    void ExecuteInitPopulation(const FireStarterState& state);
    void ExecuteEvolve(FireStarterState& state);
    void ExecuteOptimize(FireStarterState& state);
    void ExecuteOptimizeComplete(FireStarterComplete* complete, FireStarterState& bestState, const FireStarterState& state);
    void ExecuteOptimizePasses(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    FireStarterExecute(FireStarterManager* manager, const std::string& programName, size_t index = 0, int priorty = 0);
    FireStarterExecute(FireStarterManager* manager, size_t index = 0, int priority = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute
