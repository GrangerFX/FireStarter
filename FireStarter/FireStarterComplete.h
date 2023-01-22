#pragma once
#include "FireStarterManager.h"
#include "FireStarterGenerate.h"
#include "FireStarterShow.h"

class FireStarterComplete : public CUDAThread {
private:
	FireStarterWindow m_window;
	FireStarterShow m_fireShow;
	FireStarterSettings m_settings;
	std::vector<FireStarterState> m_allStates;
	FireStarterState m_bestState;
	SimpleTimer m_timer;
	FireStarterManager* m_manager = nullptr;
	FireStarterGenerate* m_generate = nullptr;
	std::string m_solutionTargetCode;
	size_t m_resultsCount = 0;
	size_t m_resultsGeneration = 0;
	double m_resultsTime = 0.0;
	double m_generationTime = 0.0;
	double m_totalResult = 0.0;
	float m_testError = 0.0f;

	void SaveBestState(const FireStarterState& bestState);
	void SaveBestCode(const FireStarterState& bestState);
	void SaveSolution(const FireStarterState& bestState, size_t generation, double generationTime);
	bool LoadSolutionTargetCode(void);

public:
	void CompleteResults(FireStarterState& bestState, const FireStarterState& state, float oldResult = 0.0f);
	bool CompleteRandom(FireStarterState& bestState, bool sync = true);
	bool CompleteState(FireStarterState& state, bool sync = false);
	bool CompleteStates(FireStarterState& bestState, std::vector<FireStarterState>& allStates, size_t generation, bool sync = true);
	void CompleteSolution(bool sync = false);
    FireStarterComplete(FireStarterManager* manager, const FireStarterWindow& window, const FireStarterSettings& settings);
	~FireStarterComplete(void);
}; // class FireStarterEvolve
