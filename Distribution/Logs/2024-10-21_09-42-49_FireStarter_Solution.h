// Run date: 10/21/24 09:42:49 Pacific Daylight Time
// Run duration = 226.500067 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000022
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1


inline float Solution(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.11853274f;
    r1 = n *= 0.90123016f;
    n += r0;
    n += 0.70798314f;
    n *= r1;
    r1 = n *= -1.56278408f;
    r0 = n *= 1.00355315f;
    n *= 1.34312320f;
    n *= -6.18724346f;
    n += r0;
    r0 = n *= -0.00322303f;
    n += -0.41819924f;
    n *= -1.51390374f;
    r2 = n *= 0.55524677f;
    n += -0.93890923f;
    r3 = n *= 0.49009392f;
    n = r1 *= n;
    n += -0.92988491f;
    n = r0 += n;
    r4 = n *= 1.74985218f;
    n += -5.71397924f;
    n = r2 *= n;
    n = r4 += n;
    n *= r4;
    n *= r0;
    n *= -1.53077757f;
    n *= r1;
    n *= r3;
    r3 = n *= -1.56973946f;
    n *= 1.65866661f;
    n += r2;
    n *= r3;
    return n;
} // Solution
