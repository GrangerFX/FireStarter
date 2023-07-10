// Run date: 07/10/23 11:00:28 Pacific Daylight Time
// Run duration = 573.466203 seconds
// Run generation = 54
// Run evolution = 0
// Run result = 0.00000203
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14158893f;
    n += -0.13110390f;
    r1 = n += -0.17909275f;
    r2 = n += 0.31019151f;
    n *= 0.18339607f;
    n = r0 *= n;
    n += -0.45943820f;
    n *= -0.47734445f;
    n += -1.16263258f;
    n += 1.50535440f;
    r3 = n *= 1.98481929f;
    n *= 1.14119303f;
    n = r0 += n;
    r4 = n += 1.84422731f;
    r5 = n += -1.75090528f;
    n = r4 *= n;
    r6 = n *= -0.21414119f;
    n += 0.32176977f;
    n *= r6;
    n += r4;
    r4 = n *= -0.27739796f;
    n *= r5;
    n *= r0;
    n *= r3;
    n *= r4;
    n *= r2;
    n += r1;
    n *= 0.31032947f;
    r1 = n *= -0.72109747f;
    n += -9.75087643f;
    n *= 0.00716993f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09066319f;
    n += 0.70521098f;
    r1 = n += -0.36708656f;
    r2 = n += -0.33811799f;
    n *= 0.39737949f;
    n = r0 *= n;
    n += -1.75116432f;
    n *= 1.41656184f;
    n += 0.03582960f;
    n += -2.14507866f;
    r3 = n *= -0.78077227f;
    n *= 0.93217874f;
    n = r0 += n;
    r4 = n += -1.29111898f;
    r5 = n += -0.78338265f;
    n = r4 *= n;
    r6 = n *= 0.14147562f;
    n += -4.09004641f;
    n *= r6;
    n += r4;
    r4 = n *= -0.28248766f;
    n *= r5;
    n *= r0;
    n *= r3;
    n *= r4;
    n *= r2;
    n += r1;
    n *= -0.21391220f;
    r1 = n *= 1.81268597f;
    n += 3.06928968f;
    n *= 0.00441681f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000203
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799121f;
    n += -0.06960939f;
    r1 = n += 2.20039701f;
    r2 = n += -2.13079095f;
    n *= 0.42818919f;
    n = r0 *= n;
    n += 1.98821318f;
    n *= -1.77260017f;
    n += 5.46850395f;
    n += 1.85002625f;
    r3 = n *= -0.34463429f;
    n *= -1.74395645f;
    n = r0 += n;
    r4 = n += -0.99451935f;
    r5 = n += 2.38006353f;
    n = r4 *= n;
    r6 = n *= -0.23563731f;
    n += -2.20422959f;
    n *= r6;
    n += r4;
    r4 = n *= -0.80603153f;
    n *= r5;
    n *= r0;
    n *= r3;
    n *= r4;
    n *= r2;
    n += r1;
    n *= 0.03612901f;
    r1 = n *= 0.05406952f;
    n += 21.29982185f;
    n *= 0.02438208f;
    n += r1;
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
