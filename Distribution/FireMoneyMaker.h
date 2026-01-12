#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"

inline float MoneyMakerReturns(float tradingResult, unsigned int tradingDays = MONEYMAKER_TRADING)
{
    if (!tradingResult)
        return 0.0f;
    float tradingProfit = (1.0f / tradingResult) - 1.0f;
    return tradingProfit * (252.0f / tradingDays) * 100.0f; // 252 trading days in a year.
} // MoneyMakerReturns