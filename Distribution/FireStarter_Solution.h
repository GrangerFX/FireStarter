// Run date: 07/30/23 10:29:59 Pacific Daylight Time
// Run duration = 633.887700 seconds
// Run generation = 71
// Run evolution = 0
// Run result = 0.00000048
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
// Run tests = 64
// Run units = 8
// Run processes = 8
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
    float r0, r1, r2, r3;

    r0 = n += -3.14159274f;
    r1 = n *= 1.30714118f;
    r2 = n *= -0.27240735f;
    n *= r2;
    n += -0.63489491f;
    r2 = n *= 0.84051466f;
    n += 0.00448370f;
    r3 = n *= -0.19354832f;
    n *= 0.57750207f;
    n *= r3;
    n *= -0.02338735f;
    r3 = n *= 3.69876003f;
    n += -2.56724072f;
    n += r3;
    n = r2 *= n;
    n *= -0.69382852f;
    n *= -0.05294307f;
    r3 = n += 0.32276735f;
    n *= r0;
    n *= -1.02698946f;
    n *= -1.63438594f;
    n = r1 += n;
    n *= -0.27570981f;
    n = r3 *= n;
    n *= r1;
    n += r2;
    n += 1.08304763f;
    n += 2.57429528f;
    n *= r3;
    n += 1.75935566f;
    n += -1.76342881f;
    n += 0.00407323f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -3.09065866f;
    r1 = n *= 0.14130187f;
    r2 = n *= 1.76238835f;
    n *= r2;
    n += -0.61745417f;
    r2 = n *= -0.35468385f;
    n += -0.04738814f;
    r3 = n *= 0.31965643f;
    n *= 0.02159094f;
    n *= r3;
    n *= -0.53745818f;
    r3 = n *= -6.26029205f;
    n += 0.25648066f;
    n += r3;
    n = r2 *= n;
    n *= -0.85717446f;
    n *= 1.68866539f;
    r3 = n += -0.67153269f;
    n *= r0;
    n *= 0.89904565f;
    n *= -0.74317163f;
    n = r1 += n;
    n *= -0.82153243f;
    n = r3 *= n;
    n *= r1;
    n += r2;
    n += -2.36279869f;
    n += -0.45298243f;
    n *= r3;
    n += -0.51419026f;
    n += 0.62169677f;
    n += -0.22563842f;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -2.61799359f;
    r1 = n *= 0.28801116f;
    r2 = n *= 1.24147797f;
    n *= r2;
    n += -1.34112191f;
    r2 = n *= -0.43701982f;
    n += -0.16782226f;
    r3 = n *= -0.05410361f;
    n *= -5.23195171f;
    n *= r3;
    n *= -0.65590167f;
    r3 = n *= -1.36658919f;
    n += -2.00095129f;
    n += r3;
    n = r2 *= n;
    n *= 1.17936409f;
    n *= -0.39021793f;
    r3 = n += 1.35831356f;
    n *= r0;
    n *= -0.77859533f;
    n *= -0.19914410f;
    n = r1 += n;
    n *= 0.50733703f;
    n = r3 *= n;
    n *= r1;
    n += r2;
    n += 0.55187404f;
    n += -1.15788901f;
    n *= r3;
    n += 1.06856108f;
    n += -0.29712790f;
    n += -0.24783455f;
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
