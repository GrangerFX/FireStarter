// Run date: 05/20/23 10:33:52 Pacific Daylight Time
// Run duration = 1117.951441 seconds
// Run generation = 24
// Run evolution = 0
// Run result = 0.00012076
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 60
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 1
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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

// Solution0 result = 0.00004464
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14160132f;
    n *= 0.54405266f;
    r1 = n *= -0.62610877f;
    r2 = n *= -0.34614849f;
    r3 = n *= -0.45954865f;
    r4 = n *= 14.84945965f;
    n *= -0.09404320f;
    r5 = n *= -1.54997563f;
    n = r2 += n;
    n = r1 += n;
    n *= r5;
    n += -1.84041202f;
    r5 = n *= 0.74891323f;
    n = r3 *= n;
    n = r1 *= n;
    n *= 18.98780632f;
    n *= 10.42250443f;
    n += r2;
    n *= -0.03127790f;
    n += -11.21972370f;
    n *= r1;
    n *= r5;
    n *= 3.20688939f;
    n += 0.99681962f;
    n *= r0;
    n += r4;
    n *= 0.01582116f;
    n *= 0.55768722f;
    n += r3;
    n += -3.20738506f;
    n *= -13.09158897f;
    n += -41.98976898f;
    return n;
} // Solution0

// Solution1 result = 0.00001538
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09067488f;
    n *= 0.12764955f;
    r1 = n *= 2.69992876f;
    r2 = n *= -0.15573664f;
    r3 = n *= 2.21318364f;
    r4 = n *= -0.17226405f;
    n *= 2.53828979f;
    r5 = n *= 1.03116465f;
    n = r2 += n;
    n = r1 += n;
    n *= r5;
    n += -1.23046803f;
    r5 = n *= 0.92662311f;
    n = r3 *= n;
    n = r1 *= n;
    n *= 1.61905789f;
    n *= 4.20401525f;
    n += r2;
    n *= 1.58031571f;
    n += -36.11613083f;
    n *= r1;
    n *= r5;
    n *= 1.72793174f;
    n += -14.32478905f;
    n *= r0;
    n += r4;
    n *= -0.03217769f;
    n *= 0.23098469f;
    n += r3;
    n += 10.28354359f;
    n *= -4.55013132f;
    n += 46.67332840f;
    return n;
} // Solution1

// Solution2 result = 0.00012076
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61797881f;
    n *= 0.98811042f;
    r1 = n *= 0.28399101f;
    r2 = n *= -0.20988677f;
    r3 = n *= -2.88103724f;
    r4 = n *= -0.14757815f;
    n *= 0.79660881f;
    r5 = n *= -2.95212150f;
    n = r2 += n;
    n = r1 += n;
    n *= r5;
    n += -0.77316785f;
    r5 = n *= -1.20062935f;
    n = r3 *= n;
    n = r1 *= n;
    n *= -2.09294367f;
    n *= -1.94941461f;
    n += r2;
    n *= 0.50926942f;
    n += -2.89879298f;
    n *= r1;
    n *= r5;
    n *= 0.56743425f;
    n += 0.14958228f;
    n *= r0;
    n += r4;
    n *= 0.40549105f;
    n *= 3.27206159f;
    n += r3;
    n += 0.20512912f;
    n *= -3.09815192f;
    n += 1.15902591f;
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
