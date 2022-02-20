#include <math.h>

// Run date: 02/20/22 12:38:56 Pacific Standard Time
// Run duration = 1.308681 seconds
// Run count = 21
// Run units = 1
// Run population = 4352
// Run iterations = 256
// Run generations = 10
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_VARIATIONS 4

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
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
} // Target

// Precision = 0.185662
// Solution0 precision = 0.185662
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= -0.54168415f;
    n += -0.51026690f;
    r0 = n;
    n += -0.42222688f;
    r1 = n;
    n += fabsf(0.08208440f);
    n *= 0.87403005f;
    n += -1.14249206f;
    r2 = n;
    n += 0.93681544f;
    n *= 0.13614213f;
    n += 0.20196977f;
    n *= r0;
    r0 = n;
    n += r2;
    n *= 0.13280523f;
    n += fabsf(-0.39378962f);
    r2 = n;
    n *= 0.01651663f;
    n += fabsf(0.89140046f);
    n *= -0.71554011f;
    n += -0.89159715f;
    n *= r0;
    n += 0.01375190f;
    r0 = n;
    n += -0.84618860f;
    n += r0;
    r0 = n;
    n += -0.53827828f;
    n *= r1;
    n *= -0.71657962f;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += -0.77624774f;
    r0 = n;
    n += 0.58039171f;
    r3 = n;
    n *= r2;
    n *= r3;
    n += r1;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.107414
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -0.72552425f;
    n += -0.52960151f;
    r0 = n;
    n += -0.07797173f;
    r1 = n;
    n += fabsf(-0.01728373f);
    n *= 0.62060958f;
    n += 0.85344851f;
    r2 = n;
    n += 0.91232300f;
    n *= 0.12392620f;
    n += 0.39771596f;
    n *= r0;
    r0 = n;
    n += r2;
    n *= -0.13852113f;
    n += fabsf(-0.90967894f);
    r2 = n;
    n *= -0.09261332f;
    n += fabsf(-0.22935306f);
    n *= -0.14044736f;
    n += -0.75627869f;
    n *= r0;
    n += -0.58101362f;
    r0 = n;
    n += 0.79301977f;
    n += r0;
    r0 = n;
    n += -0.00103188f;
    n *= r1;
    n *= -0.09185722f;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 0.04625459f;
    r0 = n;
    n += 0.54681820f;
    r3 = n;
    n *= r2;
    n *= r3;
    n += r1;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.140139
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= -0.82658005f;
    n += 0.61647916f;
    r0 = n;
    n += 0.57092029f;
    r1 = n;
    n += fabsf(1.72902167f);
    n *= 0.38075414f;
    n += -0.30500612f;
    r2 = n;
    n += -0.11663920f;
    n *= -0.45718396f;
    n += -0.65881658f;
    n *= r0;
    r0 = n;
    n += r2;
    n *= -0.51068968f;
    n += fabsf(0.75627935f);
    r2 = n;
    n *= 0.17259574f;
    n += fabsf(0.02083559f);
    n *= 0.90897769f;
    n += 0.10831822f;
    n *= r0;
    n += 0.16427347f;
    r0 = n;
    n += -0.17206426f;
    n += r0;
    r0 = n;
    n += 0.40485799f;
    n *= r1;
    n *= -0.12665373f;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 0.55882114f;
    r0 = n;
    n += -0.12709965f;
    r3 = n;
    n *= r2;
    n *= r3;
    n += r1;
    n += r0;
    return n;
} // Solution2

// Solution3 precision = 0.159263
inline float Solution3(float n)
{
    float r0, r1, r2, r3;

    n *= -0.83637667f;
    n += -0.26709822f;
    r0 = n;
    n += 0.13217074f;
    r1 = n;
    n += fabsf(0.51605397f);
    n *= 0.41120282f;
    n += -0.43350884f;
    r2 = n;
    n += 0.46097055f;
    n *= 0.16236950f;
    n += 0.46088359f;
    n *= r0;
    r0 = n;
    n += r2;
    n *= 0.33536395f;
    n += fabsf(-0.96647865f);
    r2 = n;
    n *= 0.15887153f;
    n += fabsf(0.42618287f);
    n *= 0.25561145f;
    n += -0.68896639f;
    n *= r0;
    n += 0.49724647f;
    r0 = n;
    n += -0.64355594f;
    n += r0;
    r0 = n;
    n += 0.40166694f;
    n *= r1;
    n *= -0.51407897f;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 0.02544672f;
    r0 = n;
    n += 0.49156609f;
    r3 = n;
    n *= r2;
    n *= r3;
    n += r1;
    n += r0;
    return n;
} // Solution3

