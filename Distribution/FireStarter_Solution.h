// Run date: 05/20/23 11:09:02 Pacific Daylight Time
// Run duration = 722.345279 seconds
// Run generation = 140
// Run evolution = 0
// Run result = 0.00000656
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 48
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

// Solution0 result = 0.00000399
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.43142253f;
    n += 1.35535383f;
    r0 = n *= 0.34152794f;
    n *= -3.25260258f;
    r1 = n *= -0.12185393f;
    n *= -1.49180365f;
    r2 = n *= 1.89017284f;
    n = r2 *= n;
    n += -1.19156218f;
    n += -2.04936290f;
    n *= -2.61540794f;
    r3 = n *= -1.37351346f;
    r4 = n += 3.73505449f;
    n *= r2;
    r2 = n += 1.85889471f;
    r5 = n *= 1.35346627f;
    n += -1.85396838f;
    n *= -0.00260971f;
    n += -0.27798441f;
    n = r3 *= n;
    n *= r3;
    n = r4 += n;
    n *= 0.09211285f;
    n = r1 *= n;
    n *= 0.90312308f;
    n *= r2;
    n *= r1;
    n *= -2.82798910f;
    n += r4;
    n *= r5;
    n *= r0;
    n += -0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000358
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.10474429f;
    n += 0.32372883f;
    r0 = n *= 0.24707645f;
    n *= -0.57645887f;
    r1 = n *= -1.83378410f;
    n *= 1.92961705f;
    r2 = n *= 1.70039105f;
    n = r2 *= n;
    n += -0.52569878f;
    n += -1.24556911f;
    n *= 0.49592805f;
    r3 = n *= 1.71628511f;
    r4 = n += -1.65908182f;
    n *= r2;
    r2 = n += 0.64855528f;
    r5 = n *= 2.75286078f;
    n += -0.19747202f;
    n *= -1.31295288f;
    n += -1.36005807f;
    n = r3 *= n;
    n *= r3;
    n = r4 += n;
    n *= -0.21347250f;
    n = r1 *= n;
    n *= -0.16794138f;
    n *= r2;
    n *= r1;
    n *= 5.06037664f;
    n += r4;
    n *= r5;
    n *= r0;
    n += -0.11813166f;
    return n;
} // Solution1

// Solution2 result = 0.00000656
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.69621587f;
    n += 1.82269001f;
    r0 = n *= -2.01585722f;
    n *= 0.73375940f;
    r1 = n *= 0.47553939f;
    n *= 0.68198293f;
    r2 = n *= -1.27718747f;
    n = r2 *= n;
    n += -0.49628371f;
    n += -1.31823421f;
    n *= 3.55381012f;
    r3 = n *= 0.00438868f;
    r4 = n += -0.27894801f;
    n *= r2;
    r2 = n += 1.77645266f;
    r5 = n *= 1.30628002f;
    n += -2.12499046f;
    n *= 0.62143350f;
    n += -0.62133574f;
    n = r3 *= n;
    n *= r3;
    n = r4 += n;
    n *= -1.98795438f;
    n = r1 *= n;
    n *= -0.33989224f;
    n *= r2;
    n *= r1;
    n *= -1.40732729f;
    n += r4;
    n *= r5;
    n *= r0;
    n += 0.52359867f;
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
