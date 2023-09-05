// Run date: 09/04/23 17:19:28 Pacific Daylight Time
// Run duration = 1125.359386 seconds
// Run generation = 53
// Run evolution = 10
// Run result = 0.00000012
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
// Run units = 2
// Run processes = 2
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159250f;
    r0 = n *= -0.35626808f;
    r1 = n *= 0.60583609f;
    n *= r1;
    n *= 1.12326849f;
    r1 = n *= -2.92094588f;
    r2 = n += 0.65966034f;
    n += -0.48086905f;
    n *= -1.10379732f;
    n = r1 += n;
    n *= 0.00000306f;
    n *= -13.38493729f;
    n += -5.36066628f;
    n *= r2;
    n = r1 += n;
    r2 = n *= -0.01278515f;
    n += 0.73654854f;
    r3 = n *= 1.46130586f;
    n = r2 += n;
    n *= 0.10052145f;
    n *= r3;
    n += 0.31784153f;
    n = r2 *= n;
    n = r2 *= n;
    n *= 0.39685133f;
    n += r1;
    n += -4.56859684f;
    n *= r0;
    n *= r2;
    n *= -1.16038346f;
    n += -0.18167549f;
    n += 0.18167557f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065866f;
    r0 = n *= -0.11595406f;
    r1 = n *= 1.12008429f;
    n *= r1;
    n *= 4.49807787f;
    r1 = n *= -4.33638811f;
    r2 = n += 2.80098057f;
    n += 2.00810647f;
    n *= 0.13137075f;
    n = r1 += n;
    n *= 0.00000006f;
    n *= -46.82606506f;
    n += -1.57617211f;
    n *= r2;
    n = r1 += n;
    r2 = n *= -0.41614559f;
    n += 0.27792698f;
    r3 = n *= -0.00328107f;
    n = r2 += n;
    n *= 6.00700378f;
    n *= r3;
    n += -0.64316273f;
    n = r2 *= n;
    n = r2 *= n;
    n *= 0.14359604f;
    n += r1;
    n += -2.52684593f;
    n *= r0;
    n *= r2;
    n *= -1.28129566f;
    n += -0.32600713f;
    n += 0.20787524f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799359f;
    r0 = n *= 0.60234487f;
    r1 = n *= -0.49853683f;
    n *= r1;
    n *= -2.29355025f;
    r1 = n *= 2.48815060f;
    r2 = n += 3.19947076f;
    n += -2.49340415f;
    n *= 1.62620676f;
    n = r1 += n;
    n *= -0.00007989f;
    n *= -7.52135801f;
    n += 0.59867483f;
    n *= r2;
    n = r1 += n;
    r2 = n *= -0.03400606f;
    n += -0.65211594f;
    r3 = n *= -1.11205280f;
    n = r2 += n;
    n *= 0.45168063f;
    n *= r3;
    n += 0.41875365f;
    n = r2 *= n;
    n = r2 *= n;
    n *= 8.11870193f;
    n += r1;
    n += 3.81635547f;
    n *= r0;
    n *= r2;
    n *= -0.69325161f;
    n += 0.44200262f;
    n += 0.08159621f;
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
