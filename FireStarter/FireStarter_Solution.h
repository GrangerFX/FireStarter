#include <math.h>

// Run date: 02/20/22 12:45:24 Pacific Standard Time
// Run duration = 2.615686 seconds
// Run count = 15
// Run units = 1
// Run population = 4352
// Run iterations = 512
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

// Precision = 0.138580
// Solution0 precision = 0.122796
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -0.80607855f;
    r0 = n;
    n *= 0.03228888f;
    r1 = n;
    n += 0.74768335f;
    n += fabsf(-0.49419168f);
    r2 = n;
    n += 0.94151050f;
    n *= 0.62152773f;
    n += -0.55299652f;
    n += fabsf(0.61287457f);
    n += r0;
    r0 = n;
    n += 0.27708197f;
    r3 = n;
    n += 0.09877466f;
    n *= -0.92298067f;
    n *= r3;
    n += r0;
    n *= 0.68727225f;
    n += 0.45680267f;
    n += -0.63664061f;
    r0 = n;
    n += fabsf(-0.11103693f);
    n *= r0;
    n += 0.07324679f;
    r0 = n;
    n += -0.82471156f;
    n *= 0.21946463f;
    n *= r1;
    n += r0;
    n += 0.40662301f;
    n += 0.53949833f;
    r0 = n;
    n *= r2;
    n += 0.36987975f;
    n += r0;
    n *= 0.75413710f;
    n += fabsf(-0.02457900f);
    n += 0.66588128f;
    return n;
} // Solution0

// Solution1 precision = 0.123884
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -0.44199517f;
    r0 = n;
    n *= 0.43100262f;
    r1 = n;
    n += 0.65325707f;
    n += fabsf(-0.78652060f);
    r2 = n;
    n += 0.40940723f;
    n *= 0.46089783f;
    n += -0.83232123f;
    n += fabsf(0.66889143f);
    n += r0;
    r0 = n;
    n += 0.35137540f;
    r3 = n;
    n += 0.82418782f;
    n *= 1.37213600f;
    n *= r3;
    n += r0;
    n *= -0.76873362f;
    n += 1.02581728f;
    n += 0.15971628f;
    r0 = n;
    n += fabsf(-0.10620715f);
    n *= r0;
    n += 0.65717274f;
    r0 = n;
    n += -0.81198466f;
    n *= -0.24349788f;
    n *= r1;
    n += r0;
    n += -0.81587803f;
    n += 0.61045265f;
    r0 = n;
    n *= r2;
    n += 0.61886263f;
    n += r0;
    n *= -0.12116276f;
    n += fabsf(-0.84966701f);
    n += -0.76303887f;
    return n;
} // Solution1

// Solution2 precision = 0.138580
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -0.91065025f;
    r0 = n;
    n *= -0.78401542f;
    r1 = n;
    n += -0.22648223f;
    n += fabsf(-0.58372587f);
    r2 = n;
    n += 0.89133942f;
    n *= 0.03976289f;
    n += -0.43935713f;
    n += fabsf(-0.67362559f);
    n += r0;
    r0 = n;
    n += 0.81389874f;
    r3 = n;
    n += 0.99217343f;
    n *= 0.86150432f;
    n *= r3;
    n += r0;
    n *= 0.97314924f;
    n += -0.08961686f;
    n += 0.59348804f;
    r0 = n;
    n += fabsf(0.02487919f);
    n *= r0;
    n += -0.07422337f;
    r0 = n;
    n += 0.70430321f;
    n *= -0.71638989f;
    n *= r1;
    n += r0;
    n += -0.47956607f;
    n += -0.24924107f;
    r0 = n;
    n *= r2;
    n += 0.41941544f;
    n += r0;
    n *= 1.11142254f;
    n += fabsf(1.13443530f);
    n += 0.96456045f;
    return n;
} // Solution2

// Solution3 precision = 0.131703
inline float Solution3(float n)
{
    float r0, r1, r2, r3;

    n += 0.28473216f;
    r0 = n;
    n *= 0.65651280f;
    r1 = n;
    n += -0.74320579f;
    n += fabsf(-0.07284801f);
    r2 = n;
    n += 0.50489455f;
    n *= 0.49671698f;
    n += -0.87732249f;
    n += fabsf(-0.82960212f);
    n += r0;
    r0 = n;
    n += -0.74646646f;
    r3 = n;
    n += 0.46618167f;
    n *= 0.14269541f;
    n *= r3;
    n += r0;
    n *= -0.83465743f;
    n += 0.32540485f;
    n += 0.12292492f;
    r0 = n;
    n += fabsf(0.90714055f);
    n *= r0;
    n += 0.03544938f;
    r0 = n;
    n += 0.21246319f;
    n *= -0.56636727f;
    n *= r1;
    n += r0;
    n += -0.55154884f;
    n += 0.02543756f;
    r0 = n;
    n *= r2;
    n += -0.52184856f;
    n += r0;
    n *= -0.61317104f;
    n += fabsf(0.91891515f);
    n += 0.84698993f;
    return n;
} // Solution3

