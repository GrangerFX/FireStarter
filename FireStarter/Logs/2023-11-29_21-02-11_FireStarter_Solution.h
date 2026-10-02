// Run date: 11/29/23 21:02:11 Pacific Standard Time
// Run duration = 1757.560616 seconds
// Run generation = 34
// Run evolution = 12
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    n *= 0.04257611f;
    n *= 0.85518235f;
    r1 = n *= -3.85136485f;
    n = r0 *= n;
    r2 = n *= -0.27033079f;
    n *= r2;
    n += r0;
    r0 = n += 0.29067922f;
    n *= 3.36472583f;
    n *= 3.76339531f;
    n *= 1.79822719f;
    n *= 3.22197437f;
    n *= 0.00207125f;
    r2 = n += 2.42312193f;
    r3 = n *= -0.34579736f;
    r4 = n += -1.13799202f;
    r5 = n *= -0.00000000f;
    n *= 22.03475571f;
    r6 = n *= 7.86386967f;
    n += r5;
    n += 10.66462135f;
    n *= r6;
    n += r0;
    n += 1.79659736f;
    r0 = n += 0.24441560f;
    n *= r0;
    n *= r4;
    n += r2;
    n *= r3;
    n *= r1;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    n *= 0.79804581f;
    n *= -0.08219362f;
    r1 = n *= 4.10975838f;
    n = r0 *= n;
    r2 = n *= -0.13463332f;
    n *= r2;
    n += r0;
    r0 = n += 0.55643529f;
    n *= 3.12302995f;
    n *= -5.81005144f;
    n *= 1.69200110f;
    n *= 0.00328916f;
    n *= 0.06862487f;
    r2 = n += -0.13580061f;
    r3 = n *= 1.87336326f;
    r4 = n += -0.32804546f;
    r5 = n *= -0.85573900f;
    n *= -2.46268344f;
    r6 = n *= 0.56567615f;
    n += r5;
    n += 8.62376690f;
    n *= r6;
    n += r0;
    n += 0.46872750f;
    r0 = n += 10.01736546f;
    n *= r0;
    n *= r4;
    n += r2;
    n *= r3;
    n *= r1;
    n += -0.11813191f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    n *= -2.98663378f;
    n *= -0.09684176f;
    r1 = n *= -0.88426089f;
    n = r0 *= n;
    r2 = n *= 0.23092587f;
    n *= r2;
    n += r0;
    r0 = n += 0.48828086f;
    n *= -1.14038765f;
    n *= 4.31017303f;
    n *= 0.00667421f;
    n *= -0.29938069f;
    n *= -1.48047757f;
    r2 = n += -1.05787325f;
    r3 = n *= -1.72305417f;
    r4 = n += -1.46769726f;
    r5 = n *= -3.36509848f;
    n *= -11.45143890f;
    r6 = n *= 0.00000020f;
    n += r5;
    n += 2.06614399f;
    n *= r6;
    n += r0;
    n += -1.07591188f;
    r0 = n += 3.53727794f;
    n *= r0;
    n *= r4;
    n += r2;
    n *= r3;
    n *= r1;
    n += 0.52359867f;
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
