// Run date: 01/03/23 09:01:36 Pacific Standard Time
// Run duration = 1501.497578 seconds
// Run count = 10484
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run units = 8
// Run processes = 16
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 11000
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 10484

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

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
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_VARIATIONS 3

// Precision = 0.00004363

// Solution0 precision = 0.00000858
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159250f;
    r1 = n *= -0.33523181f;
    n = r1 *= n;
    n *= 1.86349678f;
    n += -7.78754950f;
    r2 = n *= 1.21646321f;
    r3 = n *= -0.60056877f;
    n *= -0.69799107f;
    n *= -0.33755565f;
    r4 = n *= 0.46024495f;
    n = r3 *= n;
    r5 = n *= 0.17368759f;
    r6 = n *= 0.05125024f;
    n = r1 *= n;
    r7 = n *= 3.07838249f;
    n *= r2;
    n *= 0.00052995f;
    n += -0.86150402f;
    n += 0.63139701f;
    n *= 2.32735777f;
    n = r6 *= n;
    n += 1.21662354f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -0.73555470f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.00000018f;
    return n;
} // Solution0

// Solution1 precision = 0.00002372
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09064651f;
    r1 = n *= -0.59149951f;
    n = r1 *= n;
    n *= -0.02657411f;
    n += 1.06842697f;
    r2 = n *= -1.86474419f;
    r3 = n *= -3.57110333f;
    n *= 0.18486254f;
    n *= -1.08647978f;
    r4 = n *= 0.24858406f;
    n = r3 *= n;
    r5 = n *= -0.14602213f;
    r6 = n *= -0.79219794f;
    n = r1 *= n;
    r7 = n *= -0.00897215f;
    n *= r2;
    n *= 5.09227276f;
    n += 0.55090451f;
    n += -0.81587160f;
    n *= -1.22495127f;
    n = r6 *= n;
    n += -1.61432445f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.63624024f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813436f;
    return n;
} // Solution1

// Solution2 precision = 0.00004363
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61796999f;
    r1 = n *= -0.86646253f;
    n = r1 *= n;
    n *= -0.02362594f;
    n += 2.79232430f;
    r2 = n *= 0.31931379f;
    r3 = n *= 1.34911966f;
    n *= 1.43558538f;
    n *= 0.21208064f;
    r4 = n *= 1.43531609f;
    n = r3 *= n;
    r5 = n *= -1.45242119f;
    r6 = n *= 0.48809564f;
    n = r1 *= n;
    r7 = n *= 0.14498499f;
    n *= r2;
    n *= -1.55085206f;
    n += -6.25391245f;
    n += -3.65777588f;
    n *= 0.17782876f;
    n = r6 *= n;
    n += 0.80555326f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 1.36630070f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52357942f;
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
