// Run date: 09/04/23 10:15:11 Pacific Daylight Time
// Run duration = 608.719546 seconds
// Run generation = 79
// Run evolution = 25
// Run result = 0.00001276
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 2
// Run processes = 2
// Run population = 278528
// Run iterations = 64
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

// Solution0 result = 0.00001276
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -1.06328797f;
    r1 = n *= -1.04608238f;
    n *= -0.38541761f;
    r2 = n *= -0.12313013f;
    r3 = n += 0.00899961f;
    r4 = n += 2.37701511f;
    n += r1;
    r1 = n *= -0.13223706f;
    r5 = n *= -0.79685605f;
    r6 = n += 0.22609824f;
    n *= -0.99278820f;
    n = r0 *= n;
    n += -3.81603527f;
    r7 = n += -0.81950563f;
    n = r0 *= n;
    n *= 0.01880580f;
    r8 = n += 0.68872786f;
    n = r6 += n;
    n *= 10.17820930f;
    n += r1;
    n *= -0.00102484f;
    n *= r6;
    n *= 4.40529776f;
    n += r0;
    n = r4 += n;
    n += r2;
    n += r4;
    n *= r7;
    n *= r8;
    n *= r5;
    n *= -0.23171692f;
    n += r3;
    return n;
} // Solution0

// Solution1 result = 0.00001276
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -2.62431979f;
    r1 = n *= -0.03786131f;
    n *= -2.09537888f;
    r2 = n *= -0.07813188f;
    r3 = n += -0.12622547f;
    r4 = n += 0.14721467f;
    n += r1;
    r1 = n *= 1.76032186f;
    r5 = n *= 0.64293337f;
    r6 = n += 0.02058882f;
    n *= -0.17188600f;
    n = r0 *= n;
    n += -0.90786576f;
    r7 = n += -1.29291713f;
    n = r0 *= n;
    n *= 3.62234020f;
    r8 = n += 1.98096275f;
    n = r6 += n;
    n *= -0.69514024f;
    n += r1;
    n *= 1.40861177f;
    n *= r6;
    n *= -1.05813730f;
    n += r0;
    n = r4 += n;
    n += r2;
    n += r4;
    n *= r7;
    n *= r8;
    n *= r5;
    n *= -0.59062052f;
    n += r3;
    return n;
} // Solution1

// Solution2 result = 0.00000586
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -1.05970812f;
    r1 = n *= -1.17340088f;
    n *= -3.25124550f;
    r2 = n *= -0.00024325f;
    r3 = n += 0.42070046f;
    r4 = n += 1.53227842f;
    n += r1;
    r1 = n *= -0.67980462f;
    r5 = n *= 0.59569168f;
    r6 = n += -0.74309331f;
    n *= -0.06432611f;
    n = r0 *= n;
    n += 2.14140320f;
    r7 = n += -0.22006094f;
    n = r0 *= n;
    n *= -1.03609097f;
    r8 = n += -1.06661773f;
    n = r6 += n;
    n *= -0.90225053f;
    n += r1;
    n *= 1.47741497f;
    n *= r6;
    n *= 0.74339241f;
    n += r0;
    n = r4 += n;
    n += r2;
    n += r4;
    n *= r7;
    n *= r8;
    n *= r5;
    n *= -0.24081677f;
    n += r3;
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
