// Run date: 06/17/24 18:33:28 Pacific Daylight Time
// Run duration = 191.391117 seconds
// Run generation = 8
// Run evolution = 1
// Run max result = 0.00016791
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

// Solution0 result = 0.00016791
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.69592428f;
    r0 = n *= 0.09804232f;
    r1 = n += -0.69417399f;
    n = r1 *= n;
    n *= -0.79617137f;
    r2 = n += 2.10422921f;
    r3 = n *= 0.60475349f;
    r4 = n += -1.22958398f;
    n += 1.46895027f;
    r5 = n *= 2.30310750f;
    r6 = n += -0.71646726f;
    n = r0 *= n;
    n *= 1.74793875f;
    n *= -0.22100656f;
    n += -0.15661685f;
    r7 = n *= -0.83198345f;
    n *= r2;
    n *= -0.01978582f;
    r2 = n += -0.51476878f;
    n = r3 *= n;
    n *= r2;
    n *= r5;
    n *= 15.46729088f;
    n *= r0;
    n *= r7;
    n *= 5.74555111f;
    n *= r6;
    n *= r1;
    n *= r3;
    n *= -3.92197752f;
    n *= r4;
    n += 0.43089634f;
    return n;
} // Solution0

// Solution1 result = 0.00009108
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.98840737f;
    r0 = n *= -0.10615078f;
    r1 = n += -0.49899426f;
    n = r1 *= n;
    n *= 0.83013165f;
    r2 = n += -0.96456099f;
    r3 = n *= 1.20845771f;
    r4 = n += -2.79865861f;
    n += 0.88053274f;
    r5 = n *= -0.04783733f;
    r6 = n += 1.03341794f;
    n = r0 *= n;
    n *= -0.05680571f;
    n *= -4.24322128f;
    n += -1.46746933f;
    r7 = n *= -0.28598621f;
    n *= r2;
    n *= -3.81854224f;
    r2 = n += 2.11252189f;
    n = r3 *= n;
    n *= r2;
    n *= r5;
    n *= -1.06167388f;
    n *= r0;
    n *= r7;
    n *= -4.51457834f;
    n *= r6;
    n *= r1;
    n *= r3;
    n *= -0.96981704f;
    n *= r4;
    n += -0.00571156f;
    return n;
} // Solution1

// Solution2 result = 0.00010622
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.20082211f;
    r0 = n *= 0.07557340f;
    r1 = n += -1.36043990f;
    n = r1 *= n;
    n *= 1.26698887f;
    r2 = n += -0.81466222f;
    r3 = n *= 0.46525431f;
    r4 = n += -1.57357514f;
    n += 0.92139119f;
    r5 = n *= 2.46910977f;
    r6 = n += -3.71555471f;
    n = r0 *= n;
    n *= -1.53466284f;
    n *= 0.66489261f;
    n += -1.50105560f;
    r7 = n *= 0.48358428f;
    n *= r2;
    n *= 0.15792158f;
    r2 = n += 0.71072596f;
    n = r3 *= n;
    n *= r2;
    n *= r5;
    n *= 9.38038063f;
    n *= r0;
    n *= r7;
    n *= -0.38661611f;
    n *= r6;
    n *= r1;
    n *= r3;
    n *= -7.67193937f;
    n *= r4;
    n += 1.23167980f;
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
