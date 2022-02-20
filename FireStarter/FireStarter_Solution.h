#include <math.h>

// Run date: 02/19/22 19:09:41 Pacific Standard Time
// Run duration = 0.250202 seconds
// Run count = 144
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

// Precision = 0.182234
// Solution0 precision = 0.013756
inline float Solution0(float n)
{
    float r0, r1, r2;

    n *= -2.89864659f;
    n += 4.39760303f;
    r0 = n;
    n += 5.71824646f;
    n += fabsf(-3.73283267f);
    n *= 0.01123944f;
    n += -0.59786093f;
    r1 = n;
    n += 0.54653072f;
    n *= 11.89022350f;
    n += -0.61426169f;
    n *= r0;
    r0 = n;
    n += r1;
    n *= -0.02915663f;
    n += fabsf(0.07007712f);
    r1 = n;
    n *= 0.11916459f;
    n += fabsf(0.11774625f);
    n *= -0.42215821f;
    n += -0.05413926f;
    n *= r0;
    n += 0.99705416f;
    r0 = n;
    n += -0.78101504f;
    n += r0;
    r0 = n;
    n += -1.91482031f;
    n *= -0.32093555f;
    r2 = n;
    n *= r2;
    r2 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += -0.12452450f;
    r0 = n;
    n += -0.25505033f;
    n *= r1;
    n += -1.64828134f;
    n += r2;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.002473
inline float Solution1(float n)
{
    float r0, r1, r2;

    n *= -0.70421773f;
    n += -0.01432204f;
    r0 = n;
    n += 1.73794830f;
    n += fabsf(-0.45795983f);
    n *= -0.02598019f;
    n += 0.03315246f;
    r1 = n;
    n += 0.91649586f;
    n *= 0.48545182f;
    n += -0.44831344f;
    n *= r0;
    r0 = n;
    n += r1;
    n *= 5.94838190f;
    n += fabsf(0.09422798f);
    r1 = n;
    n *= 7.35894156f;
    n += fabsf(0.01723479f);
    n *= 0.96070158f;
    n += 10.38930130f;
    n *= r0;
    n += -0.61517149f;
    r0 = n;
    n += 1.00398481f;
    n += r0;
    r0 = n;
    n += 0.12560195f;
    n *= 0.32667187f;
    r2 = n;
    n *= r2;
    r2 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 1.20991111f;
    r0 = n;
    n += 0.80338532f;
    n *= r1;
    n += 0.15343903f;
    n += r2;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.071806
inline float Solution2(float n)
{
    float r0, r1, r2;

    n *= 0.27427197f;
    n += -0.21139140f;
    r0 = n;
    n += 1.72673416f;
    n += fabsf(0.34287196f);
    n *= -0.10070527f;
    n += 0.20486763f;
    r1 = n;
    n += 0.27198288f;
    n *= 3.14948440f;
    n += -0.71939510f;
    n *= r0;
    r0 = n;
    n += r1;
    n *= 1.17681038f;
    n += fabsf(-0.12595488f);
    r1 = n;
    n *= 3.35897994f;
    n += fabsf(2.01517844f);
    n *= 4.10305119f;
    n += 4.78143787f;
    n *= r0;
    n += -1.50397384f;
    r0 = n;
    n += -0.92308396f;
    n += r0;
    r0 = n;
    n += -4.45569420f;
    n *= 0.15583119f;
    r2 = n;
    n *= r2;
    r2 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 4.88662481f;
    r0 = n;
    n += -1.25154829f;
    n *= r1;
    n += -1.16845620f;
    n += r2;
    n += r0;
    return n;
} // Solution2

// Solution3 precision = 0.182234
inline float Solution3(float n)
{
    float r0, r1, r2;

    n *= 0.06621201f;
    n += -0.12279482f;
    r0 = n;
    n += -0.46794704f;
    n += fabsf(-0.02697354f);
    n *= -0.24693029f;
    n += -0.03110986f;
    r1 = n;
    n += 0.13227578f;
    n *= 5.08186531f;
    n += -1.11251235f;
    n *= r0;
    r0 = n;
    n += r1;
    n *= 1.82950902f;
    n += fabsf(-0.00014518f);
    r1 = n;
    n *= 200.81948853f;
    n += fabsf(176.40922546f);
    n *= 0.21009381f;
    n += 0.13513719f;
    n *= r0;
    n += 2.00327682f;
    r0 = n;
    n += 2.18680787f;
    n += r0;
    r0 = n;
    n += -9.05038452f;
    n *= -0.21343482f;
    r2 = n;
    n *= r2;
    r2 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 6.66755962f;
    r0 = n;
    n += -18.54387856f;
    n *= r1;
    n += -19.02376747f;
    n += r2;
    n += r0;
    return n;
} // Solution3

