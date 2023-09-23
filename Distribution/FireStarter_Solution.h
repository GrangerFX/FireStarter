// Run date: 09/19/23 15:51:28 Pacific Daylight Time
// Run duration = 1018.059412 seconds
// Run generation = 23
// Run evolution = 13
// Run result = 0.00002205
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
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00000924
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.66746795f;
    r0 = n += -1.87968135f;
    r1 = n *= 1.31886148f;
    r2 = n *= -1.19354653f;
    n *= 0.42161605f;
    r3 = n += 0.47585875f;
    n *= -0.10747421f;
    n += 0.03564789f;
    r4 = n *= 0.05587626f;
    n += r4;
    n *= 0.02319340f;
    r4 = n *= -0.00048603f;
    n *= r2;
    n += r1;
    r1 = n += 0.37263685f;
    n *= r3;
    r3 = n += 22.07001305f;
    n *= r3;
    r3 = n += -38.47821808f;
    n *= 0.33262470f;
    r2 = n += -100.30490875f;
    n *= -4.72050953f;
    n *= -0.19812718f;
    n += 255.07530212f;
    n *= r2;
    n *= r3;
    n += r1;
    n += r0;
    n += 63.40939713f;
    r0 = n *= 1.14819443f;
    n += r0;
    n *= r4;
    return n;
} // Solution0

// Solution1 result = 0.00001001
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.63749653f;
    r0 = n += 1.71592653f;
    r1 = n *= 0.23968893f;
    r2 = n *= -0.09542868f;
    n *= -11.39779663f;
    r3 = n += -1.43589401f;
    n *= 1.11769199f;
    n += 1.65902805f;
    r4 = n *= -0.00491469f;
    n += r4;
    n *= 1.95951509f;
    r4 = n *= 3.07051468f;
    n *= r2;
    n += r1;
    r1 = n += 1.45130277f;
    n *= r3;
    r3 = n += -0.13486764f;
    n *= r3;
    r3 = n += 0.72652340f;
    n *= -0.88735849f;
    r2 = n += 2.77341771f;
    n *= -5.71395302f;
    n *= 1.10606611f;
    n += -0.77607757f;
    n *= r2;
    n *= r3;
    n += r1;
    n += r0;
    n += -0.48304906f;
    r0 = n *= 0.29045212f;
    n += r0;
    n *= r4;
    return n;
} // Solution1

// Solution2 result = 0.00002205
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.29426163f;
    r0 = n += 0.92762959f;
    r1 = n *= -1.87006307f;
    r2 = n *= 0.21980467f;
    n *= -1.40313566f;
    r3 = n += 0.18234012f;
    n *= 0.05431296f;
    n += -3.23927355f;
    r4 = n *= 0.07384192f;
    n += r4;
    n *= 0.31918278f;
    r4 = n *= 7.92794514f;
    n *= r2;
    n += r1;
    r1 = n += -0.18867220f;
    n *= r3;
    r3 = n += 1.77419579f;
    n *= r3;
    r3 = n += -0.82398766f;
    n *= 0.58839089f;
    r2 = n += -1.00332379f;
    n *= 0.00714846f;
    n *= -20.94652176f;
    n += -0.84161311f;
    n *= r2;
    n *= r3;
    n += r1;
    n += r0;
    n += 0.77801061f;
    r0 = n *= -0.73635918f;
    n += r0;
    n *= r4;
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
