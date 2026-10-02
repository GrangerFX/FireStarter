// Run date: 11/13/24 12:46:23 Pacific Standard Time
// Run duration = 2431.642576 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00000016
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
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 512
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

    n += -2.17576361f;
    r0 = n *= 0.52607054f;
    n += -0.97199750f;
    n += 0.87440300f;
    n *= -1.23774564f;
    n = r0 += n;
    r1 = n *= -2.84076500f;
    n = r1 *= n;
    r2 = n += -1.13480091f;
    n += -0.07547826f;
    r3 = n *= 0.03320888f;
    n += 1.07921028f;
    r4 = n += 1.32802081f;
    n *= r3;
    r3 = n += -0.48911223f;
    n *= r3;
    n *= r4;
    r4 = n += 0.46828505f;
    r3 = n += 1.21904838f;
    n *= 0.52435803f;
    n *= r2;
    n += 0.96396893f;
    n *= -1.61188161f;
    n = r3 *= n;
    n *= 1.11536002f;
    n += r1;
    n *= 0.02822750f;
    n += r4;
    n *= 1.21374762f;
    n *= r3;
    n += 4.58257723f;
    n *= r0;
    return n;
} // Solution
