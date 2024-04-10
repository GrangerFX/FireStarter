// Run date: 04/10/24 00:11:35 Pacific Daylight Time
// Run duration = 23184.680331 seconds
// Run generation = 187
// Run evolution = 10
// Run max result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
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
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159250f;
    r1 = n *= 0.20575617f;
    n *= -0.07276876f;
    n = r0 *= n;
    r2 = n += 1.86605024f;
    n *= 1.73279810f;
    n *= r2;
    r2 = n += -2.86650538f;
    n += -1.59868586f;
    r3 = n += -0.65084976f;
    n *= -4.30857086f;
    n += 3.39777684f;
    n *= 0.00969075f;
    r4 = n += -0.36247709f;
    n *= -1.46216321f;
    n *= -1.43623948f;
    n *= r4;
    n = r3 *= n;
    n += 17.48838425f;
    n += 5953.17919922f;
    n *= -2.67891431f;
    n *= 0.03858821f;
    n *= -0.02843618f;
    r4 = n *= -0.09644175f;
    n += r0;
    r0 = n += 3.43039036f;
    n += r0;
    n *= r2;
    n *= r3;
    n *= r4;
    n *= r1;
    n += 0.00000009f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065866f;
    r1 = n *= 0.03065094f;
    n *= -1.19746029f;
    n = r0 *= n;
    r2 = n += 1.30382097f;
    n *= -5.35721350f;
    n *= r2;
    r2 = n += 0.50508165f;
    n += -80.70647430f;
    r3 = n += -0.32675329f;
    n *= -2.21859264f;
    n += 7.02800608f;
    n *= -0.00000002f;
    r4 = n += 0.63856465f;
    n *= 0.49530244f;
    n *= 0.50407767f;
    n *= r4;
    n = r3 *= n;
    n += -2.66108680f;
    n += 2.05903339f;
    n *= -0.04242700f;
    n *= -0.57181019f;
    n *= 1.25347269f;
    r4 = n *= 0.87001097f;
    n += r0;
    r0 = n += 1.14562273f;
    n += r0;
    n *= r2;
    n *= r3;
    n *= r4;
    n *= r1;
    n += -0.11813191f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    r1 = n *= -0.24661176f;
    n *= 0.11155934f;
    n = r0 *= n;
    r2 = n += 2.18299866f;
    n *= 0.77787751f;
    n *= r2;
    r2 = n += -0.86452490f;
    n += -0.56995159f;
    r3 = n += -1.82149196f;
    n *= -7.39642382f;
    n += -2.56999755f;
    n *= -0.02176397f;
    r4 = n += 0.48724654f;
    n *= -0.22268617f;
    n *= -0.08689974f;
    n *= r4;
    n = r3 *= n;
    n += 1.48220229f;
    n += 0.30561221f;
    n *= -2.26538157f;
    n *= 0.00025773f;
    n *= -12868.27050781f;
    r4 = n *= -1.05814219f;
    n += r0;
    r0 = n += -0.89733905f;
    n += r0;
    n *= r2;
    n *= r3;
    n *= r4;
    n *= r1;
    n += 0.52359885f;
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
