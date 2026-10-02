// Run date: 03/24/24 21:11:06 Pacific Daylight Time
// Run duration = 381.098138 seconds
// Run generation = 212
// Run evolution = 6
// Run max result = 0.00000024
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159250f;
    n *= -0.38972670f;
    n *= -1.37525105f;
    r1 = n *= 0.60251421f;
    n *= -0.22587323f;
    n = r0 *= n;
    n += 0.61059678f;
    r2 = n *= -0.00031351f;
    n *= 14.20747852f;
    r3 = n += -0.80826283f;
    n += 40.52249908f;
    n *= r2;
    r2 = n += 0.15277515f;
    n += r2;
    r2 = n += -2.10141921f;
    n = r2 *= n;
    r4 = n *= 0.58733255f;
    n *= r4;
    n = r0 *= n;
    n *= -0.59209162f;
    r4 = n *= 0.12960109f;
    n *= r3;
    r3 = n += 1.47391689f;
    n *= r4;
    n += -0.64053941f;
    n *= r2;
    n *= r1;
    n = r3 *= n;
    n *= r0;
    n *= 0.38948825f;
    n += r3;
    n += 0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065890f;
    n *= 0.28864506f;
    n *= -5.54872799f;
    r1 = n *= -0.82419467f;
    n *= 0.02943069f;
    n = r0 *= n;
    n += -0.33335432f;
    r2 = n *= -0.00863981f;
    n *= -27.42316055f;
    r3 = n += -1.79685485f;
    n += 8.34703255f;
    n *= r2;
    r2 = n += 1.00700545f;
    n += r2;
    r2 = n += -1.47334385f;
    n = r2 *= n;
    r4 = n *= 0.04453500f;
    n *= r4;
    n = r0 *= n;
    n *= -10.35388184f;
    r4 = n *= -8.84295654f;
    n *= r3;
    r3 = n += 1.85425222f;
    n *= r4;
    n += -1.34544921f;
    n *= r2;
    n *= r1;
    n = r3 *= n;
    n *= r0;
    n *= -10902.58300781f;
    n += r3;
    n += -0.11813194f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    n *= 0.18778972f;
    n *= 0.87644303f;
    r1 = n *= -1.34814715f;
    n *= -1.27480316f;
    n = r0 *= n;
    n += -3.51729131f;
    r2 = n *= 0.00060269f;
    n *= -4.60660172f;
    r3 = n += -1.29565036f;
    n += -4.70459318f;
    n *= r2;
    r2 = n += 0.52016908f;
    n += r2;
    r2 = n += 0.19318017f;
    n = r2 *= n;
    r4 = n *= -0.46472624f;
    n *= r4;
    n = r0 *= n;
    n *= -2.88772964f;
    r4 = n *= 0.06639358f;
    n *= r3;
    r3 = n += -2.44841409f;
    n *= r4;
    n += -1.16141903f;
    n *= r2;
    n *= r1;
    n = r3 *= n;
    n *= r0;
    n *= -1.35088515f;
    n += r3;
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
