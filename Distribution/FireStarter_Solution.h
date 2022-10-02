// Run date: 10/02/22 11:26:57 Pacific Daylight Time
// Run duration = 1.819068 seconds
// Run count = 26
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
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 26

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

// Precision = 0.00000203

// Solution0 precision = 0.00000203
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.99407196f;
    r0 = n *= -0.22732672f;
    r1 = n += 0.70993435f;
    r2 = n *= -0.18110707f;
    r3 = n += -0.58626682f;
    n = r3 += n;
    n += r0;
    n += -0.18212608f;
    n = r3 *= n;
    n += -0.83478004f;
    r0 = n += -0.77478403f;
    n += 2.37146354f;
    n = r1 *= n;
    r4 = n *= -0.39388439f;
    n *= 0.41544065f;
    n *= -0.63494086f;
    n *= -0.93525892f;
    n = r1 *= n;
    r5 = n += 0.73701489f;
    n = r1 += n;
    n = r3 += n;
    n *= 0.06634389f;
    n += 0.95291156f;
    n *= r1;
    n *= r3;
    n += r5;
    n *= r4;
    n += r2;
    n *= r0;
    n *= 0.87160629f;
    n += -0.00000011f;
    n *= -1.39181566f;
    return n;
} // Solution0

// Solution1 precision = 0.00000131
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.50605345f;
    r0 = n *= -0.22770308f;
    r1 = n += 1.05988860f;
    r2 = n *= -0.18881175f;
    r3 = n += -1.00260949f;
    n = r3 += n;
    n += r0;
    n += -0.23976682f;
    n = r3 *= n;
    n += 2.39861345f;
    r0 = n += -1.00743520f;
    n += 0.86581665f;
    n = r1 *= n;
    r4 = n *= 0.29909849f;
    n *= -0.30348334f;
    n *= 0.04108322f;
    n *= 0.95244634f;
    n = r1 *= n;
    r5 = n += 1.04047453f;
    n = r1 += n;
    n = r3 += n;
    n *= 0.33983895f;
    n += -1.78169703f;
    n *= r1;
    n *= r3;
    n += r5;
    n *= r4;
    n += r2;
    n *= r0;
    n *= 0.72827065f;
    n += -4.31047535f;
    n *= 0.02740543f;
    return n;
} // Solution1

// Solution2 precision = 0.00000191
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.40558544f;
    r0 = n *= -0.50802416f;
    r1 = n += -0.53943759f;
    r2 = n *= -0.87930566f;
    r3 = n += 0.00711535f;
    n = r3 += n;
    n += r0;
    n += -0.55984175f;
    n = r3 *= n;
    n += -5.16009045f;
    r0 = n += -1.37874269f;
    n += 0.04432971f;
    n = r1 *= n;
    r4 = n *= 0.29189700f;
    n *= 0.11732850f;
    n *= -3.70957255f;
    n *= -0.09881996f;
    n = r1 *= n;
    r5 = n += -0.89738727f;
    n = r1 += n;
    n = r3 += n;
    n *= -0.08850662f;
    n += 1.05509651f;
    n *= r1;
    n *= r3;
    n += r5;
    n *= r4;
    n += r2;
    n *= r0;
    n *= -1.58301938f;
    n += 1.01650083f;
    n *= 0.51506519f;
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
