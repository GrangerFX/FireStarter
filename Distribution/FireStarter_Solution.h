// Run date: 11/23/23 09:01:37 Pacific Standard Time
// Run duration = 12579.592062 seconds
// Run generation = 61
// Run evolution = 11
// Run result = 0.00000620
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000185
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.10023631f;
    n += 0.09754011f;
    r1 = n += 0.21735074f;
    n *= -0.21589196f;
    n += -0.06796061f;
    n = r0 *= n;
    r2 = n += -0.01646847f;
    r3 = n *= -0.09417552f;
    n += 0.01205740f;
    n += -0.98386687f;
    n *= r2;
    n = r0 += n;
    n = r1 *= n;
    n *= 0.03409572f;
    r2 = n *= -0.07554356f;
    n *= -0.06851712f;
    n = r3 += n;
    n *= -1.25605845f;
    n += r0;
    r0 = n *= -45935.72265625f;
    r4 = n += 0.19218051f;
    r5 = n *= -0.17011018f;
    n *= r0;
    n *= r3;
    n = r5 += n;
    n *= -1.55221033f;
    n *= 0.32776573f;
    n += r4;
    n *= r2;
    n += r1;
    n *= r5;
    n += 0.00010968f;
    return n;
} // Solution0

// Solution1 result = 0.00000489
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.08881072f;
    n += -0.11628699f;
    r1 = n += -0.15820096f;
    n *= 6.28787136f;
    n += -1.72583902f;
    n = r0 *= n;
    r2 = n += 0.06187215f;
    r3 = n *= -0.01877048f;
    n += -0.13929164f;
    n += -0.77251267f;
    n *= r2;
    n = r0 += n;
    n = r1 *= n;
    n *= 0.44805613f;
    r2 = n *= 0.00974083f;
    n *= -0.20565866f;
    n = r3 += n;
    n *= -0.04496074f;
    n += r0;
    r0 = n *= -0.06929329f;
    r4 = n += 0.00000390f;
    r5 = n *= 14328.82421875f;
    n *= r0;
    n *= r3;
    n = r5 += n;
    n *= -0.07116111f;
    n *= -6.65253830f;
    n += r4;
    n *= r2;
    n += r1;
    n *= r5;
    n += -0.11818559f;
    return n;
} // Solution1

// Solution2 result = 0.00000620
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.24818535f;
    n += 0.40801448f;
    r1 = n += 0.24173197f;
    n *= 0.26037869f;
    n += 0.16918123f;
    n = r0 *= n;
    r2 = n += -0.04254042f;
    r3 = n *= -1.35980153f;
    n += -1.84918118f;
    n += 1.33695412f;
    n *= r2;
    n = r0 += n;
    n = r1 *= n;
    n *= -147352.50000000f;
    r2 = n *= 0.54755461f;
    n *= 0.00000000f;
    n = r3 += n;
    n *= -0.98301947f;
    n += r0;
    r0 = n *= -0.07328483f;
    r4 = n += 0.06984264f;
    r5 = n *= 0.09889338f;
    n *= r0;
    n *= r3;
    n = r5 += n;
    n *= -0.16217503f;
    n *= 0.52989227f;
    n += r4;
    n *= r2;
    n += r1;
    n *= r5;
    n += 0.52360362f;
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
