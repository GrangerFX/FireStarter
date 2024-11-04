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
    std::vector<FireStarterCode*> m_hostPopulationCode;
    std::vector<FireStarterCode*> m_devicePopulationCode;
    std::vector<FireStarterResult*> m_hostEvolvePopulation;
    std::vector<FireStarterResult*> m_deviceEvolvePopulation;
    std::vector<FireStarterResult*> m_hostOptimizePopulation;
    std::vector<FireStarterResult*> m_deviceOptimizePopulation0;
    std::vector<FireStarterResult*> m_deviceOptimizePopulation1;
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    SerialThread m_compilerThread;
    CUmodule m_optimizeModule = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_speedTestModule = nullptr;
    CUfunction m_optimizeFunction = nullptr;
    CUfunction m_evolveFunction = nullptr;
    std::string m_optimizeCode;
    std::string m_evolveCode;
    std::string m_speedTestCode;
    size_t m_evolvePopulationSize = 0;
    size_t m_optimizePopulationSize = 0;
    size_t m_evolutionsSize = 0;
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
