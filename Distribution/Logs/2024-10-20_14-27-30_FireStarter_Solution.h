// Run date: 10/20/24 14:27:30 Pacific Daylight Time
// Run duration = 233.475930 seconds
// Run generation = 49
// Run evolution = 0
// Run max result = 0.00000007
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

    n *= 0.36274642f;
    r0 = n += -1.13960147f;
    r1 = n *= -1.16057909f;
    n *= r1;
    n *= -0.27050346f;
    r1 = n *= -1.54232061f;
    n *= 1.88334250f;
    n += -0.05378211f;
    r2 = n += -0.75410104f;
    r3 = n += -1.46262026f;
    r4 = n += 0.89604276f;
    n += -1.10554945f;
    n *= -0.36558452f;
    r5 = n += -0.61799759f;
    n = r1 += n;
    n += -0.37518635f;
    r6 = n *= -5.89372063f;
    n = r2 += n;
    n = r6 += n;
    n *= 0.01139714f;
    n *= 3.69460583f;
    n *= r6;
    n *= r5;
    n += -5.01658058f;
    n += 1.32277167f;
    n *= r1;
    n = r2 *= n;
    n += -1.06107724f;
    n *= r3;
    n += r2;
    n *= r4;
    n *= r0;
    return n;
} // Solution
