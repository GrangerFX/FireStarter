// Run date: 02/03/24 19:18:30 Pacific Standard Time
// Run duration = 16570.748427 seconds
// Run generation = 32
// Run evolution = 8
// Run max result = 0.00005917
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
// Run optimizeSeed = 1
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 64
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

// Solution0 result = 0.00000691
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159632f;
    n *= 1.76329219f;
    r1 = n *= -0.18389855f;
    r2 = n += -0.85344732f;
    n += -1.59580624f;
    r3 = n += -0.00643463f;
    r4 = n *= -1.09938526f;
    n *= -0.10269216f;
    n = r1 *= n;
    n += r2;
    r2 = n *= 1.57639396f;
    n *= 0.03167503f;
    n *= 1.12600482f;
    r5 = n += 0.11890084f;
    n = r3 *= n;
    n *= r1;
    n *= -0.19594426f;
    r1 = n *= -3.17668390f;
    n *= -6.73406076f;
    n += r4;
    n *= -0.66623312f;
    r4 = n *= -1.12313962f;
    n = r0 *= n;
    n += -21.37710953f;
    n = r5 += n;
    n += r0;
    n *= r5;
    n += -4.38197803f;
    n *= r3;
    n += r4;
    n *= r1;
    n *= r2;
    return n;
} // Solution0

// Solution1 result = 0.00001767
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.98312187f;
    n *= -1.47306514f;
    r1 = n *= -0.14580575f;
    r2 = n += 0.82155830f;
    n += -0.03437404f;
    r3 = n += 0.66535527f;
    r4 = n *= 1.04848158f;
    n *= -0.21526894f;
    n = r1 *= n;
    n += r2;
    r2 = n *= 0.51356339f;
    n *= 6.06264257f;
    n *= -0.38461694f;
    r5 = n += 1.55950296f;
    n = r3 *= n;
    n *= r1;
    n *= 0.82977319f;
    r1 = n *= -0.19074659f;
    n *= -6.39067602f;
    n += r4;
    n *= -0.00705502f;
    r4 = n *= 69.19542694f;
    n = r0 *= n;
    n += 1.53351450f;
    n = r5 += n;
    n += r0;
    n *= r5;
    n += -336.82769775f;
    n *= r3;
    n += r4;
    n *= r1;
    n *= r2;
    return n;
} // Solution1

// Solution2 result = 0.00005917
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.00000379f;
    n *= 1.07574606f;
    r1 = n *= -0.37619758f;
    r2 = n += 1.45952082f;
    n += 2.72661018f;
    r3 = n += 0.17160153f;
    r4 = n *= -0.22289480f;
    n *= 0.29708168f;
    n = r1 *= n;
    n += r2;
    r2 = n *= 2.69418025f;
    n *= 0.31484413f;
    n *= -0.55768150f;
    r5 = n += 1.06283367f;
    n = r3 *= n;
    n *= r1;
    n *= 2.16207528f;
    r1 = n *= 0.61050129f;
    n *= 0.92929721f;
    n += r4;
    n *= 0.00384944f;
    r4 = n *= 6.29825687f;
    n = r0 *= n;
    n += -1.50570250f;
    n = r5 += n;
    n += r0;
    n *= r5;
    n += -0.39387146f;
    n *= r3;
    n += r4;
    n *= r1;
    n *= r2;
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
