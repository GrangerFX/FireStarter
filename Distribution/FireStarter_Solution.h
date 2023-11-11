// Run date: 11/11/23 13:00:22 Pacific Standard Time
// Run duration = 1085.095288 seconds
// Run generation = 15
// Run evolution = 2
// Run result = 0.00000060
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
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= 0.36164221f;
    n *= 0.00441408f;
    n *= 0.07968315f;
    n *= 0.89677757f;
    n = r1 += n;
    n = r1 *= n;
    r2 = n += -1.29161167f;
    n *= 6.41611576f;
    r3 = n += 5.69618082f;
    n *= -1.00207567f;
    n = r3 += n;
    r4 = n += -1.50420833f;
    r5 = n *= -1.31438327f;
    r6 = n *= -0.09305642f;
    n = r3 *= n;
    n += r4;
    n = r1 += n;
    n *= r6;
    r6 = n += 1.16808891f;
    n *= r6;
    n = r5 *= n;
    r6 = n *= 1.73894954f;
    n *= 2.66147804f;
    n *= r3;
    n *= r1;
    n += r5;
    n *= r6;
    n *= 0.02627570f;
    n *= r0;
    n *= r2;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    r1 = n *= -0.21020706f;
    n *= 0.00000052f;
    n *= -1.33079278f;
    n *= 2.18979645f;
    n = r1 += n;
    n = r1 *= n;
    r2 = n += -1.06045651f;
    n *= 2.98162603f;
    r3 = n += 2.20596910f;
    n *= -0.97064549f;
    n = r3 += n;
    r4 = n += -0.09856482f;
    r5 = n *= 1.44396591f;
    r6 = n *= -0.48059154f;
    n = r3 *= n;
    n += r4;
    n = r1 += n;
    n *= r6;
    r6 = n += -2.27120996f;
    n *= r6;
    n = r5 *= n;
    r6 = n *= 1.19383681f;
    n *= -1.76350474f;
    n *= r3;
    n *= r1;
    n += r5;
    n *= r6;
    n *= 0.95809478f;
    n *= r0;
    n *= r2;
    n += -0.11813189f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    r1 = n *= 0.35450053f;
    n *= 0.65403295f;
    n *= -5.67944384f;
    n *= -0.00000011f;
    n = r1 += n;
    n = r1 *= n;
    r2 = n += -0.62624860f;
    n *= -0.23198113f;
    r3 = n += 1.59684646f;
    n *= -0.94826186f;
    n = r3 += n;
    r4 = n += 0.93156785f;
    r5 = n *= -0.25337905f;
    r6 = n *= 1.26212263f;
    n = r3 *= n;
    n += r4;
    n = r1 += n;
    n *= r6;
    r6 = n += 2.33662248f;
    n *= r6;
    n = r5 *= n;
    r6 = n *= -1.37340021f;
    n *= -0.96803284f;
    n *= r3;
    n *= r1;
    n += r5;
    n *= r6;
    n *= -1.10053110f;
    n *= r0;
    n *= r2;
    n += 0.52359879f;
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
