#pragma once
#include "MoneyMakerStocks.h"

// Run date: 11/24/25 09:31:04 Pacific Standard Time
// Run duration = 777.567814 seconds
// Run test = 0
// Run generation = 2
// Run evolution = 0
// Run max result = 0.86888015

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run stocks = 8
// Run sessions = 64
// Run history = 257
// Run variation = 180
// Run warmup = 16
// Run trading = 60
// Run funds = 1000.000000f

// Run mode = FIRESTARTER_MONEYMAKER
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 10
// Run passes = 256
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
    float r0 = -1.23082399f;
    float r1 = 1.60799551f;
    float r2 = 0.30947921f;
    float r3 = -3.94848347f;
    float r4 = -0.04392180f;
    float r5 = -0.55310869f;
    float r6 = 1.89698792f;
    float r7 = 0.21880357f;
    float r8 = 1.20645881f;
    float r9 = -1.88717222f;
    float r10 = 0.66342527f;
    float r11 = -0.22632650f;
    float r12 = 1.03582168f;
    float r13 = -0.73533946f;
    float r14 = 2.45333695f;
    float r15 = 2.17743874f;
    float r16 = 1.28136349f;
    float r17 = 0.49313217f;
    float r18 = 0.32965958f;
    float r19 = 2.36777568f;
    float r20 = -1.96500075f;

    for (unsigned int d = 0; d < stock.numDays; d++) {
        n = stock[d];
        n *= r0;
        n += r1;
        r2 = n;
        n *= r3;
        n += r4;
        r5 = n;
        n += r6;
        n *= r7;
        r8 = n;
        r7 = n;
        n += r9;
        r10 = n;
        n *= r11;
        n *= r12;
        n += r2;
        r10 = n;
        r13 = n;
        n += r5;
        r14 = n;
        r15 = n;
        r3 = n;
        n += r16;
        n *= r17;
        n += r18;
        r6 = n;
        n *= r10;
        r14 = n;
        n *= r5;
        n *= r12;
        n *= r19;
        n *= r20;
        r14 = n;
    }
    return n;
} // MoneyMakerSolution
