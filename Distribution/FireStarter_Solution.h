// Run date: 03/08/25 09:51:21 Pacific Standard Time
// Run duration = 24.402591 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00484959
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#if 0
namespace Constants {
    constexpr long double PIld = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899L; // 80 digits of precision but long double is only 80 bits.
    constexpr double PId = 3.1415926535897932;
    constexpr float PIf = 3.14159265f;
} // Constants
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
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
            return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.63087630f;
    n *= 2.22208476f;
    r0 = n *= 1.30987155f;
    n *= 0.03711772f;
    n *= -1.36638653f;
    n *= 0.31120846f;
    n += 1.87805259f;
    n *= 1.26080525f;
    r1 = n += -2.40903449f;
    r2 = n += -0.03309384f;
    n *= 1.97330308f;
    r3 = n *= 3.71491408f;
    r4 = n *= -0.73210579f;
    r5 = n += -2.62879682f;
    r6 = n *= -1.82539248f;
    n = r2 *= n;
    r7 = n *= -0.30024970f;
    n = r7 += n;
    n *= -0.54629320f;
    n *= r0;
    r0 = n *= 1.18351638f;
    n *= r7;
    n += -0.54437762f;
    n *= 4.09959173f;
    n *= 0.36822882f;
    n += r3;
    n += r2;
    n += r0;
    n *= r5;
    n *= r1;
    n += r4;
    n *= r6;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.39063096f;
    n *= -1.02676868f;
    r0 = n *= 2.36096025f;
    n *= -2.86960793f;
    n *= -10.63254070f;
    n *= -0.07077775f;
    n += -3.33436894f;
    n *= 0.12501879f;
    r1 = n += 1.91431844f;
    r2 = n += -2.36722016f;
    n *= -1.36447525f;
    r3 = n *= -0.10254585f;
    r4 = n *= 2.10729265f;
    r5 = n += -0.91702831f;
    r6 = n *= 0.81029510f;
    n = r2 *= n;
    r7 = n *= 0.07948556f;
    n = r7 += n;
    n *= -0.15199916f;
    n *= r0;
    r0 = n *= 4.73258829f;
    n *= r7;
    n += 1.25074649f;
    n *= -0.76561135f;
    n *= 0.50648010f;
    n += r3;
    n += r2;
    n += r0;
    n *= r5;
    n *= r1;
    n += r4;
    n *= r6;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 0.69312036f;
    n *= -2.53497052f;
    r0 = n *= -1.09279931f;
    n *= -4.68872118f;
    n *= -0.14260280f;
    n *= 0.24810767f;
    n += 0.64120179f;
    n *= 1.02483499f;
    r1 = n += -1.04127157f;
    r2 = n += 0.99498165f;
    n *= -0.08331795f;
    r3 = n *= -1.82768953f;
    r4 = n *= 1.23739803f;
    r5 = n += -0.98909825f;
    r6 = n *= -1.13088214f;
    n = r2 *= n;
    r7 = n *= -0.41524035f;
    n = r7 += n;
    n *= 6.35349894f;
    n *= r0;
    r0 = n *= 0.37614763f;
    n *= r7;
    n += -3.91522837f;
    n *= -0.97067022f;
    n *= -0.90963256f;
    n += r3;
    n += r2;
    n += r0;
    n *= r5;
    n *= r1;
    n += r4;
    n *= r6;
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
