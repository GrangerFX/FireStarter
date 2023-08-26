// Run date: 08/26/23 11:42:05 Pacific Daylight Time
// Run duration = 1730.921236 seconds
// Run generation = 287
// Run evolution = 29
// Run result = 0.00000095
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 100
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159250f;
    r1 = n *= 0.16017969f;
    r2 = n *= -0.53901589f;
    r3 = n *= 1.68174148f;
    n *= r2;
    r2 = n += -1.52397895f;
    r4 = n += -1.32395303f;
    r5 = n *= -1.36833942f;
    r6 = n *= -0.65649873f;
    r7 = n += 2.44718575f;
    n *= r5;
    r5 = n *= 0.03744086f;
    n *= r3;
    n *= r1;
    n = r5 *= n;
    n += -6.05139017f;
    n += -0.09573181f;
    n *= r5;
    n += -2.00724626f;
    n *= 0.22254507f;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n = r6 *= n;
    r4 = n += 1.22648895f;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= 2.62250352f;
    n *= r4;
    n += -0.14230424f;
    n += 0.14230435f;
    return n;
} // Solution0

// Solution1 result = 0.00000095
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065914f;
    r1 = n *= 1.54291034f;
    r2 = n *= 0.46844751f;
    r3 = n *= 0.03893253f;
    n *= r2;
    r2 = n += -1.69780648f;
    r4 = n += 1.17624915f;
    r5 = n *= -0.44791552f;
    r6 = n *= 1.43468416f;
    r7 = n += 0.56797290f;
    n *= r5;
    r5 = n *= 0.07469490f;
    n *= r3;
    n *= r1;
    n = r5 *= n;
    n += -2.49606252f;
    n += 8.75524998f;
    n *= r5;
    n += 0.41168877f;
    n *= 0.61847240f;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n = r6 *= n;
    r4 = n += 3.45703197f;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= -1.19387233f;
    n *= r4;
    n += -0.04500999f;
    n += -0.07312219f;
    return n;
} // Solution1

// Solution2 result = 0.00000072
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 0.10649797f;
    r2 = n *= 2.07372093f;
    r3 = n *= -0.25205758f;
    n *= r2;
    r2 = n += 0.87071049f;
    r4 = n += 0.45401141f;
    r5 = n *= 1.60771501f;
    r6 = n *= 0.61975634f;
    r7 = n += -1.25890017f;
    n *= r5;
    r5 = n *= -0.07094131f;
    n *= r3;
    n *= r1;
    n = r5 *= n;
    n += 8.50041866f;
    n += -0.55158234f;
    n *= r5;
    n += 1.87843049f;
    n *= -0.79318905f;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n = r6 *= n;
    r4 = n += -0.69226396f;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= -1.19788766f;
    n *= r4;
    n += 2.32752395f;
    n += -1.80392563f;
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
