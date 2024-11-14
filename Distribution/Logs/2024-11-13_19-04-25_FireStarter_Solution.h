// Run date: 11/13/24 19:04:25 Pacific Standard Time
// Run duration = 1308.172178 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000010
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

// Run scale = 0.150000f
// Run startScale = 2.500000f
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.11757671f;
    r0 = n += 0.36937812f;
    r1 = n *= 1.04646385f;
    n *= -4.20534611f;
    n *= -0.37073255f;
    n = r0 *= n;
    r2 = n *= 5.64043903f;
    r3 = n += -1.10225081f;
    n += r0;
    n *= -0.00260801f;
    r0 = n *= -1.53938830f;
    r4 = n *= -2.64264631f;
    n += r0;
    n += -1.11734211f;
    r0 = n += 1.31110966f;
    r5 = n *= 1.74442351f;
    n *= r2;
    r2 = n *= 1.99009860f;
    r6 = n += -1.97956550f;
    n += -4.56802273f;
    n = r6 *= n;
    r7 = n += 4.44486046f;
    n += r3;
    n *= -0.14506203f;
    n += r2;
    n += r0;
    n += r4;
    n *= r7;
    n += r6;
    n *= r5;
    n *= r1;
    n *= -0.94581503f;
    return n;
} // Solution
