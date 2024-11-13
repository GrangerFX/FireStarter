// Run date: 11/12/24 11:49:48 Pacific Standard Time
// Run duration = 172.355330 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000013
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

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
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= 0.33924529f;
    n *= r1;
    n *= -5.69330645f;
    r1 = n *= -16.08537674f;
    n += r1;
    n *= -0.03175827f;
    r1 = n += 1.88678074f;
    n *= 0.01884143f;
    n += 1.08985722f;
    n *= -2.00513291f;
    r2 = n *= -2.03585720f;
    r3 = n += 0.63438660f;
    n += r1;
    r1 = n *= -0.04493466f;
    n += r3;
    n += -1.43954384f;
    r3 = n += -0.80868417f;
    n += 1.16892612f;
    r4 = n += -1.37121522f;
    n *= -2.04362965f;
    n += r2;
    n *= r3;
    n = r4 += n;
    r3 = n *= 0.29786870f;
    r2 = n += 0.32941949f;
    n = r2 += n;
    n *= r4;
    n *= r2;
    n += r3;
    n *= r0;
    n *= r1;
    return n;
} // Solution
