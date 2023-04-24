// Run date: 04/23/23 17:55:42 Pacific Daylight Time
// Run duration = 795.495333 seconds
// Run generation = 295
// Run result = 0.00000054
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -0.44548035f;
    n = r1 *= n;
    r2 = n *= -4.25228071f;
    r3 = n += 3.12707710f;
    n *= -5.52278709f;
    n *= 0.01302447f;
    n = r2 += n;
    n *= 0.26923564f;
    r4 = n += 0.39096552f;
    n = r1 += n;
    n = r4 *= n;
    n += r3;
    n += -0.88403350f;
    r3 = n *= -1.28975964f;
    n += r2;
    n += r4;
    r4 = n *= -0.54160237f;
    n = r3 += n;
    n += -5.53367424f;
    n *= 0.00011704f;
    n *= r3;
    n = r1 += n;
    n *= 1.32031536f;
    n += r1;
    r1 = n += 0.21625361f;
    n *= r1;
    n = r0 *= n;
    n += r0;
    n *= -0.30188385f;
    n *= r4;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000054
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065866f;
    r1 = n *= 0.57051766f;
    n = r1 *= n;
    r2 = n *= -0.01310933f;
    r3 = n += 0.01599749f;
    n *= 1.67304945f;
    n *= 3.25274944f;
    n = r2 += n;
    n *= -0.81665421f;
    r4 = n += -3.27464366f;
    n = r1 += n;
    n = r4 *= n;
    n += r3;
    n += -3.43199015f;
    r3 = n *= -0.93658024f;
    n += r2;
    n += r4;
    r4 = n *= -0.95788360f;
    n = r3 += n;
    n += 9.48218155f;
    n *= -0.00096085f;
    n *= r3;
    n = r1 += n;
    n *= -0.92724305f;
    n += r1;
    r1 = n += -0.37804294f;
    n *= r1;
    n = r0 *= n;
    n += r0;
    n *= 0.37049493f;
    n *= r4;
    n += -0.11813191f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= 0.34629875f;
    n = r1 *= n;
    r2 = n *= -1.27175665f;
    r3 = n += 0.58025664f;
    n *= 1.68243766f;
    n *= -0.26867595f;
    n = r2 += n;
    n *= 1.74650311f;
    r4 = n += 1.76309395f;
    n = r1 += n;
    n = r4 *= n;
    n += r3;
    n += 7.79036474f;
    r3 = n *= -0.00001494f;
    n += r2;
    n += r4;
    r4 = n *= 0.02210793f;
    n = r3 += n;
    n += 1.62909651f;
    n *= 5.53116608f;
    n *= r3;
    n = r1 += n;
    n *= 1.78257835f;
    n += r1;
    r1 = n += 2.29015851f;
    n *= r1;
    n = r0 *= n;
    n += r0;
    n *= -0.34645337f;
    n *= r4;
    n += 0.52359873f;
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
