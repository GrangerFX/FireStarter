#pragma once
#include "FireStarterState.h"
#include "FireStarterGenerate.h"
#include "FireStarterManager.h"
#include "CUDAThread.h"
#include <set>

typedef std::set<std::vector<unsigned char>> TestedInstructions;

class FireStarterEvolve : public CUDAThread {
private:
	FireStarterManager* m_evolveManager = nullptr;
	FireStarterGenerate* m_evolveGenerate = nullptr;
	std::string m_evolveCode;
	size_t m_evolveIndex = 0;
	unsigned long long m_evolveCount = 0;

public:
	bool RandomState(const FireStarterState& state, const FireStarterState& bestState, bool sync = false);
	bool EvolveStates(const std::vector<FireStarterState>& allStates, TestedInstructions* testedInstructions, unsigned long long generation, bool sync = true);
	bool GenerateOptimize(const FireStarterState& initState, bool sync = false);
	FireStarterEvolve(FireStarterManager* manager, size_t index = 0);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve
