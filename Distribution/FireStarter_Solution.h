// Run date: 11/09/25 09:50:52 Pacific Standard Time
// Run duration = 353.007205 seconds
// Run test = 0
// Run generation = 2
// Run evolution = 0
// Run precision  = 10.00000000
// Run max result = 0.73361981
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
    float r0 = 2.26632118f;
    float r1 = -0.62837791f;
    float r2 = 1.23506355f;
    float r3 = 2.27401733f;
    float r4 = -2.35516191f;
    float r5 = 1.66321421f;
    float r6 = -0.11860473f;
    float r7 = 0.63944370f;
    float r8 = -1.22333789f;
    float r9 = 0.77324736f;
    float r10 = -0.52557832f;
    float r11 = 0.31168708f;
    float r12 = -2.52478456f;
    float r13 = 1.91886842f;
    float r14 = 0.59443736f;
    float r15 = -2.23311281f;
    float r16 = -2.13942790f;
    float r17 = -2.41150308f;
    float r18 = 1.73073006f;

        n *= r0;
            n += r2;
        n += r3;
        n += r4;
                    n += r8;
        r9 = n;
        n += r10;
        r10 = n;
        n *= r11;
        r4 = n;
        n *= r12;
        n *= r10;
        n += r0;
        n += r9;
        n += r13;
            n += r14;
        n += r13;
        n += r8;
            n *= r2;
        n += r16;
        n += r4;
            n *= r14;
        n *= r17;
            n += r18;
    return n;
} // Solution
