// Run date: 10/20/24 11:02:56 Pacific Daylight Time
// Run duration = 302.285276 seconds
// Run generation = 62
// Run evolution = 0
// Run max result = 0.00000034
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
    float r0, r1, r2, r3;

    n *= -0.45649412f;
    r0 = n += 1.66585970f;
    n += 0.97063625f;
    n *= -0.17996073f;
    n = r0 *= n;
    r1 = n *= -0.10531197f;
    n += -1.69367838f;
    n *= -1.68794608f;
    r2 = n += -1.76189291f;
    n += 2.54170680f;
    n *= 2.19880247f;
    n *= r1;
    r1 = n += -0.49558467f;
    n *= -13.37620068f;
    n += -6.33510971f;
    n *= -0.00013162f;
    n += r2;
    n *= -0.52389383f;
    r2 = n *= 1.66551840f;
    n += 0.83881080f;
    n *= r1;
    n = r0 += n;
    r1 = n *= 0.37521949f;
    n += r0;
    r0 = n += 2.72425675f;
    r3 = n *= 1.26005888f;
    n *= r0;
    n += -4.96145916f;
    n += 1.58086789f;
    n *= r1;
    n *= r2;
    n *= r3;
    return n;
} // Solution
