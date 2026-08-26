#pragma once
#include "MoneyMakerStocks.h"

// Run date: 08/26/26 11:44:07 Pacific Daylight Time
// Run duration = 463.233327 seconds
// Run test = 0
// Run generation = 0
// Run evolution = 0
// Run max result = 0.99938369

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

// Run stocks = 4
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
    float r0 = -0.79709959f;
    float r1 = 0.14007784f;
    float r2 = 0.43271270f;
    float r3 = -0.86444610f;
    float r4 = 0.99065614f;
    float r5 = -0.96328735f;
    float r6 = -0.55096495f;
    float r7 = 0.30948189f;
    float r8 = -0.41280749f;
    float r9 = -0.73599893f;
    float r10 = -0.13529176f;
    float r11 = -0.64560074f;
    float r12 = 0.06013080f;
    float r13 = -0.95382369f;
    float r14 = 0.13389470f;
    float r15 = 0.27548701f;
    float r16 = -0.37427714f;
    float r17 = 0.29901204f;

    for (unsigned int d = 0; d < stock.numDays; d++) {
        n = stock[d];
        r0 = n;
        n = r1;
        r2 = n;
        n *= r3;
        r4 = n;
        n *= r5;
        n += r6;
        r1 = n;
        n = r7;
        n += r8;
        n = r7;
        n = r9;
        r10 = n;
        n *= r11;
        r6 = n;
        n *= r12;
        n += r13;
        r2 = n;
        r1 = n;
        r7 = n;
        n *= r14;
        n = r13;
        n += r0;
        n += r15;
        r6 = n;
        r16 = n;
        n += r17;
        n += r8;
        r12 = n;
        n = r4;
        n += r9;
        n *= r4;
    }
    return n;
} // MoneyMakerSolution
