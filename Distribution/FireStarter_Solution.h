// Run date: 12/11/22 12:10:35 Pacific Standard Time
// Run duration = 15.975964 seconds
// Run count = 14
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 14

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

// Precision = 0.00010705

// Solution0 precision = 0.00007468
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.76399803f;
    n *= -0.73375130f;
    r1 = n += 0.75129408f;
    r2 = n += 0.56299901f;
    r3 = n *= -0.07274190f;
    r4 = n += -0.00950551f;
    n = r4 *= n;
    r5 = n *= 3.88277912f;
    n *= -10.51584148f;
    n *= -0.05388052f;
    r6 = n += 1.25373566f;
    n *= 0.49936303f;
    n += r6;
    n = r4 *= n;
    r6 = n += -0.78452182f;
    n += -0.34704715f;
    n = r5 += n;
    r7 = n *= -1.65750134f;
    n *= r7;
    n += 1.21731782f;
    n = r0 += n;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n *= r5;
    n += 0.03663196f;
    n *= 0.82480478f;
    n *= r6;
    n += -0.12771173f;
    n *= r0;
    return n;
} // Solution0

// Solution1 precision = 0.00010705
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += 1.12521720f;
    n *= -0.28464589f;
    r1 = n += 0.01787570f;
    r2 = n += 1.72141230f;
    r3 = n *= -0.79209191f;
    r4 = n += 0.44406581f;
    n = r4 *= n;
    r5 = n *= -0.43814704f;
    n *= 8.46130085f;
    n *= 3.13347125f;
    r6 = n += 1.11410344f;
    n *= -0.98095334f;
    n += r6;
    n = r4 *= n;
    r6 = n += -0.41794774f;
    n += 1.48723543f;
    n = r5 += n;
    r7 = n *= -1.57118249f;
    n *= r7;
    n += 1.02819312f;
    n = r0 += n;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n *= r5;
    n += 0.60748047f;
    n *= -0.03161940f;
    n *= r6;
    n += -0.16470751f;
    n *= r0;
    return n;
} // Solution1

// Solution2 precision = 0.00008076
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -0.76461548f;
    n *= -0.59586877f;
    r1 = n += 0.93953526f;
    r2 = n += 0.84367770f;
    r3 = n *= 0.28336534f;
    r4 = n += -0.02924546f;
    n = r4 *= n;
    r5 = n *= -1.72007406f;
    n *= 3.53227806f;
    n *= -0.15666787f;
    r6 = n += 3.77941799f;
    n *= -1.01729989f;
    n += r6;
    n = r4 *= n;
    r6 = n += 0.10329730f;
    n += 2.64900088f;
    n = r5 += n;
    r7 = n *= 0.57362539f;
    n *= r7;
    n += -0.68134522f;
    n = r0 += n;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n *= r5;
    n += -0.88073051f;
    n *= 1.13283920f;
    n *= r6;
    n += 0.05556136f;
    n *= r0;
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
