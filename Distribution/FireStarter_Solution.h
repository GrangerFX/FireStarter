// Run date: 05/06/23 11:37:24 Pacific Daylight Time
// Run duration = 1348.230400 seconds
// Run generation = 323
// Run result = 0.00000075
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -0.28248236f;
    r0 = n += -2.85911036f;
    r1 = n *= -1.19061661f;
    n *= r0;
    n += 0.80967116f;
    n += 8.85134697f;
    n *= -0.52767998f;
    r0 = n *= -0.00557429f;
    n += r0;
    r0 = n += 0.61577475f;
    r2 = n *= -0.73532116f;
    r3 = n *= -2.15600038f;
    n = r0 *= n;
    n += 3.59895658f;
    n += 1.93249428f;
    n *= r3;
    n += r0;
    r0 = n *= -0.29213417f;
    n *= r1;
    r1 = n *= -0.03550037f;
    r3 = n *= -5.50928211f;
    n *= r1;
    n += 0.78564399f;
    n += r2;
    n *= 4.51244831f;
    n *= -0.09027138f;
    n *= 3.11350942f;
    n *= r0;
    n *= -2.50259089f;
    n *= r3;
    n += -0.13931450f;
    n += 0.13931447f;
    return n;
} // Solution0

// Solution1 result = 0.00000075
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -1.42240834f;
    r0 = n += -1.66825044f;
    r1 = n *= -5.74842691f;
    n *= r0;
    n += 15.62464523f;
    n += -2.01691389f;
    n *= 0.05698071f;
    r0 = n *= -0.01781926f;
    n += r0;
    r0 = n += -0.76767188f;
    r2 = n *= 0.24764718f;
    r3 = n *= 1.88334775f;
    n = r0 *= n;
    n += 1.27687478f;
    n += 0.73901117f;
    n *= r3;
    n += r0;
    r0 = n *= 1.46201241f;
    n *= r1;
    r1 = n *= 0.09561166f;
    r3 = n *= 1.07475221f;
    n *= r1;
    n += -2.41485977f;
    n += r2;
    n *= -0.28171495f;
    n *= 1.95734525f;
    n *= -11.47404289f;
    n *= r0;
    n *= -0.16681302f;
    n *= r3;
    n += -0.15733992f;
    n += 0.03920800f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -1.78995144f;
    r0 = n += -0.82804227f;
    r1 = n *= 0.24056688f;
    n *= r0;
    n += -0.15704043f;
    n += -0.54860401f;
    n *= -0.06398378f;
    r0 = n *= 0.28670168f;
    n += r0;
    r0 = n += 0.34611917f;
    r2 = n *= 1.51901829f;
    r3 = n *= -1.37937808f;
    n = r0 *= n;
    n += -2.23065257f;
    n += -2.08327365f;
    n *= r3;
    n += r0;
    r0 = n *= -0.54216111f;
    n *= r1;
    r1 = n *= -0.40687698f;
    r3 = n *= -0.95264947f;
    n *= r1;
    n += -0.38626823f;
    n += r2;
    n *= 2.47251582f;
    n *= 2.42511654f;
    n *= -1.40519893f;
    n *= r0;
    n *= 2.22547340f;
    n *= r3;
    n += 0.32138985f;
    n += 0.20220897f;
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
