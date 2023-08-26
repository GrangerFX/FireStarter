// Run date: 08/26/23 10:00:41 Pacific Daylight Time
// Run duration = 582.877278 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000936
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 1874
// Run optimizeSeed = 0
// Run seeds = 11000
// Run tests = 0
// Run units = 8
// Run processes = 16
// Run population = 278528
// Run iterations = 256
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

// Solution0 result = 0.00000376
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.92789888f;
    n += 2.91508222f;
    r0 = n *= 0.88845259f;
    r1 = n += -0.00000346f;
    n *= -1.11444378f;
    n *= r1;
    n *= 0.02317720f;
    n += 0.17325650f;
    r1 = n *= -2.46661758f;
    n = r1 += n;
    r2 = n *= -1.96493638f;
    n += -0.73320252f;
    n *= 2.58792114f;
    n += -1.03383291f;
    r3 = n *= 0.01691448f;
    n *= 1.29334331f;
    n *= -0.91193116f;
    n += 0.91331333f;
    n = r3 *= n;
    r4 = n += 0.89602530f;
    n *= r3;
    n *= r4;
    r4 = n += 1.08420634f;
    n *= 0.19241393f;
    n *= r4;
    n *= r1;
    r1 = n += -0.48199093f;
    n *= r0;
    n *= r2;
    n *= 1.55412030f;
    n *= r1;
    n += -0.00000253f;
    return n;
} // Solution0

// Solution1 result = 0.00000799
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.59917700f;
    n += 1.85183644f;
    r0 = n *= -0.09372982f;
    r1 = n += -0.00000222f;
    n *= 3.69718194f;
    n *= r1;
    n *= -1.60612059f;
    n += 0.54480475f;
    r1 = n *= 1.69280744f;
    n = r1 += n;
    r2 = n *= -0.57755762f;
    n += -0.59838045f;
    n *= 1.06082964f;
    n += -0.42300317f;
    r3 = n *= 0.85531271f;
    n *= 1.93806040f;
    n *= 0.17048125f;
    n += 1.09249151f;
    n = r3 *= n;
    r4 = n += 1.80222750f;
    n *= r3;
    n *= r4;
    r4 = n += -3.26090503f;
    n *= -0.18290122f;
    n *= r4;
    n *= r1;
    r1 = n += 0.25448242f;
    n *= r0;
    n *= r2;
    n *= 0.69242942f;
    n *= r1;
    n += -0.11810347f;
    return n;
} // Solution1

// Solution2 result = 0.00000936
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.59621233f;
    n += -1.56088519f;
    r0 = n *= -1.79931426f;
    r1 = n += -0.00001556f;
    n *= 0.98086023f;
    n *= r1;
    n *= 0.35756442f;
    n += -2.01136136f;
    r1 = n *= 0.12803873f;
    n = r1 += n;
    r2 = n *= 0.71760041f;
    n += -0.22683577f;
    n *= -2.73583841f;
    n += 0.21146338f;
    r3 = n *= 0.01203298f;
    n *= -1.00209546f;
    n *= -1.24641705f;
    n += -1.63735175f;
    n = r3 *= n;
    r4 = n += -1.55356920f;
    n *= r3;
    n *= r4;
    r4 = n += -1.22827685f;
    n *= 0.49046820f;
    n *= r4;
    n *= r1;
    r1 = n += -1.73549259f;
    n *= r0;
    n *= r2;
    n *= -0.53329140f;
    n *= r1;
    n += 0.52358937f;
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
