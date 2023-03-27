// Run date: 03/26/23 17:24:04 Pacific Daylight Time
// Run duration = 6247.434047 seconds
// Run generation = 31
// Run result = 0.00163309
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 1
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

// Solution0 result = 0.00163309
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.29196227f;
    r0 = n *= -2.37917447f;
    r1 = n *= -0.17380792f;
    r2 = n *= -0.65727544f;
    n += 1.67595327f;
    n *= 1.01413810f;
    r3 = n *= 0.54860455f;
    n *= -1.79315686f;
    r4 = n *= -1.08323824f;
    n *= 1.34951401f;
    n = r4 *= n;
    n = r1 *= n;
    r5 = n += -0.68077052f;
    n = r0 += n;
    n += -0.37175998f;
    n *= 1.04350388f;
    n *= -0.67244226f;
    n *= r1;
    n *= r5;
    n += -2.14603448f;
    n *= r3;
    r3 = n *= 0.92492270f;
    n *= -1.48383701f;
    n *= r2;
    n *= -1.70954168f;
    n *= r4;
    n *= -0.59255165f;
    n *= r3;
    n += 0.68053836f;
    n += r0;
    n *= 2.13762832f;
    n *= 0.28137460f;
    return n;
} // Solution0

// Solution1 result = 0.00089020
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.43105841f;
    r0 = n *= 1.24734950f;
    r1 = n *= 0.26431397f;
    r2 = n *= 0.10437159f;
    n += -1.13499510f;
    n *= 0.58909947f;
    r3 = n *= -2.75417256f;
    n *= -1.60859454f;
    r4 = n *= -1.11538339f;
    n *= -0.23285496f;
    n = r4 *= n;
    n = r1 *= n;
    r5 = n += 0.76931792f;
    n = r0 += n;
    n += 2.80712199f;
    n *= 0.11200970f;
    n *= -0.28878173f;
    n *= r1;
    n *= r5;
    n += 2.21937418f;
    n *= r3;
    r3 = n *= -0.53368300f;
    n *= 2.43138123f;
    n *= r2;
    n *= -0.76143050f;
    n *= r4;
    n *= -1.69551682f;
    n *= r3;
    n += -2.50104451f;
    n += r0;
    n *= -0.25245863f;
    n *= 1.95147574f;
    return n;
} // Solution1

// Solution2 result = 0.00161744
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.06157517f;
    r0 = n *= -0.39266112f;
    r1 = n *= -0.32006943f;
    r2 = n *= 0.45454744f;
    n += 1.05083370f;
    n *= 1.83812547f;
    r3 = n *= -1.31198025f;
    n *= 1.19239962f;
    r4 = n *= -2.20115280f;
    n *= 0.05928024f;
    n = r4 *= n;
    n = r1 *= n;
    r5 = n += 0.37951446f;
    n = r0 += n;
    n += 0.16056833f;
    n *= -0.92676198f;
    n *= 1.94401610f;
    n *= r1;
    n *= r5;
    n += 0.78850180f;
    n *= r3;
    r3 = n *= 0.60835159f;
    n *= 4.72490358f;
    n *= r2;
    n *= 3.87049174f;
    n *= r4;
    n *= 1.07467532f;
    n *= r3;
    n += -0.37414306f;
    n += r0;
    n *= -3.32196236f;
    n *= 0.09064570f;
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
