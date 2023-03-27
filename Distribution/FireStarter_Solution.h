// Run date: 03/27/23 10:38:59 Pacific Daylight Time
// Run duration = 2556.856664 seconds
// Run generation = 80
// Run result = 0.00019056
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 3

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

// Solution0 result = 0.00019056
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.24279937f;
    r0 = n += 1.03141844f;
    n += 0.11413212f;
    r1 = n *= -0.43529099f;
    n *= 0.42577887f;
    r2 = n *= 1.02666342f;
    n *= 1.39755642f;
    n *= r0;
    n += 0.44368476f;
    r0 = n *= 0.42385536f;
    n *= 2.41823459f;
    r3 = n += 1.70159328f;
    r4 = n *= -3.17983007f;
    n *= 0.89333653f;
    n *= -1.37421787f;
    n = r2 += n;
    r5 = n += -1.85420251f;
    r6 = n *= -1.05969644f;
    n += r2;
    n = r3 *= n;
    n += r6;
    n += -0.27119562f;
    n *= r5;
    n = r1 *= n;
    n *= r0;
    n *= r1;
    n += -1.94503903f;
    n *= r3;
    n *= 0.98174858f;
    n += r4;
    n *= 0.10577579f;
    n += 0.36214778f;
    return n;
} // Solution0

// Solution1 result = 0.00018120
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.73441380f;
    r0 = n += 0.46213466f;
    n += -1.27984989f;
    r1 = n *= 0.11744300f;
    n *= -1.14599693f;
    r2 = n *= 1.26649094f;
    n *= -0.25435200f;
    n *= r0;
    n += -1.55888760f;
    r0 = n *= -1.91775167f;
    n *= -0.53922504f;
    r3 = n += -1.64442873f;
    r4 = n *= 1.09053528f;
    n *= 3.51871085f;
    n *= -0.00233301f;
    n = r2 += n;
    r5 = n += 1.46074367f;
    r6 = n *= -0.64697796f;
    n += r2;
    n = r3 *= n;
    n += r6;
    n += -0.44156715f;
    n *= r5;
    n = r1 *= n;
    n *= r0;
    n *= r1;
    n += -0.16534120f;
    n *= r3;
    n *= 1.44173312f;
    n += r4;
    n *= -0.64514536f;
    n += -1.50382328f;
    return n;
} // Solution1

// Solution2 result = 0.00013793
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -1.50047266f;
    r0 = n += 0.26758453f;
    n += 1.92400897f;
    r1 = n *= -0.66094685f;
    n *= -0.03781407f;
    r2 = n *= 0.94927168f;
    n *= 0.38193768f;
    n *= r0;
    n += -0.37061054f;
    r0 = n *= 0.17431609f;
    n *= 1.62666976f;
    r3 = n += -0.55068666f;
    r4 = n *= 1.84392667f;
    n *= 1.53793788f;
    n *= 1.29390502f;
    n = r2 += n;
    r5 = n += 0.56180698f;
    r6 = n *= -0.37574118f;
    n += r2;
    n = r3 *= n;
    n += r6;
    n += -0.02136283f;
    n *= r5;
    n = r1 *= n;
    n *= r0;
    n *= r1;
    n += 1.11855471f;
    n *= r3;
    n *= -1.46549964f;
    n += r4;
    n *= -0.59577376f;
    n += -0.54214686f;
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
