// Run date: 08/14/22 12:19:18 Pacific Daylight Time
// Run duration = 2.640036 seconds
// Run count = 272
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 1;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 1360

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00344360

// Solution0 precision = 0.00095853
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.66362333f;
    r0 = n *= -0.31958660f;
    n += 0.67984408f;
    r1 = n += 0.74897254f;
    r2 = n += 0.65692323f;
    n *= -0.67512190f;
    r3 = n += 0.95842129f;
    n *= 0.33336595f;
    r4 = n *= -1.54266715f;
    n *= 0.81094414f;
    n = r2 += n;
    n += r2;
    n += 0.53551865f;
    n = r3 *= n;
    n *= 0.54977435f;
    r2 = n *= 0.06669262f;
    n += -0.31567335f;
    n = r0 += n;
    n += 0.02194920f;
    n *= r1;
    n += 0.74554694f;
    n += 0.00184181f;
    n = r2 += n;
    n += -0.56683755f;
    n = r4 += n;
    r1 = n *= 0.91082907f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00344360
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.64011675f;
    r0 = n *= -0.38441658f;
    n += 0.44355839f;
    r1 = n += -0.43901664f;
    r2 = n += -0.73416913f;
    n *= 0.66105831f;
    r3 = n += 0.83742893f;
    n *= 0.43291095f;
    r4 = n *= 0.14528044f;
    n *= 1.23639429f;
    n = r2 += n;
    n += r2;
    n += -0.14017040f;
    n = r3 *= n;
    n *= -0.68149292f;
    r2 = n *= 0.21395105f;
    n += 0.98293585f;
    n = r0 += n;
    n += -0.18327983f;
    n *= r1;
    n += -3.48235202f;
    n += -0.16084608f;
    n = r2 += n;
    n += 0.08847343f;
    n = r4 += n;
    r1 = n *= -0.23280527f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00340235
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.44701648f;
    r0 = n *= -0.91958052f;
    n += -0.74682540f;
    r1 = n += 0.57485116f;
    r2 = n += 0.23607661f;
    n *= 0.61113727f;
    r3 = n += -0.03880774f;
    n *= -5.87829351f;
    r4 = n *= -0.03582630f;
    n *= 0.26645187f;
    n = r2 += n;
    n += r2;
    n += 3.57685065f;
    n = r3 *= n;
    n *= -0.93885589f;
    r2 = n *= -0.60359305f;
    n += 0.76016760f;
    n = r0 += n;
    n += -0.21511544f;
    n *= r1;
    n += -0.63540566f;
    n += -0.70237648f;
    n = r2 += n;
    n += 1.87297881f;
    n = r4 += n;
    r1 = n *= -0.03403874f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
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
