// Run date: 03/14/24 11:40:20 Pacific Daylight Time
// Run duration = 17603.369260 seconds
// Run generation = 2499
// Run evolution = 22
// Run max result = 0.00000027
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
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000007
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 1.09693372f;
    r0 = n += -1.27839017f;
    n *= -0.31225559f;
    r1 = n += 0.67688495f;
    n += 0.67688668f;
    n = r0 *= n;
    n += -0.08112905f;
    r2 = n *= 0.00101347f;
    n += 1.90442216f;
    r3 = n += -1.18856847f;
    n *= -0.15139370f;
    n += r2;
    r2 = n += 1.93112636f;
    r4 = n += -1.76925766f;
    n = r4 += n;
    n *= r0;
    n += -0.48269984f;
    n = r3 += n;
    n = r2 += n;
    n += -0.90316474f;
    n *= r4;
    n = r2 *= n;
    n *= -2.81798506f;
    n *= -0.55271900f;
    n += 17.19323921f;
    n *= r2;
    n *= r3;
    n = r1 *= n;
    n += -2.25700140f;
    n *= -0.00000051f;
    n += r1;
    n *= 1.30821621f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 1.49130368f;
    r0 = n += -4.55796528f;
    n *= 0.13617110f;
    r1 = n += -0.00696575f;
    n += -0.00696160f;
    n = r0 *= n;
    n += 1.35541284f;
    r2 = n *= -0.24957843f;
    n += 1.07001555f;
    r3 = n += -0.08640580f;
    n *= -0.99875998f;
    n += r2;
    r2 = n += 1.00649238f;
    r4 = n += 0.16172904f;
    n = r4 += n;
    n *= r0;
    n += -1.56270599f;
    n = r3 += n;
    n = r2 += n;
    n += -0.79635912f;
    n *= r4;
    n = r2 *= n;
    n *= -791.17266846f;
    n *= 0.00814749f;
    n += -27.72302437f;
    n *= r2;
    n *= r3;
    n = r1 *= n;
    n += -4.68257093f;
    n *= -0.06976359f;
    n += r1;
    n *= -0.36164171f;
    return n;
} // Solution1

// Solution2 result = 0.00000027
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.45806971f;
    r0 = n += -1.29695213f;
    n *= -1.36052668f;
    r1 = n += -0.13296327f;
    n += -0.13295896f;
    n = r0 *= n;
    n += 0.61994624f;
    r2 = n *= -1.62852883f;
    n += -1.88591444f;
    r3 = n += 0.28677219f;
    n *= -0.99726534f;
    n += r2;
    r2 = n += -0.53249520f;
    r4 = n += -0.35503745f;
    n = r4 += n;
    n *= r0;
    n += 1.25113213f;
    n = r3 += n;
    n = r2 += n;
    n += -1.95007932f;
    n *= r4;
    n = r2 *= n;
    n *= -8.49728680f;
    n *= 0.00139145f;
    n += -1.04722536f;
    n *= r2;
    n *= r3;
    n = r1 *= n;
    n += 22.70421219f;
    n *= 0.02015656f;
    n += r1;
    n *= 1.14413548f;
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
