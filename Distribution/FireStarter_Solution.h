// Run date: 09/05/23 16:40:09 Pacific Daylight Time
// Run duration = 1742.369905 seconds
// Run generation = 20
// Run evolution = 7
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 400
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= 1.47551930f;
    r2 = n *= 0.05997352f;
    n = r2 *= n;
    n *= 4.04282093f;
    n = r2 += n;
    r3 = n += -0.38974637f;
    n = r2 += n;
    n += -2.44280767f;
    n += -22.65997696f;
    n *= r2;
    n *= 0.02424566f;
    r2 = n *= 0.93017966f;
    n += 1.62468088f;
    r4 = n *= 0.78882605f;
    n *= -0.92977369f;
    n *= 1.54563403f;
    n += 1.55233788f;
    n = r2 += n;
    n *= 0.40025419f;
    n *= r1;
    n *= -1.58867490f;
    n *= r2;
    r2 = n *= -0.88494653f;
    n *= r0;
    n += -46.09125519f;
    n *= r3;
    n *= -1.96140909f;
    n *= r2;
    n *= r4;
    n += 0.00000022f;
    n *= 0.22981036f;
    return n;
} // Solution0

// Solution1 result = 0.00000018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065914f;
    r1 = n *= 0.12352607f;
    r2 = n *= -0.79067135f;
    n = r2 *= n;
    n *= -0.54912448f;
    n = r2 += n;
    r3 = n += -1.05405176f;
    n = r2 += n;
    n += -1.88464224f;
    n += 1.75807917f;
    n *= r2;
    n *= -0.69714594f;
    r2 = n *= -3.07989621f;
    n += -0.52919066f;
    r4 = n *= -0.99760413f;
    n *= 0.00001575f;
    n *= 7.07768917f;
    n += -1.71937931f;
    n = r2 += n;
    n *= -0.34652320f;
    n *= r1;
    n *= -0.08841147f;
    n *= r2;
    r2 = n *= -1.64128196f;
    n *= r0;
    n += 12.63617229f;
    n *= r3;
    n *= -1.58048189f;
    n *= r2;
    n *= r4;
    n += 0.02722364f;
    n *= -4.33933258f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    r1 = n *= -1.23400700f;
    r2 = n *= 0.27630183f;
    n = r2 *= n;
    n *= -1.06351864f;
    n = r2 += n;
    r3 = n += 0.03679735f;
    n = r2 += n;
    n += 8.71382618f;
    n += -4.54976702f;
    n *= r2;
    n *= 11.65724945f;
    r2 = n *= -0.00231101f;
    n += -0.36540863f;
    r4 = n *= -0.63515294f;
    n *= -0.06106471f;
    n *= -7.21101141f;
    n += -0.21256684f;
    n = r2 += n;
    n *= -2.35442805f;
    n *= r1;
    n *= 4.54778194f;
    n *= r2;
    r2 = n *= 6.39794588f;
    n *= r0;
    n += -17.71270752f;
    n *= r3;
    n *= -0.60391134f;
    n *= r2;
    n *= r4;
    n += -0.05256278f;
    n *= -9.96139908f;
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
