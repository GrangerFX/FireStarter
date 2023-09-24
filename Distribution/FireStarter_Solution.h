// Run date: 09/24/23 10:24:27 Pacific Daylight Time
// Run duration = 903.965501 seconds
// Run generation = 77
// Run evolution = 17
// Run result = 0.00001591
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00001591
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.30094007f;
    r1 = n += 1.77772653f;
    r2 = n *= 0.24095488f;
    r3 = n *= 0.64652872f;
    r4 = n *= -0.22836044f;
    r5 = n *= -1.91053605f;
    n += -0.05479848f;
    n = r3 += n;
    n += r1;
    n += -0.96372437f;
    r1 = n *= 1.10783982f;
    r6 = n *= -1.35230553f;
    n *= r3;
    n += r2;
    r2 = n += 2.18249512f;
    n += 0.71720964f;
    r3 = n *= 3.22599411f;
    n = r2 *= n;
    r7 = n += 5.03096771f;
    n *= r1;
    n += -7.69476175f;
    n *= 6.13059998f;
    n *= -0.00000002f;
    n += r5;
    n += r0;
    n *= r7;
    n *= r4;
    n *= r2;
    n += 3.09947324f;
    n *= r3;
    n *= -0.00854577f;
    n *= r6;
    return n;
} // Solution0

// Solution1 result = 0.00000513
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 2.18950987f;
    r1 = n += -2.46549201f;
    r2 = n *= 0.03825269f;
    r3 = n *= -3.25860023f;
    r4 = n *= -0.93527710f;
    r5 = n *= 1.16406369f;
    n += -0.14096920f;
    n = r3 += n;
    n += r1;
    n += -3.97010136f;
    r1 = n *= -2.92452097f;
    r6 = n *= -0.16586541f;
    n *= r3;
    n += r2;
    r2 = n += -2.00637102f;
    n += -1.92153704f;
    r3 = n *= 0.04270611f;
    n = r2 *= n;
    r7 = n += 0.54903597f;
    n *= r1;
    n += 3.04623914f;
    n *= -0.87383854f;
    n *= -1.65816653f;
    n += r5;
    n += r0;
    n *= r7;
    n *= r4;
    n *= r2;
    n += 2.42810893f;
    n *= r3;
    n *= 1.66472459f;
    n *= r6;
    return n;
} // Solution1

// Solution2 result = 0.00000644
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.35055906f;
    r1 = n += -1.09501314f;
    r2 = n *= 0.31722468f;
    r3 = n *= -1.95801055f;
    r4 = n *= 3.00395513f;
    r5 = n *= -1.37555110f;
    n += 0.40661177f;
    n = r3 += n;
    n += r1;
    n += 2.81867599f;
    r1 = n *= -0.04291724f;
    r6 = n *= 1.01485705f;
    n *= r3;
    n += r2;
    r2 = n += 1.41094375f;
    n += 1.86072767f;
    r3 = n *= -1.72339725f;
    n = r2 *= n;
    r7 = n += -0.69441921f;
    n *= r1;
    n += -2.41177654f;
    n *= -4.21142578f;
    n *= -0.73674601f;
    n += r5;
    n += r0;
    n *= r7;
    n *= r4;
    n *= r2;
    n += -7.82913065f;
    n *= r3;
    n *= -0.00894954f;
    n *= r6;
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
