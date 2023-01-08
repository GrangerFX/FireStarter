// Run date: 01/08/23 15:09:46 Pacific Standard Time
// Run duration = 27.884951 seconds
// Run count = 40
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_CODE
// Run units = 1
// Run processes = 0
// Run iterations = 256
// Run candidates = 16
// Run generations = 1
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 40

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

// Precision = 0.01185071

// Solution0 precision = 0.00385672
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.12683539f;
    r1 = n += -0.39819795f;
    r2 = n *= -8.60900593f;
    r3 = n *= -0.01815815f;
    n = r2 *= n;
    r4 = n += 0.71491367f;
    n += 0.59702510f;
    n *= -0.74905670f;
    n += 0.64885998f;
    r5 = n += -0.10725381f;
    r6 = n += -0.91612405f;
    r7 = n += 0.78194708f;
    n *= -2.70444918f;
    n *= -0.44754300f;
    n *= r2;
    n *= -0.46017057f;
    n += r7;
    n += r6;
    n *= 0.48447037f;
    n *= r5;
    r5 = n *= 3.55350375f;
    n *= r4;
    n *= r5;
    n = r3 += n;
    n += r3;
    n *= 2.33287692f;
    n *= -0.69504386f;
    r3 = n += 0.49982148f;
    n += r0;
    n += r3;
    n += 0.71344334f;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.01164854
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.21048725f;
    r1 = n += -0.20125227f;
    r2 = n *= 0.61875445f;
    r3 = n *= -0.78947484f;
    n = r2 *= n;
    r4 = n += 0.31196308f;
    n += 0.65367401f;
    n *= 1.88370585f;
    n += 0.82768780f;
    r5 = n += -0.49383128f;
    r6 = n += 0.96276873f;
    r7 = n += -0.56420147f;
    n *= -0.83512163f;
    n *= 0.59292442f;
    n *= r2;
    n *= 0.34414446f;
    n += r7;
    n += r6;
    n *= -0.75456876f;
    n *= r5;
    r5 = n *= 0.77336836f;
    n *= r4;
    n *= r5;
    n = r3 += n;
    n += r3;
    n *= -0.45375705f;
    n *= 0.22744590f;
    r3 = n += 1.18573534f;
    n += r0;
    n += r3;
    n += -0.45810115f;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.01185071
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.30496192f;
    r1 = n += 0.00266538f;
    r2 = n *= 0.77014446f;
    r3 = n *= 0.48851529f;
    n = r2 *= n;
    r4 = n += -0.18571526f;
    n += -1.42229986f;
    n *= 1.29031086f;
    n += 0.40255907f;
    r5 = n += -0.07488152f;
    r6 = n += 0.48851538f;
    r7 = n += -0.56488729f;
    n *= 0.11142922f;
    n *= 0.21750905f;
    n *= r2;
    n *= 0.20371243f;
    n += r7;
    n += r6;
    n *= 1.63526309f;
    n *= r5;
    r5 = n *= -0.43914419f;
    n *= r4;
    n *= r5;
    n = r3 += n;
    n += r3;
    n *= -0.66731495f;
    n *= 0.55178457f;
    r3 = n += 0.52264851f;
    n += r0;
    n += r3;
    n += -0.73134500f;
    n *= r1;
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
