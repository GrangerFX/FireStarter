// Run date: 04/23/23 12:27:36 Pacific Daylight Time
// Run duration = 198.939035 seconds
// Run generation = 230
// Run result = 0.00000019
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    n *= -2.47317696f;
    r1 = n *= -0.31564927f;
    n *= -0.00131804f;
    r2 = n *= -2.64162397f;
    n *= 0.48235482f;
    r3 = n *= -2.13845968f;
    n += r3;
    n *= r1;
    r1 = n += -0.84823424f;
    n *= -0.51236075f;
    n *= -0.28822970f;
    n += 0.30291224f;
    n = r0 *= n;
    n = r2 += n;
    n *= r0;
    n *= -1.46164215f;
    r0 = n += 1.00231361f;
    r3 = n += 0.33200085f;
    n *= r2;
    r2 = n *= -3.99366045f;
    n *= 0.29119402f;
    n *= 0.05164028f;
    n *= 0.04635965f;
    r4 = n *= 0.36454079f;
    n *= r4;
    n += 0.41315177f;
    n += r0;
    n *= r3;
    n += r1;
    n *= r2;
    n += -0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065866f;
    n *= 0.48395142f;
    r1 = n *= -3.12718105f;
    n *= 4.68815517f;
    r2 = n *= 0.00012320f;
    n *= 0.38020673f;
    r3 = n *= 1.59168887f;
    n += r3;
    n *= r1;
    r1 = n += -0.13517731f;
    n *= -0.20813783f;
    n *= -0.52271366f;
    n += 0.36921507f;
    n = r0 *= n;
    n = r2 += n;
    n *= r0;
    n *= 0.62157506f;
    r0 = n += -3.31050229f;
    r3 = n += 0.85007298f;
    n *= r2;
    r2 = n *= 0.24433294f;
    n *= -0.37050417f;
    n *= -0.40805838f;
    n *= 0.96486700f;
    r4 = n *= -4.68385506f;
    n *= r4;
    n += 1.15258312f;
    n += r0;
    n *= r3;
    n += r1;
    n *= r2;
    n += -0.11813176f;
    return n;
} // Solution1

// Solution2 result = 0.00000019
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    n *= 1.50946021f;
    r1 = n *= 1.52806413f;
    n *= -0.63640392f;
    r2 = n *= 0.04807912f;
    n *= 0.50963503f;
    r3 = n *= 0.23343432f;
    n += r3;
    n *= r1;
    r1 = n += 1.96028614f;
    n *= 0.03382494f;
    n *= 8.97015190f;
    n += 2.05033016f;
    n = r0 *= n;
    n = r2 += n;
    n *= r0;
    n *= 0.01056221f;
    r0 = n += -0.76875210f;
    r3 = n += -1.37944245f;
    n *= r2;
    r2 = n *= 0.29912499f;
    n *= -1.01335180f;
    n *= 0.49242654f;
    n *= 9.66290855f;
    r4 = n *= 0.00486743f;
    n *= r4;
    n += 1.39989424f;
    n += r0;
    n *= r3;
    n += r1;
    n *= r2;
    n += 0.52359885f;
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
