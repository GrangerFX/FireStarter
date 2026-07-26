#pragma once
#include "MoneyMakerStocks.h"

// Run date: 07/26/26 14:27:41 Pacific Daylight Time
// Run duration = 133.746063 seconds
// Run test = 0
// Run generation = 1
// Run evolution = 0
// Run max result = 0.99985176

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

// Run stocks = 1
// Run sessions = 256
// Run history = 384
// Run variation = 256
// Run trading = 64
// Run funds = 1000.000000f

// Run mode = FIRESTARTER_MONEYOPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 196608
// Run generations = 1
// Run passes = 384
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f



inline float MoneyMakerSolution(MoneyMakerStock& stock)
{
    float n = 0.0f;
    float r0 = 0.75704956f;
    float r1 = -0.92630017f;
    float r2 = -0.27036074f;
    float r3 = 0.26260376f;
    float r4 = 0.27732283f;
    float r5 = -0.14258401f;
    float r6 = 0.08169714f;
    float r7 = 0.63302332f;
    float r8 = -0.44506016f;
    float r9 = 0.67114621f;
    float r10 = -0.40140522f;
    float r11 = 0.27736554f;
    float r12 = -0.22825547f;
    float r13 = 0.36515242f;
    float r14 = 0.28296751f;
    float r15 = 0.89736181f;
    float r16 = -0.08160832f;
    float r17 = 0.95927006f;
    float r18 = -0.93500090f;
    float r19 = 0.23775847f;
    float r20 = 0.60703427f;
    float r21 = -0.62293029f;

    for (unsigned int d = 0; d < stock.numDays; d++) {
        n = stock[d];
        n *= r0;
        r1 = n;
        r2 = n;
        r3 = n;
        n *= r4;
        n += r5;
        r1 = n;
        n = r6;
        n = r7;
        r8 = n;
        r9 = n;
        r5 = n;
        r10 = n;
        r11 = n;
        r12 = n;
        r13 = n;
        n = r14;
        r1 = n;
        n += r15;
        r16 = n;
        n += r17;
        r18 = n;
        n += r17;
        n = r13;
        r15 = n;
        r18 = n;
        r19 = n;
        n *= r11;
        n *= r20;
        n += r3;
        n *= r7;
        n += r21;
    }
    return n;
} // MoneyMakerSolution
