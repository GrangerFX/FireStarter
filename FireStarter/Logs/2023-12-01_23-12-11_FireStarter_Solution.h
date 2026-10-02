// Run date: 12/01/23 23:12:11 Pacific Standard Time
// Run duration = 2959.353867 seconds
// Run generation = 58
// Run evolution = 17
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
// Run tests = 1
// Run seeds = 64
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.87138146f;
    n += 0.41982594f;
    n += -1.00807059f;
    n *= 1.55595195f;
    r0 = n += -3.34417796f;
    r1 = n *= -0.42913666f;
    r2 = n *= -0.38224518f;
    n *= -0.00000404f;
    n *= 12.48241997f;
    n += r0;
    n = r2 *= n;
    r0 = n += -0.82243079f;
    n += -1.04019272f;
    n *= -0.02714364f;
    r3 = n += 1.62311637f;
    n += -1.42729914f;
    r4 = n += 0.54015452f;
    n *= -1.16770518f;
    r5 = n *= -0.25457910f;
    n *= 0.51731604f;
    n *= r2;
    n += -1.46524143f;
    n = r5 *= n;
    n *= -0.47829109f;
    n += 1.67323971f;
    n *= r3;
    n *= r5;
    n *= r0;
    n *= r4;
    n += 1.03730381f;
    n *= r1;
    n += -0.00000002f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.23335469f;
    n += -1.95539463f;
    n += -1.16710711f;
    n *= -0.75071532f;
    r0 = n += -5.20574522f;
    r1 = n *= -1.96063673f;
    r2 = n *= -0.23526031f;
    n *= -17.27969170f;
    n *= 0.00000006f;
    n += r0;
    n = r2 *= n;
    r0 = n += -3.17915058f;
    n += 1.92243934f;
    n *= 0.03008943f;
    r3 = n += -0.72426397f;
    n += 2.81824803f;
    r4 = n += -3.32268381f;
    n *= 0.08457268f;
    r5 = n *= -0.31612292f;
    n *= -1.33117414f;
    n *= r2;
    n += 1.30765176f;
    n = r5 *= n;
    n *= -0.55789715f;
    n += -2.82909632f;
    n *= r3;
    n *= r5;
    n *= r0;
    n *= r4;
    n += 0.21821135f;
    n *= r1;
    n += -0.11813163f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.23696733f;
    n += 1.26529574f;
    n += 0.70961404f;
    n *= -0.64215738f;
    r0 = n += -0.81134206f;
    r1 = n *= -0.25851855f;
    r2 = n *= 0.95842421f;
    n *= -2.04652715f;
    n *= 0.00796661f;
    n += r0;
    n = r2 *= n;
    r0 = n += 1.44588554f;
    n += -1.08929217f;
    n *= -0.43845105f;
    r3 = n += -1.28142202f;
    n += -1.57440722f;
    r4 = n += -0.56777364f;
    n *= -0.36992946f;
    r5 = n *= 0.08787538f;
    n *= 1.37549829f;
    n *= r2;
    n += 1.49829972f;
    n = r5 *= n;
    n *= 0.33649474f;
    n += 5.03789234f;
    n *= r3;
    n *= r5;
    n *= r0;
    n *= r4;
    n += -1.74387336f;
    n *= r1;
    n += 0.52359873f;
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
