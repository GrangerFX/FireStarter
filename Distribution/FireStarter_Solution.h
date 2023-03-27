// Run date: 03/26/23 19:42:31 Pacific Daylight Time
// Run duration = 2989.520570 seconds
// Run generation = 562
// Run result = 0.00000781
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

// Solution0 result = 0.00000781
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -0.03037297f;
    n *= 1.75771010f;
    r2 = n *= -0.88255525f;
    n *= r1;
    n *= -14.48663044f;
    n *= -0.00358544f;
    n *= -3.41430712f;
    n *= -9.39627457f;
    r1 = n += -1.39493549f;
    r3 = n *= -0.17766860f;
    n = r0 *= n;
    n = r0 *= n;
    n *= r3;
    n = r0 += n;
    n += -2.93360472f;
    n = r0 *= n;
    r3 = n += 1.68642128f;
    n *= 1.89713800f;
    n *= -1.22536695f;
    n *= 0.49225998f;
    n = r0 += n;
    n *= 0.22504939f;
    n = r1 *= n;
    r4 = n += -2.37925935f;
    n = r0 *= n;
    n *= r4;
    n *= r2;
    n *= r0;
    n *= r1;
    n *= r3;
    n += -0.00000002f;
    return n;
} // Solution0

// Solution1 result = 0.00000340
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09066248f;
    r1 = n *= -0.38106516f;
    n *= 0.00691737f;
    r2 = n *= -0.63617021f;
    n *= r1;
    n *= 0.01025916f;
    n *= -0.10188664f;
    n *= -6.27809286f;
    n *= -12430.14355469f;
    r1 = n += -1.18587387f;
    r3 = n *= -0.15641774f;
    n = r0 *= n;
    n = r0 *= n;
    n *= r3;
    n = r0 += n;
    n += -0.53541744f;
    n = r0 *= n;
    r3 = n += -1.91975713f;
    n *= -1.55432189f;
    n *= -0.17002998f;
    n *= -3.08462739f;
    n = r0 += n;
    n *= -1.10495508f;
    n = r1 *= n;
    r4 = n += 2.03157926f;
    n = r0 *= n;
    n *= r4;
    n *= r2;
    n *= r0;
    n *= r1;
    n *= r3;
    n += -0.11813290f;
    return n;
} // Solution1

// Solution2 result = 0.00000107
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    r1 = n *= 0.56608212f;
    n *= 0.00956792f;
    r2 = n *= -1.32210886f;
    n *= r1;
    n *= 0.38684246f;
    n *= -12.32071686f;
    n *= -0.00022295f;
    n *= -10.01807594f;
    r1 = n += -0.76495713f;
    r3 = n *= -0.19758479f;
    n = r0 *= n;
    n = r0 *= n;
    n *= r3;
    n = r0 += n;
    n += -8.40397835f;
    n = r0 *= n;
    r3 = n += 1.08349359f;
    n *= -1.34938121f;
    n *= 1.80799437f;
    n *= 0.46385425f;
    n = r0 += n;
    n *= -0.89304012f;
    n = r1 *= n;
    r4 = n += -3.84002018f;
    n = r0 *= n;
    n *= r4;
    n *= r2;
    n *= r0;
    n *= r1;
    n *= r3;
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
