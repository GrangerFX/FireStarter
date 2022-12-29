// Run date: 12/29/22 11:11:31 Pacific Standard Time
// Run duration = 64.750734 seconds
// Run count = 21
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 8;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 1000;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 11000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 21

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

// Precision = 0.00007558

// Solution0 precision = 0.00007340
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.15610436f;
    r1 = n += -0.30355635f;
    r2 = n += -0.07482275f;
    r3 = n *= -0.97292304f;
    r4 = n += 0.04560250f;
    n += -2.49750543f;
    n *= 0.04758444f;
    r5 = n *= 0.99421442f;
    n = r5 += n;
    n *= r2;
    r2 = n += 1.01029885f;
    n += 2.00398445f;
    n = r2 += n;
    n *= r4;
    n = r1 *= n;
    n += 0.15603915f;
    n = r3 += n;
    n *= -1.38667822f;
    n *= 0.67365474f;
    r4 = n *= -0.17703840f;
    n += 1.42332447f;
    r6 = n += -0.44728714f;
    n *= r2;
    n += -2.41028666f;
    n += r0;
    n *= r4;
    n *= r6;
    n += r5;
    n *= 7.64892149f;
    n += 5.20095825f;
    n += r1;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00004590
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 2.36419749f;
    r1 = n += -0.82201183f;
    r2 = n += -1.69514215f;
    r3 = n *= 0.01986496f;
    r4 = n += -0.27013472f;
    n += 0.09727773f;
    n *= -3.04111528f;
    r5 = n *= 0.00124135f;
    n = r5 += n;
    n *= r2;
    r2 = n += -0.31898633f;
    n += 0.97327727f;
    n = r2 += n;
    n *= r4;
    n = r1 *= n;
    n += -0.66794419f;
    n = r3 += n;
    n *= 3.38822174f;
    n *= -0.38627234f;
    r4 = n *= -0.59950948f;
    n += 1.85095084f;
    r6 = n += -2.35189414f;
    n *= r2;
    n += -6.64592791f;
    n += r0;
    n *= r4;
    n *= r6;
    n += r5;
    n *= 0.53059965f;
    n += 0.39263299f;
    n += r1;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00007558
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -1.22436035f;
    r1 = n += 0.49462596f;
    r2 = n += 2.19796062f;
    r3 = n *= -0.08156590f;
    r4 = n += -0.05167159f;
    n += -0.32136497f;
    n *= -4.60047674f;
    r5 = n *= -0.00172354f;
    n = r5 += n;
    n *= r2;
    r2 = n += 0.00092089f;
    n += 0.32063073f;
    n = r2 += n;
    n *= r4;
    n = r1 *= n;
    n += 1.11664426f;
    n = r3 += n;
    n *= -1.49551415f;
    n *= -0.90180826f;
    r4 = n *= -1.07851064f;
    n += -0.44738972f;
    r6 = n += 1.89389765f;
    n *= r2;
    n += 2.49902964f;
    n += r0;
    n *= r4;
    n *= r6;
    n += r5;
    n *= 1.39100969f;
    n += 0.91511720f;
    n += r1;
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
