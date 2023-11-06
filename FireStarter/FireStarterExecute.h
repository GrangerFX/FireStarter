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
    size_t m_populationSize = 0;
    size_t m_evolutionsSize = 0;
    size_t m_executeIndex = 0;

    void FinishPopulation(void);
    bool InitPopulation(const FireStarterState& state, bool init = false);
	float OptimizeGenerations(FireStarterState& state, unsigned long long generation, unsigned long long generations, unsigned int variation);
    bool Optimize(FireStarterState& state);
    void OptimizePass(FireStarterState& state, unsigned int pass);
    bool Compile(FireStarterJob* &job);
    bool Evolve(void);

public:
    void ExecuteCompile(bool sync = false);
    void ExecuteInitPopulation(bool init, bool sync = false);
    void ExecuteOptimize(const FireStarterState& state, unsigned int pass, bool sync = false);
    void ExecuteEvolve(std::atomic<long long>& evolveCount, bool sync = false);
    void ExecuteEvolve(bool sync = false);
    void ExecuteRandom(bool sync = false);
    void ExecuteFinish(bool sync = true);
    FireStarterExecute(FireStarterManager* manager, size_t index = 0);
	~FireStarterExecute(void);
}; // class FireStarterExecute

class FireStarterExecuteRandom : public SerialThread {
private:
    std::vector<FireStarterExecute*> m_executionUnits;
public:
    FireStarterExecuteRandom(FireStarterManager* manager, size_t numExecute = 1);
    ~FireStarterExecuteRandom(void);
}; // class FireStarterExecuteRandom