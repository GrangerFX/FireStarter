#pragma once
#include "FireStarterState.h"
#include "FireStarterGenerate.h"
#include "FireStarterManager.h"

class FireStarterEvolve : public SerialThread {
private:
	CUDAContext* m_CUDAContext = nullptr;
	FireStarterManager* m_manager = nullptr;
	FireStarterGenerate* m_generate = nullptr;
	std::string m_optimizeCode;
	size_t m_index = 0;

public:
	bool EvolveGenerations(const FireStarterState* initState, unsigned int generations);
	bool EvolveStates(const FireStarterState& bestState, const std::vector<FireStarterState>& allStates, unsigned int generation);
	bool GenerateOptimize(const FireStarterState& initState);
	FireStarterEvolve(FireStarterManager* manager, size_t index = 0);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve
