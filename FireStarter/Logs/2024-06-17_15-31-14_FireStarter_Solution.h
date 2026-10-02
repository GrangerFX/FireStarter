// Run date: 06/17/24 15:31:14 Pacific Daylight Time
// Run duration = 131.743190 seconds
// Run generation = 45
// Run evolution = 2
// Run max result = 0.00002337
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

// Solution0 result = 0.00002027
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.91312313f;
    r0 = n *= -0.91422075f;
    r1 = n *= -0.97634608f;
    r2 = n += -0.30973288f;
    r3 = n += -3.39858842f;
    n *= 0.54846966f;
    n += r1;
    n *= 1.24836147f;
    r1 = n += -1.30719149f;
    n *= 0.00588663f;
    n *= 2.12164187f;
    n = r3 += n;
    n *= r2;
    n += 0.64782554f;
    r2 = n *= 0.04845789f;
    r4 = n *= -0.34687674f;
    n *= 1.73003876f;
    n += 4.37224865f;
    r5 = n += 1.38568485f;
    n += -3.36774230f;
    n *= r2;
    n += r3;
    n = r0 += n;
    n *= r0;
    n *= r4;
    n *= -0.17935243f;
    n *= r5;
    n *= -2.45712376f;
    n += 2.35921717f;
    n *= r1;
    n += 0.00458164f;
    n *= -0.14774384f;
    return n;
} // Solution0

// Solution1 result = 0.00002158
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.13527083f;
    r0 = n *= 0.29481217f;
    r1 = n *= -0.57213861f;
    r2 = n += -0.44619679f;
    r3 = n += 1.21018922f;
    n *= 0.97371757f;
    n += r1;
    n *= -0.39971918f;
    r1 = n += 0.30323994f;
    n *= -0.68700993f;
    n *= 1.39370549f;
    n = r3 += n;
    n *= r2;
    n += -1.04976285f;
    r2 = n *= -0.19096898f;
    r4 = n *= 0.62570345f;
    n *= 8.86405373f;
    n += 1.56572986f;
    r5 = n += 4.90332508f;
    n += 5.25777674f;
    n *= r2;
    n += r3;
    n = r0 += n;
    n *= r0;
    n *= r4;
    n *= -8.00461102f;
    n *= r5;
    n *= -4.41972876f;
    n += -15.41894436f;
    n *= r1;
    n += 11.89138889f;
    n *= -0.00997100f;
    return n;
} // Solution1

// Solution2 result = 0.00002337
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.38450718f;
    r0 = n *= -0.34522870f;
    r1 = n *= -1.05014300f;
    r2 = n += -1.06277823f;
    r3 = n += -0.75813615f;
    n *= 0.62680864f;
    n += r1;
    n *= 1.98320508f;
    r1 = n += -2.41782522f;
    n *= -0.00425826f;
    n *= 3.47076821f;
    n = r3 += n;
    n *= r2;
    n += -0.53993767f;
    r2 = n *= 0.16358866f;
    r4 = n *= -3.35042310f;
    n *= 0.45821691f;
    n += -1.28012621f;
    r5 = n += 2.10123539f;
    n += 1.70524609f;
    n *= r2;
    n += r3;
    n = r0 += n;
    n *= r0;
    n *= r4;
    n *= 2.94367123f;
    n *= r5;
    n *= 0.24338047f;
    n += -0.06197337f;
    n *= r1;
    n += -0.65033466f;
    n *= -0.80535352f;
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
