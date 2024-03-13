// Run date: 03/12/24 10:18:51 Pacific Daylight Time
// Run duration = 32528.158581 seconds
// Run generation = 198
// Run evolution = 16
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

// Solution0 result = 0.00000007
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159250f;
    r0 = n *= -0.34109786f;
    n *= 0.26164359f;
    n *= -3.40642524f;
    n *= -1.57857311f;
    r1 = n *= -1.13217318f;
    n *= r0;
    r0 = n += 0.39192796f;
    n *= -0.00040294f;
    r2 = n *= 10.69601440f;
    n = r2 += n;
    r3 = n += 0.15422750f;
    n += r0;
    n *= 0.28676119f;
    r0 = n += 1.88202095f;
    n = r3 += n;
    n *= r3;
    n *= 0.40018380f;
    n *= 0.55269575f;
    r3 = n *= 0.85657603f;
    n += 1.69085932f;
    n = r3 *= n;
    n *= 0.06048936f;
    n += -0.57933396f;
    n += -1.00283515f;
    n += r0;
    n *= r3;
    n *= -1.30271912f;
    n += r2;
    n *= r1;
    n += 0.10584272f;
    n += -0.10584264f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065866f;
    r0 = n *= -0.10180775f;
    n *= -2.99159527f;
    n *= -5.37061644f;
    n *= 6.09587288f;
    r1 = n *= 0.06233044f;
    n *= r0;
    r0 = n += -0.49299139f;
    n *= -0.00005487f;
    r2 = n *= -45.38937378f;
    n = r2 += n;
    r3 = n += 0.84195286f;
    n += r0;
    n *= -1.34128106f;
    r0 = n += 1.76651967f;
    n = r3 += n;
    n *= r3;
    n *= -0.23787101f;
    n *= -0.11796691f;
    r3 = n *= -0.68850559f;
    n += -2.41733623f;
    n = r3 *= n;
    n *= 3.86832047f;
    n += 2.21436930f;
    n += 1.13134587f;
    n += r0;
    n *= r3;
    n *= 1.45007122f;
    n += r2;
    n *= r1;
    n += -0.15153354f;
    n += 0.03340167f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799383f;
    r0 = n *= -1.04830956f;
    n *= 1.02128065f;
    n *= 0.92489672f;
    n *= 1.39421761f;
    r1 = n *= 0.26950681f;
    n *= r0;
    r0 = n += 0.18580969f;
    n *= -0.59892684f;
    r2 = n *= 0.02629558f;
    n = r2 += n;
    r3 = n += -1.32934570f;
    n += r0;
    n *= 0.23034813f;
    r0 = n += -0.94319385f;
    n = r3 += n;
    n *= r3;
    n *= 0.01867474f;
    n *= -1.87119639f;
    r3 = n *= 4.33628464f;
    n += -1.25187409f;
    n = r3 *= n;
    n *= -0.10317991f;
    n += 1.41597569f;
    n += -0.51758629f;
    n += r0;
    n *= r3;
    n *= -2.30063796f;
    n += r2;
    n *= r1;
    n += 0.08254930f;
    n += 0.44104943f;
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
