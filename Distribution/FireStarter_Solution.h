// Run date: 08/05/23 12:54:06 Pacific Daylight Time
// Run duration = 1835.485753 seconds
// Run generation = 105
// Run evolution = 0
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
// Run seeds = 64
// Run tests = 0
// Run units = 1
// Run processes = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.25991759f;
    r0 = n += -3.40151024f;
    r1 = n *= -0.15656035f;
    n *= r1;
    n *= 1.36182892f;
    r1 = n += -0.21680242f;
    n += -4.41463137f;
    r2 = n *= -0.10657810f;
    n *= -2.06681967f;
    n += 2.07272196f;
    n = r2 *= n;
    n += -2.80126739f;
    r3 = n *= 0.06422544f;
    n = r1 *= n;
    r4 = n *= 0.10684118f;
    n *= r1;
    n *= 0.61503804f;
    n *= r2;
    r2 = n += 0.03337219f;
    n = r4 += n;
    n = r0 *= n;
    n *= r2;
    n *= -0.25161025f;
    r2 = n *= 23022.77148438f;
    n *= r0;
    n += r3;
    n += -0.09818304f;
    n += 2.15251160f;
    n *= r2;
    n *= r4;
    r4 = n += -0.00000004f;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61788607f;
    r0 = n += -0.47277248f;
    r1 = n *= -0.14826253f;
    n *= r1;
    n *= -0.90341526f;
    r1 = n += 0.14935307f;
    n += -0.15292574f;
    r2 = n *= 0.14888604f;
    n *= 5.39677048f;
    n += 0.23797974f;
    n = r2 *= n;
    n += 0.83922470f;
    r3 = n *= -0.05849563f;
    n = r1 *= n;
    r4 = n *= -0.27165815f;
    n *= r1;
    n *= 13.97861958f;
    n *= r2;
    r2 = n += 0.01917741f;
    n = r4 += n;
    n = r0 *= n;
    n *= r2;
    n *= 132403.31250000f;
    r2 = n *= -0.19037715f;
    n *= r0;
    n += r3;
    n += 0.03250675f;
    n += 2.55557156f;
    n *= r2;
    n *= r4;
    r4 = n += -0.05906586f;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.08287948f;
    r0 = n += -2.53511429f;
    r1 = n *= -2.18018818f;
    n *= r1;
    n *= 0.02065350f;
    r1 = n += -1.08122444f;
    n += 0.36804581f;
    r2 = n *= -0.00263428f;
    n *= -41.64060593f;
    n += 1.36569524f;
    n = r2 *= n;
    n += 0.07761198f;
    r3 = n *= -0.25741616f;
    n = r1 *= n;
    r4 = n *= -0.41311821f;
    n *= r1;
    n *= 37.73671341f;
    n *= r2;
    r2 = n += -0.03407345f;
    n = r4 += n;
    n = r0 *= n;
    n *= r2;
    n *= 0.18646573f;
    r2 = n *= 29513.99218750f;
    n *= r0;
    n += r3;
    n += 0.52688986f;
    n += 0.91548216f;
    n *= r2;
    n *= r4;
    r4 = n += 0.26179934f;
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
