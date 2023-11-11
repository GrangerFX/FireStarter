// Run date: 11/10/23 18:51:31 Pacific Standard Time
// Run duration = 1542.050994 seconds
// Run generation = 28
// Run evolution = 13
// Run result = 0.00000024
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
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= -0.39553562f;
    n *= -0.68821514f;
    r0 = n += -0.85518426f;
    n += 0.00000007f;
    r1 = n *= 0.25781950f;
    n = r1 *= n;
    r2 = n *= -0.53038949f;
    n *= 2.86596012f;
    n += 1.78240323f;
    n = r2 *= n;
    r3 = n += 1.48041487f;
    n *= r1;
    r1 = n += -0.42072707f;
    n *= -1.97823417f;
    n = r0 *= n;
    n *= r3;
    r3 = n *= -0.97799379f;
    n *= r3;
    n += r1;
    r1 = n *= 1.55719626f;
    n += -1.52474582f;
    n *= -2.62690163f;
    n += r2;
    n += -2.88104415f;
    n *= 1.63055229f;
    n += r1;
    n *= r0;
    n += 0.51285625f;
    n += -0.39307272f;
    n += 0.20580763f;
    n += -0.32559115f;
    n *= -1.10779166f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -1.74379909f;
    n *= 0.34819955f;
    r0 = n += 1.87661731f;
    n += -0.00000528f;
    r1 = n *= 0.22694923f;
    n = r1 *= n;
    r2 = n *= 0.12521328f;
    n *= 5.95358324f;
    n += -0.82607812f;
    n = r2 *= n;
    r3 = n += 1.40976298f;
    n *= r1;
    r1 = n += -1.66988754f;
    n *= -0.18595891f;
    n = r0 *= n;
    n *= r3;
    r3 = n *= -1.75243306f;
    n *= r3;
    n += r1;
    r1 = n *= 0.75335252f;
    n += -1.59809101f;
    n *= -1.29123247f;
    n += r2;
    n += 0.10014678f;
    n *= -0.54670960f;
    n += r1;
    n *= r0;
    n += -7.14224339f;
    n += 6.66842461f;
    n += 0.04533421f;
    n += 0.49589309f;
    n *= -1.75248408f;
    return n;
} // Solution1

// Solution2 result = 0.00000009
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 0.27185979f;
    n *= 1.12304389f;
    r0 = n += -0.79930091f;
    n += 0.00000003f;
    r1 = n *= 0.61096966f;
    n = r1 *= n;
    r2 = n *= 0.09990657f;
    n *= 0.65374565f;
    n += -0.75473410f;
    n = r2 *= n;
    r3 = n += 0.53122765f;
    n *= r1;
    r1 = n += -0.74724597f;
    n *= -1.94904757f;
    n = r0 *= n;
    n *= r3;
    r3 = n *= -1.67926228f;
    n *= r3;
    n += r1;
    r1 = n *= 1.67178142f;
    n += -0.78397971f;
    n *= -0.76125646f;
    n += r2;
    n += -1.48284900f;
    n *= -0.16688325f;
    n += r1;
    n *= r0;
    n += 0.66875780f;
    n += -0.41538963f;
    n += 0.24758437f;
    n += -0.20757887f;
    n *= 1.78475046f;
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
