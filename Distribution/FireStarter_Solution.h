// Run date: 11/05/23 13:51:34 Pacific Standard Time
// Run duration = 2059.259775 seconds
// Run generation = 12
// Run evolution = 9
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.05317378f;
    r0 = n += -1.08841884f;
    r1 = n *= -0.61546707f;
    n = r1 *= n;
    r2 = n += -1.38667178f;
    r3 = n += 0.15920448f;
    n *= -1.98595512f;
    n += r2;
    n += 1.27674639f;
    n = r1 += n;
    n *= -1.13201857f;
    n = r1 *= n;
    r2 = n *= -0.02698451f;
    n += -0.87442297f;
    n = r3 *= n;
    n *= -0.03682990f;
    r4 = n += -0.70391166f;
    n *= r3;
    n *= r2;
    r2 = n += -0.19478829f;
    n += 2.02298188f;
    n += r1;
    n *= r4;
    r4 = n += -1.48198760f;
    n = r4 += n;
    n *= -0.09570947f;
    n *= r0;
    n *= r2;
    n *= r4;
    n += 0.09873460f;
    n += -0.09873461f;
    n *= -2.78822517f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.10529208f;
    r0 = n += -0.98536652f;
    r1 = n *= -0.39215612f;
    n = r1 *= n;
    r2 = n += -1.69386876f;
    r3 = n += 1.27051175f;
    n *= -2.03024459f;
    n += r2;
    n += -0.57421070f;
    n = r1 += n;
    n *= -0.46379024f;
    n = r1 *= n;
    r2 = n *= -0.00146919f;
    n += 0.55462372f;
    n = r3 *= n;
    n *= -2.20309401f;
    r4 = n += 1.10953331f;
    n *= r3;
    n *= r2;
    r2 = n += -0.07943076f;
    n += 1.54175150f;
    n += r1;
    n *= r4;
    r4 = n += 1.19495356f;
    n = r4 += n;
    n *= 0.30016497f;
    n *= r0;
    n *= r2;
    n *= r4;
    n += -0.14529473f;
    n += 0.10083364f;
    n *= 2.65697050f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.31620303f;
    r0 = n += -2.93419671f;
    r1 = n *= -0.34906423f;
    n = r1 *= n;
    r2 = n += -1.21107817f;
    r3 = n += 0.96093088f;
    n *= -2.01028943f;
    n += r2;
    n += -2.55681705f;
    n = r1 += n;
    n *= -0.06845342f;
    n = r1 *= n;
    r2 = n *= 0.87540102f;
    n += 0.69651270f;
    n = r3 *= n;
    n *= 1.37639606f;
    r4 = n += -4.71806097f;
    n *= r3;
    n *= r2;
    r2 = n += -0.05933914f;
    n += 0.39876154f;
    n += r1;
    n *= r4;
    r4 = n += 0.64641327f;
    n = r4 += n;
    n *= -0.14112298f;
    n *= r0;
    n *= r2;
    n *= r4;
    n += 0.44595397f;
    n += -0.66837513f;
    n *= -2.35408735f;
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
