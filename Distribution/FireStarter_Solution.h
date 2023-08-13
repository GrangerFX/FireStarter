// Run date: 08/12/23 22:11:19 Pacific Daylight Time
// Run duration = 559.086076 seconds
// Run generation = 74
// Run evolution = 13
// Run result = 0.00001072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run seeds = 64
// Run tests = 0
// Run units = 1
// Run processes = 0
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

// Solution0 result = 0.00000149
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159250f;
    n *= -0.13265616f;
    r1 = n += 0.00000003f;
    n *= -2.93053818f;
    n = r1 *= n;
    n *= 0.07213119f;
    n += 0.93396735f;
    n += -0.90948057f;
    r2 = n += 0.04986668f;
    r3 = n += 0.03447570f;
    r4 = n += -0.07211577f;
    n *= 15.39030552f;
    n += 14344.56152344f;
    n += r1;
    r1 = n += -4.92165089f;
    r5 = n *= 0.00820849f;
    n = r3 *= n;
    n *= 0.01975935f;
    n *= 0.15242811f;
    n *= r2;
    n *= r5;
    n *= -0.63482744f;
    n += 0.16837774f;
    n *= -0.00340595f;
    n += 0.00181912f;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= -0.01938807f;
    n *= r1;
    n *= 3.87059474f;
    n += 0.00000013f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09066153f;
    n *= -0.21428177f;
    r1 = n += -0.00000100f;
    n *= -0.19340985f;
    n = r1 *= n;
    n *= 0.11441052f;
    n += -0.20402139f;
    n += 1.85978019f;
    r2 = n += -0.15275593f;
    r3 = n += -1.41328609f;
    r4 = n += -0.03087060f;
    n *= -2.13907456f;
    n += -1.27480674f;
    n += r1;
    r1 = n += 1.57310402f;
    r5 = n *= -4.81269407f;
    n = r3 *= n;
    n *= -115.46480560f;
    n *= 9.48939800f;
    n *= r2;
    n *= r5;
    n *= -2.12091184f;
    n += -3.76645780f;
    n *= 80.31931305f;
    n += 365571.84375000f;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= -0.01907493f;
    n *= r1;
    n *= -0.19953798f;
    n += -0.11813515f;
    return n;
} // Solution1

// Solution2 result = 0.00001072
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61798263f;
    n *= 0.13333292f;
    r1 = n += -0.00000180f;
    n *= -0.30744100f;
    n = r1 *= n;
    n *= -0.47571272f;
    n += 0.00420086f;
    n += -0.32405591f;
    r2 = n += 1.99294651f;
    r3 = n += -2.04025197f;
    r4 = n += 0.35420397f;
    n *= -0.81906474f;
    n += 0.17952877f;
    n += r1;
    r1 = n += 0.11762666f;
    r5 = n *= 0.68327004f;
    n = r3 *= n;
    n *= 120.97058105f;
    n *= 1.04011714f;
    n *= r2;
    n *= r5;
    n *= -154.76239014f;
    n += -2.19040728f;
    n *= 186.51945496f;
    n += 77358.66406250f;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= -0.04236817f;
    n *= r1;
    n *= 0.43652576f;
    n += 0.52360576f;
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
