#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"

inline float MoneyMakerReturns(float dailyPercent)
{
    if (!dailyPercent)
        return 0.0f;
    return dailyPercent * MONEYMAKER_ANNUAL * 100.0f; // 252 trading days in a year.
} // MoneyMakerReturns