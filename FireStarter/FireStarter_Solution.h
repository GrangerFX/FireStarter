#include <math.h>

// Run date: 02/13/22 11:06:40 Pacific Standard Time
// Run duration = 19.365847 seconds
// Run count = 1
// Run units = 1
// Run population = 34816
// Run iterations = 512
// Run generations = 50
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

// Solution0 precision = 0.000838
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.43184212f;
    r0 = n;
    n += 0.66509914f;
    n += -0.24417764f;
    r1 = n;
    n *= 1.56429553f;
    n *= -0.80590552f;
    r2 = n;
    n += -0.88691580f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -1.04402184f;
    r2 = n;
    n *= 1.96872663f;
    n += r0;
    r0 = n;
    n *= 0.14994344f;
    n *= 0.08823083f;
    r4 = n;
    n += -0.22692356f;
    n *= r2;
    n += 0.06298281f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.31675640f;
    r4 = n;
    n *= 1.33433139f;
    r2 = n;
    n *= -0.85059077f;
    n += -0.21124214f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -1.22972798f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= 1.04957867f;
    n += r5;
    n += r3;
    n += 0.39499331f;
    return n;
} // Solution0

// Solution1 precision = 0.000354
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.54920006f;
    r0 = n;
    n += -0.72608262f;
    n += -0.75747114f;
    r1 = n;
    n *= -1.21779680f;
    n *= 0.90932530f;
    r2 = n;
    n += 0.19519630f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.51532888f;
    r2 = n;
    n *= 0.44846675f;
    n += r0;
    r0 = n;
    n *= 0.80735278f;
    n *= 0.10287114f;
    r4 = n;
    n += -1.04097319f;
    n *= r2;
    n += 0.68953311f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.92544532f;
    r4 = n;
    n *= -0.29503411f;
    r2 = n;
    n *= -0.00179465f;
    n += 0.15684423f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 2.27573729f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.23123649f;
    n += r5;
    n += r3;
    n += -0.39297080f;
    return n;
} // Solution1

// Solution2 precision = 0.002769
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.86965674f;
    r0 = n;
    n += 0.27695554f;
    n += -0.62504071f;
    r1 = n;
    n *= 0.17849754f;
    n *= -0.59835267f;
    r2 = n;
    n += -0.94174552f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += 0.50111175f;
    r2 = n;
    n *= -0.83977312f;
    n += r0;
    r0 = n;
    n *= -2.26204729f;
    n *= -0.14027454f;
    r4 = n;
    n += -1.33323693f;
    n *= r2;
    n += 0.80792814f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.53366506f;
    r4 = n;
    n *= -0.24905539f;
    r2 = n;
    n *= 0.81819069f;
    n += -0.44060591f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -1.83376849f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.77507591f;
    n += r5;
    n += r3;
    n += -0.67536366f;
    return n;
} // Solution2

// Solution3 precision = 0.091619
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.41524449f;
    r0 = n;
    n += -0.30980998f;
    n += -1.20288193f;
    r1 = n;
    n *= 0.98279119f;
    n *= 0.76921481f;
    r2 = n;
    n += 0.22166239f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.92429662f;
    r2 = n;
    n *= -1.53270566f;
    n += r0;
    r0 = n;
    n *= 1.01699591f;
    n *= 0.40406042f;
    r4 = n;
    n += 2.42661500f;
    n *= r2;
    n += -0.67469275f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.52710176f;
    r4 = n;
    n *= -0.21800140f;
    r2 = n;
    n *= -0.26859176f;
    n += 0.14069973f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -1.29060948f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.48045972f;
    n += r5;
    n += r3;
    n += 0.34697947f;
    return n;
} // Solution3

