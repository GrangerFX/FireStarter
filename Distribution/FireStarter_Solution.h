// Run date: 09/30/23 12:44:10 Pacific Daylight Time
// Run duration = 1256.966594 seconds
// Run generation = 72
// Run evolution = 23
// Run result = 0.00001824
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
// Run units = 4
// Run processes = 4
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 1.10281360f;
    r1 = n += -3.46457648f;
    r2 = n *= 2.64087534f;
    r3 = n *= 0.08682882f;
    r4 = n *= 0.75945091f;
    r5 = n += -0.03355248f;
    n = r0 += n;
    n += r3;
    n *= 2.44854808f;
    n += -0.14302231f;
    n *= 0.27733788f;
    n += -2.10667801f;
    n = r5 *= n;
    n += r2;
    n *= -0.44460544f;
    n += r0;
    r0 = n *= 0.03578757f;
    n *= -2.28573537f;
    r2 = n += -1.08417165f;
    n *= r5;
    r5 = n += 1.28723955f;
    n *= -0.03613271f;
    n *= 5.30242443f;
    r3 = n += -3.71615005f;
    n *= r5;
    n *= r2;
    n *= r4;
    n += r1;
    n += -0.00003257f;
    n *= r0;
    n *= 0.83804184f;
    n *= r3;
    return n;
} // Solution0

// Solution1 result = 0.00000244
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.41736805f;
    r1 = n += -1.22590625f;
    r2 = n *= -0.79987460f;
    r3 = n *= -1.59154141f;
    r4 = n *= -0.87667125f;
    r5 = n += -0.70303333f;
    n = r0 += n;
    n += r3;
    n *= -1.77016938f;
    n += 1.04852450f;
    n *= 0.13648246f;
    n += 0.21733774f;
    n = r5 *= n;
    n += r2;
    n *= -0.13930185f;
    n += r0;
    r0 = n *= -2.78880715f;
    n *= 0.76756936f;
    r2 = n += -0.02132293f;
    n *= r5;
    r5 = n += -0.11509476f;
    n *= -0.00537479f;
    n *= -11.18006420f;
    r3 = n += 1.14625216f;
    n *= r5;
    n *= r2;
    n *= r4;
    n += r1;
    n += -0.02156098f;
    n *= r0;
    n *= 1.32890153f;
    n *= r3;
    return n;
} // Solution1

// Solution2 result = 0.00001824
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.62205625f;
    r1 = n += -1.40360212f;
    r2 = n *= -0.44125178f;
    r3 = n *= 1.01826978f;
    r4 = n *= 2.33560467f;
    r5 = n += -0.64075661f;
    n = r0 += n;
    n += r3;
    n *= -0.47943768f;
    n += -0.58865321f;
    n *= -1.10087574f;
    n += -0.72587734f;
    n = r5 *= n;
    n += r2;
    n *= -0.09095106f;
    n += r0;
    r0 = n *= 1.35172975f;
    n *= -0.92551792f;
    r2 = n += -0.72671354f;
    n *= r5;
    r5 = n += 0.79563570f;
    n *= -0.04235360f;
    n *= 8.54706478f;
    r3 = n += -1.71023381f;
    n *= r5;
    n *= r2;
    n *= r4;
    n += r1;
    n += 1.98923957f;
    n *= r0;
    n *= -0.19498824f;
    n *= r3;
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
