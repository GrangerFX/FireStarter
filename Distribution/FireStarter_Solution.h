// Run date: 03/26/23 22:56:56 Pacific Daylight Time
// Run duration = 2668.804736 seconds
// Run generation = 360
// Run result = 0.00000614
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
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

// Solution0 result = 0.00000614
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.07342888f;
    n *= -2.17872024f;
    n *= 3.37505722f;
    r0 = n += -1.69628716f;
    n *= -1.43012345f;
    n *= -1.45235968f;
    r1 = n *= -5.20381069f;
    n *= r0;
    n *= -0.45159212f;
    n += 0.61116821f;
    r0 = n += -4.29075003f;
    r2 = n *= -0.00799555f;
    n *= 0.45789641f;
    r3 = n += 1.24641037f;
    n = r2 *= n;
    n += 3.29771662f;
    n += 0.02178939f;
    n *= r2;
    n *= 1.33066404f;
    n += 1.97763908f;
    r2 = n *= -0.94206953f;
    n *= -0.42154986f;
    n *= -1.31631005f;
    r4 = n *= 0.05528714f;
    n *= r0;
    n *= 0.14695631f;
    n *= -0.54325557f;
    n *= r3;
    n += r4;
    n *= r1;
    n *= r2;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000322
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -1.96705818f;
    n *= 1.61618173f;
    n *= -0.09350248f;
    r0 = n += -0.91871685f;
    n *= -1.06671488f;
    n *= -0.20970900f;
    r1 = n *= -0.28650406f;
    n *= r0;
    n *= -1.36754894f;
    n += 0.51712894f;
    r0 = n += -0.98481596f;
    r2 = n *= 0.68498385f;
    n *= 3.43040395f;
    r3 = n += 0.26080996f;
    n = r2 *= n;
    n += 0.07831787f;
    n += 2.35800648f;
    n *= r2;
    n *= -2.78596115f;
    n += 0.48195302f;
    r2 = n *= -1.50835109f;
    n *= -1.77580023f;
    n *= -2.29051781f;
    r4 = n *= 2.62659740f;
    n *= r0;
    n *= -0.00025122f;
    n *= 2.19365144f;
    n *= r3;
    n += r4;
    n *= r1;
    n *= r2;
    n += -0.11813229f;
    return n;
} // Solution1

// Solution2 result = 0.00000167
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -1.89614153f;
    n *= -0.35748908f;
    n *= -0.75142264f;
    r0 = n += 1.33347952f;
    n *= -1.05885768f;
    n *= -1.09366846f;
    r1 = n *= 3.90289474f;
    n *= r0;
    n *= -0.12733909f;
    n += -0.89928687f;
    r0 = n += 1.94857454f;
    r2 = n *= -0.03530483f;
    n *= 4.71254587f;
    r3 = n += -2.71030235f;
    n = r2 *= n;
    n += 3.23696041f;
    n += 0.22093466f;
    n *= r2;
    n *= 1.66269314f;
    n += 1.86371970f;
    r2 = n *= -0.37806809f;
    n *= 1.01231396f;
    n *= -0.30062759f;
    r4 = n *= 0.61779869f;
    n *= r0;
    n *= -0.82412416f;
    n *= -1.43989921f;
    n *= r3;
    n += r4;
    n *= r1;
    n *= r2;
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
