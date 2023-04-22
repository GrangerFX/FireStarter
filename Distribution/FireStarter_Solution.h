// Run date: 04/22/23 10:41:52 Pacific Daylight Time
// Run duration = 2525.489070 seconds
// Run generation = 333
// Run result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159250f;
    r1 = n *= 0.24143077f;
    n = r0 *= n;
    n += -0.69841415f;
    n *= -0.05227318f;
    r2 = n *= 19.82694817f;
    r3 = n *= -0.47099990f;
    r4 = n *= 0.14548598f;
    n += r2;
    n += -0.53397596f;
    n = r0 += n;
    r2 = n += -0.54936159f;
    r5 = n *= 0.64496565f;
    n = r2 *= n;
    n = r0 *= n;
    n *= 10.33135700f;
    n += -14.02617455f;
    n += r4;
    n += -1.42711365f;
    n += r3;
    n = r0 += n;
    n = r0 *= n;
    n += r5;
    r5 = n *= -0.09505010f;
    n *= -0.53954017f;
    n *= r5;
    n += r0;
    n *= -5.64036369f;
    n *= r2;
    n *= r1;
    n += -0.00000050f;
    n *= -0.14226583f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= 0.16214924f;
    n = r0 *= n;
    n += -1.42444301f;
    n *= -0.84003872f;
    r2 = n *= 0.40263328f;
    r3 = n *= 0.14486785f;
    r4 = n *= 12.21230602f;
    n += r2;
    n += -0.39339244f;
    n = r0 += n;
    r2 = n += -1.68059587f;
    r5 = n *= -2.70158124f;
    n = r2 *= n;
    n = r0 *= n;
    n *= -0.23319902f;
    n += 0.87873936f;
    n += r4;
    n += 1.43710518f;
    n += r3;
    n = r0 += n;
    n = r0 *= n;
    n += r5;
    r5 = n *= 0.02773825f;
    n *= 9.07765293f;
    n *= r5;
    n += r0;
    n *= 0.74922502f;
    n *= r2;
    n *= r1;
    n += -0.09702732f;
    n *= 1.21751237f;
    return n;
} // Solution1

// Solution2 result = 0.00000046
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= 0.19340231f;
    n = r0 *= n;
    n += -0.69371790f;
    n *= 0.06857436f;
    r2 = n *= -0.29882362f;
    r3 = n *= -71.43317413f;
    r4 = n *= -0.88434601f;
    n += r2;
    n += 0.19963537f;
    n = r0 += n;
    r2 = n += 2.05035734f;
    r5 = n *= 0.16957776f;
    n = r2 *= n;
    n = r0 *= n;
    n *= -1.02399075f;
    n += -1.62843931f;
    n += r4;
    n += -0.16851412f;
    n += r3;
    n = r0 += n;
    n = r0 *= n;
    n += r5;
    r5 = n *= -0.41655537f;
    n *= -1.37036085f;
    n *= r5;
    n += r0;
    n *= -4.71013021f;
    n *= r2;
    n *= r1;
    n += -0.57752353f;
    n *= -0.90662801f;
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
