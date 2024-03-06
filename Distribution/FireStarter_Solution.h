// Run date: 03/05/24 23:19:01 Pacific Standard Time
// Run duration = 8068.324968 seconds
// Run generation = 827
// Run evolution = 15
// Run max result = 0.00000015
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159274f;
    r0 = n *= 0.53154826f;
    n *= -0.05562133f;
    r1 = n *= 1.66557705f;
    n *= -1.34535515f;
    n *= 4.65959263f;
    n *= r0;
    r0 = n += -0.43438631f;
    n *= 4.38357258f;
    n *= -0.00343955f;
    r2 = n += 0.75049132f;
    n += 0.42962223f;
    n = r2 += n;
    r3 = n += -1.31285858f;
    n = r3 *= n;
    n *= 30.95636177f;
    n *= r2;
    n += 41.12495804f;
    n += 40.32065964f;
    n += 4.62546825f;
    n = r3 *= n;
    n *= 1.49787259f;
    n = r0 *= n;
    n *= -0.62148178f;
    n = r3 += n;
    r2 = n += 3.70364833f;
    n += r3;
    n += r0;
    n *= r1;
    n *= r2;
    n += -0.00000187f;
    n *= 0.00317244f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065843f;
    r0 = n *= -0.61256504f;
    n *= 2.72614694f;
    r1 = n *= 0.31201139f;
    n *= -1.88522506f;
    n *= -0.61564767f;
    n *= r0;
    r0 = n += -0.65604508f;
    n *= -0.00610208f;
    n *= 0.43416896f;
    r2 = n += 0.07393277f;
    n += -0.29124373f;
    n = r2 += n;
    r3 = n += 0.26435411f;
    n = r3 *= n;
    n *= 10.84581947f;
    n *= r2;
    n += -0.78979355f;
    n += 20.27994728f;
    n += 3.85684443f;
    n = r3 *= n;
    n *= 1.49295866f;
    n = r0 *= n;
    n *= -0.50931275f;
    n = r3 += n;
    r2 = n += 0.74535418f;
    n += r3;
    n += r0;
    n *= r1;
    n *= r2;
    n += -0.10616478f;
    n *= 1.11272013f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799383f;
    r0 = n *= 0.09460435f;
    n *= 0.11669247f;
    r1 = n *= -0.74178553f;
    n *= -443.68045044f;
    n *= -0.87764633f;
    n *= r0;
    r0 = n += 2.42736602f;
    n *= 0.07053629f;
    n *= -0.46885261f;
    r2 = n += -1.43105888f;
    n += -0.02944565f;
    n = r2 += n;
    r3 = n += 1.88956380f;
    n = r3 *= n;
    n *= -0.15504347f;
    n *= r2;
    n += -0.76874608f;
    n += 4.88906717f;
    n += 2.55258584f;
    n = r3 *= n;
    n *= -2.20695162f;
    n = r0 *= n;
    n *= -0.01699584f;
    n = r3 += n;
    r2 = n += -0.24342132f;
    n += r3;
    n += r0;
    n *= r1;
    n *= r2;
    n += -1.42899585f;
    n *= -0.36641029f;
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
