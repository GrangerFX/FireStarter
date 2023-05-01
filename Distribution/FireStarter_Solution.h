// Run date: 04/30/23 16:14:50 Pacific Daylight Time
// Run duration = 1346.621772 seconds
// Run generation = 495
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 28
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= 0.32774797f;
    r1 = n *= 2.84660196f;
    n *= 1.06361854f;
    r2 = n *= 0.25885227f;
    n *= r1;
    n += -0.40281776f;
    n += -0.23147345f;
    r1 = n *= 1.20556998f;
    r3 = n *= -0.01932663f;
    r4 = n *= -1.64280355f;
    n *= -2.56889057f;
    r5 = n += 0.94776118f;
    n = r0 *= n;
    n = r0 += n;
    n *= r2;
    r2 = n += -2.48144698f;
    n = r5 *= n;
    r6 = n *= 0.22821307f;
    n += 4.94697571f;
    n += r1;
    n += 0.49070704f;
    r1 = n *= 0.08980305f;
    n += r2;
    n += r3;
    n *= r1;
    n += r6;
    n *= r4;
    n += 0.96367031f;
    n += r5;
    n *= r0;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065866f;
    r0 = n *= 0.49730816f;
    r1 = n *= 3.02506709f;
    n *= -1.32436538f;
    r2 = n *= -0.27438018f;
    n *= r1;
    n += 4.58928967f;
    n += -7.04014969f;
    r1 = n *= 0.01758597f;
    r3 = n *= -6.71393061f;
    r4 = n *= -0.17835838f;
    n *= -0.41422400f;
    r5 = n += 0.52685952f;
    n = r0 *= n;
    n = r0 += n;
    n *= r2;
    r2 = n += -2.14779234f;
    n = r5 *= n;
    r6 = n *= -0.93812388f;
    n += -16.63264656f;
    n += r1;
    n += -4.97810173f;
    r1 = n *= -0.01329970f;
    n += r2;
    n += r3;
    n *= r1;
    n += r6;
    n *= r4;
    n += -0.80512881f;
    n += r5;
    n *= r0;
    n += -0.11813181f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799383f;
    r0 = n *= -0.81217307f;
    r1 = n *= -2.87623978f;
    n *= -1.09344888f;
    r2 = n *= 0.08472814f;
    n *= r1;
    n += 0.25146821f;
    n += 1.65899670f;
    r1 = n *= -0.02941467f;
    r3 = n *= -0.97910017f;
    r4 = n *= 0.53742951f;
    n *= -1.78162193f;
    r5 = n += -0.66715348f;
    n = r0 *= n;
    n = r0 += n;
    n *= r2;
    r2 = n += 0.92927265f;
    n = r5 *= n;
    r6 = n *= 3.70504832f;
    n += 5.35525560f;
    n += r1;
    n += 6.89133739f;
    r1 = n *= 0.04273526f;
    n += r2;
    n += r3;
    n *= r1;
    n += r6;
    n *= r4;
    n += -0.13020301f;
    n += r5;
    n *= r0;
    n += 0.52359873f;
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
