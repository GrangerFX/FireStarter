// Run date: 06/15/24 17:57:07 Pacific Daylight Time
// Run duration = 63.140784 seconds
// Run generation = 7
// Run evolution = 1
// Run max result = 0.00126201
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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

// Solution0 result = 0.00054300
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 4.08160543f;
    r0 = n *= 0.67831999f;
    n *= 2.48133802f;
    r1 = n += 1.33981907f;
    n *= 0.04958183f;
    n += -0.63183087f;
    r2 = n *= 0.45461982f;
    r3 = n += -0.30687445f;
    n += -0.89505458f;
    n *= 1.97372317f;
    r4 = n += 1.56542587f;
    n = r0 *= n;
    n *= -0.37706912f;
    n *= -0.41874018f;
    n *= 0.80618918f;
    r5 = n *= -0.75671583f;
    n *= 1.59930003f;
    n *= 2.30426836f;
    n += 1.73075724f;
    n = r2 *= n;
    n *= -4.93230200f;
    n = r5 += n;
    n *= -1.04054666f;
    n *= r0;
    n *= r5;
    n *= -0.59565526f;
    n *= r4;
    n *= 1.00024390f;
    n *= r2;
    n *= r1;
    n *= r3;
    n += 4.75571442f;
    return n;
} // Solution0

// Solution1 result = 0.00019404
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 2.49609327f;
    r0 = n *= 0.16658604f;
    n *= -1.79897177f;
    r1 = n += 0.88119245f;
    n *= 1.14929819f;
    n += -2.78073573f;
    r2 = n *= -0.25857458f;
    r3 = n += -1.16212308f;
    n += -0.61871600f;
    n *= 1.24251378f;
    r4 = n += -1.42224562f;
    n = r0 *= n;
    n *= -0.58679622f;
    n *= 1.32597649f;
    n *= -0.45422691f;
    r5 = n *= 2.25272965f;
    n *= -0.06719695f;
    n *= 0.96127439f;
    n += 0.27048519f;
    n = r2 *= n;
    n *= -5.33050680f;
    n = r5 += n;
    n *= 1.24046361f;
    n *= r0;
    n *= r5;
    n *= -3.14505172f;
    n *= r4;
    n *= -0.18338193f;
    n *= r2;
    n *= r1;
    n *= r3;
    n += -6.30547571f;
    return n;
} // Solution1

// Solution2 result = 0.00126201
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 3.43166304f;
    r0 = n *= 0.61266053f;
    n *= -0.46117049f;
    r1 = n += 0.78129470f;
    n *= -0.86805397f;
    n += -0.93460941f;
    r2 = n *= 0.86112225f;
    r3 = n += -0.65244192f;
    n += -0.72126997f;
    n *= 1.23864746f;
    r4 = n += 0.07058069f;
    n = r0 *= n;
    n *= 0.12297089f;
    n *= -2.12756634f;
    n *= -0.29568228f;
    r5 = n *= -0.08857413f;
    n *= -3.03114080f;
    n *= -0.66119134f;
    n += 7.59281635f;
    n = r2 *= n;
    n *= -4.12591267f;
    n = r5 += n;
    n *= -0.75660735f;
    n *= r0;
    n *= r5;
    n *= 7.95951700f;
    n *= r4;
    n *= 1.27640486f;
    n *= r2;
    n *= r1;
    n *= r3;
    n += 14.60134506f;
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
