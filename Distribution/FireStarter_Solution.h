// Run date: 07/31/22 13:43:12 Pacific Daylight Time
// Run duration = 2.109582 seconds
// Run count = 152
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 15100

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.00101793

// Solution0 precision = 0.00048023
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.16864735f;
    r1 = n += -0.65870607f;
    n *= -0.87385595f;
    r2 = n *= 0.37955621f;
    n *= 0.01829801f;
    r3 = n *= 23.77509499f;
    n += r2;
    r2 = n *= 0.59337288f;
    r4 = n *= 0.38293687f;
    r5 = n += 0.54430497f;
    n = r1 *= n;
    n += 2.14656520f;
    n = r1 *= n;
    r6 = n += 0.47118214f;
    n += r5;
    n = r2 *= n;
    n = r6 += n;
    n += r1;
    n += 1.04920244f;
    n += 0.15866691f;
    n *= 0.16493997f;
    n *= 0.28308469f;
    n += r3;
    n *= r0;
    n = r2 += n;
    n = r4 *= n;
    n += r2;
    r2 = n *= 2.78823161f;
    n *= r2;
    n += r4;
    n *= -0.01376981f;
    n += r6;
    return n;
} // Solution0

// Solution1 precision = 0.00005567
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.36438680f;
    r1 = n += -4.86980057f;
    n *= 0.75599056f;
    r2 = n *= -0.27615780f;
    n *= -27.76284981f;
    r3 = n *= 0.00312026f;
    n += r2;
    r2 = n *= 0.08056916f;
    r4 = n *= 1.17242587f;
    r5 = n += -0.16254640f;
    n = r1 *= n;
    n += 1.34473872f;
    n = r1 *= n;
    r6 = n += 0.53233397f;
    n += r5;
    n = r2 *= n;
    n = r6 += n;
    n += r1;
    n += 0.11053692f;
    n += 0.32424191f;
    n *= 3.20940256f;
    n *= 0.27315614f;
    n += r3;
    n *= r0;
    n = r2 += n;
    n = r4 *= n;
    n += r2;
    r2 = n *= 0.28322336f;
    n *= r2;
    n += r4;
    n *= -1.16022706f;
    n += r6;
    return n;
} // Solution1

// Solution2 precision = 0.00101793
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.56148404f;
    r1 = n += -3.49963689f;
    n *= -0.68844855f;
    r2 = n *= 0.66147768f;
    n *= 10.87287426f;
    r3 = n *= -0.00001508f;
    n += r2;
    r2 = n *= -0.30508816f;
    r4 = n *= -0.42751056f;
    r5 = n += 0.54211026f;
    n = r1 *= n;
    n += 0.39565095f;
    n = r1 *= n;
    r6 = n += 0.46286178f;
    n += r5;
    n = r2 *= n;
    n = r6 += n;
    n += r1;
    n += -1.47933424f;
    n += -1.21730137f;
    n *= 1.64728343f;
    n *= -0.15696000f;
    n += r3;
    n *= r0;
    n = r2 += n;
    n = r4 *= n;
    n += r2;
    r2 = n *= -0.45490780f;
    n *= r2;
    n += r4;
    n *= -0.75324374f;
    n += r6;
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
