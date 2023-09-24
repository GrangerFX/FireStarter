// Run date: 09/24/23 10:41:33 Pacific Daylight Time
// Run duration = 13871.455800 seconds
// Run generation = 85
// Run evolution = 29
// Run result = 0.00001150
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
// Run tests = 16
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

// Solution0 result = 0.00001150
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.97582024f;
    n *= -0.36375976f;
    r1 = n += -1.99449730f;
    n += 1.55405796f;
    n *= -4.13509274f;
    r2 = n *= 0.40045491f;
    r3 = n *= 0.08318266f;
    n *= -2.38460374f;
    r4 = n += 2.02242303f;
    n *= r3;
    n = r4 += n;
    r3 = n += -1.66844642f;
    n = r4 *= n;
    n *= -0.91271967f;
    n = r1 *= n;
    r5 = n += -0.59962326f;
    r6 = n *= -0.24888626f;
    n *= r6;
    n += r0;
    n *= r4;
    n = r2 += n;
    n *= 0.91716856f;
    r4 = n *= 16.95907974f;
    n += r4;
    n *= 0.00116403f;
    n += -4.99511671f;
    n *= r1;
    n *= r2;
    n += 4.32239723f;
    n *= 0.73818117f;
    n *= r5;
    n *= r3;
    return n;
} // Solution0

// Solution1 result = 0.00001109
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.43945754f;
    n *= 1.16412330f;
    r1 = n += 1.30191112f;
    n += 0.63886863f;
    n *= 0.07206907f;
    r2 = n *= -1.62795651f;
    r3 = n *= -1.95192552f;
    n *= -0.20932966f;
    r4 = n += 0.22557759f;
    n *= r3;
    n = r4 += n;
    r3 = n += 2.69224763f;
    n = r4 *= n;
    n *= 1.14450634f;
    n = r1 *= n;
    r5 = n += 1.54798985f;
    r6 = n *= -0.24623479f;
    n *= r6;
    n += r0;
    n *= r4;
    n = r2 += n;
    n *= -1.12788403f;
    r4 = n *= -1.20967400f;
    n += r4;
    n *= 0.02503668f;
    n += -0.76052886f;
    n *= r1;
    n *= r2;
    n += 0.11500798f;
    n *= 0.89138973f;
    n *= r5;
    n *= r3;
    return n;
} // Solution1

// Solution2 result = 0.00000918
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.81819552f;
    n *= 0.94728827f;
    r1 = n += 1.44762349f;
    n += 3.37185025f;
    n *= 2.25052762f;
    r2 = n *= 1.78640938f;
    r3 = n *= -0.02376004f;
    n *= -1.77707124f;
    r4 = n += 0.44952586f;
    n *= r3;
    n = r4 += n;
    r3 = n += 0.07024473f;
    n = r4 *= n;
    n *= 0.67109078f;
    n = r1 *= n;
    r5 = n += -0.50126565f;
    r6 = n *= 0.17012660f;
    n *= r6;
    n += r0;
    n *= r4;
    n = r2 += n;
    n *= 0.07158498f;
    r4 = n *= 0.01509137f;
    n += r4;
    n *= -29.70331383f;
    n += 1.81762910f;
    n *= r1;
    n *= r2;
    n += 3.49507904f;
    n *= -0.86558324f;
    n *= r5;
    n *= r3;
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
