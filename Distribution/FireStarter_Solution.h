// Run date: 08/06/22 13:06:26 Pacific Daylight Time
// Run duration = 1.729221 seconds
// Run count = 8
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 35

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

// Precision = 0.01846039

// Solution0 precision = 0.01622231
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.24284069f;
    r1 = n += 0.17537743f;
    n *= -0.56549418f;
    r2 = n *= -0.53316784f;
    r3 = n *= 0.14291327f;
    n *= 1.05935931f;
    n = r2 += n;
    r4 = n *= -0.96947634f;
    r5 = n *= -0.35929784f;
    r6 = n += -0.90115124f;
    n = r1 *= n;
    n += -0.23150909f;
    n *= r1;
    r1 = n += -0.36125731f;
    n = r6 += n;
    n *= r4;
    n = r1 += n;
    n += r6;
    r6 = n += -1.01669824f;
    n += -0.42277059f;
    n *= 0.00218149f;
    n *= 0.54746723f;
    n += -0.40927875f;
    n *= r0;
    n += r3;
    n = r5 *= n;
    n *= r6;
    n *= 0.25592813f;
    n *= r2;
    n += r5;
    n *= 0.00052224f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.01734793
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.11948287f;
    r1 = n += 1.57922006f;
    n *= -0.92805099f;
    r2 = n *= 0.54796767f;
    r3 = n *= 0.06071363f;
    n *= -0.19816862f;
    n = r2 += n;
    r4 = n *= 0.67087752f;
    r5 = n *= -0.30292585f;
    r6 = n += -0.77254182f;
    n = r1 *= n;
    n += -0.36887667f;
    n *= r1;
    r1 = n += 0.66738540f;
    n = r6 += n;
    n *= r4;
    n = r1 += n;
    n += r6;
    r6 = n += 0.17130034f;
    n += 0.15019280f;
    n *= 0.07942238f;
    n *= 1.59983993f;
    n += 3.85961390f;
    n *= r0;
    n += r3;
    n = r5 *= n;
    n *= r6;
    n *= 0.02851921f;
    n *= r2;
    n += r5;
    n *= 0.02277027f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.01846039
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.56270361f;
    r1 = n += -0.19004302f;
    n *= 0.90247732f;
    r2 = n *= -0.46049860f;
    r3 = n *= 0.11806498f;
    n *= 0.12574449f;
    n = r2 += n;
    r4 = n *= 0.53476316f;
    r5 = n *= 0.80089861f;
    r6 = n += 1.07768261f;
    n = r1 *= n;
    n += 1.10237813f;
    n *= r1;
    r1 = n += -0.45759135f;
    n = r6 += n;
    n *= r4;
    n = r1 += n;
    n += r6;
    r6 = n += -0.39291918f;
    n += -2.40931964f;
    n *= 0.81464994f;
    n *= 0.36600319f;
    n += 0.05071786f;
    n *= r0;
    n += r3;
    n = r5 *= n;
    n *= r6;
    n *= -0.04167401f;
    n *= r2;
    n += r5;
    n *= 0.24182214f;
    n += r1;
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
