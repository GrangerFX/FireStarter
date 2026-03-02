#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"

#define ANNUAL_TRADING_DAYS 252 // Trading days per year for annualized returns.

inline float MoneyMakerReturns(float dailyPercent)
{
    if (!dailyPercent)
        return 0.0f;
    return dailyPercent * ANNUAL_TRADING_DAYS * 100.0f; // 252 trading days in a year.
} // MoneyMakerReturns