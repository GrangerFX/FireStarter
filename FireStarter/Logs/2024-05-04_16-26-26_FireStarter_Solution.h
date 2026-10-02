// Run date: 05/04/24 16:26:26 Pacific Daylight Time
// Run duration = 153.233681 seconds
// Run generation = 29
// Run evolution = 1
// Run max result = 0.00505906
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

// Solution0 result = 0.00505906
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -1.04416621f;
    r1 = n *= 0.26792940f;
    n *= 1.07013130f;
    r2 = n += -0.09106102f;
    r3 = n += -0.97383314f;
    n *= r0;
    n += 0.33737683f;
    n *= -0.38463852f;
    n += -0.45166740f;
    n *= -0.13615791f;
    n *= -0.16224138f;
    n = r3 += n;
    n *= r2;
    n *= 0.49083921f;
    n = r3 += n;
    r2 = n *= 1.68937612f;
    n *= -1.62846029f;
    n *= 1.06027865f;
    r0 = n += -0.20458812f;
    n += -0.16168152f;
    n *= 0.62244642f;
    n += r3;
    n = r1 += n;
    n *= r1;
    n *= r2;
    n *= 1.03735518f;
    n *= r0;
    n *= 1.74918854f;
    n += 0.97478890f;
    n += -0.56899267f;
    n += 1.36402726f;
    n *= -0.56540942f;
    return n;
} // Solution0

// Solution1 result = 0.00485492
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += 1.12596500f;
    r1 = n *= 0.71399438f;
    n *= 0.09233107f;
    r2 = n += -1.34204018f;
    r3 = n += -0.47565773f;
    n *= r0;
    n += 1.15576780f;
    n *= 1.54476881f;
    n += -1.65518856f;
    n *= 1.67869377f;
    n *= 0.53240013f;
    n = r3 += n;
    n *= r2;
    n *= 0.92087889f;
    n = r3 += n;
    r2 = n *= -0.73054987f;
    n *= 0.46719733f;
    n *= 0.62929070f;
    r0 = n += -2.03364205f;
    n += 1.59936595f;
    n *= -1.03933620f;
    n += r3;
    n = r1 += n;
    n *= r1;
    n *= r2;
    n *= -1.64254987f;
    n *= r0;
    n *= 0.89571297f;
    n += -2.12933707f;
    n += -1.89797962f;
    n += 0.99618363f;
    n *= -0.07870141f;
    return n;
} // Solution1

// Solution2 result = 0.00493437
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += 0.29156044f;
    r1 = n *= -1.89330387f;
    n *= -0.37480778f;
    r2 = n += -1.77271247f;
    r3 = n += -0.04333153f;
    n *= r0;
    n += -1.01705647f;
    n *= 0.60844678f;
    n += -0.46850577f;
    n *= -0.41036609f;
    n *= 0.38701874f;
    n = r3 += n;
    n *= r2;
    n *= -0.45897350f;
    n = r3 += n;
    r2 = n *= -0.71347898f;
    n *= -1.53907073f;
    n *= 0.51563954f;
    r0 = n += 0.51956648f;
    n += 1.32660782f;
    n *= -1.52705479f;
    n += r3;
    n = r1 += n;
    n *= r1;
    n *= r2;
    n *= 0.05154246f;
    n *= r0;
    n *= 1.26641428f;
    n += 2.23381710f;
    n += 0.31510323f;
    n += -1.27517295f;
    n *= 0.86491305f;
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
