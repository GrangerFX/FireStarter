// Run date: 10/20/24 16:24:52 Pacific Daylight Time
// Run duration = 218.178481 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000075
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
// Run population = 262144
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
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.48440376f;
    r1 = n *= -0.31437746f;
    n += r0;
    n += -1.04338002f;
    n *= r1;
    r1 = n *= -1.14457607f;
    r0 = n *= -1.80313969f;
    n *= -4.96236467f;
    n *= 0.19838095f;
    n += r0;
    r0 = n *= 1.19008243f;
    n += 1.28545249f;
    n *= -0.77810550f;
    r2 = n *= 1.79553688f;
    n += 0.21203157f;
    r3 = n *= 0.36029238f;
    n = r1 *= n;
    n += 0.66829985f;
    n = r0 += n;
    r4 = n *= -1.14108729f;
    n += -1.32948172f;
    n = r2 *= n;
    n = r4 += n;
    n *= r4;
    n *= r0;
    n *= -0.42641699f;
    n *= r1;
    n *= r3;
    r3 = n *= 1.75848103f;
    n *= 0.00110986f;
    n += r2;
    n *= r3;
    return n;
} // Solution
