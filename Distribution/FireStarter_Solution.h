// Run date: 09/05/23 15:23:43 Pacific Daylight Time
// Run duration = 1467.114706 seconds
// Run generation = 83
// Run evolution = 14
// Run result = 0.00000060
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
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 200
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

// Solution0 result = 0.00000002
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -0.20942990f;
    r1 = n *= 1.05120957f;
    n = r1 *= n;
    n += r1;
    r1 = n += -1.69949389f;
    n += -3.17837763f;
    r2 = n *= -1.29037380f;
    r3 = n += -1.06816351f;
    r4 = n *= -0.96760130f;
    n += r3;
    n *= 1.84842646f;
    r3 = n *= -0.62449777f;
    n *= -0.11566733f;
    r5 = n += 1.67384160f;
    n *= 0.02068965f;
    n *= r4;
    n += -2.69896364f;
    r4 = n += 1.84944642f;
    n *= 2.57337880f;
    n *= r0;
    r0 = n += 0.00000008f;
    n *= r3;
    n = r4 *= n;
    n *= r0;
    n += r1;
    n *= r2;
    n += r5;
    n *= r4;
    n += -0.06245321f;
    n += 0.04903295f;
    n += 0.01342033f;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09063721f;
    r0 = n *= 0.06724469f;
    r1 = n *= -1.33564031f;
    n = r1 *= n;
    n += r1;
    r1 = n += -0.46121159f;
    n += -1.59183812f;
    r2 = n *= 0.77026820f;
    r3 = n += 1.24458182f;
    r4 = n *= -0.46349853f;
    n += r3;
    n *= -1.07949042f;
    r3 = n *= 3.86936045f;
    n *= 2.60314012f;
    r5 = n += -0.12209477f;
    n *= 0.22900732f;
    n *= r4;
    n += 1.11777651f;
    r4 = n += 3.60263610f;
    n *= -0.36781490f;
    n *= r0;
    r0 = n += 0.00000449f;
    n *= r3;
    n = r4 *= n;
    n *= r0;
    n += r1;
    n *= r2;
    n += r5;
    n *= r4;
    n += 1.24760497f;
    n += -5.94166040f;
    n += 4.57590532f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= -0.32864287f;
    r1 = n *= -1.79024923f;
    n = r1 *= n;
    n += r1;
    r1 = n += -33.31337357f;
    n += 0.44558650f;
    r2 = n *= -0.07011544f;
    r3 = n += -2.06264162f;
    r4 = n *= 0.62538189f;
    n += r3;
    n *= 0.66785318f;
    r3 = n *= 0.27583739f;
    n *= 1.34955752f;
    r5 = n += 2.47307205f;
    n *= 0.13760583f;
    n *= r4;
    n += 0.96366596f;
    r4 = n += -0.51217687f;
    n *= -2.21999979f;
    n *= r0;
    r0 = n += -0.00000016f;
    n *= r3;
    n = r4 *= n;
    n *= r0;
    n += r1;
    n *= r2;
    n += r5;
    n *= r4;
    n += -0.25562584f;
    n += 0.12245350f;
    n += 0.65677083f;
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
