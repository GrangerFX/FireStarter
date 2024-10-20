// Run date: 10/20/24 10:41:19 Pacific Daylight Time
// Run duration = 296.114043 seconds
// Run generation = 4
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
    float r0, r1, r2, r3, r4;

    n *= 0.26957589f;
    r0 = n += -0.84689766f;
    r1 = n *= -0.99619019f;
    n *= -1.79500830f;
    n *= -3.59649158f;
    r2 = n *= 0.39863372f;
    r3 = n *= -0.00666301f;
    n = r0 *= n;
    n *= r0;
    n *= -8.88307381f;
    r0 = n += 0.95249242f;
    n *= r0;
    r0 = n += -1.39387965f;
    n += r0;
    n *= r1;
    n *= r2;
    n += 1.57518971f;
    r2 = n *= 1.67046905f;
    n += -0.72938997f;
    r1 = n += -0.80211693f;
    n *= 0.05178750f;
    n += 0.47315967f;
    n *= -4.18732452f;
    r0 = n *= -1.75722480f;
    r4 = n += 0.86931193f;
    n *= r4;
    n *= -0.89571786f;
    n += r1;
    n = r3 *= n;
    n *= r2;
    n *= r0;
    n += r3;
    return n;
} // Solution
