// Run date: 09/17/23 10:22:43 Pacific Daylight Time
// Run duration = 629.597814 seconds
// Run generation = 10
// Run evolution = 9
// Run result = 0.00000012
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.49468827f;
    r0 = n += -4.63628101f;
    r1 = n *= -1.45260310f;
    n = r1 *= n;
    r2 = n *= -0.08462498f;
    n += r1;
    n += 1.42436504f;
    n *= -0.45192209f;
    n *= -2.73281789f;
    n += -8.19219208f;
    n *= 1.05753565f;
    n *= -0.00549241f;
    n *= 0.51655388f;
    r1 = n += 0.99828899f;
    r3 = n *= -1.29192221f;
    n += -0.04678327f;
    n = r3 *= n;
    n = r1 *= n;
    r4 = n += -0.71182114f;
    n *= 0.00000002f;
    n *= 4.55656624f;
    n = r0 += n;
    n *= -0.15411550f;
    n = r4 *= n;
    n *= r0;
    n += r2;
    n += 1.44635773f;
    n += r1;
    n *= r4;
    n *= r3;
    n += -0.23543313f;
    n += 0.23543315f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.35090256f;
    r0 = n += -0.73975652f;
    r1 = n *= 0.70319462f;
    n = r1 *= n;
    r2 = n *= 0.59318954f;
    n += r1;
    n += -0.63186669f;
    n *= 0.67388916f;
    n *= 2.28996015f;
    n += -1.60060203f;
    n *= -0.52538866f;
    n *= -1.06944716f;
    n *= -0.00733769f;
    r1 = n += 0.93391895f;
    r3 = n *= -1.13547516f;
    n += 0.26999423f;
    n = r3 *= n;
    n = r1 *= n;
    r4 = n += 0.49339643f;
    n *= 0.00000007f;
    n *= 3.25295639f;
    n = r0 += n;
    n *= -0.38349187f;
    n = r4 *= n;
    n *= r0;
    n += r2;
    n += 1.73817873f;
    n += r1;
    n *= r4;
    n *= r3;
    n += -0.22479790f;
    n += 0.10666598f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.29188395f;
    r0 = n += -1.32611001f;
    r1 = n *= 0.53413320f;
    n = r1 *= n;
    r2 = n *= -2.66178060f;
    n += r1;
    n += 2.02201939f;
    n *= -0.16863023f;
    n *= -0.23980172f;
    n += 0.02555135f;
    n *= 0.66246599f;
    n *= 0.64235729f;
    n *= 1.27680433f;
    r1 = n += 0.47880700f;
    r3 = n *= -1.93165362f;
    n += -0.77113450f;
    n = r3 *= n;
    n = r1 *= n;
    r4 = n += 0.00159912f;
    n *= -0.00000027f;
    n *= -1.68041420f;
    n = r0 += n;
    n *= -0.11801225f;
    n = r4 *= n;
    n *= r0;
    n += r2;
    n += 3.46520543f;
    n += r1;
    n *= r4;
    n *= r3;
    n += 0.69735789f;
    n += -0.17375892f;
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
