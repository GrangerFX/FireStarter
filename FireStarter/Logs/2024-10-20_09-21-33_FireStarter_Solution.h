// Run date: 10/20/24 09:21:33 Pacific Daylight Time
// Run duration = 449.689557 seconds
// Run generation = 34
// Run evolution = 0
// Run max result = 0.00000005
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.17121914f;
    r0 = n *= 1.81898022f;
    r1 = n += -1.21520507f;
    r2 = n += 0.23677418f;
    n += r0;
    n += -0.50488257f;
    n *= r1;
    r1 = n *= -0.25890508f;
    n *= 6.29692411f;
    r0 = n += 1.92657328f;
    r3 = n *= 5.06796551f;
    n += -4.54481459f;
    r4 = n *= -0.00917032f;
    r5 = n += -0.68009770f;
    r6 = n += 0.02945521f;
    r7 = n *= 3.27742863f;
    n *= r4;
    n = r1 += n;
    n += 8.27347565f;
    n = r7 *= n;
    n *= 4.66060162f;
    n *= r1;
    n += r0;
    n *= 0.02689915f;
    n += r7;
    n *= r3;
    n += -4.35942030f;
    n += 2.24470520f;
    n *= r6;
    n *= -0.01631019f;
    n += r5;
    n *= r2;
    return n;
} // Solution
