// Run date: 12/26/22 15:24:18 Pacific Standard Time
// Run duration = 236.939779 seconds
// Run count = 435
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 435

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

// Precision = 0.00048316

// Solution0 precision = 0.00004649
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= 1.16216075f;
    n += -3.87235451f;
    n *= 1.00619006f;
    r0 = n *= -0.57346213f;
    r1 = n *= 0.37954620f;
    n += 0.70262992f;
    n *= 1.19402909f;
    n *= -2.24837303f;
    n *= r1;
    r1 = n += 1.52556372f;
    r2 = n += -0.21085101f;
    n += 4.08431864f;
    r3 = n += -5.54428196f;
    n *= 0.00000418f;
    n *= 28.09019089f;
    n *= r0;
    n += -0.10905354f;
    n = r1 += n;
    n *= -0.96721655f;
    r0 = n += 0.36576593f;
    n += r2;
    n = r1 *= n;
    n *= -1.02419341f;
    n += -2.52052498f;
    n *= r3;
    n = r1 *= n;
    n += 41.66299057f;
    n *= -0.04494098f;
    n += r0;
    n += r1;
    n += 9.62354565f;
    n += -7.11739683f;
    return n;
} // Solution0

// Solution1 precision = 0.00001669
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= 0.63127261f;
    n += -0.55786210f;
    n *= -0.16094059f;
    r0 = n *= 2.17869306f;
    r1 = n *= 1.04635715f;
    n += 1.84793246f;
    n *= -2.55315375f;
    n *= -0.13109620f;
    n *= r1;
    r1 = n += 0.29800802f;
    r2 = n += -2.17630148f;
    n += -0.60633290f;
    r3 = n += 1.83980393f;
    n *= 0.46844262f;
    n *= 2.92807293f;
    n *= r0;
    n += -0.65102285f;
    n = r1 += n;
    n *= -0.09659938f;
    r0 = n += -0.21297753f;
    n += r2;
    n = r1 *= n;
    n *= -0.83048731f;
    n += -2.18587494f;
    n *= r3;
    n = r1 *= n;
    n += -72.58995056f;
    n *= -0.00000000f;
    n += r0;
    n += r1;
    n += -2.01300025f;
    n += 2.12404919f;
    return n;
} // Solution1

// Solution2 precision = 0.00048316
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 1.27956831f;
    n += 0.46435359f;
    n *= -0.23125143f;
    r0 = n *= 1.03594720f;
    r1 = n *= 0.21698827f;
    n += -0.77141351f;
    n *= -0.21289451f;
    n *= 25.08363914f;
    n *= r1;
    r1 = n += 2.64102483f;
    r2 = n += -1.00299692f;
    n += 2.32111549f;
    r3 = n += -0.83947790f;
    n *= 0.34359366f;
    n *= 2.25421119f;
    n *= r0;
    n += -0.70665610f;
    n = r1 += n;
    n *= -0.95970351f;
    r0 = n += 2.09701967f;
    n += r2;
    n = r1 *= n;
    n *= 0.36403832f;
    n += -1.42362523f;
    n *= r3;
    n = r1 *= n;
    n += -43.94026947f;
    n *= -1.14869952f;
    n += r0;
    n += r1;
    n += -17.42684364f;
    n += -33.94726562f;
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
