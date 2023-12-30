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
	std::string m_evolveOptimizeCode;
	size_t m_evolveIndex = 0;
	unsigned long long m_evolveCount = 0;

	void GenerateCode(FireStarterJob* job);

public:
	bool RandomState(const FireStarterState& state, const FireStarterState& bestState, bool sync = false);
	bool RandomStates(unsigned long long test, const FireStarterSettings& evolveSettings, TestedInstructions& testedInstructions, unsigned long long& evolveID, unsigned long long generation);
	bool EvolveStates(unsigned long long test, const FireStarterSettings& evolveSettings, FireStarterStates& allStates, TestedInstructions& testedInstructions, unsigned long long& evolveID, unsigned long long generation);
	bool GenerateOptimize(const FireStarterState& initState);
	FireStarterEvolve(FireStarterManager* manager, size_t index = 0);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve
