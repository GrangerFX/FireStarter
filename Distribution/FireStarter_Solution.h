// Run date: 07/23/22 16:00:50 Pacific Daylight Time
// Run duration = 6.578240 seconds
// Run count = 1
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run generations = 10;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.21283877

// Solution0 precision = 0.21283877
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.59037352f;
    r0 = n *= 0.38238212f;
    r1 = n += 0.08612696f;
    r2 = n *= 0.18888746f;
    n *= -0.10371017f;
    r3 = n *= -0.96812004f;
    n = r2 += n;
    n = r2 += n;
    r4 = n += 0.94229746f;
    r5 = n += -0.04611730f;
    n += 0.08831010f;
    n *= 0.96478361f;
    r6 = n += -0.43463963f;
    n += 0.17884225f;
    n += r3;
    n += 1.04245293f;
    n *= r0;
    n += 0.69144177f;
    n *= r1;
    n *= 1.11192608f;
    n += 0.44168541f;
    n = r2 += n;
    n += -0.41894794f;
    r1 = n += -1.05561900f;
    n += r4;
    n += r5;
    n += -0.03356214f;
    n += -0.98669517f;
    n *= r6;
    n = r2 += n;
    n += r2;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.16061532
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.08313169f;
    r0 = n *= 2.31240702f;
    r1 = n += 0.92851317f;
    r2 = n *= 0.88015765f;
    n *= 0.16626656f;
    r3 = n *= -1.50588715f;
    n = r2 += n;
    n = r2 += n;
    r4 = n += -0.23302773f;
    r5 = n += 0.75653261f;
    n += 0.97784436f;
    n *= -0.85864210f;
    r6 = n += 0.04767574f;
    n += 0.96239513f;
    n += r3;
    n += -0.00473931f;
    n *= r0;
    n += 0.52142793f;
    n *= r1;
    n *= 0.73830640f;
    n += 0.78800654f;
    n = r2 += n;
    n += -0.57189780f;
    r1 = n += -0.80498946f;
    n += r4;
    n += r5;
    n += -0.42229238f;
    n += -0.83617306f;
    n *= r6;
    n = r2 += n;
    n += r2;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.20868577
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.77725697f;
    r0 = n *= 0.59611195f;
    r1 = n += -0.22755414f;
    r2 = n *= 0.35271770f;
    n *= 0.15688545f;
    r3 = n *= -0.62601691f;
    n = r2 += n;
    n = r2 += n;
    r4 = n += -0.38262147f;
    r5 = n += -0.11472414f;
    n += -0.92191064f;
    n *= -0.47604227f;
    r6 = n += 0.69260728f;
    n += 0.13001162f;
    n += r3;
    n += 0.71027714f;
    n *= r0;
    n += -0.51721728f;
    n *= r1;
    n *= -0.68363047f;
    n += 0.25354159f;
    n = r2 += n;
    n += 0.13919434f;
    r1 = n += 0.42784414f;
    n += r4;
    n += r5;
    n += 0.78947008f;
    n += -0.95828265f;
    n *= r6;
    n = r2 += n;
    n += r2;
    n *= r1;
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
