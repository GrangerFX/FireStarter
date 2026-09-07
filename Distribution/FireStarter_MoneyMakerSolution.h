#pragma once
#include "MoneyMakerStocks.h"

// Run date: 09/07/26 10:06:09 Pacific Daylight Time
// Run duration = 181.645033 seconds
// Run test = 0
// Run generation = 0
// Run evolution = 0
// Run max result = 0.99996638

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
    float r0 = -0.05105263f;
    float r1 = 0.22463600f;
    float r2 = 0.28204021f;
    float r3 = -0.73785114f;
    float r4 = 0.59321547f;
    float r5 = -0.05199429f;
    float r6 = -0.05131830f;
    float r7 = 0.77488261f;
    float r8 = 0.79226828f;
    float r9 = 0.51709831f;
    float r10 = -0.80317664f;
    float r11 = 0.43894345f;
    float r12 = 0.49797079f;
    float r13 = -0.30352911f;
    float r14 = 0.61165750f;
    float r15 = -0.08345101f;
    float r16 = 0.39122903f;
    float r17 = 0.80339384f;
    float r18 = -0.20877813f;
    float r19 = -0.24681255f;
    float r20 = 0.87048894f;

    for (unsigned int d = 0; d < stock.numDays; d++) {
        n = stock[d];
        n = r0 *= n;
        n = r1 += n;
        n = r2 += n;
        n = r3 *= n;
        n = r4 += n;
        n = r5 *= n;
        n = r6 *= n;
        n = r7 *= n;
        n = r8 *= n;
        n = r9 *= n;
        n = r10 += n;
        n = r3 *= n;
        n = r8 *= n;
        n = r11 *= n;
        n = r12 *= n;
        n = r13 *= n;
        n = r14 *= n;
        n = r14 *= n;
        n = r15 += n;
        n = r14 *= n;
        n = r16 *= n;
        n = r11 *= n;
        n = r17 *= n;
        n = r5 += n;
        n = r1 *= n;
        n = r8 *= n;
        n = r6 *= n;
        n = r18 *= n;
        n = r19 *= n;
        n = r20 += n;
        n = r9 *= n;
        n = r3 += n;
    }
    return n;
} // MoneyMakerSolution
