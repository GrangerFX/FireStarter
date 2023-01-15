#pragma once
#include "FireStarterManager.h"
#include "FireStarterGenerate.h"
#include "FireStarterWindow.h"
#include "SerialOutput.h"
#include "CUDAThread.h"

class FireStarterComplete : public CUDAThread {
private:
	FireStarterSettings m_settings;
	FireStarterWindow* m_window;
	SerialOutput m_output;
	SimpleTimer m_timer;
	std::string m_solutionTargetCode;
	std::string m_fireShowCode;
	FireStarterGenerate* m_generate = nullptr;
	CUfunction m_fireShowFunction = nullptr;
	CUmodule m_fireShowModule = nullptr;
	FireStarterResults* m_fireShowResults = nullptr;
	FireStarterInstructions* m_fireShowInstructions = nullptr;
	FireStarterManager* m_manager = nullptr;
	size_t m_resultsCount = 0;
	size_t m_resultsGeneration = 0;
	double m_resultsTime = 0.0;
	double m_generationTime = 0.0;
	double m_totalResult = 0.0;
	float m_testError = 0.0f;

	bool LoadSolutionTargetCode(void);
	bool LoadFireShowCode(void);
	void FireShow(const FireStarterState& state);
	void RenderStatus(const FireStarterState& bestState, const FireStarterState& state, double runTime, double generationTimee, double oldResult, double average, double testError);
	void SaveBestState(const FireStarterState& bestState);
	void SaveBestCode(const FireStarterState& bestState);
	void SaveSolution(const FireStarterState& bestState, size_t generation, double generationTime);

public:
	void CompleteResults(FireStarterState& bestState, const FireStarterState& state, float oldResult = 0.0f);
	bool CompleteRandom(FireStarterState& bestState, bool sync = true);
	bool CompleteStates(FireStarterState& bestState, std::vector<FireStarterState>& oldStates, size_t generation, bool sync = true);
	void CompleteSolution(bool sync = false);
    FireStarterComplete(FireStarterManager* manager, FireStarterWindow* window, const FireStarterSettings& settings);
	~FireStarterComplete(void);
}; // class FireStarterEvolve
