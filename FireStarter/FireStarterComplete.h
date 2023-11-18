#pragma once
#include "FireStarterManager.h"
#include "FireStarterGenerate.h"
#include "FireStarterShow.h"

class FireStarterComplete : public CUDAThread {
private:
	FireStarterWindow m_window;
	FireStarterShow m_fireShow;
	SimpleTimer m_timer;
	FireStarterManager* m_manager = nullptr;
	FireStarterGenerate* m_generate = nullptr;
	std::string m_solutionTargetCode;
	size_t m_resultsCount = 0;
	double m_resultsTime = 0.0;
	double m_generationTime = 0.0;
	double m_totalResult = 0.0;
	float m_bestError = 0.0f;
	bool m_saveBestState = true;

	void SaveBestState(const FireStarterState& bestState);
	void SaveBestCode(const FireStarterState& bestState);
	void SaveSolution(const FireStarterState& bestState);
	bool LoadSolutionTargetCode(void);

public:
	void SaveBest(const FireStarterState& evolveState);
	bool CompleteResults(FireStarterState& bestState, const FireStarterState& state, unsigned long long generation, float oldResult, float newResult);
	bool CompleteRandom(FireStarterState& bestState, bool sync = true);
	bool CompleteState(FireStarterState& bestState, FireStarterState& oldState, bool sync = true);
	bool CompleteStates(std::vector<FireStarterState>& allStates, bool sync = true);
    FireStarterComplete(FireStarterManager* manager, const FireStarterWindow& window, bool saveBestState = true);
	~FireStarterComplete(void);
}; // class FireStarterEvolve
