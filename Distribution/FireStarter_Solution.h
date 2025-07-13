// Run date: 07/13/25 15:13:47 Pacific Daylight Time
// Run duration = 69.891842 seconds
// Run test = 0
// Run generation = 92
// Run evolution = 6
// Run precision  = 0.00000315
// Run max result = 0.00000103
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159250f;
    r0 = n *= -0.99443197f;
    r1 = n *= 0.29125917f;
    n *= 0.02141665f;
    n *= r0;
    r0 = n *= -1.32515943f;
    r2 = n += 1.17237628f;
    n *= -0.48229325f;
    n += 4.77648163f;
    r3 = n += 0.38611150f;
    n *= r0;
    r0 = n *= 1.11995375f;
    n *= r2;
    r2 = n += 1.68375754f;
    r4 = n *= 1.60648310f;
    r5 = n += -1.97028065f;
    n *= -0.77366179f;
    n = r5 += n;
    n *= r4;
    n *= r1;
    r1 = n *= 1.29076433f;
    n *= r5;
    n *= r0;
    n *= -1.49096000f;
    n *= 15.39683247f;
    n *= 1.71900034f;
    n *= -0.00371911f;
    n += r1;
    n *= r2;
    n *= r3;
    n += 0.00000011f;
    n *= 0.76831168f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065962f;
    r0 = n *= 0.10343666f;
    r1 = n *= -0.23979078f;
    n *= 1.04857445f;
    n *= r0;
    r0 = n *= -1.77724779f;
    r2 = n += -1.76765919f;
    n *= -0.65538359f;
    n += 4.42064524f;
    r3 = n += 3.12254119f;
    n *= r0;
    r0 = n *= -0.92272025f;
    n *= r2;
    r2 = n += -1.60535204f;
    r4 = n *= 0.91780728f;
    r5 = n += -1.36840677f;
    n *= 0.15985110f;
    n = r5 += n;
    n *= r4;
    n *= r1;
    r1 = n *= -1.77241683f;
    n *= r5;
    n *= r0;
    n *= -0.21766539f;
    n *= 9.50401592f;
    n *= 0.00942271f;
    n *= 1.47536325f;
    n += r1;
    n *= r2;
    n *= r3;
    n += -0.32028779f;
    n *= 0.36883074f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= 0.09444068f;
    r1 = n *= -2.26513457f;
    n *= -2.37928843f;
    n *= r0;
    r0 = n *= -0.13448755f;
    r2 = n += 2.27738595f;
    n *= 2.84234595f;
    n += -1.12285423f;
    r3 = n += -2.54853964f;
    n *= r0;
    r0 = n *= 1.71779060f;
    n *= r2;
    r2 = n += 2.00048113f;
    r4 = n *= 0.68679702f;
    r5 = n += -1.14266634f;
    n *= 0.42626899f;
    n = r5 += n;
    n *= r4;
    n *= r1;
    r1 = n *= 0.94859970f;
    n *= r5;
    n *= r0;
    n *= 0.40485489f;
    n *= -8.75449944f;
    n *= -1.74592912f;
    n *= 0.00278696f;
    n += r1;
    n *= r2;
    n *= r3;
    n += 0.26987055f;
    n *= 1.94018483f;
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
