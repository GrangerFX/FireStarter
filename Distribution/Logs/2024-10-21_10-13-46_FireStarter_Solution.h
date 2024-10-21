// Run date: 10/21/24 10:13:46 Pacific Daylight Time
// Run duration = 228.470417 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000017
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.17618188f;
    n *= r1;
    r1 = n += -0.27716359f;
    r2 = n *= 3.57099581f;
    n *= 0.01279556f;
    r3 = n *= -3.32130718f;
    n *= 0.01509564f;
    r4 = n *= -2.28154254f;
    n *= r2;
    r2 = n += 0.98525929f;
    r5 = n *= 3.12233472f;
    r6 = n += -1.45154583f;
    n *= -4.01882982f;
    n = r4 *= n;
    r7 = n += -1.07170415f;
    n = r2 += n;
    n += r3;
    n *= r5;
    r5 = n += 1.00137126f;
    n = r1 *= n;
    n *= r6;
    n *= -1.23780775f;
    n = r2 += n;
    n *= r7;
    n += -1.33903050f;
    n *= r2;
    n += r1;
    n += r5;
    n += r4;
    n += -0.89432245f;
    n *= r0;
    return n;
} // Solution
