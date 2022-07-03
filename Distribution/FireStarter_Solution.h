// Run date: 07/03/22 09:22:16 Pacific Daylight Time
// Run duration = 1.234392 seconds
// Run count = 22
// Run mode = 4
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Solution Generation = 2100

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

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000013

// Solution0 precision = 0.000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += 0.18486597f;
    n *= -0.45009759f;
    r0 = n *= -0.45693365f;
    n += -0.13283587f;
    r1 = n *= 0.55463994f;
    n += -0.43780369f;
    n *= r1;
    r1 = n += 0.13030662f;
    r2 = n += -0.95079929f;
    n += -0.97107714f;
    r3 = n *= 1.35691249f;
    n += 0.20881939f;
    n *= 0.42414406f;
    n += r0;
    n *= -0.80914026f;
    n *= r3;
    n += 0.42860344f;
    r3 = n *= -1.60271657f;
    n *= r2;
    r2 = n *= 1.20057309f;
    r0 = n *= -0.78749490f;
    n *= r3;
    r3 = n += -2.56039667f;
    n += -1.37297475f;
    n += 0.30942509f;
    n += r3;
    n = r1 += n;
    n *= -0.01346475f;
    n += r2;
    n += r0;
    n *= r1;
    n += 0.19529493f;
    return n;
} // Solution0

// Solution1 precision = 0.000013
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += 0.06342360f;
    n *= -0.23682760f;
    r0 = n *= -1.54191005f;
    n += -0.42724338f;
    r1 = n *= 0.13196608f;
    n += -0.13494594f;
    n *= r1;
    r1 = n += 0.72294927f;
    r2 = n += -0.87336564f;
    n += -0.26223469f;
    r3 = n *= 3.69598460f;
    n += -0.05935992f;
    n *= 0.94773155f;
    n += r0;
    n *= -1.59545112f;
    n *= r3;
    n += 0.61265916f;
    r3 = n *= 0.57745188f;
    n *= r2;
    r2 = n *= -1.95598590f;
    r0 = n *= 1.38195157f;
    n *= r3;
    r3 = n += -0.93573445f;
    n += 0.16500889f;
    n += -1.78640306f;
    n += r3;
    n = r1 += n;
    n *= -0.06931651f;
    n += r2;
    n += r0;
    n *= r1;
    n += 0.08845320f;
    return n;
} // Solution1

// Solution2 precision = 0.000005
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += 0.68949538f;
    n *= -0.92674953f;
    r0 = n *= 0.19035129f;
    n += 0.78943032f;
    r1 = n *= -0.79739285f;
    n += 0.71547663f;
    n *= r1;
    r1 = n += -0.43595317f;
    r2 = n += -0.91573226f;
    n += 0.13949348f;
    r3 = n *= 0.89089137f;
    n += -0.72609836f;
    n *= -0.58937031f;
    n += r0;
    n *= -1.53535461f;
    n *= r3;
    n += -0.84393048f;
    r3 = n *= -0.69330847f;
    n *= r2;
    r2 = n *= -0.82885301f;
    r0 = n *= 1.46224737f;
    n *= r3;
    r3 = n += -1.16490173f;
    n += -0.48284781f;
    n += 2.14743257f;
    n += r3;
    n = r1 += n;
    n *= -0.19461668f;
    n += r2;
    n += r0;
    n *= r1;
    n += 0.55798191f;
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
