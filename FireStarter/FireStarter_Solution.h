#include <math.h>

// Run date: 03/05/22 13:08:12 Pacific Standard Time
// Run duration = 0.459597 seconds
// Run count = 624
// Run units = 1
// Run population = 4352
// Run iterations = 1024
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_VARIATIONS 4

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 2:
        return sinf(n * 1.2f) + n * 0.2f;
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // Target

// Precision = 0.003016
// Solution0 precision = 0.002573
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.88234782f;
    r0 = n;
    n *= -0.11446305f;
    n += 0.63403469f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -2.16349292f;
    n += 0.64894181f;
    r2 = n;
    n *= -1.12214279f;
    r3 = n;
    n += 0.70886976f;
    n += 1.04720378f;
    r4 = n;
    n *= 0.89812475f;
    r5 = n;
    n += r2;
    n += 0.63604683f;
    r2 = n;
    n = fabsf(n);
    n += -0.89418554f;
    r6 = n;
    n += -1.29501224f;
    r7 = n;
    n *= r3;
    n *= -5.20343208f;
    n *= r6;
    n += 1.05037487f;
    r6 = n;
    n *= r6;
    n *= 1.02998769f;
    r6 = n;
    n = fabsf(n);
    n *= 0.62378341f;
    n += r2;
    n += r4;
    n *= -0.12169664f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution0
// Solution1 precision = 0.000123
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 1.48898518f;
    r0 = n;
    n *= 0.21977244f;
    n += 0.42346761f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -0.19182076f;
    n += -4.52895737f;
    r2 = n;
    n *= 0.99772763f;
    r3 = n;
    n += -1.33948851f;
    n += 0.20698239f;
    r4 = n;
    n *= -1.00896132f;
    r5 = n;
    n += r2;
    n += 1.03667140f;
    r2 = n;
    n = fabsf(n);
    n += -1.49399281f;
    r6 = n;
    n += -0.68638372f;
    r7 = n;
    n *= r3;
    n *= -1.80259705f;
    n *= r6;
    n += -0.85358149f;
    r6 = n;
    n *= r6;
    n *= 0.14344981f;
    r6 = n;
    n = fabsf(n);
    n *= -7.80378580f;
    n += r2;
    n += r4;
    n *= -1.22929442f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution1
// Solution2 precision = 0.003016
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.09627523f;
    r0 = n;
    n *= -0.19942401f;
    n += -0.02559705f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -0.37549636f;
    n += -0.11166549f;
    r2 = n;
    n *= -0.26604918f;
    r3 = n;
    n += 0.40260980f;
    n += -0.49893168f;
    r4 = n;
    n *= 13.21997643f;
    r5 = n;
    n += r2;
    n += 0.09791765f;
    r2 = n;
    n = fabsf(n);
    n += 4.93647003f;
    r6 = n;
    n += -3.94533277f;
    r7 = n;
    n *= r3;
    n *= -0.41060323f;
    n *= r6;
    n += -0.04883850f;
    r6 = n;
    n *= r6;
    n *= -1324.15319824f;
    r6 = n;
    n = fabsf(n);
    n *= 1.84580934f;
    n += r2;
    n += r4;
    n *= -0.00419481f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution2
// Solution3 precision = 0.000000
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.50091183f;
    r0 = n;
    n *= 0.12914377f;
    n += -0.88844472f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -0.96010250f;
    n += 0.30778763f;
    r2 = n;
    n *= 0.94012433f;
    r3 = n;
    n += -0.00109366f;
    n += -0.07443994f;
    r4 = n;
    n *= 0.81694436f;
    r5 = n;
    n += r2;
    n += -1.92657423f;
    r2 = n;
    n = fabsf(n);
    n += -1.14999044f;
    r6 = n;
    n += -0.42080605f;
    r7 = n;
    n *= r3;
    n *= -15.20729256f;
    n *= r6;
    n += 16.23043442f;
    r6 = n;
    n *= r6;
    n *= -0.00000000f;
    r6 = n;
    n = fabsf(n);
    n *= -5.90459156f;
    n += r2;
    n += r4;
    n *= 14.00097656f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution3
