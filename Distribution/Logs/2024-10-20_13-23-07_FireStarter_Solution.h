// Run date: 10/20/24 13:23:07 Pacific Daylight Time
// Run duration = 351.809577 seconds
// Run generation = 15
// Run evolution = 0
// Run max result = 0.00000018
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
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
    r1 = n *= -0.02928386f;
    n *= 1.65226555f;
    r2 = n *= 1.69804358f;
    n *= r2;
    n += -0.96208584f;
    r2 = n += 0.70799983f;
    r3 = n += -1.80218124f;
    n *= 0.34436688f;
    r4 = n *= 1.81960952f;
    r5 = n += 0.89006019f;
    n *= 0.09897216f;
    n = r0 *= n;
    n = r1 += n;
    r6 = n *= 1.15509462f;
    n = r0 *= n;
    n += r5;
    n += -1.89572012f;
    n += r3;
    r3 = n += -1.01075161f;
    n *= r3;
    n += -1.54348218f;
    n += 0.27063462f;
    n *= r4;
    r4 = n += -6.00009251f;
    n += -4.78277540f;
    n *= r2;
    n *= r6;
    n = r1 += n;
    n *= r4;
    n *= r0;
    n += r1;
    return n;
} // Solution
