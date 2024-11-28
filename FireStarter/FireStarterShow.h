#pragma once

#include "FireStarterWindow.h"
#include "FireStarterGenerate.h"
#include "CUDAThread.h"

class FireStarterShow : public CUDAThread {
private:
	FireStarterWindow m_window;
	std::string m_fireEvaluateCode;
	CUfunction m_fireEvaluateFunction = nullptr;
	CUmodule m_fireEvaluateModule = nullptr;

	void LoadFireEvaluator(void);

public:
	static void FireSolution(FireStarterWindow& window);
	void FireShow(const FireStarterState& state, bool sync = false);
	void ShowStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation, double generationTime, double runTime, double bestError, bool sync = false);
	FireStarterShow(const FireStarterWindow& window);
	~FireStarterShow(void);
}; // class FireStarterShow