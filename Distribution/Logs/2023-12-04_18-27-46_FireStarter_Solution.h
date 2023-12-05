// Run date: 12/04/23 18:27:46 Pacific Standard Time
// Run duration = 1334.060584 seconds
// Run generation = 20
// Run evolution = 7
// Run max result = 0.00002003
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
// Run optimizeSeed = 1
// Run tests = 1
// Run seeds = 64
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

// Solution0 result = 0.00001380
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.70208555f;
    r0 = n *= 0.61889380f;
    r1 = n *= 1.17091334f;
    n += -0.79898518f;
    r2 = n *= -0.85305196f;
    n *= r2;
    r2 = n *= -0.53717518f;
    r3 = n += 12.20958042f;
    r4 = n *= 0.14631894f;
    r5 = n += -1.52909815f;
    n *= r3;
    n *= 0.15305258f;
    r3 = n += 1.62045562f;
    n *= 1.55293357f;
    n = r5 *= n;
    n += 2.78591800f;
    r6 = n *= 0.00010624f;
    n = r1 *= n;
    n *= -1.49321949f;
    n = r5 += n;
    n += r6;
    n += r3;
    n *= 1.50797307f;
    n *= r2;
    n += 0.02285230f;
    n += r1;
    n = r4 += n;
    n *= 0.00119315f;
    n *= r0;
    n += r4;
    n *= r5;
    n += -0.52049983f;
    return n;
} // Solution0

// Solution1 result = 0.00001490
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -2.08014202f;
    r0 = n *= -0.19012737f;
    r1 = n *= -0.56146502f;
    n += 0.68616354f;
    r2 = n *= 0.44963732f;
    n *= r2;
    r2 = n *= -1.03509963f;
    r3 = n += 1.07471800f;
    r4 = n *= -0.64042628f;
    r5 = n += -0.57842839f;
    n *= r3;
    n *= 1.86413622f;
    r3 = n += 0.87054485f;
    n *= -1.91588473f;
    n = r5 *= n;
    n += -0.56894273f;
    r6 = n *= 0.00008582f;
    n = r1 *= n;
    n *= -3.16696930f;
    n = r5 += n;
    n += r6;
    n += r3;
    n *= 1.06580687f;
    n *= r2;
    n += -0.15245919f;
    n += r1;
    n = r4 += n;
    n *= -0.81769824f;
    n *= r0;
    n += r4;
    n *= r5;
    n += -0.11984147f;
    return n;
} // Solution1

// Solution2 result = 0.00002003
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -1.88632727f;
    r0 = n *= -1.61780775f;
    r1 = n *= 0.04007716f;
    n += -0.32015038f;
    r2 = n *= 0.94763893f;
    n *= r2;
    r2 = n *= 2.46767735f;
    r3 = n += -0.38772923f;
    r4 = n *= -0.41361514f;
    r5 = n += 1.25546348f;
    n *= r3;
    n *= 1.11394739f;
    r3 = n += -1.78398681f;
    n *= -1.13955939f;
    n = r5 *= n;
    n += 6.35882711f;
    r6 = n *= -0.00001287f;
    n = r1 *= n;
    n *= -3.12261391f;
    n = r5 += n;
    n += r6;
    n += r3;
    n *= -3.25106573f;
    n *= r2;
    n += 0.51716518f;
    n += r1;
    n = r4 += n;
    n *= -0.12513433f;
    n *= r0;
    n += r4;
    n *= r5;
    n += 0.52291816f;
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
