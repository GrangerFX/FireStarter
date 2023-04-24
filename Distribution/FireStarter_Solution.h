// Run date: 04/23/23 15:38:41 Pacific Daylight Time
// Run duration = 1494.822520 seconds
// Run generation = 300
// Run result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
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

// Solution0 result = 0.00000007
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159250f;
    r0 = n *= 0.12911633f;
    r1 = n *= -1.15495265f;
    n = r0 *= n;
    n += 1.80160737f;
    r2 = n *= 0.70549494f;
    n = r2 *= n;
    n *= r2;
    r2 = n += -0.80198234f;
    n += r2;
    r2 = n += -1.54801857f;
    n = r0 += n;
    n *= 0.29419315f;
    n *= -0.59277070f;
    r3 = n += 1.35218990f;
    n *= -34.19558334f;
    n += 12.03368855f;
    n += 25.15452576f;
    r4 = n *= 0.00003760f;
    n *= 2.88650203f;
    n *= r4;
    r4 = n += -0.48830777f;
    n += r3;
    n += 1.08728600f;
    n = r2 += n;
    n += r2;
    n *= r1;
    n *= r0;
    n *= r4;
    n += 0.00883066f;
    n *= -0.90773362f;
    n += 0.00801598f;
    return n;
} // Solution0

// Solution1 result = 0.00000018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065866f;
    r0 = n *= -0.81883860f;
    r1 = n *= 0.06690679f;
    n = r0 *= n;
    n += -5.18057775f;
    r2 = n *= 0.23793654f;
    n = r2 *= n;
    n *= r2;
    r2 = n += -0.92255479f;
    n += r2;
    r2 = n += -1.00118411f;
    n = r0 += n;
    n *= 0.76588064f;
    n *= -1.13083947f;
    r3 = n += 0.81051022f;
    n *= 2.59704995f;
    n += -19.54922295f;
    n += -0.60043234f;
    r4 = n *= -0.01825230f;
    n *= 0.82211918f;
    n *= r4;
    r4 = n += 1.92644262f;
    n += r3;
    n += -1.66514671f;
    n = r2 += n;
    n += r2;
    n *= r1;
    n *= r0;
    n *= r4;
    n += 0.00381480f;
    n *= 1.90907633f;
    n += -0.12541467f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799359f;
    r0 = n *= 0.31802064f;
    r1 = n *= -0.18301463f;
    n = r0 *= n;
    n += 1.25786340f;
    r2 = n *= 1.02510929f;
    n = r2 *= n;
    n *= r2;
    r2 = n += -1.33878779f;
    n += r2;
    r2 = n += -1.30724561f;
    n = r0 += n;
    n *= -3.70052171f;
    n *= 0.13030399f;
    r3 = n += 0.70227265f;
    n *= 29.49115562f;
    n += -9.15574837f;
    n += 10.89231205f;
    r4 = n *= -0.00044594f;
    n *= 6.27811861f;
    n *= r4;
    r4 = n += 1.79001212f;
    n += r3;
    n += -0.84666425f;
    n = r2 += n;
    n += r2;
    n *= r1;
    n *= r0;
    n *= r4;
    n += 0.34655067f;
    n *= 1.27106905f;
    n += 0.08310894f;
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
