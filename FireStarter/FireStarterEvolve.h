#pragma once
#include "FireStarterState.h"
#include "FireStarterGenerate.h"
#include "FireStarterManager.h"
#include "FireStarterExecute.h"
#include "CUDAThread.h"

class FireStarterEvolve : public CUDAThread {
private:
	FireStarterManager* m_evolveManager = nullptr;
	FireStarterGenerate* m_evolveGenerate = nullptr;
	std::string m_executeCode;
	size_t m_evolveIndex = 0;
	unsigned long long m_evolveCount = 0;

	void GenerateCode(FireStarterJob* job);

public:
	bool RandomState(const FireStarterState& state, bool sync = true);
    bool SelectStates(FireStarterExecute* execute, unsigned long long test, const FireStarterSettings& selectSettings, const FireStarterSettings& optimizeSettings, FireStarterStates& allStates, TestedCodes& testedCodes, unsigned long long generation);
    bool EvolveStates(unsigned long long test, const FireStarterSettings& evolveSettings, FireStarterStates& allStates, TestedCodes& testedCodes, unsigned long long generation);
	bool GenerateOptimize(const FireStarterState& initState);
	FireStarterEvolve(FireStarterManager* manager, size_t index = 0);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve
