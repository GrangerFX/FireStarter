// Run date: 10/01/23 19:42:52 Pacific Daylight Time
// Run duration = 1738.402140 seconds
// Run generation = 23
// Run evolution = 10
// Run result = 0.00000072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00000042
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.34634808f;
    r0 = n += -1.08808434f;
    n *= 0.10692324f;
    r1 = n *= -2.46277118f;
    r2 = n *= -2.82662439f;
    r3 = n += 0.00000138f;
    n += -1.48730731f;
    n += 1.48730540f;
    r4 = n *= -29.15202713f;
    n += r4;
    n *= 0.01563870f;
    n *= 1.93944085f;
    n *= r1;
    n *= -0.18958528f;
    r1 = n += 0.99747306f;
    r4 = n += 0.97108769f;
    r5 = n *= -1.16730893f;
    n = r1 *= n;
    n += 1.50529563f;
    n *= 0.28147849f;
    n *= r4;
    n *= 1.48014081f;
    n *= 1.50193942f;
    n *= -2.36299872f;
    n *= r1;
    r1 = n *= 0.54514974f;
    n *= r2;
    n += r0;
    n *= r1;
    n *= r5;
    n += r3;
    n *= 0.43174198f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.16056126f;
    r0 = n += -0.49624127f;
    n *= 0.12000979f;
    r1 = n *= 2.06452632f;
    r2 = n *= 3.90257740f;
    r3 = n += 2.18891144f;
    n += -3.50395250f;
    n += 1.31504536f;
    r4 = n *= 0.18685488f;
    n += r4;
    n *= -6.01935530f;
    n *= -0.08089665f;
    n *= r1;
    n *= -5.70409870f;
    r1 = n += 1.22821605f;
    r4 = n += 0.69794106f;
    r5 = n *= 1.17190552f;
    n = r1 *= n;
    n += -2.15596795f;
    n *= 0.50603193f;
    n *= r4;
    n *= -1.29388642f;
    n *= 1.88101292f;
    n *= -1.42931497f;
    n *= r1;
    r1 = n *= -1.40325785f;
    n *= r2;
    n += r0;
    n *= r1;
    n *= r5;
    n += r3;
    n *= -0.05397226f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.60737234f;
    r0 = n += -1.59009635f;
    n *= -0.37347764f;
    r1 = n *= 1.76460660f;
    r2 = n *= 0.23443872f;
    r3 = n += 1.25153089f;
    n += -0.55706406f;
    n += -0.69446641f;
    r4 = n *= 0.62490207f;
    n += r4;
    n *= 0.79596764f;
    n *= -0.11215876f;
    n *= r1;
    n *= -3.06251144f;
    r1 = n += -0.06012841f;
    r4 = n += -1.47504199f;
    r5 = n *= -0.90039307f;
    n = r1 *= n;
    n += -4.16159296f;
    n *= -5.62807941f;
    n *= r4;
    n *= 1.24737680f;
    n *= 3.00062227f;
    n *= -2.47985601f;
    n *= r1;
    r1 = n *= 0.07323493f;
    n *= r2;
    n += r0;
    n *= r1;
    n *= r5;
    n += r3;
    n *= 0.41836777f;
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
