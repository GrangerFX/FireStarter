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
    size_t m_evaluateSize = 0;
    size_t m_dataSize = 0;
    size_t m_codeSize = 0;
    float* m_hostTargetData = nullptr;
    float* m_hostEvaluateData = nullptr;
    float* m_deviceTargetData = nullptr;
    float* m_deviceEvaluateData = nullptr;
    float* m_deviceData = nullptr;
    float* m_deviceCode = nullptr;

    bool LoadFireEvaluator(const FireStarterSettings& settings);
    void DeallocateEvaluateData(void);
    void DeallocateCodeData(void);
    void AllocateEvaluateData(size_t evaluateSize, size_t codeSize, size_t dataSize);
    void EvaluateData(const FireStarterState& state, unsigned int evaluateWidth, float thetaStart, float thetaEnd, unsigned int variation);
    void EvaluateSinSim(const FireStarterState& state, unsigned int evaluateWidth);

public:
	static void FireSolution(FireStarterWindow& window);
	void FireShow(const FireStarterState& state, bool sync = false);
	void ShowStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation, double generationTime, double runTime, bool sync = false);
	FireStarterShow(const FireStarterWindow& window);
	~FireStarterShow(void);
}; // class FireStarterShow