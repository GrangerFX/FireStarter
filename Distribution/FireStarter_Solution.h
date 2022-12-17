// Run date: 12/17/22 13:14:52 Pacific Standard Time
// Run duration = 42.253740 seconds
// Run count = 44
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 44

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000468

// Solution0 precision = 0.00000041
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 3.09911561f;
    n = r1 *= n;
    n *= 0.00368614f;
    n += -3.80008340f;
    r2 = n *= 1.04816043f;
    r3 = n *= 0.72480595f;
    n *= 0.28851196f;
    n *= -1.67806339f;
    r4 = n *= -0.30446553f;
    n = r3 *= n;
    r5 = n *= -0.14408161f;
    r6 = n *= 0.37950575f;
    n = r1 *= n;
    r7 = n *= 0.00357495f;
    n *= r2;
    n *= -6.51996517f;
    n += 1.94175291f;
    n += -5.53100824f;
    n *= 2.01010418f;
    n = r6 *= n;
    n += 1.48783255f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 1.68549287f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 precision = 0.00000468
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= 0.76303321f;
    n = r1 *= n;
    n *= 0.27911335f;
    n += -6.19375658f;
    r2 = n *= 0.30717698f;
    r3 = n *= 0.61992288f;
    n *= 0.09363240f;
    n *= 0.87595701f;
    r4 = n *= -0.81253278f;
    n = r3 *= n;
    r5 = n *= -1.76075578f;
    r6 = n *= 0.26062992f;
    n = r1 *= n;
    r7 = n *= 11.21438217f;
    n *= r2;
    n *= 2.14938641f;
    n += -2.24304056f;
    n += 2.22295642f;
    n *= -0.73874629f;
    n = r6 *= n;
    n += -0.48217979f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 77.88480377f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813175f;
    return n;
} // Solution1

// Solution2 precision = 0.00000069
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= -0.42244697f;
    n = r1 *= n;
    n *= 0.05036263f;
    n += -1.45060706f;
    r2 = n *= 0.75571632f;
    r3 = n *= 0.99424648f;
    n *= -0.67878586f;
    n *= 0.85362190f;
    r4 = n *= 1.03584516f;
    n = r3 *= n;
    r5 = n *= -3.81247783f;
    r6 = n *= -0.21127100f;
    n = r1 *= n;
    r7 = n *= 0.45960519f;
    n *= r2;
    n *= 3.52679014f;
    n += -3.45018220f;
    n += -1.62935400f;
    n *= -0.04277292f;
    n = r6 *= n;
    n += -2.08453012f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.57777596f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359879f;
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
