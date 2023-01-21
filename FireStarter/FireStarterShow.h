#pragma once

#include "FireStarterWindow.h"
#include "FireStarterGenerate.h"
#include "SerialOutput.h"
#include "CUDAThread.h"

class FireStarterShow : public CUDAThread {
private:
	FireStarterWindow m_window;
	FireStarterSettings m_settings;
	SerialOutput m_output;
	FireStarterGenerate* m_generate = nullptr;
	std::string m_fireShowCode;
	CUfunction m_fireShowFunction = nullptr;
	CUmodule m_fireShowModule = nullptr;
	FireStarterResults* m_fireShowResults = nullptr;
	FireStarterInstructions* m_fireShowInstructions = nullptr;

	bool LoadFireShowCode(void);

public:
	void FireShow(const FireStarterState& state, bool sync = false);
	void FireSolution(bool sync = false);
	void RenderStatus(const FireStarterState& bestState, const FireStarterState& state, double runTime, double generationTimee, double oldResult, double average, double testError, bool sync = false);
	FireStarterShow(FireStarterWindow* window, const FireStarterSettings& settings);
	~FireStarterShow(void);
}; // class FireStarterShow