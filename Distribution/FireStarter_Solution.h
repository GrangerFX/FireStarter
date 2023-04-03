// Run date: 04/02/23 18:14:55 Pacific Daylight Time
// Run duration = 2586.295462 seconds
// Run generation = 142
// Run result = 0.00015140
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

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

// Solution0 result = 0.00013047
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.05382705f;
    r1 = n *= 0.41091639f;
    n += -0.75765097f;
    r2 = n *= 0.37815928f;
    n *= -4.31557035f;
    n = r0 *= n;
    n *= 0.29531789f;
    n *= 0.00751987f;
    r3 = n *= 0.99129784f;
    n *= 3.17098927f;
    r4 = n += 0.95353764f;
    r5 = n *= -1.82815361f;
    n *= r2;
    n = r3 += n;
    r2 = n += 0.54155707f;
    r6 = n += -0.44547716f;
    n = r0 += n;
    n += r0;
    n += r6;
    n *= -0.05235653f;
    n += r3;
    n += -1.52942061f;
    n = r4 *= n;
    n *= 0.55701989f;
    n *= r2;
    n = r1 += n;
    n += r5;
    n *= r4;
    n *= -0.19929947f;
    n *= r1;
    n *= 3.53094578f;
    n += -0.22161564f;
    return n;
} // Solution0

// Solution1 result = 0.00008512
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.86037362f;
    r1 = n *= -0.27506444f;
    n += 0.68950474f;
    r2 = n *= -0.39132920f;
    n *= -2.01917076f;
    n = r0 *= n;
    n *= -0.67028016f;
    n *= 0.17427133f;
    r3 = n *= 0.48716360f;
    n *= 0.46280056f;
    r4 = n += -1.77788365f;
    r5 = n *= -1.53986609f;
    n *= r2;
    n = r3 += n;
    r2 = n += 0.48777756f;
    r6 = n += -0.27817613f;
    n = r0 += n;
    n += r0;
    n += r6;
    n *= -0.01595504f;
    n += r3;
    n += -1.97487640f;
    n = r4 *= n;
    n *= 0.73077857f;
    n *= r2;
    n = r1 += n;
    n += r5;
    n *= r4;
    n *= -0.12147590f;
    n *= r1;
    n *= 1.31691563f;
    n += -0.22485633f;
    return n;
} // Solution1

// Solution2 result = 0.00015140
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.81210351f;
    r1 = n *= 0.64865375f;
    n += -0.74708939f;
    r2 = n *= 0.62776160f;
    n *= -0.50529140f;
    n = r0 *= n;
    n *= 0.02764474f;
    n *= -2.02101803f;
    r3 = n *= 1.79296005f;
    n *= -0.63906640f;
    r4 = n += 2.03154063f;
    r5 = n *= 1.85240471f;
    n *= r2;
    n = r3 += n;
    r2 = n += -1.67502880f;
    r6 = n += 1.86188054f;
    n = r0 += n;
    n += r0;
    n += r6;
    n *= -0.22525367f;
    n += r3;
    n += -1.22673178f;
    n = r4 *= n;
    n *= -0.10683569f;
    n *= r2;
    n = r1 += n;
    n += r5;
    n *= r4;
    n *= -1.58505630f;
    n *= r1;
    n *= -0.03954663f;
    n += 0.36608434f;
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
