#pragma once
#include "MoneyMakerStocks.h"

// Run date: 01/25/26 10:11:50 Pacific Standard Time
// Run duration = 1773.853043 seconds
// Run test = 0
// Run generation = 1
// Run evolution = 0
// Run max result = 0.44176134

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run stocks = 8
// Run sessions = 64
// Run history = 488
// Run variation = 360
// Run tradingMin = 32
// Run tradingMax = 64
// Run funds = 1000.000000f

// Run mode = FIRESTARTER_MONEYMAKER
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 348160
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
    float r0 = -0.13737281f;
    float r1 = -0.12786625f;
    float r2 = -0.13342004f;
    float r3 = -0.83649182f;
    float r4 = 0.81395257f;
    float r5 = -0.54490775f;
    float r6 = 0.05466425f;
    float r7 = 0.99357867f;
    float r8 = -0.49835980f;
    float r9 = 0.56184435f;
    float r10 = -0.97374141f;
    float r11 = -0.27562049f;
    float r12 = 0.44130409f;
    float r13 = -0.36935189f;
    float r14 = 0.04442475f;
    float r15 = -0.43033594f;
    float r16 = 0.30532435f;
    float r17 = 0.19291252f;
    float r18 = -0.81118339f;

    for (unsigned int d = 0; d < stock.numDays; d++) {
        n = stock[d];
        r0 = n;
        r1 = n;
        r2 = n;
        r3 = n;
        n += r4;
        r5 = n;
        n += r6;
        n += r7;
        r8 = n;
        n += r9;
        n *= r6;
        n *= r10;
        r6 = n;
        n *= r11;
        r10 = n;
        r5 = n;
        r4 = n;
        n += r2;
        n *= r12;
        n += r4;
        n += r9;
        n += r9;
        n *= r13;
        n += r14;
        n += r3;
        n *= r15;
        r16 = n;
        r8 = n;
        n += r17;
        r18 = n;
        r14 = n;
        n *= r7;
    }
    return n;
} // MoneyMakerSolution
