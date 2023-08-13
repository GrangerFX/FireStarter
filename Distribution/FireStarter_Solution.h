// Run date: 08/13/23 16:32:20 Pacific Daylight Time
// Run duration = 781.327821 seconds
// Run generation = 47
// Run evolution = 5
// Run result = 0.00000019
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.59020942f;
    n *= r1;
    r1 = n += -1.06269240f;
    r2 = n *= -0.01905654f;
    r3 = n += 1.41457534f;
    r4 = n += 1.48460734f;
    n *= 0.09349702f;
    r5 = n += -0.15506901f;
    n = r0 *= n;
    n = r4 *= n;
    n = r0 *= n;
    n += 7.48979950f;
    n += -3.37632346f;
    n *= -0.21324280f;
    n = r3 += n;
    n = r3 *= n;
    n *= 0.31927094f;
    r6 = n *= 0.10174253f;
    n += -2.01424980f;
    n *= 0.00012704f;
    n *= r6;
    n = r5 *= n;
    n += r1;
    n += -2.62520862f;
    n += r0;
    n *= r3;
    n *= 2.55111051f;
    n += r5;
    n += r2;
    n *= r4;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065843f;
    r1 = n *= -0.03166866f;
    n *= r1;
    r1 = n += 0.44257432f;
    r2 = n *= 1.80242467f;
    r3 = n += -1.31966257f;
    r4 = n += 0.10503958f;
    n *= -0.53243941f;
    r5 = n += 1.16915417f;
    n = r0 *= n;
    n = r4 *= n;
    n = r0 *= n;
    n += 1.82289124f;
    n += 0.83481580f;
    n *= -0.01010266f;
    n = r3 += n;
    n = r3 *= n;
    n *= -1.05152309f;
    r6 = n *= 1.14791691f;
    n += -1.59451449f;
    n *= 0.72999305f;
    n *= r6;
    n = r5 *= n;
    n += r1;
    n += 0.84633809f;
    n += r0;
    n *= r3;
    n *= 0.62049538f;
    n += r5;
    n += r2;
    n *= r4;
    n += -0.11813173f;
    return n;
} // Solution1

// Solution2 result = 0.00000019
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= -0.53184986f;
    n *= r1;
    r1 = n += -1.64902675f;
    r2 = n *= 0.00585738f;
    r3 = n += 1.00114965f;
    r4 = n += 0.48847061f;
    n *= 0.75182658f;
    r5 = n += -1.31562388f;
    n = r0 *= n;
    n = r4 *= n;
    n = r0 *= n;
    n += 0.63528419f;
    n += -3.23282385f;
    n *= 1.03077543f;
    n = r3 += n;
    n = r3 *= n;
    n *= -3.40285587f;
    r6 = n *= -0.02217309f;
    n += 25.83052063f;
    n *= 0.49530300f;
    n *= r6;
    n = r5 *= n;
    n += r1;
    n += 0.00954424f;
    n += r0;
    n *= r3;
    n *= -0.62344110f;
    n += r5;
    n += r2;
    n *= r4;
    n += 0.52359873f;
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
