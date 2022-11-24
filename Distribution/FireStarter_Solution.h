// Run date: 11/24/22 12:01:24 Pacific Standard Time
// Run duration = 6.771470 seconds
// Run count = 2
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 100;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 2

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00462842

// Solution0 precision = 0.00066018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.53087896f;
    r1 = n += 0.76035827f;
    r2 = n += 0.77174246f;
    r3 = n += 0.97505891f;
    r4 = n *= 0.13448122f;
    r5 = n *= 0.01849359f;
    n += r5;
    r5 = n += -0.28825554f;
    n = r4 *= n;
    r6 = n *= 0.23445484f;
    r7 = n += -0.08203281f;
    n = r7 *= n;
    r8 = n += -1.00713897f;
    n *= r0;
    n += r1;
    n += r2;
    n += r3;
    n *= r4;
    n += 2.42468214f;
    n += -1.50422335f;
    n *= 11.15852356f;
    n += -4.21149445f;
    r4 = n += -1.94264865f;
    r3 = n += 7.97712183f;
    n *= r3;
    n += -3.17469358f;
    n += r5;
    n += r4;
    n *= r6;
    n = r7 += n;
    n *= r7;
    n += r8;
    return n;
} // Solution0

// Solution1 precision = 0.00061989
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.45522639f;
    r1 = n += 2.14386916f;
    r2 = n += 2.31400299f;
    r3 = n += -2.44454384f;
    r4 = n *= -0.36182681f;
    r5 = n *= -0.19723216f;
    n += r5;
    r5 = n += -0.80434340f;
    n = r4 *= n;
    r6 = n *= -0.31347260f;
    r7 = n += -0.61468673f;
    n = r7 *= n;
    r8 = n += -1.83632922f;
    n *= r0;
    n += r1;
    n += r2;
    n += r3;
    n *= r4;
    n += 3.19572473f;
    n += 0.16425152f;
    n *= -0.92289346f;
    n += 2.02552009f;
    r4 = n += 1.98723102f;
    r3 = n += -0.87266928f;
    n *= r3;
    n += -14.00957012f;
    n += r5;
    n += r4;
    n *= r6;
    n = r7 += n;
    n *= r7;
    n += r8;
    return n;
} // Solution1

// Solution2 precision = 0.00462842
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 0.27018616f;
    r1 = n += -0.31425381f;
    r2 = n += 0.15319784f;
    r3 = n += -1.10969484f;
    r4 = n *= 0.73646939f;
    r5 = n *= -0.02773274f;
    n += r5;
    r5 = n += 0.62305993f;
    n = r4 *= n;
    r6 = n *= 0.89215142f;
    r7 = n += 0.80512577f;
    n = r7 *= n;
    r8 = n += -0.72958642f;
    n *= r0;
    n += r1;
    n += r2;
    n += r3;
    n *= r4;
    n += -0.72652799f;
    n += 0.04460146f;
    n *= 0.70845389f;
    n += -1.43041062f;
    r4 = n += -1.30053055f;
    r3 = n += -0.07456019f;
    n *= r3;
    n += -2.96667027f;
    n += r5;
    n += r4;
    n *= r6;
    n = r7 += n;
    n *= r7;
    n += r8;
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
