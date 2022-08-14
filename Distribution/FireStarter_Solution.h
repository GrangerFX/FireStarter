// Run date: 08/14/22 13:19:46 Pacific Daylight Time
// Run duration = 2.503317 seconds
// Run count = 7
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
// Run population = 139264;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 700

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

// Precision = 0.00000131

// Solution0 precision = 0.00000054
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159274f;
    r0 = n *= -0.56103218f;
    n *= 0.90184647f;
    r1 = n *= 0.65021449f;
    n = r0 *= n;
    n += -1.50366986f;
    r2 = n *= -0.05005617f;
    r3 = n += 0.70062578f;
    r4 = n *= 0.56282896f;
    n *= r0;
    n = r2 += n;
    n += 0.00123739f;
    n *= -1.04056978f;
    r0 = n += 0.71522182f;
    n += r2;
    n = r3 += n;
    n += -0.00946319f;
    n *= -1.25656950f;
    r2 = n += -0.78102779f;
    n = r3 *= n;
    n *= r1;
    n = r0 *= n;
    n *= r2;
    n *= -0.21462739f;
    n = r3 *= n;
    n *= 2.03644013f;
    n *= r4;
    r4 = n += 1.46424425f;
    n *= -1.00000000f;
    n += r3;
    n += r0;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.00000131
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065843f;
    r0 = n *= -0.61309463f;
    n *= -1.43521440f;
    r1 = n *= -0.58814961f;
    n = r0 *= n;
    n += -1.98069489f;
    r2 = n *= -0.00408158f;
    r3 = n += 0.27627537f;
    r4 = n *= -0.68619293f;
    n *= r0;
    n = r2 += n;
    n += 1.79000378f;
    n *= 0.79419190f;
    r0 = n += 0.92085338f;
    n += r2;
    n = r3 += n;
    n += -1.81004798f;
    n *= 0.13178684f;
    r2 = n += 0.23005600f;
    n = r3 *= n;
    n *= r1;
    n = r0 *= n;
    n *= r2;
    n *= 0.02887951f;
    n = r3 *= n;
    n *= 0.03686679f;
    n *= r4;
    r4 = n += -2.02831674f;
    n *= -0.94175875f;
    n += r3;
    n += r0;
    n += r4;
    return n;
} // Solution1

// Solution2 precision = 0.00000040
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799383f;
    r0 = n *= -0.84561396f;
    n *= 1.55194235f;
    r1 = n *= -0.92469907f;
    n = r0 *= n;
    n += -0.55959380f;
    r2 = n *= -0.12178326f;
    r3 = n += -0.70032489f;
    r4 = n *= 0.00557687f;
    n *= r0;
    n = r2 += n;
    n += 0.29301712f;
    n *= 0.06547260f;
    r0 = n += -0.74619889f;
    n += r2;
    n = r3 += n;
    n += -0.43930972f;
    n *= 0.02512865f;
    r2 = n += -0.59622312f;
    n = r3 *= n;
    n *= r1;
    n = r0 *= n;
    n *= r2;
    n *= -0.73333180f;
    n = r3 *= n;
    n *= 0.04486044f;
    n *= r4;
    r4 = n += 1.18366075f;
    n *= -0.55764455f;
    n += r3;
    n += r0;
    n += r4;
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
