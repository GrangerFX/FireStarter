// Run date: 11/05/23 18:43:50 Pacific Standard Time
// Run duration = 1787.478972 seconds
// Run generation = 58
// Run evolution = 12
// Run result = 0.00000042
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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

// Solution0 result = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.14918131f;
    r0 = n += 0.46866691f;
    r1 = n *= -0.00001643f;
    n = r1 *= n;
    r2 = n += 0.23269367f;
    n *= -1.23682237f;
    r3 = n += -2.10275674f;
    n *= -0.62452531f;
    n = r0 *= n;
    n = r1 += n;
    n *= 0.25674951f;
    n *= r1;
    n = r3 *= n;
    n += 0.00748462f;
    r1 = n *= 1.41084409f;
    n *= 0.06869372f;
    r4 = n += -0.00504167f;
    n *= r4;
    n *= 5.16216230f;
    r4 = n += 1.26330984f;
    n *= r3;
    r3 = n += 1.85897994f;
    n = r3 *= n;
    n += 3.15596652f;
    n *= r1;
    n += 2.20723820f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += -0.00000019f;
    n *= r2;
    n *= 1.94082439f;
    return n;
} // Solution0

// Solution1 result = 0.00000042
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.26936829f;
    r0 = n += -0.83252496f;
    r1 = n *= -0.00208215f;
    n = r1 *= n;
    r2 = n += -1.42244375f;
    n *= 1.79901266f;
    r3 = n += -1.59583259f;
    n *= 0.59722781f;
    n = r0 *= n;
    n = r1 += n;
    n *= -0.81385154f;
    n *= r1;
    n = r3 *= n;
    n += -4.23531342f;
    r1 = n *= 0.00276257f;
    n *= -0.06280984f;
    r4 = n += 0.91560549f;
    n *= r4;
    n *= -0.60278130f;
    r4 = n += 0.47097573f;
    n *= r3;
    r3 = n += 1.07422376f;
    n = r3 *= n;
    n += 7.52514887f;
    n *= r1;
    n += -11.23725891f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += -0.03302965f;
    n *= r2;
    n *= -2.51432228f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.61914581f;
    r0 = n += -1.62091982f;
    r1 = n *= 0.00024102f;
    n = r1 *= n;
    r2 = n += -0.69967335f;
    n *= -1.05488741f;
    r3 = n += 0.40959018f;
    n *= 0.82521880f;
    n = r0 *= n;
    n = r1 += n;
    n *= -0.78633827f;
    n *= r1;
    n = r3 *= n;
    n += 1.92499280f;
    r1 = n *= -2.48897648f;
    n *= -0.00056600f;
    r4 = n += 0.01665340f;
    n *= r4;
    n *= -15.12867928f;
    r4 = n += -0.10448238f;
    n *= r3;
    r3 = n += -1.42072415f;
    n = r3 *= n;
    n += 0.54910189f;
    n *= r1;
    n += 1.99562562f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += -0.70356184f;
    n *= r2;
    n *= 1.06365526f;
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
