#include <math.h>

// Run date: 03/12/22 19:41:51 Pacific Standard Time
// Run duration = 0.489973 seconds
// Run count = 176
// Run units = 1
// Run population = 17408
// Run iterations = 1024
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

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

// Precision = 0.000043

// Solution0 precision = 0.000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.23120943f;
    r0 = n += -1.06957531f;
    r1 = n *= -0.43635315f;
    r2 = n += 0.07333547f;
    n *= 0.65265673f;
    n += r1;
    r1 = n *= -0.73934555f;
    r3 = n += 0.04992495f;
    n *= r3;
    r3 = n += -1.02947688f;
    r4 = n *= -1.25064564f;
    r5 = n += 0.65171790f;
    n *= -1.43671477f;
    n += r2;
    n *= r1;
    r1 = n += 0.48932001f;
    n *= -0.12937240f;
    r2 = n += 0.35107720f;
    n *= r2;
    n += -0.64205056f;
    n *= r1;
    n = r0 += n;
    n *= 0.94178724f;
    n += r5;
    n *= -0.92624730f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.87194431f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.00271943f;
    return n;
} // Solution0

// Solution1 precision = 0.000021
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.36920375f;
    r0 = n += -1.13209939f;
    r1 = n *= -0.80330449f;
    r2 = n += 0.00326989f;
    n *= 1.13074231f;
    n += r1;
    r1 = n *= -0.22237992f;
    r3 = n += -0.15277311f;
    n *= r3;
    r3 = n += -0.88540787f;
    r4 = n *= -0.65243876f;
    r5 = n += -0.37031949f;
    n *= 0.95136237f;
    n += r2;
    n *= r1;
    r1 = n += -0.03429373f;
    n *= -0.43685633f;
    r2 = n += 0.19250804f;
    n *= r2;
    n += 0.83200169f;
    n *= r1;
    n = r0 += n;
    n *= -0.21334347f;
    n += r5;
    n *= 3.07904530f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.87264681f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.48230979f;
    return n;
} // Solution1

// Solution2 precision = 0.000043
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.29229978f;
    r0 = n += -0.22705609f;
    r1 = n *= -0.47884080f;
    r2 = n += -0.24916025f;
    n *= -0.13858756f;
    n += r1;
    r1 = n *= 1.05784941f;
    r3 = n += -0.31554300f;
    n *= r3;
    r3 = n += -0.03794325f;
    r4 = n *= 1.14528477f;
    r5 = n += -0.63402957f;
    n *= 0.10267164f;
    n += r2;
    n *= r1;
    r1 = n += -0.63224822f;
    n *= 0.46463275f;
    r2 = n += -1.99306130f;
    n *= r2;
    n += 0.44723862f;
    n *= r1;
    n = r0 += n;
    n *= 2.11811781f;
    n += r5;
    n *= -0.18444525f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.74843955f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.16252711f;
    return n;
} // Solution2
