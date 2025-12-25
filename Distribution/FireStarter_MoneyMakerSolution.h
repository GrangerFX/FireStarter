#pragma once
#include "MoneyMakerStocks.h"

// Run date: 12/24/25 19:38:02 Pacific Standard Time
// Run duration = 565.782020 seconds
// Run test = 0
// Run generation = 1
// Run evolution = 0
// Run max result = 0.85486108

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run stocks = 8
// Run sessions = 8
// Run history = 496
// Run variation = 360
// Run warmup = 16
// Run trading = 120
// Run funds = 1000.000000f

// Run mode = FIRESTARTER_MONEYMAKER
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 1
// Run passes = 32
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
    float r0 = -2.44008374f;
    float r1 = 0.85948527f;
    float r2 = -0.77218270f;
    float r3 = 0.64161152f;
    float r4 = -0.18241471f;
    float r5 = 0.78227270f;
    float r6 = -0.65188563f;
    float r7 = -0.30734134f;
    float r8 = 0.54987937f;
    float r9 = -0.50171340f;
    float r10 = 1.05678558f;
    float r11 = 0.29736501f;
    float r12 = -0.25562993f;
    float r13 = -0.27431664f;
    float r14 = 0.88927233f;
    float r15 = -0.38398620f;
    float r16 = -0.83253986f;
    float r17 = 0.57168841f;

    for (unsigned int d = 0; d < stock.numDays; d++) {
        n = stock[d];
        n *= r0;
        n *= r1;
        r2 = n;
        n += r3;
        n *= r4;
        r5 = n;
        n += r6;
        n *= r5;
        n += r7;
        r7 = n;
        r8 = n;
        r9 = n;
        r10 = n;
        n += r11;
        n += r11;
        r12 = n;
        n *= r10;
        r4 = n;
        n += r6;
        r2 = n;
        n += r13;
        n *= r14;
        n += r7;
        r10 = n;
        n += r1;
        n += r10;
        n += r6;
        n *= r15;
        n += r8;
        r16 = n;
        r4 = n;
        n *= r17;
    }
    return n;
} // MoneyMakerSolution
