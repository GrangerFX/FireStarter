// Run date: 09/09/23 11:16:43 Pacific Daylight Time
// Run duration = 61.391794 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00001013
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 50
// Run optimizeSeed = 0
// Run seeds = 1000
// Run tests = 1
// Run units = 8
// Run processes = 16
// Run population = 278528
// Run iterations = 256
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000352
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 1.17333364f;
    n *= 0.48413807f;
    n += -1.78459799f;
    n *= -1.40718257f;
    n *= -0.29120687f;
    r0 = n *= -0.54959762f;
    r1 = n *= -1.39820266f;
    r2 = n *= -1.58648872f;
    n *= -1.15697312f;
    n = r2 *= n;
    r3 = n *= -1.50089824f;
    n += -1.08821082f;
    n *= -0.05756826f;
    n += 0.64686865f;
    n *= -0.74715525f;
    n = r2 *= n;
    n += -2.62970042f;
    n *= -0.84650367f;
    r4 = n *= -1.87353265f;
    n += r3;
    n *= -0.24987857f;
    n *= r1;
    n = r4 *= n;
    n += r0;
    n *= r2;
    n *= 0.97976106f;
    n *= -1.69552135f;
    n += r4;
    n += 0.15032099f;
    n += 0.03972970f;
    n *= 1.28623199f;
    n += -0.24445061f;
    return n;
} // Solution0

// Solution1 result = 0.00000292
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.34157559f;
    n *= -1.49238098f;
    n += 1.57549560f;
    n *= -0.46301106f;
    n *= 2.31684637f;
    r0 = n *= -0.46806529f;
    r1 = n *= 2.04106164f;
    r2 = n *= 0.29732364f;
    n *= -26.09974289f;
    n = r2 *= n;
    r3 = n *= -0.07706568f;
    n += -2.34521818f;
    n *= 13.94255447f;
    n += -10.16838741f;
    n *= -0.00817063f;
    n = r2 *= n;
    n += 29.02753448f;
    n *= 0.35954627f;
    r4 = n *= -0.34654379f;
    n += r3;
    n *= -0.23675814f;
    n *= r1;
    n = r4 *= n;
    n += r0;
    n *= r2;
    n *= -17.28620529f;
    n *= -0.02550094f;
    n += r4;
    n += 46.78571701f;
    n += 155.77212524f;
    n *= -0.67986757f;
    n += 137.59437561f;
    return n;
} // Solution1

// Solution2 result = 0.00001013
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 1.12475860f;
    n *= 0.79480612f;
    n += -2.34039521f;
    n *= 0.81899470f;
    n *= -1.67599857f;
    r0 = n *= 1.95298958f;
    r1 = n *= -0.50962156f;
    r2 = n *= -0.24813098f;
    n *= 0.51711923f;
    n = r2 *= n;
    r3 = n *= 0.76942188f;
    n += -0.14699307f;
    n *= -0.94728905f;
    n += 2.05814099f;
    n *= -1.36407304f;
    n = r2 *= n;
    n += 1.50616717f;
    n *= -0.26466313f;
    r4 = n *= 2.55399275f;
    n += r3;
    n *= -0.85612684f;
    n *= r1;
    n = r4 *= n;
    n += r0;
    n *= r2;
    n *= -0.62067193f;
    n *= -0.22224496f;
    n += r4;
    n += -3.88775468f;
    n += 3.61323261f;
    n *= 0.92269117f;
    n += 0.77690113f;
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
