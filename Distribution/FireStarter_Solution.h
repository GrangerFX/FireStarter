// Run date: 09/03/23 16:16:13 Pacific Daylight Time
// Run duration = 10573.238951 seconds
// Run generation = 24
// Run evolution = 14
// Run result = 0.00000262
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 2
// Run processes = 2
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000077
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.42509875f;
    n *= -1.35687876f;
    r1 = n += 1.81209457f;
    n = r1 += n;
    n *= 0.18155624f;
    n *= r1;
    n += -5.62722540f;
    r1 = n += 3.24253297f;
    r2 = n *= -0.06683742f;
    n *= 2.74131298f;
    n += -0.29905182f;
    r3 = n *= 0.99499118f;
    r4 = n *= 0.00580400f;
    n = r4 += n;
    n *= 8.43124771f;
    r5 = n += 0.08123519f;
    n *= 4.80019426f;
    n *= r2;
    n += -2.87648559f;
    n *= r4;
    n += r5;
    n *= -3.50594234f;
    n = r1 *= n;
    n += r3;
    n += 3.45904636f;
    n = r1 *= n;
    n += 0.00000219f;
    r3 = n *= 0.95763665f;
    n += r1;
    n *= -0.36629340f;
    n *= r0;
    n += r3;
    return n;
} // Solution0

// Solution1 result = 0.00000262
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.36058819f;
    n *= 0.79250997f;
    r1 = n += 0.88320994f;
    n = r1 += n;
    n *= 2.36625743f;
    n *= r1;
    n += -14.98683739f;
    r1 = n += -3.30940270f;
    r2 = n *= 0.10811650f;
    n *= 1.34140301f;
    n += 1.98790276f;
    r3 = n *= 0.01136257f;
    r4 = n *= 2.59081292f;
    n = r4 += n;
    n *= -0.96972841f;
    r5 = n += -0.24992841f;
    n *= -0.41022074f;
    n *= r2;
    n += 2.08272552f;
    n *= r4;
    n += r5;
    n *= -0.65896630f;
    n = r1 *= n;
    n += r3;
    n += -1.33757067f;
    n = r1 *= n;
    n += -0.69133186f;
    r3 = n *= 0.20617227f;
    n += r1;
    n *= 0.15337467f;
    n *= r0;
    n += r3;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.57198739f;
    n *= -1.62153172f;
    r1 = n += 2.42817783f;
    n = r1 += n;
    n *= 0.17348468f;
    n *= r1;
    n += -2.11275101f;
    r1 = n += 0.15660666f;
    r2 = n *= 0.10934639f;
    n *= -1.43610859f;
    n += 0.86954260f;
    r3 = n *= -1.95594287f;
    r4 = n *= 0.00095737f;
    n = r4 += n;
    n *= -5.31985569f;
    r5 = n += 0.29010943f;
    n *= 6.15253878f;
    n *= r2;
    n += -2.78535318f;
    n *= r4;
    n += r5;
    n *= -1.47095931f;
    n = r1 *= n;
    n += r3;
    n += 2.97729921f;
    n = r1 *= n;
    n += 0.93349022f;
    r3 = n *= 1.27740812f;
    n += r1;
    n *= -0.37457067f;
    n *= r0;
    n += r3;
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
