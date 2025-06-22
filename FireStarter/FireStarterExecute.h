#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterComplete.h"
#include "FireStarterManager.h"
#include "FireSinSim.h"
#include "CUDAThread.h"

class FireStarterExecute : public CUDAThread {
private:
    float* m_hostResults = nullptr;
    float* m_deviceResults = nullptr;
    FireStarterResult* m_hostPopulation = nullptr;
    FireStarterResult* m_devicePopulation0 = nullptr;
    FireStarterResult* m_devicePopulation1 = nullptr;
    FireStarterCode* m_hostCodes = nullptr;
    FireStarterCode* m_deviceCodes = nullptr;
    FireStarterCode* m_deviceParentCode = nullptr;
    SinSimNetwork* m_hostNetworks = nullptr;
    SinSimNetwork* m_deviceNetworks = nullptr;
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    SerialThread m_compilerThread;
    CUmodule m_executeModule = nullptr;
    CUfunction m_executeFunction = nullptr;
    std::string m_executeProgramName;
    std::string m_executeFunctionName;
    std::string m_executeCode;
    size_t m_resultsSize = 0;
    size_t m_populationSize = 0;
    size_t m_networksSize = 0;
    size_t m_codesSize = 0;
    size_t m_parentCodeSize = 0;
    size_t m_executeIndex = 0;

    void FinishPopulation(void);
    bool InitPopulation(const FireStarterSettings& settings);
    void ExecuteSelectPass(FireStarterState& state, const FireStarterSettings& selectSettings);
    void ExecuteEvolvePass(FireStarterState& state);
    void ExecuteEvolveNewPass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteSinSimPass(FireStarterState& state, unsigned int variation = 0);
    void GatherOptimizePass(FireStarterState& state, unsigned int variation, FireStarterResult* newPopulation, unsigned long long pass, unsigned long long seed);
    void ExecuteOptimizePass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteOptimizePasses(FireStarterState& state);
    void ExecuteSmartOptimizePasses(FireStarterState& state);
    bool GenerateEvolve(unsigned int mode);
    bool GenerateOptimize(FireStarterState& state);
    bool Compile(FireStarterJob* &job);
    bool ExecuteJob(void);

public:
    bool ExecuteGenerateEvolve(unsigned int mode, bool sync = true);
    bool ExecuteGenerateOptimize(FireStarterState& state, bool sync = true);
    void ExecuteInitPopulation(const FireStarterState& state);
    void ExecuteSelect(FireStarterState& state, const FireStarterSettings& selectSettings);
    void ExecuteEvolve(FireStarterState& state);
    void ExecuteEvolveNew(FireStarterState& state);
    void ExecuteEvolveSinSim(FireStarterState& state);
    void ExecuteSinSim(FireStarterState& state);
    void ExecuteEvolveOptimize(FireStarterState& state, FireStarterState& bestState, FireStarterComplete* complete);
    void ExecuteOptimize(FireStarterState& state);
    void ExecuteOptimizeCount(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    FireStarterExecute(FireStarterManager* manager, size_t index = 0, int priority = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute
