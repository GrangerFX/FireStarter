// Run date: 01/08/23 19:51:10 Pacific Standard Time
// Run duration = 13.613203 seconds
// Run count = 203
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 203

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

// Precision = 0.00000054

// Solution0 precision = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.47668374f;
    n += -1.48984087f;
    r0 = n += -0.17506805f;
    r1 = n *= 1.00540793f;
    n *= 0.91928607f;
    n = r1 *= n;
    r2 = n += -1.12895274f;
    r3 = n += -5.44066763f;
    n *= 0.00080166f;
    r4 = n += -1.47993255f;
    n += 1.48076022f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.08471944f;
    r5 = n += -0.22268388f;
    n += -2.66263890f;
    n += 5.56836414f;
    n += r2;
    n *= -0.14721990f;
    n *= 0.03046525f;
    n += 0.78878909f;
    n *= r1;
    n *= -1.58515084f;
    n += -1.98983359f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -2.34493303f;
    n *= r5;
    n += 0.00000066f;
    n *= 0.05682601f;
    return n;
} // Solution0

// Solution1 precision = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.28826132f;
    n += -1.83457029f;
    r0 = n += -1.54435003f;
    r1 = n *= -1.86608911f;
    n *= -0.30720186f;
    n = r1 *= n;
    r2 = n += -0.45626688f;
    r3 = n += 3.45263696f;
    n *= 0.00348560f;
    r4 = n += 0.54035270f;
    n += -0.92846358f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.05509476f;
    r5 = n += 1.20684600f;
    n += -1.89754975f;
    n += 11.45200157f;
    n += r2;
    n *= 5.14601612f;
    n *= 0.85022116f;
    n += 1.50198889f;
    n *= r1;
    n *= 0.00010513f;
    n += 0.73599333f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -1.30918062f;
    n *= r5;
    n += -0.08626250f;
    n *= 1.36944818f;
    return n;
} // Solution1

// Solution2 precision = 0.00000054
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.10864671f;
    n += -0.22695877f;
    r0 = n += -2.28238821f;
    r1 = n *= 0.20917778f;
    n *= -1.78517675f;
    n = r1 *= n;
    r2 = n += -0.45766842f;
    r3 = n += 1.46292222f;
    n *= 0.02407200f;
    r4 = n += 1.45033693f;
    n += -1.49665821f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -1.60488343f;
    r5 = n += 1.00829279f;
    n += -4.38096333f;
    n += -2.70444608f;
    n += r2;
    n *= -1.16517377f;
    n *= 1.23278809f;
    n += -3.32850575f;
    n *= r1;
    n *= -1.11354244f;
    n += -0.91823196f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -0.46090981f;
    n *= r5;
    n += -1.37978911f;
    n *= -0.37947735f;
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
