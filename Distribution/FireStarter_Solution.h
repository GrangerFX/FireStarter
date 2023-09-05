// Run date: 09/05/23 14:36:53 Pacific Daylight Time
// Run duration = 2254.034840 seconds
// Run generation = 5
// Run evolution = 4
// Run result = 0.00000018
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
// Run generations = 300
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.11440144f;
    r2 = n *= 5.60766745f;
    n *= r2;
    r2 = n += -1.66378379f;
    r3 = n *= 0.63277131f;
    n += -0.00842864f;
    n += -0.27887541f;
    n *= -1.62106097f;
    n += r2;
    r2 = n *= -2.49279284f;
    n *= 0.29826626f;
    n = r2 *= n;
    r4 = n *= -2.71680713f;
    n += -2.12930727f;
    r5 = n += 0.78041589f;
    n *= -2.17025924f;
    n *= 0.55444258f;
    n = r4 += n;
    n *= -0.30718499f;
    n = r1 *= n;
    n = r0 += n;
    n *= r2;
    r2 = n *= 0.40775782f;
    n *= r0;
    n += r3;
    n += r5;
    n *= r4;
    n *= r2;
    n *= 0.73147875f;
    n += r1;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= 0.76830006f;
    r2 = n *= -0.61203277f;
    n *= r2;
    r2 = n += 1.13804460f;
    r3 = n *= -1.35408604f;
    n += 1.08176637f;
    n += 1.30271327f;
    n *= 0.76900303f;
    n += r2;
    r2 = n *= -0.23447703f;
    n *= -2.29183316f;
    n = r2 *= n;
    r4 = n *= 1.68849969f;
    n += 0.38485074f;
    r5 = n += -4.02230072f;
    n *= 0.17980342f;
    n *= 0.00000002f;
    n = r4 += n;
    n *= -0.63525158f;
    n = r1 *= n;
    n = r0 += n;
    n *= r2;
    r2 = n *= -0.93797410f;
    n *= r0;
    n += r3;
    n += r5;
    n *= r4;
    n *= r2;
    n *= -0.71628803f;
    n += r1;
    n += -0.11813176f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= -0.68177313f;
    r2 = n *= -1.40019941f;
    n *= r2;
    r2 = n += -6.53520489f;
    r3 = n *= -1.25181234f;
    n += 3.07544565f;
    n += -0.35862681f;
    n *= 0.84215486f;
    n += r2;
    r2 = n *= 0.12253118f;
    n *= 1.45279753f;
    n = r2 *= n;
    r4 = n *= -1.97916818f;
    n += -0.48252526f;
    r5 = n += 0.44569048f;
    n *= -0.00000082f;
    n *= -4.50335789f;
    n = r4 += n;
    n *= 0.18468748f;
    n = r1 *= n;
    n = r0 += n;
    n *= r2;
    r2 = n *= -2.80348325f;
    n *= r0;
    n += r3;
    n += r5;
    n *= r4;
    n *= r2;
    n *= -0.99087304f;
    n += r1;
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
