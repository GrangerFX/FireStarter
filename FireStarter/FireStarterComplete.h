#pragma once
#include "FireStarterManager.h"
#include "FireStarterGenerate.h"
#include "FireStarterShow.h"

class FireStarterComplete : public CUDAThread {
private:
	FireStarterWindow m_window;
	FireStarterShow m_fireShow;
	SimpleTimer m_completeTimer;
	FireStarterManager* m_manager = nullptr;
	FireStarterGenerate* m_generate = nullptr;
	std::string m_solutionTargetCode;
	size_t m_resultsCount = 0;
	double m_resultsTime = 0.0;
	double m_generationTime = 0.0;
	float m_bestError = 0.0f;
	bool m_saveBestState = true;

	void SaveBestState(const FireStarterState& bestState);
	void SaveBestCode(const FireStarterState& bestState);
	void SaveSolution(const FireStarterState& bestState);
	bool LoadSolutionTargetCode(void);

public:
	bool UpdateBestState(FireStarterState& bestState, const FireStarterState& state);
	void DisplayResults(const FireStarterState& bestState);
	void CompleteStatus(const FireStarterState& bestState, FireStarterState& state, unsigned long long generation = 0);
	bool CompleteRandom(FireStarterState& bestState, bool sync = true);
	bool CompleteEvolveGPU(FireStarterState& bestState, FireStarterState& state, bool sync = true);
	bool CompleteState(FireStarterState& bestState, FireStarterState& oldState, bool sync = true);
	bool CompleteStates(FireStarterState& displayState, FireStarterState& bestState, FireStarterStates& allStates, size_t numStates, unsigned long long generation);
    FireStarterComplete(FireStarterManager* manager, const FireStarterWindow& window, bool saveBestState = true);
	~FireStarterComplete(void);
}; // class FireStarterEvolve
