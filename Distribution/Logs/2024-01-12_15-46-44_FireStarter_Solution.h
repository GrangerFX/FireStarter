// Run date: 01/12/24 15:46:44 Pacific Standard Time
// Run duration = 4082.850910 seconds
// Run generation = 18
// Run evolution = 9
// Run max result = 0.00000016
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -1.49714780f;
    n *= -0.42182678f;
    r0 = n += -1.98403215f;
    r1 = n *= -0.09872814f;
    r2 = n *= -0.53434408f;
    n = r0 *= n;
    n *= 12.19728947f;
    n += -0.47435230f;
    r3 = n *= -2.81609893f;
    r4 = n *= 0.01779567f;
    r5 = n += 1.78705049f;
    n *= -0.47379023f;
    n = r5 *= n;
    r6 = n *= -0.58728886f;
    n += r4;
    n = r1 *= n;
    n = r2 *= n;
    r4 = n *= -6.12408829f;
    n += r3;
    n *= -0.46298674f;
    r3 = n += -2.14077330f;
    n += -65.36886597f;
    n *= r2;
    n += r0;
    n += r4;
    n += r3;
    n += -1.70918489f;
    n *= r1;
    n *= r5;
    n *= r6;
    n += -0.00000000f;
    n *= 2.70469499f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -1.18824077f;
    n *= 0.51625705f;
    r0 = n += 1.89592648f;
    r1 = n *= 0.32719922f;
    r2 = n *= -2.56854534f;
    n = r0 *= n;
    n *= -19.60562897f;
    n += -18.15089226f;
    r3 = n *= 0.00558870f;
    r4 = n *= -0.08126111f;
    r5 = n += 0.76896393f;
    n *= -1.64385676f;
    n = r5 *= n;
    r6 = n *= -0.78556222f;
    n += r4;
    n = r1 *= n;
    n = r2 *= n;
    r4 = n *= -2.39983535f;
    n += r3;
    n *= 0.12920928f;
    r3 = n += -0.29273182f;
    n += -6.00979280f;
    n *= r2;
    n += r0;
    n += r4;
    n += r3;
    n += -4.67473745f;
    n *= r1;
    n *= r5;
    n *= r6;
    n += -0.06555040f;
    n *= 1.80215263f;
    return n;
} // Solution1

// Solution2 result = 0.00000016
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.17430349f;
    n *= -2.02242088f;
    r0 = n += 0.92288208f;
    r1 = n *= 0.02835578f;
    r2 = n *= 4.87565184f;
    n = r0 *= n;
    n *= 8.43687248f;
    n += -0.40476504f;
    r3 = n *= -0.89339161f;
    r4 = n *= -0.17537814f;
    r5 = n += -1.60357285f;
    n *= -1.29558039f;
    n = r5 *= n;
    r6 = n *= 1.48319626f;
    n += r4;
    n = r1 *= n;
    n = r2 *= n;
    r4 = n *= 1.39792550f;
    n += r3;
    n *= -1.01554835f;
    r3 = n += -0.42565605f;
    n += 1.47971320f;
    n *= r2;
    n += r0;
    n += r4;
    n += r3;
    n += 0.06682815f;
    n *= r1;
    n *= r5;
    n *= r6;
    n += 0.39474031f;
    n *= 1.32643843f;
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
