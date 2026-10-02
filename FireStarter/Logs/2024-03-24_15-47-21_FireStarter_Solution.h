// Run date: 03/24/24 15:47:21 Pacific Daylight Time
// Run duration = 1784.388850 seconds
// Run generation = 94
// Run evolution = 9
// Run max result = 0.00000036
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
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.53829533f;
    r0 = n += 1.69110465f;
    r1 = n *= -0.46495721f;
    n *= r1;
    r1 = n += -0.52669960f;
    r2 = n += 0.35511690f;
    r3 = n *= -2.20775533f;
    r4 = n *= 0.21947387f;
    r5 = n += 1.42014372f;
    r6 = n *= 0.04969664f;
    n *= r3;
    n *= -1.34221053f;
    r3 = n += -1.59933066f;
    n = r3 *= n;
    n *= -0.55749410f;
    n += r4;
    n = r2 += n;
    n *= 0.09036053f;
    n = r6 += n;
    r4 = n *= -0.03035369f;
    r7 = n *= 1.16594136f;
    n *= r4;
    n *= r7;
    n = r5 += n;
    n *= r5;
    n += r2;
    n *= r1;
    n += r6;
    n *= r0;
    n *= r3;
    n += -0.00000000f;
    n *= -1.63110971f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.25569484f;
    r0 = n += -0.79026544f;
    r1 = n *= -0.36839217f;
    n *= r1;
    r1 = n += -0.04615141f;
    r2 = n += 0.02129062f;
    r3 = n *= -0.00412358f;
    r4 = n *= -14.83376312f;
    r5 = n += -0.21341939f;
    r6 = n *= 1.69425344f;
    n *= r3;
    n *= 57.09523392f;
    r3 = n += -0.85949755f;
    n = r3 *= n;
    n *= -1.90931952f;
    n += r4;
    n = r2 += n;
    n *= 1.06904185f;
    n = r6 += n;
    r4 = n *= -2.10006642f;
    r7 = n *= -0.30622011f;
    n *= r4;
    n *= r7;
    n = r5 += n;
    n *= r5;
    n += r2;
    n *= r1;
    n += r6;
    n *= r0;
    n *= r3;
    n += -0.06934647f;
    n *= 1.70350099f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.51609319f;
    r0 = n += 1.35112870f;
    r1 = n *= -0.65945894f;
    n *= r1;
    r1 = n += -0.45435071f;
    r2 = n += -0.59734982f;
    r3 = n *= -0.13121325f;
    r4 = n *= -2.76212645f;
    r5 = n += -3.75656748f;
    r6 = n *= 0.42784402f;
    n *= r3;
    n *= 0.52617681f;
    r3 = n += -0.28786010f;
    n = r3 *= n;
    n *= 3.76937938f;
    n += r4;
    n = r2 += n;
    n *= 0.93796897f;
    n = r6 += n;
    r4 = n *= -0.00234406f;
    r7 = n *= 4.24857283f;
    n *= r4;
    n *= r7;
    n = r5 += n;
    n *= r5;
    n += r2;
    n *= r1;
    n += r6;
    n *= r0;
    n *= r3;
    n += -0.46508390f;
    n *= -1.12581563f;
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
