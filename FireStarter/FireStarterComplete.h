#pragma once
#include "FireStarterManager.h"
#include "FireStarterGenerate.h"
#include "FireStarterUtil.h"
#include "SerialOutput.h"
#include "CUDAThread.h"

class FireStarterComplete : public CUDAThread {
private:
	FireStarterSettings m_settings;
	FrameBuffer m_buffer;
	SerialOutput m_output;
	SimpleTimer m_timer;
	std::string m_solutionTargetCode;
	std::string m_fireShowCode;
	FireStarterGenerate* m_generate = nullptr;
	CUfunction m_fireShowFunction = nullptr;
	CUmodule m_fireShowModule = nullptr;
	FireStarterResult* m_fireShowResult = nullptr;
	FireStarterInstructions* m_fireShowInstructions = nullptr;
	FireStarterManager* m_manager = nullptr;
	void* m_window = nullptr;
	size_t m_resultsCount = 0;
	size_t m_resultsGeneration = 0;
	double m_resultsTime = 0.0;
	double m_smoothTime = 0.0;
	double m_totalResult = 0.0;
	unsigned int m_width = 0;
	unsigned int m_height = 0;

	bool LoadSolutionTargetCode(void);
	bool LoadFireShowCode(void);
	void DisplayImage(const unsigned char* pixels);
	void FireShow(const FireStarterState& state);
	void FireShowSolution(void);
	void RenderStatus(const FireStarterState& bestState, const FireStarterState& state, double runTime, double generationTimee, double result, double average, double testError);
	void SaveBestState(const FireStarterState& bestState);
	void SaveBestCode(const FireStarterState& bestState);
	void SaveSolution(const FireStarterState& bestState, unsigned int generation, double generationTime);

public:
	void CompleteResults(FireStarterState& bestState, const FireStarterState& state);
	bool CompleteRandom(FireStarterState& bestState);
	bool CompleteStates(FireStarterState& bestState, std::vector<FireStarterState>& oldStates, unsigned int generation);
	void CompleteSolution(void);
	void CompleteInit(void* window, unsigned int width, unsigned int height);
    FireStarterComplete(const FireStarterSettings& settings, FireStarterManager* manager = nullptr);
	~FireStarterComplete(void);
}; // class FireStarterEvolve
