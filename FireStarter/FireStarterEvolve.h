#pragma once
#include "FireStarterState.h"
#include "FireStarterGenerate.h"
#include "FireStarterManager.h"

class FireStarterEvolve : public SerialThread {
private:
	CUDAContext m_CUDAContext;
	FireStarterManager* m_manager;
	FireStarterGenerate m_generate;
	std::string m_optimizeCode;
	size_t m_index;

public:
	bool EvolveGenerations(const FireStarterState* state, unsigned int generations);
	bool EvolveState(const FireStarterState* bestState, const FireStarterState* state, unsigned int generation);
	bool GenerateOptimize(const FireStarterState* state);
	FireStarterEvolve(FireStarterManager* manager, size_t index = 0);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve