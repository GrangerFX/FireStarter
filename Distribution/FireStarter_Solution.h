// Run date: 02/19/23 17:41:08 Pacific Standard Time
// Run duration = 4432.135867 seconds
// Run count = 240
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
// Run seed = 708
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 240

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

// Precision = 0.00003481

// Solution0 precision = 0.00000666
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.08922470f;
    n += r0;
    n += 0.41435373f;
    r0 = n += -0.99774128f;
    n *= 3.29502201f;
    r1 = n *= -0.35301113f;
    r2 = n += -0.39694631f;
    r3 = n += 0.42470416f;
    r4 = n *= -1.23344052f;
    r5 = n += 0.03189799f;
    n += r3;
    r3 = n *= -0.04714981f;
    n += -0.40120536f;
    r6 = n += 0.77662462f;
    n = r2 += n;
    n += r3;
    n *= r5;
    n += 1.53793204f;
    n *= r6;
    n = r2 *= n;
    r6 = n += -0.02770050f;
    n *= 0.95398545f;
    n = r6 += n;
    n += r1;
    n *= r4;
    r4 = n += 1.24491429f;
    n += 0.09891678f;
    n += 6.51639080f;
    n *= r4;
    n += r6;
    n *= r2;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.00001600
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.22761352f;
    n += r0;
    n += 2.23875403f;
    r0 = n += -0.97182381f;
    n *= -0.55113709f;
    r1 = n *= -1.54643357f;
    r2 = n += 0.34000218f;
    r3 = n += 0.12657706f;
    r4 = n *= 0.46291465f;
    r5 = n += -0.17509757f;
    n += r3;
    r3 = n *= -0.00226848f;
    n += 0.18999702f;
    r6 = n += -0.39677352f;
    n = r2 += n;
    n += r3;
    n *= r5;
    n += -0.48990202f;
    n *= r6;
    n = r2 *= n;
    r6 = n += -0.19546592f;
    n *= -0.06527586f;
    n = r6 += n;
    n += r1;
    n *= r4;
    r4 = n += -2.00815153f;
    n += -1.21617031f;
    n += -4.78492498f;
    n *= r4;
    n += r6;
    n *= r2;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.00003481
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.16256188f;
    n += r0;
    n += 0.00949070f;
    r0 = n += -0.41826439f;
    n *= 0.57219177f;
    r1 = n *= -1.42054594f;
    r2 = n += -0.50709057f;
    r3 = n += 0.90936166f;
    r4 = n *= -1.03563273f;
    r5 = n += -0.00473190f;
    n += r3;
    r3 = n *= -1.28157616f;
    n += 0.84710026f;
    r6 = n += 0.02850896f;
    n = r2 += n;
    n += r3;
    n *= r5;
    n += 1.70792890f;
    n *= r6;
    n = r2 *= n;
    r6 = n += 0.92290366f;
    n *= -0.57891440f;
    n = r6 += n;
    n += r1;
    n *= r4;
    r4 = n += 0.73529536f;
    n += -7.24193335f;
    n += 10.29510498f;
    n *= r4;
    n += r6;
    n *= r2;
    n += r0;
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
