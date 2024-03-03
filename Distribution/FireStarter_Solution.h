// Run date: 03/03/24 13:55:20 Pacific Standard Time
// Run duration = 1031.459940 seconds
// Run generation = 80
// Run evolution = 10
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

inline float SolutionTarget(float n, unsigned int variation)
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
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159250f;
    r1 = n *= 0.80632275f;
    n *= -0.23945197f;
    n *= r1;
    n += 0.81161708f;
    n *= 0.15259945f;
    n += 0.34886953f;
    r1 = n *= 0.40201688f;
    r2 = n *= -9.37610817f;
    n += 0.89805210f;
    r3 = n *= 0.07652090f;
    n += r1;
    r1 = n *= 1.30377102f;
    n = r1 += n;
    n = r1 *= n;
    r4 = n += 1.69791806f;
    r5 = n += -1.46845913f;
    r6 = n *= 0.35278678f;
    n = r6 += n;
    n += r5;
    n += -14.51125431f;
    n += r2;
    n *= r1;
    n *= r0;
    n *= 0.07533270f;
    n *= r6;
    n *= r3;
    r3 = n *= 0.01718830f;
    n *= -16936.55664062f;
    n *= r4;
    n += r3;
    n += 0.00000008f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065890f;
    r1 = n *= 2.16853356f;
    n *= -0.79492271f;
    n *= r1;
    n += 18.40926743f;
    n *= 0.84956175f;
    n += 0.62310493f;
    r1 = n *= -0.01351334f;
    r2 = n *= 1.67035031f;
    n += -2.72191668f;
    r3 = n *= 0.71749461f;
    n += r1;
    r1 = n *= -0.01982197f;
    n = r1 += n;
    n = r1 *= n;
    r4 = n += -0.79898250f;
    r5 = n += 0.86484110f;
    r6 = n *= -1.70706439f;
    n = r6 += n;
    n += r5;
    n += -2115.59155273f;
    n += r2;
    n *= r1;
    n *= r0;
    n *= 0.27374861f;
    n *= r6;
    n *= r3;
    r3 = n *= 0.41513911f;
    n *= 0.17477034f;
    n *= r4;
    n += r3;
    n += -0.11813191f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= -0.00799810f;
    n *= 7744.88720703f;
    n *= r1;
    n += -2.57896614f;
    n *= 0.24900234f;
    n += -0.78763837f;
    r1 = n *= -1.34747839f;
    r2 = n *= 1.03380501f;
    n += -1.13538599f;
    r3 = n *= -0.79895282f;
    n += r1;
    r1 = n *= 0.23957551f;
    n = r1 += n;
    n = r1 *= n;
    r4 = n += 0.97195429f;
    r5 = n += 0.56899488f;
    r6 = n *= -4.23692656f;
    n = r6 += n;
    n += r5;
    n += -3.04134750f;
    n += r2;
    n *= r1;
    n *= r0;
    n *= 0.24304672f;
    n *= r6;
    n *= r3;
    r3 = n *= -0.12719665f;
    n *= -1.16553354f;
    n *= r4;
    n += r3;
    n += 0.52359873f;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
    return 0.0f;
} // Solution
