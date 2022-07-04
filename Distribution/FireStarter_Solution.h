// Run date: 07/04/22 12:42:07 Pacific Daylight Time
// Run duration = 1.857620 seconds
// Run count = 43
// Run mode = 4
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run seed = 0
// Solution Generation = 4200

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

// Precision = 0.000003

// Solution0 precision = 0.000003
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159274f;
    r0 = n *= 1.00281954f;
    n *= 0.80972201f;
    r1 = n *= 1.14558017f;
    n = r0 *= n;
    n *= -0.34331688f;
    n *= -0.55283922f;
    r2 = n += -0.97710156f;
    r3 = n *= 0.01190483f;
    n *= r0;
    n *= 0.75964284f;
    n *= -0.07961462f;
    n *= -0.62981755f;
    n += -1.07562637f;
    r0 = n *= 0.71831536f;
    n = r2 += n;
    n += 1.29722703f;
    n *= -0.12040658f;
    n += 1.02743232f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 1.09567094f;
    n = r2 *= n;
    n *= 1.70764983f;
    n *= r3;
    n += 23.04992676f;
    n *= 0.00000000f;
    n += r2;
    n += r0;
    n *= -0.45640743f;
    return n;
} // Solution0

// Solution1 precision = 0.000002
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065843f;
    r0 = n *= 0.42023930f;
    n *= 1.10651827f;
    r1 = n *= -0.27441317f;
    n = r0 *= n;
    n *= -0.86450046f;
    n *= 0.78646725f;
    r2 = n += -0.51474828f;
    r3 = n *= 0.18644281f;
    n *= r0;
    n *= -1.16487300f;
    n *= 0.48012736f;
    n *= -0.53277236f;
    n += 0.30160278f;
    r0 = n *= -1.34286499f;
    n = r2 += n;
    n += -1.04747188f;
    n *= 1.75733817f;
    n += -0.60331625f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -1.64000797f;
    n = r2 *= n;
    n *= -1.01952171f;
    n *= r3;
    n += 0.16506679f;
    n *= 1.41144252f;
    n += r2;
    n += r0;
    n *= -0.50704187f;
    return n;
} // Solution1

// Solution2 precision = 0.000001
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799383f;
    r0 = n *= -0.67793870f;
    n *= 1.14638948f;
    r1 = n *= -1.47761130f;
    n = r0 *= n;
    n *= -0.19939286f;
    n *= -0.98846585f;
    r2 = n += 0.47668406f;
    r3 = n *= -0.01119170f;
    n *= r0;
    n *= -1.02305937f;
    n *= -0.46269086f;
    n *= -1.24564457f;
    n += 0.37573683f;
    r0 = n *= 0.75162923f;
    n = r2 += n;
    n += -0.48321995f;
    n *= -0.09463479f;
    n += -2.26292419f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.06598759f;
    n = r2 *= n;
    n *= -0.00722264f;
    n *= r3;
    n += -10.61300945f;
    n *= -0.04227784f;
    n += r2;
    n += r0;
    n *= 1.16693676f;
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
