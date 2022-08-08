// Run date: 08/07/22 18:18:34 Pacific Daylight Time
// Run duration = 0.916516 seconds
// Run count = 6
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 600

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

// Precision = 0.00167082

// Solution0 precision = 0.00048056
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.21280156f;
    r1 = n += -0.73462194f;
    r2 = n += 0.13790759f;
    n *= r2;
    n *= 0.05193714f;
    n += -0.72111750f;
    r2 = n += -2.00299287f;
    n = r1 *= n;
    n *= -1.07508135f;
    r3 = n *= 0.42512360f;
    n += -0.54373747f;
    n *= -0.14584264f;
    n += r0;
    n += 0.56011575f;
    n += 0.67235279f;
    n = r2 += n;
    n = r1 *= n;
    n += 1.90561962f;
    r0 = n *= -0.95922422f;
    n += r3;
    n += -0.72826934f;
    n *= -1.30787396f;
    n *= r0;
    r0 = n *= 0.21623807f;
    n = r0 *= n;
    n += r2;
    n += -2.21503162f;
    n += -0.16410992f;
    n += r0;
    n *= -2.82320118f;
    n *= 0.24796981f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00013608
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.28453401f;
    r1 = n += -0.45474547f;
    r2 = n += -0.70911598f;
    n *= r2;
    n *= 0.02482609f;
    n += -0.58326477f;
    r2 = n += -0.46452448f;
    n = r1 *= n;
    n *= 0.04425469f;
    r3 = n *= 1.25030077f;
    n += 0.30984226f;
    n *= -0.11129597f;
    n += r0;
    n += -0.42848325f;
    n += -0.84621763f;
    n = r2 += n;
    n = r1 *= n;
    n += 0.87735391f;
    r0 = n *= 0.60146582f;
    n += r3;
    n += 1.15390229f;
    n *= 1.15523064f;
    n *= r0;
    r0 = n *= 0.54585695f;
    n = r0 *= n;
    n += r2;
    n += 0.60182208f;
    n += -0.91271520f;
    n += r0;
    n *= 0.23434587f;
    n *= -3.12958860f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00167082
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= -0.16250138f;
    r1 = n += -0.83203048f;
    r2 = n += -0.27744737f;
    n *= r2;
    n *= 0.69800824f;
    n += -0.46301541f;
    r2 = n += -0.75809002f;
    n = r1 *= n;
    n *= -3.71395421f;
    r3 = n *= 0.07468538f;
    n += -0.50246006f;
    n *= -0.50316787f;
    n += r0;
    n += -0.98536021f;
    n += -0.59157336f;
    n = r2 += n;
    n = r1 *= n;
    n += 0.07854064f;
    r0 = n *= -0.75550318f;
    n += r3;
    n += 1.96389818f;
    n *= -1.33621633f;
    n *= r0;
    r0 = n *= 1.38894212f;
    n = r0 *= n;
    n += r2;
    n += -2.39273286f;
    n += -1.23779416f;
    n += r0;
    n *= 1.98949003f;
    n *= -0.12475668f;
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
