// Run date: 10/20/24 11:15:54 Pacific Daylight Time
// Run duration = 284.249387 seconds
// Run generation = 63
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
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -3.14159274f;
    r1 = n *= -0.08944634f;
    r2 = n *= -2.37317419f;
    n *= 0.07120287f;
    r3 = n *= -9.87710857f;
    n += 0.00000013f;
    n = r3 *= n;
    r4 = n += -1.24652588f;
    n += 0.15723574f;
    r5 = n *= 0.39167592f;
    r6 = n *= 1.57523012f;
    r7 = n *= -1.65770137f;
    r8 = n += 1.56366122f;
    n += r6;
    n *= -0.78663838f;
    n *= 0.29967046f;
    n *= r5;
    n += 1.11470258f;
    n += -0.46266517f;
    n *= r0;
    n = r1 *= n;
    n += r8;
    n += 2.38360786f;
    n += r3;
    r3 = n *= 0.31953198f;
    n *= r3;
    n *= r1;
    n += 0.99997389f;
    n *= -3.10971761f;
    n *= r7;
    n += r4;
    n *= r2;
    return n;
} // Solution
