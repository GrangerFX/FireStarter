// Run date: 09/02/23 15:37:50 Pacific Daylight Time
// Run duration = 11684.459380 seconds
// Run generation = 21
// Run evolution = 6
// Run result = 0.00000024
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
// Run tests = 16
// Run units = 4
// Run processes = 4
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.64514482f;
    n += -1.18391609f;
    n *= -2.99781823f;
    n *= -1.43735647f;
    n *= 0.18720534f;
    n += -0.38239282f;
    r0 = n += 0.13028738f;
    r1 = n *= 0.57419270f;
    r2 = n *= -0.30408946f;
    n = r0 *= n;
    n += 0.44832823f;
    r3 = n *= -1.12405205f;
    n = r0 += n;
    r4 = n += -1.92954981f;
    n += 0.97889531f;
    r5 = n *= -0.26951793f;
    r6 = n *= 0.47789368f;
    n += r0;
    r0 = n += -0.42208388f;
    n *= -2.75031233f;
    n *= r4;
    r4 = n *= -0.31876096f;
    r7 = n += 2.79857469f;
    n *= r5;
    n *= r7;
    n *= r3;
    n *= r4;
    n *= r6;
    n += r0;
    n *= r1;
    n += r2;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 0.23620954f;
    n += -3.50597525f;
    n *= -2.99088240f;
    n *= -1.33423805f;
    n *= 1.62725723f;
    n += 1.14857721f;
    r0 = n += 0.01448109f;
    r1 = n *= 0.01003986f;
    r2 = n *= -1.30262196f;
    n = r0 *= n;
    n += 2.09616089f;
    r3 = n *= -1.06051457f;
    n = r0 += n;
    r4 = n += -0.52349961f;
    n += -1.28138649f;
    r5 = n *= 1.20265114f;
    r6 = n *= 1.31176782f;
    n += r0;
    r0 = n += -1.24945939f;
    n *= 1.60414648f;
    n *= r4;
    r4 = n *= 0.00362449f;
    r7 = n += 0.57439142f;
    n *= r5;
    n *= r7;
    n *= r3;
    n *= r4;
    n *= r6;
    n += r0;
    n *= r1;
    n += r2;
    n += -0.11813179f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.32744873f;
    n += -0.88325870f;
    n *= 0.54954672f;
    n *= -1.63773966f;
    n *= 2.26055312f;
    n += 1.35400212f;
    r0 = n += -0.52536601f;
    r1 = n *= -0.04299387f;
    r2 = n *= 0.57843298f;
    n = r0 *= n;
    n += 0.36941159f;
    r3 = n *= -1.20286655f;
    n = r0 += n;
    r4 = n += -0.91742247f;
    n += 0.08210122f;
    r5 = n *= -2.38750052f;
    r6 = n *= -0.96243089f;
    n += r0;
    r0 = n += 0.23939025f;
    n *= 0.06220007f;
    n *= r4;
    r4 = n *= -1.68985021f;
    r7 = n += -1.77075481f;
    n *= r5;
    n *= r7;
    n *= r3;
    n *= r4;
    n *= r6;
    n += r0;
    n *= r1;
    n += r2;
    n += 0.52359891f;
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
