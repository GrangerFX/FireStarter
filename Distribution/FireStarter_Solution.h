// Run date: 07/16/22 11:18:04 Pacific Daylight Time
// Run duration = 0.742374 seconds
// Run count = 5
// Run mode = 2
// Run units = 1
// Run process = 0
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 8337
// Solution Generation = 4

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

// Precision = 0.00000465

// Solution0 precision = 0.00000037
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159274f;
    r0 = n *= -0.80246979f;
    n *= -0.53107446f;
    r1 = n *= -0.41074976f;
    n = r0 *= n;
    r2 = n += -0.72694939f;
    n *= 0.10300229f;
    r3 = n += -0.70519722f;
    r4 = n *= -0.10898563f;
    n *= r0;
    n *= 0.64965236f;
    n *= 0.48702475f;
    n *= 0.18737075f;
    n += 0.55261433f;
    r0 = n *= -1.46372783f;
    n = r3 += n;
    n += -0.65256447f;
    n *= r2;
    n += 1.38951707f;
    n = r3 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.64822215f;
    n = r3 *= n;
    n *= 1.17758846f;
    n *= r4;
    n += 0.15010545f;
    n *= -0.00000002f;
    n += r3;
    n += r0;
    n *= 0.84869844f;
    return n;
} // Solution0

// Solution1 precision = 0.00000465
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065795f;
    r0 = n *= 0.39241621f;
    n *= 0.47213417f;
    r1 = n *= -0.75305712f;
    n = r0 *= n;
    r2 = n += 1.37692142f;
    n *= 0.89442170f;
    r3 = n += 1.43382454f;
    r4 = n *= -0.02335910f;
    n *= r0;
    n *= -0.30225298f;
    n *= 0.83782995f;
    n *= -1.25250101f;
    n += 0.74581712f;
    r0 = n *= -2.02292895f;
    n = r3 += n;
    n += 0.67796350f;
    n *= r2;
    n += 0.27034867f;
    n = r3 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.06219039f;
    n = r3 *= n;
    n *= -1.84924936f;
    n *= r4;
    n += 0.84856147f;
    n *= 0.09207337f;
    n += r3;
    n += r0;
    n *= -1.51198292f;
    return n;
} // Solution1

// Solution2 precision = 0.00000298
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799431f;
    r0 = n *= -0.62429160f;
    n *= -0.84738165f;
    r1 = n *= 1.00349724f;
    n = r0 *= n;
    r2 = n += 1.02354848f;
    n *= 0.00544171f;
    r3 = n += 0.25574747f;
    r4 = n *= -0.61037433f;
    n *= r0;
    n *= 1.03918803f;
    n *= -0.46850586f;
    n *= -1.24541247f;
    n += -0.96916568f;
    r0 = n *= -0.80445737f;
    n = r3 += n;
    n += 0.07139848f;
    n *= r2;
    n += 0.61497557f;
    n = r3 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.00219557f;
    n = r3 *= n;
    n *= -0.21885282f;
    n *= r4;
    n += 1.23687649f;
    n *= -0.32271308f;
    n += r3;
    n += r0;
    n *= -1.31176305f;
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
