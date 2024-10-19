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
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    SerialThread m_compilerThread;
    CUmodule m_optimizeModule = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_speedTestModule = nullptr;
    CUfunction m_optimizeFunction = nullptr;
    CUfunction m_evolveFunction = nullptr;
    CUfunction m_evolve2Function = nullptr;
    std::string m_optimizeCode;
    std::string m_evolveCode;
    std::string m_speedTestCode;
    size_t m_populationSize = 0;
    size_t m_evolutionsSize = 0;
    size_t m_initResultsSize = 0;
    size_t m_executeIndex = 0;

    void FinishPopulation(void);
    bool InitPopulation(const FireStarterSettings& settings);
    void ExecuteEvolvePass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteEvolve2Pass(FireStarterState& state, unsigned int variation = 0);
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
    void ExecuteEvolve(FireStarterState& state);
    void ExecuteEvolve2(FireStarterState& state);
    void ExecuteEvolveOptimize(FireStarterComplete* complete, FireStarterState& bestState);
    void ExecuteOptimize(FireStarterState& state);
    void ExecuteOptimizeCount(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    FireStarterExecute(FireStarterManager* manager, size_t index = 0, int priority = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute
