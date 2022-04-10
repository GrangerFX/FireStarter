#include <math.h>

// Run date: 04/09/22 15:56:26 Pacific Daylight Time
// Run duration = 1.759587 seconds
// Run count = 4
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

// Precision = 0.000043

// Solution0 precision = 0.000033
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.01656890f;
    r0 = n += -4.40032673f;
    n += 0.77270716f;
    n += 1.25011623f;
    n += -0.58475888f;
    r1 = n *= -0.24660105f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.05054690f;
    r3 = n += -0.47850692f;
    r4 = n += 0.18582967f;
    n *= 1.60899580f;
    n *= 0.42313290f;
    n *= r2;
    n *= -2.10804605f;
    r2 = n += 3.38189173f;
    n *= -0.15555930f;
    n *= r1;
    n *= r2;
    n *= 1.00449312f;
    n += -0.72348493f;
    n *= r4;
    r4 = n *= 0.52366388f;
    r2 = n += 1.30762267f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.83252347f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.38537961f;
    return n;
} // Solution0

// Solution1 precision = 0.000040
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.11541879f;
    r0 = n += -0.20058832f;
    n += 0.38148150f;
    n += -1.01581323f;
    n += -1.00982821f;
    r1 = n *= -0.43632585f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.12118693f;
    r3 = n += 0.27704954f;
    r4 = n += 0.57567936f;
    n *= -0.29100475f;
    n *= -2.27582812f;
    n *= r2;
    n *= 0.15361729f;
    r2 = n += -1.29944849f;
    n *= 0.49908009f;
    n *= r1;
    n *= r2;
    n *= -1.07270885f;
    n += 0.62637687f;
    n *= r4;
    r4 = n *= 0.18310077f;
    r2 = n += 0.90046793f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.32605469f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.87982839f;
    return n;
} // Solution1

// Solution2 precision = 0.000043
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.58351845f;
    r0 = n += 0.49447805f;
    n += -0.55413896f;
    n += -0.20165509f;
    n += 0.31950331f;
    r1 = n *= 0.78092122f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.04032838f;
    r3 = n += -0.35563695f;
    r4 = n += -0.35008490f;
    n *= 1.06527746f;
    n *= 1.12092912f;
    n *= r2;
    n *= -0.31719068f;
    r2 = n += 1.88442326f;
    n *= -3.16304255f;
    n *= r1;
    n *= r2;
    n *= 0.23829408f;
    n += 0.43795401f;
    n *= r4;
    r4 = n *= 0.04668881f;
    r2 = n += 0.78309900f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.46825612f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.38613915f;
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
