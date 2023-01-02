#pragma once
#include "FireStarterState.h"
#include "FireStarterGenerate.h"
#include "FireStarterManager.h"
#include "CUDAThread.h"

class FireStarterEvolve : public CUDAThread {
private:
	FireStarterManager* m_manager = nullptr;
	FireStarterGenerate* m_generate = nullptr;
	std::string m_optimizeCode;
	size_t m_index = 0;

public:
	bool EvolveGenerations(const FireStarterState* initState, size_t generations, bool sync = false);
	bool EvolveStates(const FireStarterState& bestState, const std::vector<FireStarterState>& allStates, size_t generation, bool sync = false);
	bool GenerateOptimize(const FireStarterState& initState, bool sync = false);
	FireStarterEvolve(FireStarterManager* manager, size_t index = 0);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve
