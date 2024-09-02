#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterManager.h"
#include "CUDAThread.h"

class FireStarterExecute : public CUDAThread {
private:
    FireStarterPopulation* m_hostPopulation = nullptr;
    FireStarterPopulation* m_devicePopulation = nullptr;
    FireStarterPopulation* m_devicePopulation0 = nullptr;
    FireStarterPopulation* m_devicePopulation1 = nullptr;
    FireStarterResult* m_deviceResult = nullptr;
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    CUmodule m_executeModule = nullptr;
    CUfunction m_executeFunction = nullptr;
    std::string m_executeCode;
    size_t m_populationSize = 0;
    size_t m_evolutionsSize = 0;
    size_t m_resultSize = 0;
    size_t m_executeIndex = 0;

    void FinishResult(void);
    bool InitResult(const FireStarterSettings& settings);
    void FinishPopulation(void);
    bool InitPopulation(const FireStarterSettings& settings);
    void ExecuteEvolvePass(FireStarterState& state);
    float ExecuteOptimizePass(FireStarterState& state, unsigned int variation);
    void ExecutePass(FireStarterState& state);
    void ExecuteSmartPass(FireStarterState& state);
    bool Compile(FireStarterJob* &job);
    bool ExecuteJob(void);

public:
    void ExecuteCompileEvolver(void);
    void ExecuteCompileOptimizer(void);
    bool ExecuteGenerateOptimize(const FireStarterState& initState);
    void ExecuteInitPopulation(const FireStarterState& state);
    void ExecuteOptimize(FireStarterState& state, bool& init);
    void ExecuteOptimizeGPU(FireStarterState& state, bool init);
    void ExecuteEvolveGPU(FireStarterState& state);
    void ExecuteEvolveCPU(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    FireStarterExecute(FireStarterManager* manager = nullptr, size_t index = 0);
	~FireStarterExecute(void);
}; // class FireStarterExecute
