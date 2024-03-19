// Run date: 03/19/24 00:18:46 Pacific Daylight Time
// Run duration = 18039.323503 seconds
// Run generation = 2334
// Run evolution = 20
// Run max result = 0.00000012
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
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2;

    n *= -1.04608798f;
    n += -0.13656966f;
    r0 = n += 1.72052693f;
    r1 = n += 1.70242488f;
    n += 1.70242560f;
    n *= -2.21305418f;
    n *= r0;
    r0 = n *= -0.09224594f;
    n += -1.33577371f;
    r2 = n *= -0.00161211f;
    n += 4.65191746f;
    n += 2.24583769f;
    n = r2 *= n;
    n += 0.78697836f;
    n = r2 *= n;
    n += -1.32167983f;
    n += r2;
    r2 = n += 1.79852927f;
    n *= r2;
    n = r0 *= n;
    n *= 1.10858679f;
    r2 = n += -0.10838626f;
    n *= r2;
    n += 1.27535474f;
    n += -0.79621470f;
    n *= -0.63807714f;
    n += r0;
    n *= -1.87231982f;
    n *= r1;
    n += -0.22859381f;
    n += 0.03085604f;
    n += 0.19773798f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2;

    n *= -1.14374006f;
    n += -0.51416874f;
    r0 = n += 2.35455036f;
    r1 = n += 1.69452941f;
    n += 1.69452620f;
    n *= -0.06896254f;
    n *= r0;
    r0 = n *= 1.25761306f;
    n += 0.79566538f;
    r2 = n *= -0.00283256f;
    n += 2.00440431f;
    n += -9.96253395f;
    n = r2 *= n;
    n += 0.99426538f;
    n = r2 *= n;
    n += 1.21112931f;
    n += r2;
    r2 = n += -0.43698651f;
    n *= r2;
    n = r0 *= n;
    n *= 1.62196219f;
    r2 = n += 1.76478016f;
    n *= r2;
    n += 1.62967634f;
    n += -0.58772993f;
    n *= 1.14880276f;
    n += r0;
    n *= 0.15674745f;
    n *= r1;
    n += 1.97053885f;
    n += -1.37674904f;
    n += -0.71192253f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2;

    n *= 1.21701109f;
    n += -1.70318305f;
    r0 = n += 0.40537262f;
    r1 = n += -1.88831639f;
    n += -1.88831842f;
    n *= -0.10426065f;
    n *= r0;
    r0 = n *= 0.81713450f;
    n += 0.39625868f;
    r2 = n *= 0.01490251f;
    n += 1.15823174f;
    n += 1.02198029f;
    n = r2 *= n;
    n += 1.12591565f;
    n = r2 *= n;
    n += -0.15347949f;
    n += r2;
    r2 = n += 0.92952061f;
    n *= r2;
    n = r0 *= n;
    n *= 1.52074373f;
    r2 = n += 0.87372100f;
    n *= r2;
    n += 1.23469627f;
    n += -1.42874658f;
    n *= 1.48977065f;
    n += r0;
    n *= -0.40433607f;
    n *= r1;
    n += -2.10048604f;
    n += 0.90639383f;
    n += 1.71769142f;
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
