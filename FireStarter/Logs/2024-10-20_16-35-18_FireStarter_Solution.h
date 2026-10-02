// Run date: 10/20/24 16:35:18 Pacific Daylight Time
// Run duration = 148.439958 seconds
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
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 131072
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
    r1 = n *= -0.02201755f;
    n *= 2.02627611f;
    r2 = n *= 2.15141559f;
    n *= r2;
    n += 2.12212753f;
    r2 = n += -4.46191072f;
    r3 = n += -1.22817421f;
    n *= -0.06575610f;
    r4 = n *= -1.96010315f;
    r5 = n += -0.18011008f;
    n *= 0.26878187f;
    n = r0 *= n;
    n = r1 += n;
    r6 = n *= 0.56104481f;
    n = r0 *= n;
    n += r5;
    n += 1.90798700f;
    n += r3;
    r3 = n += -1.89702892f;
    n *= r3;
    n += 0.19624443f;
    n += -0.26537552f;
    n *= r4;
    r4 = n += 1.23820674f;
    n += 3.66619229f;
    n *= r2;
    n *= r6;
    n = r1 += n;
    n *= r4;
    n *= r0;
    n += r1;
    return n;
} // Solution
