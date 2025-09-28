#pragma once

#include "FireStarterWindow.h"
#include "FireStarterGenerate.h"
#include "MoneyMakerStocks.h"
#include "CUDAThread.h"

class FireStarterShow : public CUDAThread {
private:
	FireStarterWindow m_window;
    size_t m_evaluateSize = 0;
    size_t m_dataSize = 0;
    std::vector<float> m_targetData;
    std::vector<float> m_evaluateData;

    void DeallocateEvaluateData(void);
    void AllocateEvaluateData(size_t evaluateSize);
    void EvaluateEvolve(const FireStarterState& state, unsigned int evaluateWidth, float thetaStart, float thetaEnd, unsigned int variation);
    void EvaluateSinSim(const FireStarterState& state, unsigned int evaluateWidth);
    void EvaluateMoneyMaker(const FireStarterState& state, const MoneyMakerStock& stock);

public:
    static void TestMoneyMaker(const FireStarterState& state, const MoneyMakerStock& stock, float* tradingPercent);
    static void FireSolution(FireStarterWindow& window);
	void FireShow(const FireStarterState& state, const MoneyMakerStocks *stocks = nullptr);
	void ShowStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation, double generationTime, double runTime, bool sync = false);
	FireStarterShow(const FireStarterWindow& window);
	~FireStarterShow(void);
}; // class FireStarterShow