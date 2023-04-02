// Run date: 04/02/23 12:27:52 Pacific Daylight Time
// Run duration = 2762.219832 seconds
// Run generation = 78
// Run result = 0.00024277
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 28
// Run opcodes = 4

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

// Solution0 result = 0.00020969
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= -0.20388800f;
    r1 = n *= 1.80954158f;
    n += 1.68983650f;
    r2 = n *= -0.17604972f;
    n *= 0.96493101f;
    n *= -0.08893291f;
    n *= -1.05585778f;
    n *= -1.22531545f;
    n = r1 *= n;
    n += -1.16200960f;
    n += -0.03733414f;
    n = r0 += n;
    n = r2 *= n;
    n *= r1;
    n *= -0.37156063f;
    r1 = n += -0.12334289f;
    r3 = n += 1.51064599f;
    n = r0 += n;
    n = r1 += n;
    n *= -0.42519292f;
    n *= r0;
    n += r3;
    r3 = n *= 1.57035351f;
    n = r2 *= n;
    n *= 2.09773970f;
    n *= r2;
    n += -0.35847893f;
    n *= r3;
    n *= r1;
    n *= 1.39110911f;
    n *= -1.70634568f;
    n += 0.29968014f;
    return n;
} // Solution0

// Solution1 result = 0.00019157
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= -0.34336376f;
    r1 = n *= -0.67991000f;
    n += -1.09277284f;
    r2 = n *= -0.08938358f;
    n *= 1.52291167f;
    n *= 1.40344059f;
    n *= -1.00859523f;
    n *= 0.22922751f;
    n = r1 *= n;
    n += -2.00283146f;
    n += -0.56406462f;
    n = r0 += n;
    n = r2 *= n;
    n *= r1;
    n *= 0.57498389f;
    r1 = n += 0.61661756f;
    r3 = n += 1.58841538f;
    n = r0 += n;
    n = r1 += n;
    n *= -0.18832710f;
    n *= r0;
    n += r3;
    r3 = n *= 1.13522255f;
    n = r2 *= n;
    n *= -1.57427084f;
    n *= r2;
    n += 0.40802169f;
    n *= r3;
    n *= r1;
    n *= -2.85785651f;
    n *= -0.86253834f;
    n += 1.20396161f;
    return n;
} // Solution1

// Solution2 result = 0.00024277
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= -1.39823020f;
    r1 = n *= 0.00783900f;
    n += 0.08545571f;
    r2 = n *= 0.89810467f;
    n *= -0.94525731f;
    n *= -0.29881358f;
    n *= -2.23867178f;
    n *= -5.03673792f;
    n = r1 *= n;
    n += -2.09283090f;
    n += -1.41881526f;
    n = r0 += n;
    n = r2 *= n;
    n *= r1;
    n *= -0.36319125f;
    r1 = n += -0.00672257f;
    r3 = n += 7.17294359f;
    n = r0 += n;
    n = r1 += n;
    n *= -0.10699551f;
    n *= r0;
    n += r3;
    r3 = n *= 0.35347867f;
    n = r2 *= n;
    n *= -3.75987315f;
    n *= r2;
    n += 1.55466604f;
    n *= r3;
    n *= r1;
    n *= 0.10963286f;
    n *= -1.53650165f;
    n += 0.53681076f;
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
