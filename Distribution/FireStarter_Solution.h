// Run date: 07/19/25 10:37:08 Pacific Daylight Time
// Run duration = 8.093773 seconds
// Run test = 0
// Run generation = 92
// Run evolution = 0
// Run precision  = 4.74590254
// Run max result = 0.41124639
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_SINSIM
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 1000
// Run passes = 1
// Run samples = 4096
// Run iterations = 16
// Run candidates = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.12404919f;
    r1 = n *= 0.58904481f;
    r2 = n += 0.55206603f;
    n *= -0.03141113f;
    r3 = n *= 1.35845208f;
    r4 = n *= 0.99627984f;
    n *= -0.76312697f;
    r5 = n += 0.16740960f;
    r6 = n += 0.92787600f;
    n += -1.79469204f;
    n *= 0.43358696f;
    n += 1.30702841f;
    r7 = n += -0.01426651f;
    n = r0 *= n;
    n = r4 += n;
    n = r5 *= n;
    n = r6 *= n;
    n *= -1.94443512f;
    n += -0.44256139f;
    n = r2 += n;
    n *= r7;
    n *= -2.76306605f;
    n *= r0;
    n += r6;
    n *= 0.21857163f;
    n *= r2;
    n *= r1;
    n *= r5;
    n *= 1.41815889f;
    n *= r3;
    n += -0.56363362f;
    n += r4;
    return n;
} // Solution
