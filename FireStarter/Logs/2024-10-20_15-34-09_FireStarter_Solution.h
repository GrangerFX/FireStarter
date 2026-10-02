// Run date: 10/20/24 15:34:09 Pacific Daylight Time
// Run duration = 327.507038 seconds
// Run generation = 15
// Run evolution = 0
// Run max result = 0.00000012
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1


inline float Solution(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.12869987f;
    n *= 0.74100542f;
    r2 = n *= -2.07401848f;
    n *= r2;
    n += -1.06937563f;
    r2 = n += 0.74830002f;
    r3 = n += -1.62523162f;
    n *= -0.02091938f;
    r4 = n *= -1.04623938f;
    r5 = n += -1.18285251f;
    n *= 0.01615709f;
    n = r0 *= n;
    n = r1 += n;
    r6 = n *= 2.06965804f;
    n = r0 *= n;
    n += r5;
    n += 2.57916713f;
    n += r3;
    r3 = n += -9.74871540f;
    n *= r3;
    n += -1.07796693f;
    n += -0.90743738f;
    n *= r4;
    r4 = n += -3.73661613f;
    n += -0.42125818f;
    n *= r2;
    n *= r6;
    n = r1 += n;
    n *= r4;
    n *= r0;
    n += r1;
    return n;
} // Solution
