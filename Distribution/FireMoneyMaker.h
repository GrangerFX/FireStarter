#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"

inline float AnnualizedReturns(float tradingResult, unsigned int tradingDays = MONEYMAKER_TRADING)
{
    if (!tradingResult)
        return 0.0f;
    float tradingProfit = (1.0f / tradingResult) - 1.0f;
    float annualProfit = tradingProfit * (252.0f / tradingDays);
    return (tradingProfit + 1.0f) * 100.0f;
} // AnnualizedReturns