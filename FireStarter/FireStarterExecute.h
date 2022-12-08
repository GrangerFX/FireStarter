#pragma once
#include "SerialThread.h"
#include "FireStarterManager.h"
#include "CUDAContext.h"

class FireStarterExecute : public SerialThread {
private:
    FireStarterResults* m_hostResults = nullptr;
    FireStarterEvolutions* m_hostEvolutions = nullptr;
    char* m_deviceResults = nullptr;
    char* m_deviceEvolutions = nullptr;
    FireStarterResults* m_deviceResults0 = nullptr;
    FireStarterResults* m_deviceResults1 = nullptr;
    FireStarterEvolutions* m_deviceEvolutions0 = nullptr;
    FireStarterEvolutions* m_deviceEvolutions1 = nullptr;
    FireStarterManager* m_manager = nullptr;
    FireStarterJob* m_job = nullptr;
    CUmodule m_generateModule = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_optimizeModule = nullptr;
    CUfunction m_evolveFunction = nullptr;
    CUfunction m_optimizeFunction = nullptr;
    CUDAContext m_CUDAContext;
    size_t m_resultsSize = 0;
    size_t m_evolutionsSize = 0;
    size_t m_index = 0;

    bool InitResults(const FireStarterState& state);
    void CodeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation);
	void OptimizeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation);
    bool Optimize(FireStarterState& state, bool skipVariations = false);
    bool Compile(void);

public:
    void ExecuteCompile(void);
    void ExecuteOptimize(unsigned int generation);
    void ExecuteEvolve(void);
	void ExecuteRandom(void);
	FireStarterExecute(FireStarterManager* manager, size_t index);
	~FireStarterExecute(void);
}; // class FireStarterExecute

class FireStarterExecuteRandom : public SerialThread {
private:
    std::vector<FireStarterExecute*> m_executionUnits;
public:
    FireStarterExecuteRandom(FireStarterManager* manager, size_t numExecute = 1);
    ~FireStarterExecuteRandom(void);
}; // class FireStarterExecuteRandom