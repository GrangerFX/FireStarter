// Run date: 08/02/22 10:38:31 Pacific Daylight Time
// Run duration = 2.356078 seconds
// Run count = 16
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 75

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.03136516

// Solution0 precision = 0.02207157
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10;

    n += -2.35239577f;
    n += -3.52487540f;
    r0 = n *= -0.44644314f;
    r1 = n += -1.05665028f;
    r2 = n *= -0.42211747f;
    r3 = n *= 0.89508218f;
    r4 = n += 0.49047652f;
    r5 = n += 0.00880556f;
    r6 = n += 0.53678554f;
    n += r3;
    r3 = n += 0.73808467f;
    r7 = n += -0.43740758f;
    n = r1 += n;
    r8 = n += 0.16947240f;
    r9 = n *= 0.20585686f;
    r10 = n *= -1.34124994f;
    n += r5;
    n += 0.04328175f;
    n += r10;
    n += -0.88652700f;
    n *= r1;
    n *= r3;
    n *= r8;
    n += 0.73687190f;
    n *= r6;
    n *= r0;
    n *= r2;
    n += -0.43570986f;
    n *= r7;
    n += r4;
    n += -0.59010744f;
    n += r9;
    return n;
} // Solution0

// Solution1 precision = 0.03136516
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10;

    n += -0.05508536f;
    n += 0.37421584f;
    r0 = n *= 0.36996311f;
    r1 = n += -0.91064572f;
    r2 = n *= -0.51576024f;
    r3 = n *= 0.47695243f;
    r4 = n += 0.64959204f;
    r5 = n += -0.40909931f;
    r6 = n += 0.51180327f;
    n += r3;
    r3 = n += 0.41822067f;
    r7 = n += 0.29799184f;
    n = r1 += n;
    r8 = n += -0.29645985f;
    r9 = n *= 0.63391805f;
    r10 = n *= 0.38616809f;
    n += r5;
    n += 0.24444678f;
    n += r10;
    n += 0.99493748f;
    n *= r1;
    n *= r3;
    n *= r8;
    n += 0.65709412f;
    n *= r6;
    n *= r0;
    n *= r2;
    n += -0.49255759f;
    n *= r7;
    n += r4;
    n += 0.12510392f;
    n += r9;
    return n;
} // Solution1

// Solution2 precision = 0.02535176
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10;

    n += 0.31688866f;
    n += 0.95596451f;
    r0 = n *= -0.36571336f;
    r1 = n += 0.36791447f;
    r2 = n *= 0.75059837f;
    r3 = n *= 0.48444974f;
    r4 = n += 0.91980076f;
    r5 = n += 0.49303439f;
    r6 = n += 0.35559401f;
    n += r3;
    r3 = n += 0.62610531f;
    r7 = n += -0.01644031f;
    n = r1 += n;
    r8 = n += 0.42729709f;
    r9 = n *= -0.20610909f;
    r10 = n *= 0.70469475f;
    n += r5;
    n += -1.23388994f;
    n += r10;
    n += 0.80613494f;
    n *= r1;
    n *= r3;
    n *= r8;
    n += -0.01916243f;
    n *= r6;
    n *= r0;
    n *= r2;
    n += -0.28317925f;
    n *= r7;
    n += r4;
    n += -0.02838990f;
    n += r9;
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
