// Run date: 09/10/23 11:19:47 Pacific Daylight Time
// Run duration = 1313.702656 seconds
// Run generation = 49
// Run evolution = 17
// Run result = 0.00000143
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

inline float SolutionTarget(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 2:
        return sinf(n * 1.2f) + n * 0.2f;
    case 3:
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.40462229f;
    n *= -0.76773125f;
    r0 = n += -0.97590804f;
    r1 = n *= 0.76862293f;
    n *= r1;
    r1 = n += -1.05325580f;
    n *= r1;
    r1 = n += 1.15288484f;
    n *= 0.38086909f;
    n = r1 *= n;
    n += -0.73966312f;
    r2 = n *= 0.93542159f;
    n *= 0.35801318f;
    n *= -0.82258540f;
    r3 = n *= -0.83661366f;
    r4 = n *= 0.01923523f;
    r5 = n += -1.65213025f;
    n *= r3;
    r3 = n *= 2.67849922f;
    n = r1 += n;
    n += 0.93889678f;
    n += r5;
    n *= r2;
    n *= r4;
    n *= 11.80969048f;
    n += -3.22123218f;
    n *= r0;
    n *= -1.12975013f;
    n *= r3;
    n *= r1;
    n += -0.13325973f;
    n += 0.13325968f;
    return n;
} // Solution0

// Solution1 result = 0.00000143
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.62860930f;
    n *= -0.34420842f;
    r0 = n += -1.73256528f;
    r1 = n *= -0.11305518f;
    n *= r1;
    r1 = n += -0.87848461f;
    n *= r1;
    r1 = n += -0.42515910f;
    n *= -1.10719395f;
    n = r1 *= n;
    n += 0.03614636f;
    r2 = n *= -1.70350587f;
    n *= -1.25686002f;
    n *= -0.37189102f;
    r3 = n *= -3.27706289f;
    r4 = n *= -0.01188518f;
    r5 = n += -2.67110229f;
    n *= r3;
    r3 = n *= -1.44316721f;
    n = r1 += n;
    n += 1.21584821f;
    n += r5;
    n *= r2;
    n *= r4;
    n *= 10.79611492f;
    n += -3.35713339f;
    n *= r0;
    n *= 0.54092097f;
    n *= r3;
    n *= r1;
    n += -0.37649915f;
    n += 0.25836632f;
    return n;
} // Solution1

// Solution2 result = 0.00000119
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.25277221f;
    n *= 0.30164924f;
    r0 = n += 0.98933387f;
    r1 = n *= 0.34894356f;
    n *= r1;
    r1 = n += -1.03348589f;
    n *= r1;
    r1 = n += 0.10604020f;
    n *= 2.12536645f;
    n = r1 *= n;
    n += -2.13616562f;
    r2 = n *= 1.27156150f;
    n *= -0.67102259f;
    n *= -2.35216117f;
    r3 = n *= -0.40868413f;
    r4 = n *= -0.00393173f;
    r5 = n += -0.25188318f;
    n *= r3;
    r3 = n *= 0.33036691f;
    n = r1 += n;
    n += -1.36201167f;
    n += r5;
    n *= r2;
    n *= r4;
    n *= 0.31485826f;
    n += 2.80297160f;
    n *= r0;
    n *= 5.89751434f;
    n *= r3;
    n *= r1;
    n += 0.44864503f;
    n += 0.07495362f;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
    return 0.0f;
} // Solution
