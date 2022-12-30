// Run date: 12/30/22 14:35:46 Pacific Standard Time
// Run duration = 402.966618 seconds
// Run count = 74
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 74

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

// Precision = 0.00000548

// Solution0 precision = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.21970813f;
    n = r1 *= n;
    n *= -0.38903102f;
    n += 1.96211839f;
    n *= 0.67050380f;
    r2 = n *= 1.81678092f;
    n *= -1.53321993f;
    r3 = n *= 0.11758290f;
    r4 = n *= 0.95095026f;
    n = r2 *= n;
    r5 = n *= 0.89139748f;
    r6 = n *= -3.61531138f;
    n = r1 *= n;
    r7 = n *= 0.00833074f;
    n *= r3;
    n *= -1.65311217f;
    n += 0.09667020f;
    n += -2.68046641f;
    n *= 0.04405176f;
    n = r6 *= n;
    n += 2.28067160f;
    n = r6 *= n;
    n = r1 += n;
    n *= r7;
    n *= r6;
    n += r1;
    n *= r5;
    n *= r2;
    n += r4;
    n *= r0;
    n += -0.00000000f;
    return n;
} // Solution0

// Solution1 precision = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= -0.10893796f;
    n = r1 *= n;
    n *= 1.07273173f;
    n += -1.66643500f;
    n *= 1.47945559f;
    r2 = n *= -1.26510465f;
    n *= 0.96661258f;
    r3 = n *= -0.08636337f;
    r4 = n *= 2.75411081f;
    n = r2 *= n;
    r5 = n *= -0.65880859f;
    r6 = n *= -1.67022920f;
    n = r1 *= n;
    r7 = n *= 0.15941289f;
    n *= r3;
    n *= 0.29948419f;
    n += -0.67386007f;
    n += -0.57501930f;
    n *= 0.06248456f;
    n = r6 *= n;
    n += 0.41287586f;
    n = r6 *= n;
    n = r1 += n;
    n *= r7;
    n *= r6;
    n += r1;
    n *= r5;
    n *= r2;
    n += r4;
    n *= r0;
    n += -0.11813187f;
    return n;
} // Solution1

// Solution2 precision = 0.00000548
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799312f;
    r1 = n *= 0.09044033f;
    n = r1 *= n;
    n *= -6.47464180f;
    n += 1.79244077f;
    n *= -1.14152515f;
    r2 = n *= -1.25745201f;
    n *= -0.40007019f;
    r3 = n *= -0.79783660f;
    r4 = n *= 1.15390289f;
    n = r2 *= n;
    r5 = n *= 0.80553585f;
    r6 = n *= 0.94426215f;
    n = r1 *= n;
    r7 = n *= 2.30289912f;
    n *= r3;
    n *= -2.07610846f;
    n += -6.01675415f;
    n += -2.88244462f;
    n *= -0.04127808f;
    n = r6 *= n;
    n += -1.27828121f;
    n = r6 *= n;
    n = r1 += n;
    n *= r7;
    n *= r6;
    n += r1;
    n *= r5;
    n *= r2;
    n += r4;
    n *= r0;
    n += 0.52359778f;
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
