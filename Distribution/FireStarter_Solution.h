// Run date: 07/24/22 19:01:13 Pacific Daylight Time
// Run duration = 1.940961 seconds
// Run count = 26
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

// Run mode = FIRESTARTER_OPTIMIZE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 2500

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

// Precision = 0.00343394

// Solution0 precision = 0.00028050
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.52355313f;
    n *= -0.51241803f;
    r1 = n += -0.96523803f;
    r2 = n += 0.75697172f;
    r3 = n += 3.28172231f;
    n = r1 += n;
    n += 10.19454765f;
    n *= 0.00000570f;
    r4 = n += 0.40349698f;
    n *= 0.48139265f;
    n += r2;
    r2 = n += -0.58349854f;
    n = r3 *= n;
    r5 = n *= -0.76878107f;
    r6 = n *= 0.24148913f;
    n *= 1.20207906f;
    n += 0.66539627f;
    n *= r3;
    n *= r2;
    n *= -0.38980797f;
    r2 = n += 0.73744112f;
    n *= r1;
    n *= -0.61169267f;
    n *= 0.86617649f;
    n *= 0.67398363f;
    n = r4 += n;
    n += r5;
    n *= r0;
    n += r2;
    n *= -0.12869880f;
    n += r6;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.00012577
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.73706937f;
    n *= 0.33939102f;
    r1 = n += -0.61565959f;
    r2 = n += -0.63205242f;
    r3 = n += 1.36821389f;
    n = r1 += n;
    n += 1.09600627f;
    n *= 0.00008729f;
    r4 = n += 0.64241976f;
    n *= 0.25600174f;
    n += r2;
    r2 = n += -1.02965271f;
    n = r3 *= n;
    r5 = n *= 0.56412333f;
    r6 = n *= 0.56080252f;
    n *= -0.75393558f;
    n += 0.50442815f;
    n *= r3;
    n *= r2;
    n *= 0.79744142f;
    r2 = n += 0.85271591f;
    n *= r1;
    n *= -1.32870317f;
    n *= 0.21329348f;
    n *= 0.98229587f;
    n = r4 += n;
    n += r5;
    n *= r0;
    n += r2;
    n *= 0.45057368f;
    n += r6;
    n += r4;
    return n;
} // Solution1

// Solution2 precision = 0.00343394
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.39115563f;
    n *= -0.49110854f;
    r1 = n += 0.33143190f;
    r2 = n += -0.41532481f;
    r3 = n += 0.08003283f;
    n = r1 += n;
    n += -18.14534569f;
    n *= -0.00013130f;
    r4 = n += -0.08490883f;
    n *= -0.01960356f;
    n += r2;
    r2 = n += 2.95506406f;
    n = r3 *= n;
    r5 = n *= -0.25669616f;
    r6 = n *= 0.93403602f;
    n *= 0.66247183f;
    n += 0.79615051f;
    n *= r3;
    n *= r2;
    n *= 1.02413285f;
    r2 = n += 1.35480118f;
    n *= r1;
    n *= 0.29229340f;
    n *= -0.82946771f;
    n *= -0.85567659f;
    n = r4 += n;
    n += r5;
    n *= r0;
    n += r2;
    n *= -0.36897895f;
    n += r6;
    n += r4;
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
