// Run date: 12/31/23 21:18:13 Pacific Standard Time
// Run duration = 887.975453 seconds
// Run generation = 17
// Run evolution = 14
// Run max result = 0.00000012
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
// Run tests = 1
// Run states = 64
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.42747441f;
    r1 = n += 1.34295046f;
    r2 = n *= 0.05334600f;
    n *= 0.92056262f;
    r3 = n *= -3.69092703f;
    n = r2 += n;
    n *= r1;
    r1 = n += 0.47241852f;
    n *= -0.57831347f;
    r4 = n += -1.94504631f;
    r5 = n *= 0.40442738f;
    n *= r4;
    r4 = n *= -0.01696627f;
    r6 = n *= 1.27851021f;
    n += r6;
    r6 = n *= 0.51968956f;
    r7 = n += -0.16204263f;
    n *= -4.23284674f;
    n += 1.23697555f;
    n *= r7;
    n = r1 *= n;
    n *= r4;
    n *= r3;
    n *= r1;
    n *= r5;
    n *= r6;
    n *= -464730.53125000f;
    n += 1.34295046f;
    n += r2;
    n += r0;
    n *= -1.20907855f;
    n *= 0.48243573f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.11337552f;
    r1 = n += -0.35040504f;
    r2 = n *= 0.09172726f;
    n *= 5.96998644f;
    r3 = n *= -1.94064450f;
    n = r2 += n;
    n *= r1;
    r1 = n += 0.31168643f;
    n *= 0.56813252f;
    r4 = n += 1.28818202f;
    r5 = n *= 0.00970973f;
    n *= r4;
    r4 = n *= -3.00047469f;
    r6 = n *= -2.56187129f;
    n += r6;
    r6 = n *= 0.24791865f;
    r7 = n += 0.16316032f;
    n *= -1.15227568f;
    n += -7.07353830f;
    n *= r7;
    n = r1 *= n;
    n *= r4;
    n *= r3;
    n *= r1;
    n *= r5;
    n *= r6;
    n *= 334820.84375000f;
    n += -0.25533840f;
    n += r2;
    n += r0;
    n *= -0.87980634f;
    n *= 1.41238034f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.41766885f;
    r1 = n += 1.09345448f;
    r2 = n *= 2.85809517f;
    n *= 2.00171161f;
    r3 = n *= -0.55425620f;
    n = r2 += n;
    n *= r1;
    r1 = n += 0.76523060f;
    n *= -0.19420661f;
    r4 = n += -1.10910630f;
    r5 = n *= 0.56601143f;
    n *= r4;
    r4 = n *= 0.28004745f;
    r6 = n *= -0.06562099f;
    n += r6;
    r6 = n *= 0.17864051f;
    r7 = n += -0.01250947f;
    n *= -46.79120636f;
    n += 4.87294579f;
    n *= r7;
    n = r1 *= n;
    n *= r4;
    n *= r3;
    n *= r1;
    n *= r5;
    n *= r6;
    n *= 100607.98437500f;
    n += 0.76725590f;
    n += r2;
    n += r0;
    n *= -0.50498354f;
    n *= 3.17862511f;
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
