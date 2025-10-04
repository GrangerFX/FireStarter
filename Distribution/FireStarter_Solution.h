// Run date: 10/04/25 16:14:06 Pacific Daylight Time
// Run duration = 23.233601 seconds
// Run test = 0
// Run generation = 2
// Run evolution = 0
// Run precision  = 2.80268335
// Run max result = 0.49514064
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_MONEYMAKER
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 256
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
        default:
        case 0:
            return sinf(n);
        case 1:
            return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
        case 2:
            return sinf(n * 1.2f) + n * 0.2f;
        case 3:
            return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

inline float Solution(float n)
{
    float r0 = -0.04228524f;
    float r1 = -0.69439590f;
    float r2 = -1.34499884f;
    float r3 = 0.78903592f;
    float r4 = -0.70370650f;
    float r5 = -1.98202825f;
    float r6 = -0.18887177f;
    float r7 = 0.67041212f;
    float r8 = -1.84172893f;
    float r9 = -1.11765099f;
    float r10 = 2.49280953f;
    float r11 = -2.48981285f;
    float r12 = 1.83463621f;
    float r13 = 0.95401406f;
    float r14 = 1.25048506f;
    float r15 = 2.18703461f;
    float r16 = 1.02724266f;
    float r17 = 2.12606716f;
    float r18 = -0.30676445f;
    float r19 = -1.74167252f;

        n *= r0;
        n *= r1;
        r2 = n;
        r3 = n;
        n *= r2;
        r4 = n;
            n += r4;
        n *= r5;
        n *= r6;
                n *= r8;
            n *= r10;
        n *= r11;
        n *= r6;
        n += r3;
        n += r12;
        n *= r13;
                n += r15;
                    n += r18;
            n += r5;
        n += r18;
        n *= r19;
        n *= r13;
    return n;
} // Solution
