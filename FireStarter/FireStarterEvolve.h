#pragma once
#include "FireStarterState.h"
#include "FireStarterManager.h"

class FireStarterEvolve : public SerialThread {
private:
	FireStarterManager* m_manager;
	std::string m_optimizeCode;

public:
	bool EvolveGenerations(const FireStarterState* state, unsigned int generations);
	bool EvolveStates(const FireStarterState* state, std::vector<FireStarterState>& allStates, unsigned int generation);
	bool GenerateOptimize(const FireStarterState* state);
	FireStarterEvolve(FireStarterManager* manager);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve