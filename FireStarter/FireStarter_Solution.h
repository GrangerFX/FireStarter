#include <math.h>

// Run date: 02/26/22 09:52:43 Pacific Standard Time
// Run duration = 0.275003 seconds
// Run count = 50
// Run units = 1
// Run population = 8704
// Run iterations = 512
// Run generations = 100
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

// Precision = 0.079864
// Solution0 precision = 0.000600
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.16108291f;
    r0 = n;
    n += 0.60412973f;
    r1 = n;
    n *= 0.00000084f;
    n *= 14.33605862f;
    r2 = n;
    n *= 11.31848431f;
    n += -0.63402134f;
    n += r1;
    n *= -0.13953841f;
    r1 = n;
    n += 0.20176078f;
    n += 0.15339972f;
    r3 = n;
    n += 0.16505003f;
    r4 = n;
    n += 0.34348673f;
    n *= r0;
    r0 = n;
    n += 1.97183418f;
    r5 = n;
    n *= r5;
    n += r2;
    n *= 0.48073107f;
    n += 1.31164420f;
    n += fabsf(r1);
    r1 = n;
    n += -6.05764723f;
    n *= 0.06248222f;
    r2 = n;
    n *= r3;
    n *= -2.10231018f;
    n += fabsf(r1);
    n *= -0.62615693f;
    n *= r0;
    n *= r4;
    n += r2;
    n *= 1.33369589f;
    n += 0.48754895f;
    n += -0.06741060f;
    n *= -0.88723201f;
    return n;
} // Solution0

// Solution1 precision = 0.000527
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.76071727f;
    r0 = n;
    n += 0.31184071f;
    r1 = n;
    n *= 0.00029118f;
    n *= 4.78292942f;
    r2 = n;
    n *= -1.29424596f;
    n += -0.13779777f;
    n += r1;
    n *= 0.21320674f;
    r1 = n;
    n += -0.09158144f;
    n += -0.07844298f;
    r3 = n;
    n += -0.87574357f;
    r4 = n;
    n += -1.01708734f;
    n *= r0;
    r0 = n;
    n += -0.51360637f;
    r5 = n;
    n *= r5;
    n += r2;
    n *= 0.41089380f;
    n += 1.56808519f;
    n += fabsf(r1);
    r1 = n;
    n += -0.59332508f;
    n *= 0.07900995f;
    r2 = n;
    n *= r3;
    n *= 0.74855942f;
    n += fabsf(r1);
    n *= 0.79726934f;
    n *= r0;
    n *= r4;
    n += r2;
    n *= -1.62269354f;
    n += 2.56306267f;
    n += -0.87879014f;
    n *= -0.05497173f;
    return n;
} // Solution1

// Solution2 precision = 0.003261
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.40283003f;
    r0 = n;
    n += 0.97523946f;
    r1 = n;
    n *= -0.00000059f;
    n *= -9.14726257f;
    r2 = n;
    n *= 2.20068026f;
    n += -0.36451972f;
    n += r1;
    n *= 0.12187110f;
    r1 = n;
    n += -0.23544213f;
    n += -0.26990169f;
    r3 = n;
    n += 0.17148294f;
    r4 = n;
    n += -0.28522280f;
    n *= r0;
    r0 = n;
    n += -2.00143862f;
    r5 = n;
    n *= r5;
    n += r2;
    n *= 1.93456817f;
    n += 1.77207112f;
    n += fabsf(r1);
    r1 = n;
    n += 0.62892276f;
    n *= 0.01555493f;
    r2 = n;
    n *= r3;
    n *= -5.89294672f;
    n += fabsf(r1);
    n *= 1.18158424f;
    n *= r0;
    n *= r4;
    n += r2;
    n *= -2.06027937f;
    n += -0.89650178f;
    n += -0.31121266f;
    n *= -0.35426232f;
    return n;
} // Solution2

// Solution3 precision = 0.079864
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.04106428f;
    r0 = n;
    n += -0.50737894f;
    r1 = n;
    n *= -11.60365868f;
    n *= 0.00003313f;
    r2 = n;
    n *= -7.68187952f;
    n += -0.93965739f;
    n += r1;
    n *= 0.19719627f;
    r1 = n;
    n += -0.40162814f;
    n += -0.03417022f;
    r3 = n;
    n += 0.18100031f;
    r4 = n;
    n += -0.51218677f;
    n *= r0;
    r0 = n;
    n += 0.65923142f;
    r5 = n;
    n *= r5;
    n += r2;
    n *= -0.73140925f;
    n += -0.10010525f;
    n += fabsf(r1);
    r1 = n;
    n += -1.01952565f;
    n *= 0.21799490f;
    r2 = n;
    n *= r3;
    n *= 9.19042110f;
    n += fabsf(r1);
    n *= -0.36634266f;
    n *= r0;
    n *= r4;
    n += r2;
    n *= -11.55240536f;
    n += -0.43718669f;
    n += -2.36970854f;
    n *= 0.77404398f;
    return n;
} // Solution3

