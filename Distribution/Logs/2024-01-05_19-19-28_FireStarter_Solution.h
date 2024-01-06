// Run date: 01/05/24 19:19:28 Pacific Standard Time
// Run duration = 4596.907832 seconds
// Run generation = 8
// Run evolution = 5
// Run max result = 0.00000167
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
// Run tests = 1
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.72119462f;
    n += -1.25261092f;
    r1 = n *= -0.38629705f;
    n = r1 += n;
    r2 = n += 0.78270668f;
    n *= -0.36292273f;
    r3 = n *= -1.38880444f;
    n = r2 *= n;
    n += -0.88864821f;
    r4 = n *= 0.14281408f;
    r5 = n += 0.43690762f;
    r6 = n *= -0.18405740f;
    n *= 1.38357067f;
    n *= r4;
    n += 2.47672176f;
    n *= r6;
    n += 1.72576451f;
    n *= r5;
    n += -2.53748417f;
    n *= r2;
    n *= -0.36268175f;
    n *= -1.67483032f;
    r2 = n += 0.57501739f;
    n *= r3;
    n *= -0.56670272f;
    n += r0;
    n *= 1.53059804f;
    n += -3.46787524f;
    n *= r2;
    n *= -0.61906850f;
    n += r1;
    n += 0.78270668f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.69011807f;
    n += -0.29121369f;
    r1 = n *= -0.23479328f;
    n = r1 += n;
    r2 = n += 0.86484027f;
    n *= 0.71386552f;
    r3 = n *= -0.62999517f;
    n = r2 *= n;
    n += -1.38654947f;
    r4 = n *= 0.28133196f;
    r5 = n += 0.55164683f;
    r6 = n *= -0.18693703f;
    n *= -97.57700348f;
    n *= r4;
    n += -1.62196982f;
    n *= r6;
    n += 1.73611104f;
    n *= r5;
    n += 1.68156576f;
    n *= r2;
    n *= 1.32771575f;
    n *= -1.42564809f;
    r2 = n += -1.46061754f;
    n *= r3;
    n *= -1.35579836f;
    n += r0;
    n *= -0.82149333f;
    n += 1.75217843f;
    n *= r2;
    n *= -0.66071671f;
    n += r1;
    n += 0.74670887f;
    return n;
} // Solution1

// Solution2 result = 0.00000167
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.98680747f;
    n += 0.49025798f;
    r1 = n *= 0.09772742f;
    n = r1 += n;
    r2 = n += -0.60077226f;
    n *= 0.94517648f;
    r3 = n *= 1.02910614f;
    n = r2 *= n;
    n += 0.62461197f;
    r4 = n *= -0.81245828f;
    r5 = n += 0.71655101f;
    r6 = n *= -0.22920938f;
    n *= -3.59801269f;
    n *= r4;
    n += -2.50298262f;
    n *= r6;
    n += 1.62179661f;
    n *= r5;
    n += 2.06420350f;
    n *= r2;
    n *= -1.31368995f;
    n *= 2.06788707f;
    r2 = n += 1.38514233f;
    n *= r3;
    n *= 2.53545642f;
    n += r0;
    n *= 0.56135917f;
    n += -1.45024633f;
    n *= r2;
    n *= -0.93220556f;
    n += r1;
    n += -0.07717311f;
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
