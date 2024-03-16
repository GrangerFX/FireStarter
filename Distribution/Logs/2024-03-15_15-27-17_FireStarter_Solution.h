// Run date: 03/15/24 15:27:17 Pacific Daylight Time
// Run duration = 13459.208962 seconds
// Run generation = 193
// Run evolution = 9
// Run max result = 0.00000143
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

// Solution0 result = 0.00000021
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    n *= 0.15335521f;
    n *= 0.99461299f;
    r1 = n *= -1.16094947f;
    n *= -4671.03613281f;
    n *= -0.03758625f;
    r2 = n *= -0.02481174f;
    n = r0 += n;
    n *= -1.78345585f;
    n += r0;
    n = r2 += n;
    n *= -1.63802886f;
    n += r2;
    r2 = n *= -0.23532185f;
    n = r2 *= n;
    r0 = n += 0.09615429f;
    n += -2.65076113f;
    n = r2 *= n;
    r3 = n += 0.85991770f;
    r4 = n += 0.80721861f;
    n *= 2.90762401f;
    n += 1.02761567f;
    n += 2.64593291f;
    n = r3 *= n;
    n = r2 *= n;
    n += r4;
    n *= r3;
    n *= 0.45442170f;
    n += r0;
    n += r2;
    n *= r1;
    n += -0.00000009f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065866f;
    n *= 1.45833218f;
    n *= 0.26943478f;
    r1 = n *= 0.18139683f;
    n *= 3.06046200f;
    n *= -0.09468407f;
    r2 = n *= -0.00014406f;
    n = r0 += n;
    n *= -1.99247622f;
    n += r0;
    n = r2 += n;
    n *= -0.44574878f;
    n += r2;
    r2 = n *= 0.16769069f;
    n = r2 *= n;
    r0 = n += -4.04738760f;
    n += 1.48958409f;
    n = r2 *= n;
    r3 = n += 1.42429054f;
    r4 = n += 0.41738141f;
    n *= 1.98559773f;
    n += 2.41355467f;
    n += 2.19714832f;
    n = r3 *= n;
    n = r2 *= n;
    n += r4;
    n *= r3;
    n *= -0.52501738f;
    n += r0;
    n += r2;
    n *= r1;
    n += -0.11813183f;
    return n;
} // Solution1

// Solution2 result = 0.00000143
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    n *= -0.02371972f;
    n *= 1.38584185f;
    r1 = n *= 2.89147902f;
    n *= -22678.83398438f;
    n *= -2.70355558f;
    r2 = n *= 0.00061429f;
    n = r0 += n;
    n *= 0.40594780f;
    n += r0;
    n = r2 += n;
    n *= -1.23716044f;
    n += r2;
    r2 = n *= 0.09054294f;
    n = r2 *= n;
    r0 = n += -1.46973765f;
    n += -1.57500446f;
    n = r2 *= n;
    r3 = n += 1.86069930f;
    r4 = n += 0.68419111f;
    n *= 0.19997008f;
    n += 1.43440926f;
    n += 0.86715531f;
    n = r3 *= n;
    n = r2 *= n;
    n += r4;
    n *= r3;
    n *= 0.90099150f;
    n += r0;
    n += r2;
    n *= r1;
    n += 0.52359927f;
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
