#pragma once
#include "FireStarterManager.h"
#include "CUDAThread.h"

class FireStarterExecute : public CUDAThread {
private:
    FireStarterPopulation* m_hostPopulation = nullptr;
    FireStarterPopulation* m_devicePopulation = nullptr;
    FireStarterPopulation* m_devicePopulation0 = nullptr;
    FireStarterPopulation* m_devicePopulation1 = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    CUmodule m_generateModule = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_optimizeModule = nullptr;
    CUfunction m_evolveFunction = nullptr;
    CUfunction m_optimizeFunction = nullptr;
    CUfunction m_bugTest1Function = nullptr;
    CUfunction m_bugTest2Function = nullptr;
    size_t m_populationSize = 0;
    size_t m_evolutionsSize = 0;
    size_t m_executeIndex = 0;

    void FinishPopulation(void);
    bool InitPopulation(const FireStarterState& state, bool init);
    void BugTest(void);
	float OptimizeGenerations(FireStarterState& state, unsigned int variation);
    void OptimizePass(FireStarterState& state);
    bool OptimizeEvolve(FireStarterState& state);
    bool Compile(FireStarterJob* &job);
    bool Evolve(void);

public:
    void ExecuteCompile(bool sync = false);
    void ExecuteInitPopulation(bool sync = false);
    void ExecuteOptimize(const FireStarterState& state, bool sync = false);
    void ExecuteEvolve(std::atomic<long long>& evolveCount, bool sync = false);
    void ExecuteEvolve(bool sync = false);
    void ExecuteFinish(bool sync = true);
    FireStarterExecute(FireStarterManager* manager, size_t index = 0);
	~FireStarterExecute(void);
}; // class FireStarterExecute
