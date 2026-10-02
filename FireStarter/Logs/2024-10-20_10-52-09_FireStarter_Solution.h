// Run date: 10/20/24 10:52:09 Pacific Daylight Time
// Run duration = 517.286976 seconds
// Run generation = 105
// Run evolution = 0
// Run max result = 0.00000025
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

    r0 = n += -1.40892017f;
    r1 = n += -1.73267245f;
    n *= -0.52761400f;
    n += 0.91418231f;
    n *= -0.58491516f;
    n *= 0.81717789f;
    n = r0 *= n;
    r2 = n += -3.28704214f;
    n = r0 += n;
    n += 3.21565247f;
    r3 = n *= -0.03743434f;
    n += 1.49218082f;
    r4 = n *= 1.94496429f;
    r5 = n *= 0.52612042f;
    n = r4 *= n;
    r6 = n *= -2.74346256f;
    n += r6;
    n += r2;
    n *= r5;
    r5 = n *= 0.00268255f;
    n *= r4;
    n *= 1.55583799f;
    n = r5 += n;
    n += -2.08800673f;
    n += -3.03446722f;
    n += 7.07016373f;
    n *= r3;
    n += r0;
    n *= r1;
    r1 = n *= -0.09637179f;
    n += r1;
    n *= r5;
    return n;
} // Solution
