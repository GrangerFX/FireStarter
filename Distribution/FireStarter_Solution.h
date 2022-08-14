// Run date: 08/14/22 12:56:50 Pacific Daylight Time
// Run duration = 2.159105 seconds
// Run count = 15
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
// Run population = 139264;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 1500

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00022286

// Solution0 precision = 0.00022286
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -1.01574481f;
    r0 = n *= 0.43399078f;
    n += 0.32896861f;
    r1 = n += -0.67850196f;
    r2 = n += 0.53274649f;
    n *= 0.25551850f;
    r3 = n += 0.66089261f;
    n *= 0.00000004f;
    r4 = n *= -19.07536888f;
    n *= 13.46626568f;
    n = r2 += n;
    n += r2;
    n += -0.36643034f;
    n = r3 *= n;
    n *= -0.74026221f;
    r2 = n *= 0.13942981f;
    n += 0.85594988f;
    n = r0 += n;
    n += -0.58402646f;
    n *= r1;
    n += -0.94232637f;
    n += -0.85461462f;
    n = r2 += n;
    n += 1.33550525f;
    n = r4 += n;
    r1 = n *= -0.85312814f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00007367
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.16026092f;
    r0 = n *= -1.01445341f;
    n += -0.16989791f;
    r1 = n += 0.36649778f;
    r2 = n += -1.10350108f;
    n *= -0.68100977f;
    r3 = n += 0.29002520f;
    n *= -0.42717341f;
    r4 = n *= -0.14643452f;
    n *= -1.20955956f;
    n = r2 += n;
    n += r2;
    n += 0.93119907f;
    n = r3 *= n;
    n *= 0.32301155f;
    r2 = n *= -0.56325430f;
    n += -0.72046912f;
    n = r0 += n;
    n += -0.85882419f;
    n *= r1;
    n += 0.19158062f;
    n += -0.48380417f;
    n = r2 += n;
    n += -0.01834917f;
    n = r4 += n;
    r1 = n *= 0.91907549f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00015450
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.36466280f;
    r0 = n *= -0.87580037f;
    n += 0.21962419f;
    r1 = n += -2.87418175f;
    r2 = n += 1.36781979f;
    n *= 0.44093359f;
    r3 = n += 0.56738067f;
    n *= -6.44982862f;
    r4 = n *= 0.00000001f;
    n *= -9.45187187f;
    n = r2 += n;
    n += r2;
    n += -0.20830710f;
    n = r3 *= n;
    n *= -0.28287575f;
    r2 = n *= 2.71886849f;
    n += 1.24893808f;
    n = r0 += n;
    n += 0.50959176f;
    n *= r1;
    n += -0.45998901f;
    n += 1.55875492f;
    n = r2 += n;
    n += -0.08482163f;
    n = r4 += n;
    r1 = n *= -0.64813095f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
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
