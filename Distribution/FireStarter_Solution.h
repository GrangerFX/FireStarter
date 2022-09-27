// Run date: 09/26/22 18:00:09 Pacific Daylight Time
// Run duration = 0.249791 seconds
// Run count = 7988
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 7988

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

// Precision = 0.00002619

// Solution0 precision = 0.00002450
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.45687148f;
    n += -0.53058225f;
    r0 = n += -0.90472841f;
    r1 = n *= -0.06491907f;
    r2 = n += -0.86614150f;
    n = r2 += n;
    n += 0.45544103f;
    n += 3.00914311f;
    n = r2 *= n;
    n += -0.66223317f;
    r3 = n += 2.94776940f;
    n += -0.60400659f;
    n = r0 *= n;
    r4 = n *= -0.33013168f;
    n *= 0.52054173f;
    n *= -0.14618957f;
    n *= 5.51771879f;
    n = r0 *= n;
    r5 = n += -0.92208904f;
    n = r0 += n;
    n = r2 += n;
    n *= 3.28373790f;
    n += -0.40379053f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -0.14800575f;
    n += 0.00000993f;
    n *= 0.96619540f;
    return n;
} // Solution0

// Solution1 precision = 0.00000465
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.39385778f;
    n += -0.35988086f;
    r0 = n += -0.85739541f;
    r1 = n *= -0.19116470f;
    r2 = n += -0.26285157f;
    n = r2 += n;
    n += 0.78180271f;
    n += 0.26958787f;
    n = r2 *= n;
    n += -2.91141915f;
    r3 = n += -0.01933479f;
    n += -11.55285358f;
    n = r0 *= n;
    r4 = n *= -0.08705822f;
    n *= 0.05566879f;
    n *= -0.22784810f;
    n *= -0.65014207f;
    n = r0 *= n;
    r5 = n += 0.88671708f;
    n = r0 += n;
    n = r2 += n;
    n *= 6.09800053f;
    n += 9.68563271f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -0.19682209f;
    n += 0.27424338f;
    n *= -0.43071151f;
    return n;
} // Solution1

// Solution2 precision = 0.00002619
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.38061279f;
    n += 0.50442499f;
    r0 = n += -1.50073385f;
    r1 = n *= -0.35739627f;
    r2 = n += 0.08605601f;
    n = r2 += n;
    n += -0.95219344f;
    n += 0.60839045f;
    n = r2 *= n;
    n += -6.19146729f;
    r3 = n += -1.40536451f;
    n += -2.74163270f;
    n = r0 *= n;
    r4 = n *= 0.11618457f;
    n *= -0.42767251f;
    n *= -0.04080547f;
    n *= 0.22815606f;
    n = r0 *= n;
    r5 = n += -0.38817602f;
    n = r0 += n;
    n = r2 += n;
    n *= 3.53601217f;
    n += -8.26414776f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -0.20202249f;
    n += -0.61851913f;
    n *= -0.84713978f;
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
