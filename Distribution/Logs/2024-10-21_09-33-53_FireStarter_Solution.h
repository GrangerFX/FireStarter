// Run date: 10/21/24 09:33:53 Pacific Daylight Time
// Run duration = 270.516443 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000038
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
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.64786345f;
    r1 = n *= -0.29964069f;
    n += r0;
    n += 1.42545748f;
    n *= r1;
    r1 = n *= -0.33406985f;
    r0 = n *= 0.00712651f;
    n *= -6.10227966f;
    n *= -1.37208426f;
    n += r0;
    r0 = n *= 4.06890345f;
    n += 1.11410785f;
    n *= -0.37976554f;
    r2 = n *= 0.16898043f;
    n += 1.05473197f;
    r3 = n *= -0.64040858f;
    n = r1 *= n;
    n += 1.82186830f;
    n = r0 += n;
    r4 = n *= -2.92840576f;
    n += -4.20312119f;
    n = r2 *= n;
    n = r4 += n;
    n *= r4;
    n *= r0;
    n *= 0.59976566f;
    n *= r1;
    n *= r3;
    r3 = n *= -1.69098020f;
    n *= 0.12276797f;
    n += r2;
    n *= r3;
    return n;
} // Solution
