#pragma once
#include "FireStarterManager.h"
#include "FireStarterGenerate.h"
#include "FireStarterUtil.h"
#include "SerialThread.h"
#include "SerialOutput.h"
#include "CUDAContext.h"

class FireStarterComplete : public SerialThread {
private:
	FireStarterSettings m_settings;
	SerialOutput m_output;
	FrameBuffer m_buffer;
	SimpleTimer m_timer;
	std::string m_solutionTargetCode;
	std::string m_fireShowCode;
	CUDAContext* m_fireShowContext = nullptr;
	CUfunction m_fireShowFunction = nullptr;
	CUmodule m_fireShowModule = nullptr;
	FireStarterResult* m_fireShowResult = nullptr;
	FireStarterInstructions* m_fireShowInstructions = nullptr;
	FireStarterGenerate* m_generate = nullptr;
	CUDAContext* m_generateContext = nullptr;
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
	void FireShow(const FireStarterState& state);
	float DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation);
	void RenderStatus(const FireStarterState& bestState, const FireStarterState& state, double runTime, double generationTimee, double result, double average, double testError);
	void RenderImage(unsigned int width, unsigned int height, const unsigned char* pixels);
	void SaveBestState(const FireStarterState& bestState);
	void SaveBestCode(const FireStarterState& bestState);
	void SaveSolution(const FireStarterState& bestState, unsigned int generation, double generationTime);

public:
	void CompleteResults(FireStarterState& bestState, const FireStarterState& state);
	bool CompleteRandom(FireStarterManager* manager, FireStarterState& bestState);
	bool CompleteStates(FireStarterManager* manager, FireStarterState& bestState, std::vector<FireStarterState>& oldStates, unsigned int generation);
	void CompleteSolution(void);
	void CompleteInit(void* window, unsigned int width, unsigned int height);
    FireStarterComplete(const FireStarterSettings& settings);
	~FireStarterComplete(void);
}; // class FireStarterEvolve
