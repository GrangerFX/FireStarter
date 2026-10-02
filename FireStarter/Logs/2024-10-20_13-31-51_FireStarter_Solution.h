// Run date: 10/20/24 13:31:51 Pacific Daylight Time
// Run duration = 495.798758 seconds
// Run generation = 21
// Run evolution = 0
// Run max result = 0.00000086
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

    r0 = n += -1.57079685f;
    n *= -0.52870131f;
    n *= 0.10466781f;
    n *= r0;
    r0 = n += 0.50045812f;
    r1 = n *= -1.99973154f;
    n *= -0.48939988f;
    n += -0.06196546f;
    r2 = n *= 0.89346939f;
    r3 = n += -0.09944842f;
    r4 = n += 1.24079335f;
    n *= 1.68270719f;
    n += r2;
    r2 = n *= 1.01791680f;
    n += r1;
    r1 = n *= -0.93175149f;
    r5 = n *= -0.74853605f;
    n *= r5;
    n = r1 *= n;
    r5 = n *= -0.27595976f;
    r6 = n += 1.57736146f;
    n *= 3.28337026f;
    n *= r0;
    n += -2.59572840f;
    n += r6;
    n += 0.44543204f;
    n += -0.45407200f;
    n *= r5;
    n += r4;
    n *= r3;
    n += r1;
    n += r2;
    return n;
} // Solution
