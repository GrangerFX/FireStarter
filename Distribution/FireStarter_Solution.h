// Run date: 01/22/23 13:00:31 Pacific Standard Time
// Run duration = 7.518639 seconds
// Run count = 182
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
// Solution Generation = 182

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

// Precision = 0.00000179

// Solution0 precision = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.32390884f;
    n += -1.86612451f;
    r0 = n += -1.59937692f;
    r1 = n *= -0.29410875f;
    n *= -0.51073444f;
    n = r1 *= n;
    r2 = n += 1.74302697f;
    r3 = n += 0.33582705f;
    n *= 0.22142404f;
    r4 = n += -0.09400793f;
    n += -0.33041620f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 1.27274096f;
    r5 = n += -2.12456083f;
    n += 0.75552130f;
    n += -2.32305551f;
    n += r2;
    n *= 0.02878563f;
    n *= -3.52634263f;
    n += -3.64658666f;
    n *= r1;
    n *= 0.10482468f;
    n += 1.43768001f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -0.28467119f;
    n *= r5;
    n += 0.00000002f;
    n *= 1.10325694f;
    return n;
} // Solution0

// Solution1 precision = 0.00000179
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.96047628f;
    n += -0.33065405f;
    r0 = n += -0.79952806f;
    r1 = n *= 0.01727553f;
    n *= 2.07069659f;
    n = r1 *= n;
    r2 = n += -0.00843992f;
    r3 = n += -0.05992647f;
    n *= 32782.74218750f;
    r4 = n += 5.48169184f;
    n += -0.34331527f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.00049965f;
    r5 = n += 1.23271263f;
    n += -4.42903662f;
    n += -0.98635077f;
    n += r2;
    n *= 1.77093732f;
    n *= -0.03031154f;
    n += -0.23596740f;
    n *= r1;
    n *= -1.64186633f;
    n += 0.50821459f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.00143860f;
    n *= r5;
    n += -0.10995770f;
    n *= 1.07433736f;
    return n;
} // Solution1

// Solution2 precision = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.30379844f;
    n += 0.14874463f;
    r0 = n += 0.53706008f;
    r1 = n *= -0.08116038f;
    n *= 2.24248433f;
    n = r1 *= n;
    r2 = n += -0.34005383f;
    r3 = n += -0.02657257f;
    n *= 1.08547699f;
    r4 = n += 0.31806374f;
    n += -0.10655294f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.13567555f;
    r5 = n += 0.23628241f;
    n += -3.07828712f;
    n += -1.93791080f;
    n += r2;
    n *= 0.09919568f;
    n *= -0.42383984f;
    n += -0.01083014f;
    n *= r1;
    n *= -1.41903412f;
    n += -0.00100071f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -31981.54882812f;
    n *= r5;
    n += -0.64264607f;
    n *= -0.81475455f;
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
