// Run date: 01/08/23 19:46:16 Pacific Standard Time
// Run duration = 8.334053 seconds
// Run count = 11
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
// Solution Generation = 11

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

// Precision = 0.02529383

// Solution0 precision = 0.02149755
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.12150946f;
    r1 = n += -0.38129658f;
    r2 = n *= -8.63067532f;
    r3 = n *= -0.01939017f;
    n = r2 *= n;
    r4 = n += 0.74555647f;
    n += 0.94608217f;
    n *= -0.74987495f;
    r5 = n += 1.00129831f;
    r6 = n += -0.10069638f;
    r7 = n += -0.96029198f;
    n += 0.73998386f;
    n += r2;
    n = r7 += n;
    n *= 0.32038149f;
    r2 = n *= 0.69931042f;
    n += r5;
    n += r7;
    n *= r2;
    n *= r6;
    r6 = n *= 3.55464888f;
    n *= r4;
    n *= r6;
    n = r3 += n;
    n += r3;
    n *= 2.24883819f;
    n *= -0.69349045f;
    r3 = n += 0.28588933f;
    n += r0;
    n += r3;
    n += 0.65828061f;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.02529383
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.24373294f;
    r1 = n += -0.21859194f;
    r2 = n *= 0.52106923f;
    r3 = n *= -0.79012179f;
    n = r2 *= n;
    r4 = n += 0.30462024f;
    n += 0.71481866f;
    n *= 0.54017788f;
    r5 = n += 0.82795882f;
    r6 = n += -0.39002645f;
    r7 = n += 0.94073033f;
    n += -0.59999901f;
    n += r2;
    n = r7 += n;
    n *= 0.53553981f;
    r2 = n *= 0.95619273f;
    n += r5;
    n += r7;
    n *= r2;
    n *= r6;
    r6 = n *= 0.81661725f;
    n *= r4;
    n *= r6;
    n = r3 += n;
    n += r3;
    n *= -0.24155162f;
    n *= 0.28865394f;
    r3 = n += 1.26400888f;
    n += r0;
    n += r3;
    n += -0.57270306f;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.02143453
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.31386346f;
    r1 = n += 0.00487753f;
    r2 = n *= 0.72677118f;
    r3 = n *= 0.56289458f;
    n = r2 *= n;
    r4 = n += -0.19035678f;
    n += -1.55657017f;
    n *= -1.08070016f;
    r5 = n += -0.18046220f;
    r6 = n += -0.33518788f;
    r7 = n += 0.58237129f;
    n += -0.05421098f;
    n += r2;
    n = r7 += n;
    n *= -0.58126688f;
    r2 = n *= 0.62397510f;
    n += r5;
    n += r7;
    n *= r2;
    n *= r6;
    r6 = n *= -0.43913245f;
    n *= r4;
    n *= r6;
    n = r3 += n;
    n += r3;
    n *= -0.76786691f;
    n *= 0.54013979f;
    r3 = n += 0.60926437f;
    n += r0;
    n += r3;
    n += -0.70822835f;
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
