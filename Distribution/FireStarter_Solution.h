// Run date: 07/02/23 17:35:08 Pacific Daylight Time
// Run duration = 1083.159833 seconds
// Run generation = 62
// Run evolution = 0
// Run result = 0.00000072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
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

// Solution0 result = 0.00000021
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 1.71004307f;
    n *= -0.31368610f;
    n += 1.68520296f;
    r0 = n *= -2.10637045f;
    n *= 0.06491640f;
    r1 = n *= 0.93039429f;
    n *= 4.13275194f;
    r2 = n *= -0.60704213f;
    n = r0 *= n;
    n += 1.44671881f;
    r3 = n *= 0.01016190f;
    n *= r0;
    n += 11.41387272f;
    n += 2.51737118f;
    n = r3 *= n;
    n *= 0.22280376f;
    n += 1.33508921f;
    r0 = n += 0.52209836f;
    n = r0 *= n;
    n = r3 += n;
    r4 = n *= -1.69198859f;
    n = r2 *= n;
    n *= r2;
    n *= -0.19044903f;
    n += 1.74862623f;
    n *= r3;
    n *= r4;
    n *= r1;
    n *= 0.08778378f;
    n *= r0;
    n *= 1.06476617f;
    n += -0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.87999815f;
    n *= 0.46644238f;
    n += -1.26861787f;
    r0 = n *= 2.18463540f;
    n *= -0.16668527f;
    r1 = n *= -0.73743004f;
    n *= 2.02298355f;
    r2 = n *= -1.17494917f;
    n = r0 *= n;
    n += 0.69066894f;
    r3 = n *= -0.00801862f;
    n *= r0;
    n += -7.92333460f;
    n += -0.91552061f;
    n = r3 *= n;
    n *= -0.09573832f;
    n += -0.71704471f;
    r0 = n += -0.57071698f;
    n = r0 *= n;
    n = r3 += n;
    r4 = n *= 0.82936817f;
    n = r2 *= n;
    n *= r2;
    n *= -0.43754095f;
    n += 0.72859132f;
    n *= r3;
    n *= r4;
    n *= r1;
    n *= 3.71834755f;
    n *= r0;
    n *= -0.89943248f;
    n += -0.11813189f;
    return n;
} // Solution1

// Solution2 result = 0.00000072
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.21060893f;
    n *= -0.16623534f;
    n += 0.09165765f;
    r0 = n *= -0.32900235f;
    n *= -0.08494873f;
    r1 = n *= -237938.32812500f;
    n *= 0.04664519f;
    r2 = n *= -0.18653534f;
    n = r0 *= n;
    n += 0.23210423f;
    r3 = n *= 0.07586989f;
    n *= r0;
    n += 2.51053095f;
    n += 1.49305677f;
    n = r3 *= n;
    n *= 0.93154883f;
    n += 0.94596893f;
    r0 = n += 0.05432796f;
    n = r0 *= n;
    n = r3 += n;
    r4 = n *= -0.49615765f;
    n = r2 *= n;
    n *= r2;
    n *= -0.10589950f;
    n += 0.64787889f;
    n *= r3;
    n *= r4;
    n *= r1;
    n *= 0.03554004f;
    n *= r0;
    n *= 0.22718704f;
    n += 0.52359879f;
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
