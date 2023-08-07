// Run date: 08/06/23 21:29:42 Pacific Daylight Time
// Run duration = 192.062944 seconds
// Run generation = 7
// Run evolution = 1
// Run result = 0.00001836
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run seeds = 64
// Run tests = 0
// Run units = 8
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

// Solution0 result = 0.00001836
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.75791788f;
    n += -0.56370425f;
    r1 = n += -0.84734362f;
    n += -0.39747900f;
    r2 = n *= -0.00821652f;
    r3 = n *= 182.25942993f;
    n = r1 += n;
    n *= 0.67595553f;
    r4 = n *= 0.00019937f;
    r5 = n += -0.05954656f;
    n *= r1;
    n *= r0;
    n += -2.01423407f;
    n += r4;
    r4 = n += -0.26138029f;
    r0 = n += 0.69237334f;
    n = r0 *= n;
    n *= 0.82421356f;
    r1 = n *= 0.23680416f;
    n = r4 *= n;
    n *= -2.19395328f;
    n = r1 *= n;
    n *= 0.74715704f;
    n *= r5;
    n *= -2.05353522f;
    n = r2 += n;
    n *= r0;
    n += r1;
    n += r4;
    n += r2;
    n *= r3;
    n += -0.41216788f;
    return n;
} // Solution0

// Solution1 result = 0.00000274
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -5.19278049f;
    n += 3.18549562f;
    r1 = n += 1.06675780f;
    n += -2.14840770f;
    r2 = n *= -0.00737282f;
    r3 = n *= -2.68376493f;
    n = r1 += n;
    n *= 0.00000295f;
    r4 = n *= -1.01489425f;
    r5 = n += -0.08938464f;
    n *= r1;
    n *= r0;
    n += 2.88935232f;
    n += r4;
    r4 = n += 0.58582801f;
    r0 = n += -1.52155197f;
    n = r0 *= n;
    n *= 0.87696981f;
    r1 = n *= -2.57668495f;
    n = r4 *= n;
    n *= -0.01112067f;
    n = r1 *= n;
    n *= 6.51410723f;
    n *= r5;
    n *= -0.00234670f;
    n = r2 += n;
    n *= r0;
    n += r1;
    n += r4;
    n += r2;
    n *= r3;
    n += -0.11623857f;
    return n;
} // Solution1

// Solution2 result = 0.00001204
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.03201795f;
    n += -0.61339074f;
    r1 = n += -2.45506763f;
    n += 1.30482018f;
    r2 = n *= -0.04140664f;
    r3 = n *= 1.01992965f;
    n = r1 += n;
    n *= -3.74847674f;
    r4 = n *= 0.00001205f;
    r5 = n += 0.10923425f;
    n *= r1;
    n *= r0;
    n += -1.54694283f;
    n += r4;
    r4 = n += 1.29074895f;
    r0 = n += -4.02095079f;
    n = r0 *= n;
    n *= -0.81186652f;
    r1 = n *= 0.67533588f;
    n = r4 *= n;
    n *= -0.21903177f;
    n = r1 *= n;
    n *= -0.05312660f;
    n *= r5;
    n *= -1.86181760f;
    n = r2 += n;
    n *= r0;
    n += r1;
    n += r4;
    n += r2;
    n *= r3;
    n += 0.34753829f;
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
