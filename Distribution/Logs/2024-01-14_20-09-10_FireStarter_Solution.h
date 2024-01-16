// Run date: 01/14/24 20:09:10 Pacific Standard Time
// Run duration = 2992.707505 seconds
// Run generation = 12
// Run evolution = 4
// Run max result = 0.00000084
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

// Solution0 result = 0.00000084
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.19728819f;
    r0 = n *= -1.32404637f;
    r1 = n += 1.64128566f;
    n = r0 *= n;
    r2 = n *= -0.80366820f;
    n += -2.47459435f;
    n += r0;
    r0 = n *= 3.13273191f;
    n = r0 *= n;
    n += 1.40925026f;
    r3 = n *= -0.01235424f;
    n *= r3;
    r3 = n *= -0.60615522f;
    r4 = n += 0.18186361f;
    n *= 0.79817313f;
    r5 = n *= -0.00004029f;
    r6 = n += -0.09596120f;
    n *= 0.05290574f;
    n += -1.73210204f;
    n += r1;
    n += 1.16864705f;
    r1 = n += -0.25211138f;
    n = r3 *= n;
    n *= r1;
    n *= r5;
    n *= r6;
    n += r2;
    n += 0.00000010f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.00000021f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -1.28719532f;
    r0 = n *= 0.24606477f;
    r1 = n += 1.95782220f;
    n = r0 *= n;
    r2 = n *= -1.28786528f;
    n += 0.71075588f;
    n += r0;
    r0 = n *= 0.29925159f;
    n = r0 *= n;
    n += 1.90823960f;
    r3 = n *= 1.21368933f;
    n *= r3;
    r3 = n *= -0.57404453f;
    r4 = n += -0.51319993f;
    n *= 0.00000000f;
    r5 = n *= 21.74143982f;
    r6 = n += 1.63990200f;
    n *= 0.69652808f;
    n += -2.15409040f;
    n += r1;
    n += -1.88188028f;
    r1 = n += 1.91483092f;
    n = r3 *= n;
    n *= r1;
    n *= r5;
    n *= r6;
    n += r2;
    n += 1.81570780f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += -0.11815076f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.36190736f;
    r0 = n *= 0.78661638f;
    r1 = n += 1.49059343f;
    n = r0 *= n;
    r2 = n *= -0.85956752f;
    n += -0.84385270f;
    n += r0;
    r0 = n *= -2.15207076f;
    n = r0 *= n;
    n += -0.65636212f;
    r3 = n *= -0.21986951f;
    n *= r3;
    r3 = n *= -0.74329025f;
    r4 = n += -6.27194166f;
    n *= -0.00006339f;
    r5 = n *= -26.00154686f;
    r6 = n += 0.26415685f;
    n *= 0.00073765f;
    n += -0.68861014f;
    n += r1;
    n += -0.81135446f;
    r1 = n += 0.75448042f;
    n = r3 *= n;
    n *= r1;
    n *= r5;
    n *= r6;
    n += r2;
    n += -0.13062827f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.52360010f;
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
