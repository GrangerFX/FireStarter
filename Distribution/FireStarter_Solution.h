// Run date: 02/13/23 10:30:12 Pacific Standard Time
// Run duration = 500.098261 seconds
// Run count = 12
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEST
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 128
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 12

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

// Precision = 0.00066513

// Solution0 precision = 0.00015848
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.42890346f;
    r1 = n *= 0.01748306f;
    n += r0;
    n += 1.87428379f;
    r0 = n += 0.18237066f;
    n *= r0;
    r0 = n += -0.66353476f;
    n += -2.61349726f;
    r2 = n *= 0.50984812f;
    n *= 0.13843991f;
    r3 = n += -1.55083251f;
    n *= r3;
    n += -0.81302243f;
    r3 = n *= -0.58961427f;
    r4 = n += 0.19905563f;
    n += -0.60871339f;
    n += 0.74588048f;
    n *= r2;
    r2 = n += -2.11466026f;
    n += 0.86942536f;
    n *= 2.40242171f;
    n += r1;
    n *= -0.02624695f;
    n *= 1.16065550f;
    n = r3 += n;
    n *= r3;
    n *= 1.30036628f;
    n *= r0;
    n *= -0.84365940f;
    n *= r4;
    n += 1.12689900f;
    n += r2;
    return n;
} // Solution0

// Solution1 precision = 0.00013661
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -1.06340647f;
    r1 = n *= -0.71819359f;
    n += r0;
    n += 1.53588641f;
    r0 = n += -1.24511480f;
    n *= r0;
    r0 = n += -0.24976544f;
    n += -1.19767928f;
    r2 = n *= -0.41763854f;
    n *= 0.51367062f;
    r3 = n += 1.99897337f;
    n *= r3;
    n += -1.54885411f;
    r3 = n *= -0.32151785f;
    r4 = n += 0.19367491f;
    n += 1.01315415f;
    n += -0.32808998f;
    n *= r2;
    r2 = n += -0.50890088f;
    n += 0.88495129f;
    n *= -0.26542398f;
    n += r1;
    n *= -0.38586789f;
    n *= 0.22181049f;
    n = r3 += n;
    n *= r3;
    n *= -0.86752135f;
    n *= r0;
    n *= -2.64445806f;
    n *= r4;
    n += 1.00744879f;
    n += r2;
    return n;
} // Solution1

// Solution2 precision = 0.00066513
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 1.11046278f;
    r1 = n *= -1.72786725f;
    n += r0;
    n += 2.00085211f;
    r0 = n += -0.76626670f;
    n *= r0;
    r0 = n += -1.09929717f;
    n += 0.22874615f;
    r2 = n *= 0.14129171f;
    n *= -0.31932205f;
    r3 = n += 2.21934581f;
    n *= r3;
    n += 0.85006601f;
    r3 = n *= 0.72203767f;
    r4 = n += -1.14598119f;
    n += 0.88495243f;
    n += -0.90909332f;
    n *= r2;
    r2 = n += 1.63076305f;
    n += -3.12604928f;
    n *= -2.33231640f;
    n += r1;
    n *= -0.31025389f;
    n *= -0.28349367f;
    n = r3 += n;
    n *= r3;
    n *= -0.02615293f;
    n *= r0;
    n *= 0.80712616f;
    n *= r4;
    n += -1.40701234f;
    n += r2;
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
