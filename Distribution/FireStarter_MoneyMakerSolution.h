#pragma once
#include "MoneyMakerStocks.h"

// Run date: 08/26/26 18:16:14 Pacific Daylight Time
// Run duration = 1451.191149 seconds
// Run test = 0
// Run generation = 0
// Run evolution = 0
// Run max result = 0.99986023

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
// Run population = 16384
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
    float r0 = -0.97592139f;
    float r1 = 0.53646201f;
    float r2 = -0.98145878f;
    float r3 = -0.74371970f;
    float r4 = -0.62658840f;
    float r5 = -0.75332576f;
    float r6 = 0.84753257f;
    float r7 = -0.95698881f;
    float r8 = -0.62246138f;
    float r9 = 0.57574940f;
    float r10 = 0.34533766f;
    float r11 = -0.83913106f;
    float r12 = -0.62425256f;
    float r13 = -0.77561164f;
    float r14 = 0.39499620f;
    float r15 = -0.56273586f;
    float r16 = -0.61265546f;
    float r17 = -0.78079885f;
    float r18 = -0.54608202f;

    for (unsigned int d = 0; d < stock.numDays; d++) {
        n = stock[d];
        n += r0;
        r1 = n;
        n = r2;
        n = r3;
        n *= r0;
        n *= r4;
        n *= r5;
        n += r6;
        n += r4;
        n += r7;
        n *= r8;
        r9 = n;
        n += r10;
        n += r0;
        n += r3;
        r11 = n;
        n += r11;
        r9 = n;
        r12 = n;
        n *= r10;
        r13 = n;
        r7 = n;
        n *= r14;
        n *= r15;
        n = r10;
        n = r16;
        n *= r9;
        n = r6;
        n += r2;
        n *= r17;
        r18 = n;
        n = r1;
    }
    return n;
} // MoneyMakerSolution
