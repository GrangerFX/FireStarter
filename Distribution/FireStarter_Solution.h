// Run date: 11/20/22 10:05:47 Pacific Standard Time
// Run duration = 73.470941 seconds
// Run count = 18
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run processes = 0;
// Run population = 17408;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 1;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 18

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

// Precision = 0.01578331

// Solution0 precision = 0.01402050
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.12517427f;
    r1 = n += -0.39284503f;
    r2 = n *= -8.99661160f;
    r3 = n *= -0.02193029f;
    n *= r2;
    r2 = n += 0.76902634f;
    n += 0.76977569f;
    n *= -0.53668380f;
    n += 0.07001796f;
    r4 = n += 0.35346591f;
    r5 = n += -0.78057885f;
    r6 = n += 0.57973802f;
    r7 = n += 3.32894492f;
    n *= 0.26414081f;
    n += -0.45067182f;
    n *= -0.58529258f;
    n += r6;
    n += r5;
    n *= 0.73590243f;
    n *= r4;
    n = r7 *= n;
    n *= r2;
    n *= r7;
    n = r3 += n;
    n += r3;
    n *= 0.62220305f;
    n *= -2.10443950f;
    r3 = n += 0.57947063f;
    n += r0;
    n += r3;
    n += 0.52328014f;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.01578331
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.25650913f;
    r1 = n += -0.24097402f;
    r2 = n *= 0.47958213f;
    r3 = n *= -0.69750738f;
    n *= r2;
    r2 = n += 0.26144636f;
    n += 0.32305330f;
    n *= 0.91040826f;
    n += 0.86376524f;
    r4 = n += -0.59728587f;
    r5 = n += 0.89426041f;
    r6 = n += 0.29610163f;
    r7 = n += 0.75336385f;
    n *= -1.11383653f;
    n += 1.07883334f;
    n *= -2.78369713f;
    n += r6;
    n += r5;
    n *= 1.11256230f;
    n *= r4;
    n = r7 *= n;
    n *= r2;
    n *= r7;
    n = r3 += n;
    n += r3;
    n *= -0.13289064f;
    n *= 0.08270346f;
    r3 = n += 1.24774826f;
    n += r0;
    n += r3;
    n += -0.61774218f;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.01155400
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.30262130f;
    r1 = n += -0.00111708f;
    r2 = n *= 0.76005769f;
    r3 = n *= 0.88627613f;
    n *= r2;
    r2 = n += -0.25695980f;
    n += -1.38325322f;
    n *= -0.48334551f;
    n += 0.58802992f;
    r4 = n += -0.35560110f;
    r5 = n += 0.32158574f;
    r6 = n += -0.12617140f;
    r7 = n += 0.09104768f;
    n *= -2.55461740f;
    n += 7.78489923f;
    n *= 0.53944379f;
    n += r6;
    n += r5;
    n *= 0.46546474f;
    n *= r4;
    n = r7 *= n;
    n *= r2;
    n *= r7;
    n = r3 += n;
    n += r3;
    n *= -0.80001944f;
    n *= 0.43861416f;
    r3 = n += 0.48966834f;
    n += r0;
    n += r3;
    n += 0.11219941f;
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
