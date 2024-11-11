// Run date: 11/11/24 14:52:36 Pacific Standard Time
// Run duration = 471.085223 seconds
// Run generation = 6
// Run evolution = 0
// Run max result = 0.00000033
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.23711865f;
    n *= r0;
    n *= 1.14529216f;
    n += -0.59757489f;
    n += 4.00051928f;
    r0 = n += -2.68314981f;
    r2 = n *= -0.37358880f;
    n += 1.22807622f;
    n = r0 += n;
    r3 = n *= 1.47533071f;
    r4 = n *= -1.40952301f;
    n *= -0.56851971f;
    r5 = n *= -0.36134729f;
    r6 = n += 0.46383768f;
    n += r5;
    n *= -0.66627342f;
    n += -0.57856578f;
    n = r2 += n;
    n = r3 *= n;
    n *= -0.23258552f;
    n = r6 *= n;
    n += -9.22610474f;
    n *= r6;
    n *= r2;
    n += r3;
    n *= 0.67926568f;
    n *= -27.12120056f;
    n += r0;
    n += r4;
    n *= r1;
    n *= 0.50499964f;
    return n;
} // Solution
