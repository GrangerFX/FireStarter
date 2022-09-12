// Run date: 09/11/22 17:45:18 Pacific Daylight Time
// Run duration = 0.432774 seconds
// Run count = 1080
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 1142;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 1078

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

// Precision = 0.00006559

// Solution0 precision = 0.00006559
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.82472396f;
    r0 = n *= 0.73397553f;
    n = r0 += n;
    r1 = n += 4.00862980f;
    r2 = n += -0.08886325f;
    r3 = n += -0.29176709f;
    n *= r3;
    r3 = n *= 0.03953383f;
    n += 30.06185150f;
    r4 = n *= 0.16943216f;
    n *= 1.08487475f;
    n = r2 *= n;
    r5 = n *= 0.05022924f;
    n *= -0.27869302f;
    n *= r3;
    n *= r4;
    r4 = n += 3.71457601f;
    n += r0;
    n = r5 += n;
    n *= r2;
    r2 = n += -89.11161804f;
    n *= -0.01026437f;
    n += 2.89150763f;
    n *= 0.88424087f;
    n *= 0.06248489f;
    n *= -0.03595967f;
    n = r5 *= n;
    n *= r1;
    n += r2;
    n += r4;
    n *= r5;
    n += 0.03655060f;
    return n;
} // Solution0

// Solution1 precision = 0.00005990
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.33076236f;
    r0 = n *= 0.23959383f;
    n = r0 += n;
    r1 = n += -0.51170790f;
    r2 = n += -0.10263874f;
    r3 = n += 0.19547138f;
    n *= r3;
    r3 = n *= 0.88189495f;
    n += -0.16067125f;
    r4 = n *= -0.42832622f;
    n *= -1.40880799f;
    n = r2 *= n;
    r5 = n *= -1.99361920f;
    n *= 0.56532121f;
    n *= r3;
    n *= r4;
    r4 = n += -0.45362851f;
    n += r0;
    n = r5 += n;
    n *= r2;
    r2 = n += 1.88333094f;
    n *= 5.51794863f;
    n += 1.71806777f;
    n *= 0.49538130f;
    n *= -1.85341108f;
    n *= 0.36133009f;
    n = r5 *= n;
    n *= r1;
    n += r2;
    n += r4;
    n *= r5;
    n += -0.04435011f;
    return n;
} // Solution1

// Solution2 precision = 0.00001132
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.39723405f;
    r0 = n *= 0.38080582f;
    n = r0 += n;
    r1 = n += -0.74213952f;
    r2 = n += -0.14338586f;
    r3 = n += 0.15481946f;
    n *= r3;
    r3 = n *= 0.03287500f;
    n += -2.75827241f;
    r4 = n *= 0.58507186f;
    n *= -0.47514960f;
    n = r2 *= n;
    r5 = n *= 0.54520416f;
    n *= 5.80928087f;
    n *= r3;
    n *= r4;
    r4 = n += -0.74824023f;
    n += r0;
    n = r5 += n;
    n *= r2;
    r2 = n += -0.59929854f;
    n *= 2.15633249f;
    n += -4.26386118f;
    n *= 1.03857493f;
    n *= -0.27576554f;
    n *= 1.08611369f;
    n = r5 *= n;
    n *= r1;
    n += r2;
    n += r4;
    n *= r5;
    n += 0.53470808f;
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
