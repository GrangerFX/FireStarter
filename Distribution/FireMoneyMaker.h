#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"

inline float MoneyMakerReturns(float tradingResult)
{
    if (!tradingResult)
        return 0.0f;
    float dailyPercent = 1.0f - tradingResult; // Reverse the inversion for FireStarter compatibility.
    return dailyPercent * MONEYMAKER_ANNUAL * 100.0f; // 252 trading days in a year.
} // MoneyMakerReturns