// Run date: 10/20/24 14:36:16 Pacific Daylight Time
// Run duration = 494.313034 seconds
// Run generation = 15
// Run evolution = 0
// Run max result = 0.00000068
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
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= 0.19054459f;
    r0 = n += -0.89792025f;
    n *= r0;
    r0 = n += 0.89953828f;
    r1 = n += -2.25038576f;
    r2 = n += 1.26126289f;
    r3 = n *= 0.21773420f;
    r4 = n += -0.56919944f;
    r5 = n *= 2.01012564f;
    n += -0.66336548f;
    r6 = n += 0.43988428f;
    r7 = n *= -0.91253352f;
    n += r4;
    r4 = n *= -9.04820728f;
    n *= 0.01777957f;
    r8 = n += -0.57006764f;
    n *= 4.39526367f;
    n = r8 *= n;
    n *= r8;
    n *= r7;
    n *= r3;
    n = r1 += n;
    n += -2.78675604f;
    n += r4;
    n += r0;
    n *= r5;
    n += 3.03123450f;
    n *= r6;
    n += 1.54897273f;
    n *= r1;
    n *= 0.40901962f;
    n *= r2;
    return n;
} // Solution
