// Run date: 10/21/24 10:22:50 Pacific Daylight Time
// Run duration = 161.486917 seconds
// Run generation = 25
// Run evolution = 0
// Run max result = 0.00000032
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
    float r0, r1, r2, r3, r4;

    n += -3.14159274f;
    n *= -1.08437240f;
    r0 = n *= 0.12438177f;
    r1 = n *= 1.05389571f;
    n *= -1.73592246f;
    n *= r1;
    r1 = n *= 1.70386624f;
    r2 = n += 4.12429857f;
    n *= 1.60571837f;
    r3 = n += -3.33817697f;
    r4 = n += -2.87805867f;
    n = r3 += n;
    n *= 5.10003376f;
    n *= -0.54329497f;
    n *= r2;
    n += 3.35991263f;
    n += 7.28245068f;
    n *= -0.51313782f;
    n += 0.18947339f;
    n += -5.48215485f;
    n *= -0.00578999f;
    n *= r4;
    n *= -2.64566517f;
    n += r1;
    n += -0.31699586f;
    r1 = n += 0.89252532f;
    n += 3.57954764f;
    n += r3;
    n *= r0;
    n *= r1;
    n *= -1.64319146f;
    n *= -0.88637394f;
    return n;
} // Solution
