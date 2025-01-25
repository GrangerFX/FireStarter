// Run date: 01/25/25 14:26:34 Pacific Standard Time
// Run duration = 8.814123 seconds
// Run generation = 10
// Run evolution = 0
// Run max result = 0.00016308
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1

#ifndef __CUDACC__
#include <cmath>
#endif

#if 0
namespace Constants {
    constexpr long double PIld = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899L; // 80 digits of precision but long double is only 80 bits.
    constexpr double PId = 3.1415926535897932;
    constexpr float PIf = 3.14159265f;
} // Constants
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
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

inline float Solution(float n)
{
    float r0 = 0.95152962f;
    float r1 = 0.21060878f;
    float r2 = -1.45740581f;
    float r3 = 1.29472542f;
    float r4 = -0.45224035f;
    float r5 = -0.36437646f;
    float r6 = -1.65829921f;
    float r7 = 6.11138153f;
    float r8 = -2.55621099f;
    float r9 = -0.56846541f;
    float r10 = -2.21570539f;
    float r11 = 1.30329943f;
    float r12 = -6.48252392f;
    float r13 = 13.58356953f;
    float r14 = 0.00838923f;
    float r15 = -4.41419077f;
    float r16 = -0.05048708f;
    float r17 = 0.37711644f;
    float r18 = -10.28443336f;

    n *= r0;
    r1 = n;
    n += r2;
    n += r4;
    r6 = n;
    r7 = n;
    n *= r6;
    n *= r8;
    n += r9;
    n += r10;
    n += r11;
    n += r4;
    n *= r12;
    n *= r13;
    r7 = n;
    n += r8;
    n += r1;
    n += r14;
    n += r2;
    n += r6;
    r15 = n;
    n *= r7;
    n *= r6;
    n *= r16;
    n *= r7;
    n += r15;
    n += r17;
    return n;
} // Solution
