// Run date: 03/03/24 14:20:39 Pacific Standard Time
// Run duration = 835.506776 seconds
// Run generation = 64
// Run evolution = 7
// Run max result = 0.00000036
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
// Run evolveSeed = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    n *= 0.10237090f;
    r1 = n *= 0.85350847f;
    n *= -0.25363135f;
    n *= r0;
    r0 = n += 0.76375246f;
    r2 = n *= -2.85089922f;
    r3 = n += 1.98095560f;
    n += 0.65157390f;
    r4 = n *= -1.23386168f;
    r5 = n += 1.33096004f;
    n *= 1.01234078f;
    n *= r3;
    r3 = n *= 0.01080717f;
    n *= 0.21804948f;
    n = r0 *= n;
    n *= r0;
    n *= 2.16792607f;
    r0 = n += 1.65796506f;
    n *= 2.97437692f;
    n *= 3.40776920f;
    n += r4;
    n += -4.10390425f;
    n *= r3;
    n = r2 += n;
    n *= 1.36574459f;
    n *= r5;
    n *= r0;
    n *= r2;
    n *= r1;
    n *= -1.36049330f;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    n *= 0.22596543f;
    r1 = n *= 0.39601383f;
    n *= 0.96282524f;
    n *= r0;
    r0 = n += -2.22196865f;
    r2 = n *= 1.31579161f;
    r3 = n += 0.22590481f;
    n += -0.50875247f;
    r4 = n *= 1.35114253f;
    r5 = n += -2.74794483f;
    n *= 0.06077472f;
    n *= r3;
    r3 = n *= 0.05733025f;
    n *= -0.00091688f;
    n = r0 *= n;
    n *= r0;
    n *= 596.06030273f;
    r0 = n += -0.31386980f;
    n *= 0.00033355f;
    n *= -5.76658535f;
    n += r4;
    n += -0.58337772f;
    n *= r3;
    n = r2 += n;
    n *= -1.33013487f;
    n *= r5;
    n *= r0;
    n *= r2;
    n *= r1;
    n *= 0.39353460f;
    n += -0.11813182f;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    n *= -1.16143250f;
    r1 = n *= -0.20143129f;
    n *= -0.20195736f;
    n *= r0;
    r0 = n += 2.09092951f;
    r2 = n *= -1.55124187f;
    r3 = n += -0.00889472f;
    n += 1.50819170f;
    r4 = n *= 0.62138337f;
    r5 = n += 0.85689098f;
    n *= 0.22841504f;
    n *= r3;
    r3 = n *= 0.38448608f;
    n *= 0.05083456f;
    n = r0 *= n;
    n *= r0;
    n *= -15.98111057f;
    r0 = n += -2.22532320f;
    n *= -0.29770809f;
    n *= 0.18285859f;
    n += r4;
    n += -4.62962341f;
    n *= r3;
    n = r2 += n;
    n *= -1.15182960f;
    n *= r5;
    n *= r0;
    n *= r2;
    n *= r1;
    n *= 0.56487507f;
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
