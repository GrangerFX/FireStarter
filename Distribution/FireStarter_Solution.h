// Run date: 05/07/23 16:27:55 Pacific Daylight Time
// Run duration = 157.856591 seconds
// Run generation = 313
// Run result = 0.00000334
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 98
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 1
// Run units = 4
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159179f;
    r1 = n *= 1.15572822f;
    n += -0.00000356f;
    n *= r1;
    n += -29.14131927f;
    r1 = n *= 0.16634749f;
    n += -3.51617289f;
    r2 = n *= -0.52239501f;
    n = r1 += n;
    r3 = n *= -0.00000012f;
    n *= -4.02955627f;
    n *= -0.22124879f;
    r4 = n *= 8.13005447f;
    n += r2;
    r2 = n *= 0.08956268f;
    r5 = n *= 8.11456108f;
    n *= 0.01821625f;
    r6 = n += 0.69080180f;
    n *= r2;
    n = r4 += n;
    n = r6 += n;
    n = r6 *= n;
    n += r3;
    n *= r1;
    n *= r6;
    n *= -5.15792704f;
    n += r5;
    n *= r4;
    n *= r0;
    n += -0.00000163f;
    r0 = n *= -0.28071854f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000066
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09066987f;
    r1 = n *= 1.62971604f;
    n += 0.00006241f;
    n *= r1;
    n += -8.54274273f;
    r1 = n *= -0.02037120f;
    n += 1.48190808f;
    r2 = n *= 0.18008812f;
    n = r1 += n;
    r3 = n *= -0.34376299f;
    n *= -1.02849483f;
    n *= 3.68007159f;
    r4 = n *= -0.13390030f;
    n += r2;
    r2 = n *= 0.97850025f;
    r5 = n *= -4.51868010f;
    n *= -0.19583133f;
    r6 = n += -0.98966944f;
    n *= r2;
    n = r4 += n;
    n = r6 += n;
    n = r6 *= n;
    n += r3;
    n *= r1;
    n *= r6;
    n *= -1.61975563f;
    n += r5;
    n *= r4;
    n *= r0;
    n += 0.04768757f;
    r0 = n *= -1.23873401f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000334
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799026f;
    r1 = n *= 1.10832953f;
    n += -0.00001368f;
    n *= r1;
    n += 2.17613173f;
    r1 = n *= 0.02504364f;
    n += -1.84079039f;
    r2 = n *= 0.18650287f;
    n = r1 += n;
    r3 = n *= -0.32773036f;
    n *= 11.76153564f;
    n *= -0.01256383f;
    r4 = n *= 0.75647068f;
    n += r2;
    r2 = n *= -2.50164485f;
    r5 = n *= 0.39956355f;
    n *= -0.55683780f;
    r6 = n += -0.66436356f;
    n *= r2;
    n = r4 += n;
    n = r6 += n;
    n = r6 *= n;
    n += r3;
    n *= r1;
    n *= r6;
    n *= 0.64758372f;
    n += r5;
    n *= r4;
    n *= r0;
    n += -0.34448838f;
    r0 = n *= -0.75997120f;
    n += r0;
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
