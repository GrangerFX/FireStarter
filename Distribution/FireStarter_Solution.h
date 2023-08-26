// Run date: 08/26/23 09:43:06 Pacific Daylight Time
// Run duration = 13.667779 seconds
// Run generation = 17
// Run evolution = 1
// Run result = 0.00388092
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_UNIT
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 69632
// Run iterations = 256
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

// Solution0 result = 0.00081563
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.39811370f;
    r1 = n *= -0.11515731f;
    r2 = n *= -0.18512312f;
    r3 = n *= -0.35940832f;
    n *= -0.08219652f;
    n *= -1.31405044f;
    n *= 0.91179407f;
    n *= -0.86351609f;
    r4 = n *= 0.63348943f;
    n *= -51.79967499f;
    n += 12.80023575f;
    n = r2 *= n;
    n *= -11.85911465f;
    n *= r1;
    n = r2 *= n;
    r1 = n += -10.06518841f;
    n += -0.63255268f;
    n += r3;
    n += r1;
    n *= 14.75935078f;
    n *= r0;
    n += 384.80999756f;
    n = r4 *= n;
    r0 = n *= 5.49284744f;
    r1 = n *= -8.07416725f;
    n *= r0;
    n = r2 += n;
    n *= r4;
    n += r2;
    n += r1;
    n *= -0.35378709f;
    n += -0.00081563f;
    return n;
} // Solution0

// Solution1 result = 0.00388092
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.02407924f;
    r1 = n *= 1.18503809f;
    r2 = n *= -1.65775537f;
    r3 = n *= -1.56313503f;
    n *= -5.41744804f;
    n *= 0.08475497f;
    n *= -0.77234215f;
    n *= -0.06128459f;
    r4 = n *= -42.48300552f;
    n *= 5.61835670f;
    n += -3.37477636f;
    n = r2 *= n;
    n *= -52.87300110f;
    n *= r1;
    n = r2 *= n;
    r1 = n += -92.55131531f;
    n += -0.29513541f;
    n += r3;
    n += r1;
    n *= 0.13922358f;
    n *= r0;
    n += 4.25227642f;
    n = r4 *= n;
    r0 = n *= -0.44042346f;
    r1 = n *= -2.16258478f;
    n *= r0;
    n = r2 += n;
    n *= r4;
    n += r2;
    n += r1;
    n *= 2.44133878f;
    n += 0.84839326f;
    return n;
} // Solution1

// Solution2 result = 0.00204578
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.19403368f;
    r1 = n *= -0.05684487f;
    r2 = n *= 0.53013247f;
    r3 = n *= -0.83991808f;
    n *= -0.00676665f;
    n *= 0.25413662f;
    n *= 20.87778473f;
    n *= -0.45520118f;
    r4 = n *= 2.41121030f;
    n *= -7184.26367188f;
    n += 56.69327545f;
    n = r2 *= n;
    n *= -19.48869324f;
    n *= r1;
    n = r2 *= n;
    r1 = n += 16.65957260f;
    n += -75.11422729f;
    n += r3;
    n += r1;
    n *= 21.01417542f;
    n *= r0;
    n += 463.67932129f;
    n = r4 *= n;
    r0 = n *= 4.21639204f;
    r1 = n *= 4.47356606f;
    n *= r0;
    n = r2 += n;
    n *= r4;
    n += r2;
    n += r1;
    n *= 0.83109099f;
    n += -0.00204578f;
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
