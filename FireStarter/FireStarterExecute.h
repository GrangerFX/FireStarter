#pragma once
#include "FireStarterManager.h"
#include "FireStarterEvolutions.h"
#include "CUDAThread.h"

class FireStarterExecute : public CUDAThread {
private:
    FireStarterPopulation* m_hostPopulation = nullptr;
    FireStarterEvolutions* m_hostEvolutions = nullptr;
    char* m_devicePopulation = nullptr;
    char* m_deviceEvolutions = nullptr;
    FireStarterPopulation* m_devicePopulation0 = nullptr;
    FireStarterPopulation* m_devicePopulation1 = nullptr;
    FireStarterEvolutions* m_deviceEvolutions0 = nullptr;
    FireStarterEvolutions* m_deviceEvolutions1 = nullptr;
    FireStarterManager* m_manager = nullptr;
    FireStarterJob* m_job = nullptr;
    CUmodule m_generateModule = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_optimizeModule = nullptr;
    CUfunction m_evolveFunction = nullptr;
    CUfunction m_optimizeFunction = nullptr;
    std::vector<unsigned int> m_variationOrder;
    size_t m_populationSize = 0;
    size_t m_evolutionsSize = 0;
    size_t m_index = 0;

    bool InitPopulation(const FireStarterState& state);
    void FinishResults(void);
    void CodeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation);
	void OptimizeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int variation);
    void Code(FireStarterState& state, bool init);
    void Optimize(FireStarterState& state, bool init, bool skipVariations = false);
    bool CompileModule(FireStarterJob* &job);

public:
    void ExecuteCompile(bool sync = false);
    void ExecuteCode(bool init, bool sync = false);
    void ExecuteOptimize(size_t generation, size_t index, size_t test, bool init, bool sync = false);
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