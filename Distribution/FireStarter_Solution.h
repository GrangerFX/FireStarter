// Run date: 09/05/23 13:31:38 Pacific Daylight Time
// Run duration = 2860.669456 seconds
// Run generation = 8
// Run evolution = 4
// Run result = 0.00000012
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
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 500
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= 0.24916998f;
    r1 = n *= 1.26327741f;
    n = r1 *= n;
    r2 = n += -0.97788697f;
    n *= -0.99022460f;
    r3 = n += -0.84346300f;
    r4 = n *= -0.00011903f;
    n *= 8.70029926f;
    n *= 3.79051161f;
    r5 = n += -0.21468085f;
    n *= r5;
    r5 = n *= 1.40339637f;
    n *= 10.52449799f;
    n += -26.07843781f;
    n *= 0.33946961f;
    n *= r1;
    n *= r4;
    n += -1.90625501f;
    r4 = n *= -1.66248715f;
    n *= r0;
    r0 = n *= 1.15157115f;
    n *= r5;
    n = r4 *= n;
    n *= r0;
    n += r3;
    n += -2.28166652f;
    r3 = n += -0.18014786f;
    n *= r4;
    n *= r3;
    n *= r2;
    n += -0.00000002f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065866f;
    r0 = n *= -0.38552460f;
    r1 = n *= -0.50302982f;
    n = r1 *= n;
    r2 = n += -1.50690126f;
    n *= -0.81944817f;
    r3 = n += 0.25171337f;
    r4 = n *= 3.67872953f;
    n *= 2.11145020f;
    n *= 0.00017228f;
    r5 = n += -0.93345606f;
    n *= r5;
    r5 = n *= 1.29837775f;
    n *= -1.21124315f;
    n += 1.35117674f;
    n *= -1.06035614f;
    n *= r1;
    n *= r4;
    n += -1.43196321f;
    r4 = n *= 0.40968394f;
    n *= r0;
    r0 = n *= -1.22371662f;
    n *= r5;
    n = r4 *= n;
    n *= r0;
    n += r3;
    n += -0.20587131f;
    r3 = n += 0.71706963f;
    n *= r4;
    n *= r3;
    n *= r2;
    n += -0.11813187f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= 0.44508559f;
    r1 = n *= -1.28589070f;
    n = r1 *= n;
    r2 = n += -1.63232899f;
    n *= 0.01605621f;
    r3 = n += -0.03340701f;
    r4 = n *= 1.84161568f;
    n *= 0.90323687f;
    n *= 0.41213027f;
    r5 = n += -0.64604372f;
    n *= r5;
    r5 = n *= 1.20945406f;
    n *= -10.40716076f;
    n += -6.54089165f;
    n *= -0.00006605f;
    n *= r1;
    n *= r4;
    n += 0.39276838f;
    r4 = n *= -1.80075645f;
    n *= r0;
    r0 = n *= 1.38548005f;
    n *= r5;
    n = r4 *= n;
    n *= r0;
    n += r3;
    n += 1.96231723f;
    r3 = n += -0.03723938f;
    n *= r4;
    n *= r3;
    n *= r2;
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
