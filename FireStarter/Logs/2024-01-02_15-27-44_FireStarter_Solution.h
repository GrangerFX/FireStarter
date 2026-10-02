// Run date: 01/02/24 15:27:44 Pacific Standard Time
// Run duration = 1009.069175 seconds
// Run generation = 16
// Run evolution = 12
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
// Run tests = 1
// Run states = 64
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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.43220559f;
    n *= -0.66375273f;
    n *= 0.13227986f;
    n *= -1.26434815f;
    n = r0 *= n;
    r2 = n += 0.13121095f;
    n += -3.81342459f;
    n *= -2.22144389f;
    r3 = n += -17.80025482f;
    r4 = n *= 0.00192436f;
    r5 = n *= 0.00245358f;
    n = r4 *= n;
    n += r0;
    r0 = n *= -0.69090760f;
    n *= 0.34997940f;
    r6 = n += -0.44167551f;
    n = r0 += n;
    n += r4;
    n += -5530.33740234f;
    n *= r5;
    n += 0.17750509f;
    n *= r2;
    r2 = n += 1.43930352f;
    n *= r6;
    n *= r1;
    n *= r2;
    n *= r0;
    n *= r3;
    n += -0.00000002f;
    n *= -0.22398669f;
    n *= 2.46081448f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065843f;
    r1 = n *= 0.16359492f;
    n *= 0.01493186f;
    n *= -0.37606981f;
    n *= -405.32183838f;
    n = r0 *= n;
    r2 = n += -1.05642283f;
    n += 1.83157241f;
    n *= 0.00635935f;
    r3 = n += -0.83661771f;
    r4 = n *= 2.35048223f;
    r5 = n *= -0.31064525f;
    n = r4 *= n;
    n += r0;
    r0 = n *= -0.01201066f;
    n *= 2.69896269f;
    r6 = n += 0.91904408f;
    n = r0 += n;
    n += r4;
    n += -3.18844080f;
    n *= r5;
    n += 2.25737691f;
    n *= r2;
    r2 = n += -1.63585520f;
    n *= r6;
    n *= r1;
    n *= r2;
    n *= r0;
    n *= r3;
    n += -0.04587959f;
    n *= -0.74151087f;
    n *= -3.47239566f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= -2.80333424f;
    n *= -0.32506493f;
    n *= 0.18702853f;
    n *= -1.03934097f;
    n = r0 *= n;
    r2 = n += 1.96561444f;
    n += -2.30974174f;
    n *= 0.62761891f;
    r3 = n += 0.76999313f;
    r4 = n *= 2.25176263f;
    r5 = n *= 0.00136675f;
    n = r4 *= n;
    n += r0;
    r0 = n *= -0.06433639f;
    n *= -2.13645196f;
    r6 = n += 1.10595572f;
    n = r0 += n;
    n += r4;
    n += 1.19970047f;
    n *= r5;
    n += 0.09987354f;
    n *= r2;
    r2 = n += 0.54385579f;
    n *= r6;
    n *= r1;
    n *= r2;
    n *= r0;
    n *= r3;
    n += 0.55658966f;
    n *= -0.66805387f;
    n *= -1.40815997f;
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
