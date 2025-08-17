#pragma once

#include "FireStarterWindow.h"
#include "FireStarterGenerate.h"
#include "CUDAThread.h"

class FireStarterShow : public CUDAThread {
private:
	FireStarterWindow m_window;
    size_t m_evaluateSize = 0;
    size_t m_dataSize = 0;
    float* m_hostTargetData = nullptr;
    float* m_hostEvaluateData = nullptr;

    void DeallocateEvaluateData(void);
    void AllocateEvaluateData(size_t evaluateSize);
    void EvaluateData(const FireStarterState& state, unsigned int evaluateWidth, float thetaStart, float thetaEnd, unsigned int variation);
    void EvaluateSinSim(const FireStarterState& state, unsigned int evaluateWidth);

public:
	static void FireSolution(FireStarterWindow& window);
	void FireShow(const FireStarterState& state, bool sync = false);
	void ShowStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation, double generationTime, double runTime, bool sync = false);
	FireStarterShow(const FireStarterWindow& window);
	~FireStarterShow(void);
}; // class FireStarterShow