// Run date: 02/26/24 08:44:23 Pacific Standard Time
// Run duration = 24124.728776 seconds
// Run generation = 95
// Run evolution = 13
// Run max result = 0.00009995
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00007865
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -1.43782389f;
    r1 = n *= 0.03049354f;
    r2 = n += 0.16576511f;
    r3 = n *= 0.61500514f;
    r4 = n *= 0.18041520f;
    n *= r2;
    n *= r4;
    r4 = n *= 7.36049509f;
    r2 = n += -1.37014782f;
    r5 = n += -0.98368347f;
    n *= r5;
    n *= 1.50914252f;
    n += r1;
    n += r0;
    n *= r3;
    r3 = n += -0.06388398f;
    n *= 1.51385677f;
    r0 = n *= -0.37758219f;
    r1 = n *= -2.74541283f;
    n *= 1.38273180f;
    n += r0;
    n *= 0.72885048f;
    n = r4 += n;
    n += r2;
    r2 = n *= 0.94772232f;
    n = r2 *= n;
    n += -0.52333605f;
    n = r4 *= n;
    n += r1;
    n += r3;
    n *= r2;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00005674
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.81933331f;
    r1 = n *= 0.16476263f;
    r2 = n += 0.81702447f;
    r3 = n *= 0.36998248f;
    r4 = n *= 5.51651525f;
    n *= r2;
    n *= r4;
    r4 = n *= 0.03623153f;
    r2 = n += -1.81530726f;
    r5 = n += 1.11920226f;
    n *= r5;
    n *= 7.69141626f;
    n += r1;
    n += r0;
    n *= r3;
    r3 = n += -0.49073997f;
    n *= 14.47799015f;
    r0 = n *= -0.36635414f;
    r1 = n *= 0.86060935f;
    n *= -1.23355329f;
    n += r0;
    n *= 1.36659455f;
    n = r4 += n;
    n += r2;
    r2 = n *= -1.17566562f;
    n = r2 *= n;
    n += 1.86761165f;
    n = r4 *= n;
    n += r1;
    n += r3;
    n *= r2;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00009995
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.42894503f;
    r1 = n *= 0.16303344f;
    r2 = n += 0.40455848f;
    r3 = n *= 1.33758485f;
    r4 = n *= -0.64923310f;
    n *= r2;
    n *= r4;
    r4 = n *= 5.50521278f;
    r2 = n += -1.78723729f;
    r5 = n += 1.09471953f;
    n *= r5;
    n *= 1.70814836f;
    n += r1;
    n += r0;
    n *= r3;
    r3 = n += 0.17842206f;
    n *= 0.65072346f;
    r0 = n *= -9.01429558f;
    r1 = n *= 0.06190252f;
    n *= 25.95247650f;
    n += r0;
    n *= -0.05671394f;
    n = r4 += n;
    n += r2;
    r2 = n *= 1.12524700f;
    n = r2 *= n;
    n += -1.32701838f;
    n = r4 *= n;
    n += r1;
    n += r3;
    n *= r2;
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
