// Run date: 02/19/23 16:06:29 Pacific Standard Time
// Run duration = 436.312962 seconds
// Run count = 98
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 84
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 98

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

// Precision = 0.00012302

// Solution0 precision = 0.00000596
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.05776334f;
    r1 = n += 0.94891936f;
    n += -1.13256645f;
    r2 = n += -1.19440818f;
    r3 = n *= -0.25747359f;
    r4 = n += 0.86136180f;
    n *= r0;
    n *= 0.02120223f;
    n *= 10.27624130f;
    r0 = n += 7.18353128f;
    r5 = n *= -0.14203461f;
    n *= r4;
    n *= 7.71547222f;
    n *= r5;
    r5 = n *= 0.63743627f;
    r4 = n += -1.28629529f;
    n *= r3;
    n += r4;
    r4 = n += -7.44894457f;
    n += r2;
    n += 0.35328498f;
    n += r4;
    n *= r0;
    n *= 0.23456533f;
    n += 3.00423312f;
    n += -2.19716763f;
    n += 4.57401562f;
    n *= r1;
    n += 12.49706078f;
    r1 = n *= 0.01024727f;
    n += r5;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.00003284
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.29295087f;
    r1 = n += -1.06467056f;
    n += 1.73137844f;
    r2 = n += 0.42571786f;
    r3 = n *= -0.03997250f;
    r4 = n += -0.08145477f;
    n *= r0;
    n *= 0.36035070f;
    n *= 0.77699739f;
    r0 = n += 0.77928823f;
    r5 = n *= -2.22754169f;
    n *= r4;
    n *= 1.09557581f;
    n *= r5;
    r5 = n *= -6.73283195f;
    r4 = n += -7.42137098f;
    n *= r3;
    n += r4;
    r4 = n += 15.17250538f;
    n += r2;
    n += 6.33925295f;
    n += r4;
    n *= r0;
    n *= 1.72280598f;
    n += -15.92670536f;
    n += 5.36494732f;
    n += -2.57211375f;
    n *= r1;
    n += 9.84526730f;
    r1 = n *= -0.01327355f;
    n += r5;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.00012302
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.10895133f;
    r1 = n += -0.56280124f;
    n += 0.79791957f;
    r2 = n += 0.63171428f;
    r3 = n *= 1.30479050f;
    r4 = n += -4.04412937f;
    n *= r0;
    n *= -1.63278294f;
    n *= -0.00494783f;
    r0 = n += -1.21545196f;
    r5 = n *= 0.52645475f;
    n *= r4;
    n *= -0.67092210f;
    n *= r5;
    r5 = n *= 1.80445623f;
    r4 = n += 0.26518404f;
    n *= r3;
    n += r4;
    r4 = n += -2.22309256f;
    n += r2;
    n += 35.10345840f;
    n += r4;
    n *= r0;
    n *= -0.32160345f;
    n += -1.83250320f;
    n += -0.00812480f;
    n += -2.66569757f;
    n *= r1;
    n += 5.13359690f;
    r1 = n *= -0.05109936f;
    n += r5;
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
