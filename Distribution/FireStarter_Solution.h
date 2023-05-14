// Run date: 05/14/23 11:55:42 Pacific Daylight Time
// Run duration = 147.152105 seconds
// Run generation = 51
// Run result = 0.00030351
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 59
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 4
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
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

// Solution0 result = 0.00014147
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -1.18170202f;
    n *= 0.88235378f;
    r1 = n += -2.49333715f;
    n *= 0.98289806f;
    r2 = n *= -0.72806412f;
    n += 1.51122952f;
    r3 = n *= -0.27270219f;
    r4 = n += 1.30929828f;
    n = r1 *= n;
    n *= -0.41341591f;
    r5 = n += 3.56643820f;
    r6 = n += 3.38704324f;
    n = r5 += n;
    n *= 1.37123060f;
    n = r5 *= n;
    n += r5;
    n += -1.94390583f;
    n += r0;
    n += -2.94167066f;
    n *= -0.04300140f;
    n = r4 *= n;
    n += r1;
    n += r2;
    r2 = n *= -0.01582199f;
    n *= r6;
    r6 = n *= 0.14241798f;
    n += r6;
    n *= r3;
    n *= r4;
    n *= -1.04249692f;
    n += r2;
    n += 0.95375103f;
    return n;
} // Solution0

// Solution1 result = 0.00015235
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.53386307f;
    n *= 0.74819291f;
    r1 = n += -0.31168652f;
    n *= 0.41728276f;
    r2 = n *= -0.61790383f;
    n += 1.14177668f;
    r3 = n *= -0.11781016f;
    r4 = n += 0.21253738f;
    n = r1 *= n;
    n *= -0.52524883f;
    r5 = n += 2.00143456f;
    r6 = n += 0.62450343f;
    n = r5 += n;
    n *= -2.33015323f;
    n = r5 *= n;
    n += r5;
    n += -2.57402635f;
    n += r0;
    n += 0.27106461f;
    n *= -0.87284482f;
    n = r4 *= n;
    n += r1;
    n += r2;
    r2 = n *= -0.11446813f;
    n *= r6;
    r6 = n *= 0.59422314f;
    n += r6;
    n *= r3;
    n *= r4;
    n *= 0.75346762f;
    n += r2;
    n += 0.07067558f;
    return n;
} // Solution1

// Solution2 result = 0.00030351
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.58190560f;
    n *= -0.91163790f;
    r1 = n += -1.46625519f;
    n *= -1.55981791f;
    r2 = n *= -0.36026189f;
    n += 0.05144830f;
    r3 = n *= -0.95440906f;
    r4 = n += 1.52234864f;
    n = r1 *= n;
    n *= -0.31271124f;
    r5 = n += -2.13670135f;
    r6 = n += 1.09227014f;
    n = r5 += n;
    n *= -0.48268461f;
    n = r5 *= n;
    n += r5;
    n += -1.27570546f;
    n += r0;
    n += -0.63640690f;
    n *= 0.12452825f;
    n = r4 *= n;
    n += r1;
    n += r2;
    r2 = n *= 0.23504241f;
    n *= r6;
    r6 = n *= -1.67115450f;
    n += r6;
    n *= r3;
    n *= r4;
    n *= 0.86663139f;
    n += r2;
    n += 1.15914357f;
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
