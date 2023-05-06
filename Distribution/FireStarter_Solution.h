// Run date: 05/06/23 12:26:57 Pacific Daylight Time
// Run duration = 2103.364481 seconds
// Run generation = 386
// Run result = 0.00000024
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.57637906f;
    r0 = n += -0.56521356f;
    r1 = n *= -0.40922749f;
    n = r0 *= n;
    r2 = n += -0.35012746f;
    n += 1.92256308f;
    n += -0.72054332f;
    r3 = n *= 0.03002653f;
    n += 0.56887674f;
    n *= 0.96954757f;
    r4 = n *= -1.81727278f;
    n *= 0.62391937f;
    n *= r3;
    n += r4;
    r4 = n *= 2.76986313f;
    n = r4 *= n;
    n *= 0.03738584f;
    r3 = n *= 0.69066405f;
    n += 13.81320572f;
    n *= 10.12348366f;
    n *= 0.74880844f;
    n += -3.09529924f;
    n += r2;
    n += r4;
    n = r1 *= n;
    n *= -0.90243375f;
    n += r1;
    n = r3 *= n;
    n *= r0;
    n *= 0.24759136f;
    n += r3;
    n += -0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.36511934f;
    r0 = n += -1.72553897f;
    r1 = n *= 0.10975683f;
    n = r0 *= n;
    r2 = n += 2.24239373f;
    n += 3.09317756f;
    n += 2.35857224f;
    r3 = n *= -0.17206208f;
    n += 1.81092441f;
    n *= -1.29161525f;
    r4 = n *= 1.91244304f;
    n *= 0.03757285f;
    n *= r3;
    n += r4;
    r4 = n *= 1.64937067f;
    n = r4 *= n;
    n *= 0.21777375f;
    r3 = n *= 0.20206901f;
    n += 1.08431184f;
    n *= 1.27039266f;
    n *= -77.56275177f;
    n += 1.99956906f;
    n += r2;
    n += r4;
    n = r1 *= n;
    n *= -0.44040436f;
    n += r1;
    n = r3 *= n;
    n *= r0;
    n *= -0.20285703f;
    n += r3;
    n += -0.11813170f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.05080342f;
    r0 = n += -1.56719029f;
    r1 = n *= -0.10514615f;
    n = r0 *= n;
    r2 = n += -0.22281265f;
    n += 0.56856281f;
    n += -0.15799744f;
    r3 = n *= 0.31848246f;
    n += 1.62524259f;
    n *= 0.69108164f;
    r4 = n *= -0.44812423f;
    n *= 0.50874329f;
    n *= r3;
    n += r4;
    r4 = n *= -1.74094415f;
    n = r4 *= n;
    n *= -2.67326403f;
    r3 = n *= -1.74051893f;
    n += 1.79289448f;
    n *= -3.57764435f;
    n *= -0.00000006f;
    n += 0.14780729f;
    n += r2;
    n += r4;
    n = r1 *= n;
    n *= 1.91068482f;
    n += r1;
    n = r3 *= n;
    n *= r0;
    n *= 0.04130127f;
    n += r3;
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
