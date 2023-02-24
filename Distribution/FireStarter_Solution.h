// Run date: 02/24/23 12:45:48 Pacific Standard Time
// Run duration = 48.812833 seconds
// Run count = 55
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 55

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

// Precision = 0.00022078

// Solution0 precision = 0.00012434
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.80279821f;
    n += 1.22154796f;
    n *= 0.18755129f;
    r0 = n += 0.21436083f;
    r1 = n *= 0.03883276f;
    r2 = n *= -0.21003176f;
    r3 = n += 1.57149792f;
    r4 = n += -1.30846608f;
    n = r0 += n;
    n *= r3;
    n = r0 *= n;
    r3 = n += -1.04960716f;
    n *= -1.15977383f;
    n *= 0.94945407f;
    n += r4;
    n += 1.33319592f;
    r4 = n *= -1.15797853f;
    r5 = n += -0.59189737f;
    r6 = n += -1.32761145f;
    n *= r5;
    n += 0.35487252f;
    r5 = n *= 0.26738244f;
    n *= 0.65539283f;
    n *= r0;
    n *= r3;
    n = r4 *= n;
    n *= r5;
    n += r4;
    n += r6;
    n += r2;
    n *= 0.19380650f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00019085
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.23941249f;
    n += -0.64451379f;
    n *= 1.18494546f;
    r0 = n += -0.82193190f;
    r1 = n *= 0.01630444f;
    r2 = n *= -1.99348390f;
    r3 = n += 0.84223235f;
    r4 = n += 1.22867668f;
    n = r0 += n;
    n *= r3;
    n = r0 *= n;
    r3 = n += -1.64246988f;
    n *= -0.36269751f;
    n *= 1.18156731f;
    n += r4;
    n += 0.24830416f;
    r4 = n *= -0.91130221f;
    r5 = n += -0.21360908f;
    r6 = n += -1.06096733f;
    n *= r5;
    n += 2.37843418f;
    r5 = n *= -0.31110424f;
    n *= 3.06723666f;
    n *= r0;
    n *= r3;
    n = r4 *= n;
    n *= r5;
    n += r4;
    n += r6;
    n += r2;
    n *= 0.02248899f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00022078
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.17322457f;
    n += -1.70678663f;
    n *= 1.22428775f;
    r0 = n += 1.49343371f;
    r1 = n *= 1.04688680f;
    r2 = n *= -0.01945153f;
    r3 = n += 0.97343200f;
    r4 = n += -0.65770280f;
    n = r0 += n;
    n *= r3;
    n = r0 *= n;
    r3 = n += -0.79471815f;
    n *= -0.27457362f;
    n *= -2.13731432f;
    n += r4;
    n += -1.51220608f;
    r4 = n *= -2.09122872f;
    r5 = n += 0.01754078f;
    r6 = n += -0.95125067f;
    n *= r5;
    n += -0.22115996f;
    r5 = n *= 0.16108377f;
    n *= 2.84676981f;
    n *= r0;
    n *= r3;
    n = r4 *= n;
    n *= r5;
    n += r4;
    n += r6;
    n += r2;
    n *= 0.62903357f;
    n += r1;
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
