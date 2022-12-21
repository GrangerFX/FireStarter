// Run date: 12/20/22 20:13:14 Pacific Standard Time
// Run duration = 4029.324250 seconds
// Run count = 2
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 10;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 2

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

// Precision = 0.00011842

// Solution0 precision = 0.00011842
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.17652392f;
    r0 = n *= 0.09309398f;
    r1 = n += 0.81608135f;
    r2 = n += -0.53572136f;
    r3 = n *= 4.87303495f;
    n *= -0.17070971f;
    n *= r0;
    r0 = n += 0.84251022f;
    n = r1 *= n;
    r4 = n += 1.05425036f;
    r5 = n += 0.11784937f;
    n *= r2;
    r2 = n += -0.42751336f;
    r6 = n += -2.16798282f;
    n += -0.56105006f;
    n = r2 += n;
    n *= 0.23052467f;
    n = r5 *= n;
    r7 = n += 1.09388518f;
    n += r2;
    n *= r1;
    n += 0.68540871f;
    n *= r5;
    n = r7 *= n;
    n *= -3.79668927f;
    n *= r4;
    n *= 0.03828993f;
    n += r3;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= 2.86012363f;
    return n;
} // Solution0

// Solution1 precision = 0.00003964
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.57972860f;
    r0 = n *= 0.14716306f;
    r1 = n += -0.28617668f;
    r2 = n += 0.86793596f;
    r3 = n *= 1.23939848f;
    n *= -0.04503263f;
    n *= r0;
    r0 = n += -1.06850123f;
    n = r1 *= n;
    r4 = n += 0.71972930f;
    r5 = n += -0.04768812f;
    n *= r2;
    r2 = n += 0.99057645f;
    r6 = n += 1.43526042f;
    n += -1.41354644f;
    n = r2 += n;
    n *= -0.16632710f;
    n = r5 *= n;
    r7 = n += -0.00239324f;
    n += r2;
    n *= r1;
    n += -0.65328610f;
    n *= r5;
    n = r7 *= n;
    n *= 0.00241670f;
    n *= r4;
    n *= -8.12049007f;
    n += r3;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= -4.71741867f;
    return n;
} // Solution1

// Solution2 precision = 0.00009096
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.99928164f;
    r0 = n *= 0.20139158f;
    r1 = n += -0.23635197f;
    r2 = n += 1.43539727f;
    r3 = n *= -3.63706946f;
    n *= -0.02283399f;
    n *= r0;
    r0 = n += -0.47338369f;
    n = r1 *= n;
    r4 = n += -0.28425822f;
    r5 = n += -0.13864514f;
    n *= r2;
    r2 = n += 1.23277247f;
    r6 = n += 0.40335220f;
    n += 1.43370581f;
    n = r2 += n;
    n *= -0.23957798f;
    n = r5 *= n;
    r7 = n += -3.69514322f;
    n += r2;
    n *= r1;
    n += -0.00594965f;
    n *= r5;
    n = r7 *= n;
    n *= -0.08440416f;
    n *= r4;
    n *= 1.60140753f;
    n += r3;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= -8.11923027f;
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
