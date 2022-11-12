#pragma once
#include "SerialThread.h"
#include "FireStarterCompiler.h"
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
    CUmodule m_generateModule = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_optimizeModule = nullptr;
    CUfunction m_evolveFunction = nullptr;
    CUfunction m_optimizeFunction = nullptr;
    CUDAContext* m_CUDAContext = nullptr;
    size_t m_resultsSize = 0;
    size_t m_evolutionsSize = 0;
    unsigned int m_device = 0;

    bool InitResults(const FireStarterState& state);
    void CodeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation);
	void OptimizeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation);

public:
	bool ExecuteJob(FireStarterCompilerManager* manager);
	void ExecuteRandom(FireStarterCompilerManager* manager);
	FireStarterExecute(unsigned int index);
	~FireStarterExecute(void);
}; // class FireStarterExecute