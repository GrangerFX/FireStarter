// Run date: 12/18/23 10:39:56 Pacific Standard Time
// Run duration = 1548.664234 seconds
// Run generation = 36
// Run evolution = 14
// Run max result = 0.00000060
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
// Run tests = 1
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    float r0, r1, r2, r3, r4, r5;

    n *= -0.07339270f;
    r0 = n += 0.23056996f;
    r1 = n *= -2.05190063f;
    n *= 0.00000002f;
    n *= 11.52814293f;
    n += -3.74903774f;
    n = r0 *= n;
    r2 = n *= -1.56142449f;
    n *= r2;
    r2 = n += -0.37792149f;
    r3 = n *= -0.01456205f;
    r4 = n += 1.45853722f;
    n += r3;
    r3 = n *= -0.89088291f;
    n = r4 *= n;
    r5 = n *= -0.15093255f;
    n *= r4;
    n *= r2;
    n += 1.47687483f;
    n *= 1.14313388f;
    n = r3 *= n;
    n *= r5;
    n *= r0;
    n *= r3;
    n += 0.01095299f;
    r3 = n *= 0.82491094f;
    n = r1 += n;
    n += r3;
    n += -0.00604082f;
    n *= -0.75108021f;
    n += r1;
    n *= 5.79534245f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.35159555f;
    r0 = n += -1.08666182f;
    r1 = n *= 0.00724012f;
    n *= 5.82149363f;
    n *= 0.00000070f;
    n += 1.16105676f;
    n = r0 *= n;
    r2 = n *= -0.79556876f;
    n *= r2;
    r2 = n += -0.23243967f;
    r3 = n *= -0.02348855f;
    r4 = n += 1.66282105f;
    n += r3;
    r3 = n *= -0.49381891f;
    n = r4 *= n;
    r5 = n *= -0.32572883f;
    n *= r4;
    n *= r2;
    n += 1.18098545f;
    n *= -0.77027702f;
    n = r3 *= n;
    n *= r5;
    n *= r0;
    n *= r3;
    n += -0.01783165f;
    r3 = n *= 3.58620739f;
    n = r1 += n;
    n += r3;
    n += 0.44581193f;
    n *= 0.52711374f;
    n += r1;
    n *= -1.13993907f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.25962329f;
    r0 = n += -0.67969221f;
    r1 = n *= -1.31028199f;
    n *= 3.10254955f;
    n *= -0.00000011f;
    n += 1.74956369f;
    n = r0 *= n;
    r2 = n *= 0.55699360f;
    n *= r2;
    r2 = n += -0.07642109f;
    r3 = n *= 0.06915077f;
    r4 = n += -1.67259431f;
    n += r3;
    r3 = n *= 0.65980184f;
    n = r4 *= n;
    r5 = n *= -0.60189879f;
    n *= r4;
    n *= r2;
    n += 1.36529911f;
    n *= 0.85775328f;
    n = r3 *= n;
    n *= r5;
    n *= r0;
    n *= r3;
    n += -0.09415603f;
    r3 = n *= -0.61459661f;
    n = r1 += n;
    n += r3;
    n += -0.76076448f;
    n *= 1.72031820f;
    n += r1;
    n *= -0.49781844f;
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
