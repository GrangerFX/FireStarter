// Run date: 07/28/22 20:45:30 Pacific Daylight Time
// Run duration = 2.114242 seconds
// Run count = 16
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
// Solution Generation = 1500

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

// Precision = 0.00056279

// Solution0 precision = 0.00019191
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.23538913f;
    r0 = n += 0.02185168f;
    r1 = n *= -1.20737922f;
    n += -0.18485324f;
    r2 = n += 0.49854359f;
    r3 = n += 0.39823535f;
    r4 = n += -0.57594919f;
    n *= 1.22831225f;
    n += -0.16357179f;
    n += -1.60391402f;
    n *= r1;
    r1 = n *= -0.42753592f;
    n = r2 += n;
    n = r2 *= n;
    r5 = n *= 0.45503196f;
    n += -0.14974026f;
    n *= r0;
    r0 = n += -0.08174337f;
    n += r1;
    n = r5 += n;
    n += r3;
    n += -0.70542198f;
    n += 0.09591407f;
    n += 0.79076624f;
    n += r5;
    n = r0 += n;
    n *= r2;
    n *= r4;
    n += -0.47590405f;
    n *= -0.36472175f;
    n += r0;
    n += -0.81468379f;
    return n;
} // Solution0

// Solution1 precision = 0.00006747
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.78546649f;
    r0 = n += 2.43113708f;
    r1 = n *= -0.25820550f;
    n += -0.29375076f;
    r2 = n += -0.56596786f;
    r3 = n += 0.17540213f;
    r4 = n += 0.13589293f;
    n *= 1.49965203f;
    n += -0.64627230f;
    n += 0.25199023f;
    n *= r1;
    r1 = n *= 0.33338624f;
    n = r2 += n;
    n = r2 *= n;
    r5 = n *= 0.35848701f;
    n += -0.06816953f;
    n *= r0;
    r0 = n += -0.54605341f;
    n += r1;
    n = r5 += n;
    n += r3;
    n += -0.65830195f;
    n += -0.84637111f;
    n += 0.84027290f;
    n += r5;
    n = r0 += n;
    n *= r2;
    n *= r4;
    n += 0.17305583f;
    n *= 1.26751661f;
    n += r0;
    n += 0.85223943f;
    return n;
} // Solution1

// Solution2 precision = 0.00056279
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.84583426f;
    r0 = n += 0.37058628f;
    r1 = n *= -0.34448901f;
    n += -0.06874502f;
    r2 = n += 0.51845962f;
    r3 = n += -0.48804501f;
    r4 = n += 0.52757061f;
    n *= 0.79020345f;
    n += 0.47573814f;
    n += -1.92776370f;
    n *= r1;
    r1 = n *= -0.98996598f;
    n = r2 += n;
    n = r2 *= n;
    r5 = n *= 0.07813574f;
    n += -0.12083974f;
    n *= r0;
    r0 = n += -0.33938903f;
    n += r1;
    n = r5 += n;
    n += r3;
    n += -0.14448856f;
    n += 0.96386778f;
    n += -0.05671414f;
    n += r5;
    n = r0 += n;
    n *= r2;
    n *= r4;
    n += -0.02199251f;
    n *= -0.54711324f;
    n += r0;
    n += 0.82555014f;
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
