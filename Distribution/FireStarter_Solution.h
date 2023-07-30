// Run date: 07/30/23 14:34:31 Pacific Daylight Time
// Run duration = 469.767693 seconds
// Run generation = 52
// Run evolution = 0
// Run result = 0.00000027
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 8
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

// Solution0 result = 0.00000027
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159250f;
    r0 = n *= 0.32242844f;
    r1 = n *= 0.58787435f;
    n *= r1;
    r1 = n += -1.89480996f;
    n *= 0.33920836f;
    r2 = n += -0.66614324f;
    n *= 1.22826350f;
    n = r2 *= n;
    r3 = n += -1.73524284f;
    r4 = n *= -0.24712944f;
    n *= 0.72857100f;
    n *= -2.47500944f;
    r5 = n += -0.25752872f;
    n *= r5;
    n *= -0.04274170f;
    n *= 0.31901529f;
    r5 = n *= 1.46258664f;
    r6 = n += 1.53371692f;
    n *= -2.11500478f;
    n *= r0;
    n = r1 *= n;
    n *= r4;
    n = r6 *= n;
    n *= r5;
    n *= r1;
    n += 1.34611738f;
    n += r3;
    n *= r6;
    n *= r2;
    n += 0.67767262f;
    n += -0.67767239f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065866f;
    r0 = n *= -0.10491648f;
    r1 = n *= -1.60769022f;
    n *= r1;
    r1 = n += -1.19953060f;
    n *= 1.91977382f;
    r2 = n += 0.88908094f;
    n *= 0.12397315f;
    n = r2 *= n;
    r3 = n += 3.62439656f;
    r4 = n *= -0.80320275f;
    n *= 1.91933489f;
    n *= -0.29977247f;
    r5 = n += -1.72705173f;
    n *= r5;
    n *= -0.92254853f;
    n *= -0.06162523f;
    r5 = n *= 1.36524451f;
    r6 = n += -1.52017903f;
    n *= 1.19335663f;
    n *= r0;
    n = r1 *= n;
    n *= r4;
    n = r6 *= n;
    n *= r5;
    n *= r1;
    n += 0.24215056f;
    n += r3;
    n *= r6;
    n *= r2;
    n += 0.49286368f;
    n += -0.61099553f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799359f;
    r0 = n *= 0.93732327f;
    r1 = n *= -0.63817692f;
    n *= r1;
    r1 = n += -1.78309119f;
    n *= 0.08019719f;
    r2 = n += -1.09239507f;
    n *= 0.40313098f;
    n = r2 *= n;
    r3 = n += 0.27869540f;
    r4 = n *= -0.52314597f;
    n *= 1.93903041f;
    n *= -0.64573032f;
    r5 = n += -1.37044168f;
    n *= r5;
    n *= -1.03291965f;
    n *= -0.00006663f;
    r5 = n *= -7.22727203f;
    r6 = n += -1.38402081f;
    n *= -0.33719078f;
    n *= r0;
    n = r1 *= n;
    n *= r4;
    n = r6 *= n;
    n *= r5;
    n *= r1;
    n += 2.32406902f;
    n += r3;
    n *= r6;
    n *= r2;
    n += -0.47756210f;
    n += 1.00116074f;
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
