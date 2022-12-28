// Run date: 12/28/22 13:00:56 Pacific Standard Time
// Run duration = 18.681123 seconds
// Run count = 44
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 44

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

// Precision = 0.00002086

// Solution0 precision = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -1.68694413f;
    n += -3.20637584f;
    n *= 0.24628608f;
    r0 = n += 2.09492588f;
    r1 = n *= 0.95314509f;
    r2 = n *= -0.00000002f;
    r3 = n += -1.15668523f;
    r4 = n += 1.15668523f;
    n = r0 += n;
    n *= r3;
    n = r0 *= n;
    n += 1.75639653f;
    n *= 0.02058209f;
    n *= -12.38115120f;
    n += r4;
    n += -2.39637780f;
    r4 = n *= -0.23939365f;
    r3 = n += 0.66030759f;
    r5 = n += -0.46391153f;
    n *= r3;
    r3 = n += 1.70219171f;
    n *= 2.94922376f;
    r6 = n *= -0.22022267f;
    n *= r0;
    n *= 0.56912023f;
    n = r4 *= n;
    n *= r6;
    n += r4;
    n += r5;
    n += r2;
    n *= r3;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.00002086
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.21646865f;
    n += -0.25462580f;
    n *= -1.85964584f;
    r0 = n += -1.67438293f;
    r1 = n *= -0.15232083f;
    r2 = n *= 2.51098895f;
    r3 = n += -0.97421515f;
    r4 = n += -1.89047587f;
    n = r0 += n;
    n *= r3;
    n = r0 *= n;
    n += 6.66039801f;
    n *= -7.76912117f;
    n *= -0.00039572f;
    n += r4;
    n += 2.17737651f;
    r4 = n *= 0.70183629f;
    r3 = n += 1.00493503f;
    r5 = n += -1.34620869f;
    n *= r3;
    r3 = n += -0.25149918f;
    n *= 2.57287741f;
    r6 = n *= 1.41563475f;
    n *= r0;
    n *= -1.78374422f;
    n = r4 *= n;
    n *= r6;
    n += r4;
    n += r5;
    n += r2;
    n *= r3;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.00000250
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.76305944f;
    n += -1.98020756f;
    n *= -0.75790715f;
    r0 = n += -1.50081348f;
    r1 = n *= -1.73087466f;
    r2 = n *= 0.08133018f;
    r3 = n += -0.52064443f;
    r4 = n += -1.41709077f;
    n = r0 += n;
    n *= r3;
    n = r0 *= n;
    n += 1.69827259f;
    n *= -1.85915518f;
    n *= 0.00801009f;
    n += r4;
    n += 1.77027214f;
    r4 = n *= -2.13501835f;
    r3 = n += 0.04651203f;
    r5 = n += -0.68120557f;
    n *= r3;
    r3 = n += -1.30651116f;
    n *= 1.24997473f;
    r6 = n *= -0.16974394f;
    n *= r0;
    n *= 2.61547685f;
    n = r4 *= n;
    n *= r6;
    n += r4;
    n += r5;
    n += r2;
    n *= r3;
    n *= r1;
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
