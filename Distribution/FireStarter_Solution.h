// Run date: 01/19/23 18:24:48 Pacific Standard Time
// Run duration = 97.491386 seconds
// Run count = 112
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 112

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

// Precision = 0.00015545

// Solution0 precision = 0.00000143
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159274f;
    r0 = n *= -1.01629245f;
    n += -41.57048798f;
    r1 = n *= 0.00000000f;
    n += 0.96015656f;
    n = r0 *= n;
    n *= -1.41984117f;
    n *= -0.01274265f;
    r2 = n *= 4.89832544f;
    n *= r2;
    n *= -2.09698892f;
    r2 = n *= -1.69859374f;
    r3 = n += -2.04933238f;
    n *= 1.01829171f;
    n += 0.57736588f;
    n *= 0.29248413f;
    n = r1 += n;
    n *= r2;
    n *= r3;
    r3 = n += -0.23996826f;
    n *= -1.81572008f;
    n = r3 += n;
    n += -1.15654242f;
    r2 = n += 1.09993792f;
    n += -1.65303421f;
    n *= r1;
    n += r3;
    r3 = n += 0.94907063f;
    n *= r2;
    n *= 2.24022603f;
    n *= r0;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00012600
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += 1.30711031f;
    r0 = n *= 0.33432010f;
    n += -1.07379377f;
    r1 = n *= -0.74026179f;
    n += 1.77827418f;
    n = r0 *= n;
    n *= -2.17881417f;
    n *= 0.81883359f;
    r2 = n *= -0.48533612f;
    n *= r2;
    n *= 0.01769190f;
    r2 = n *= -4.45796347f;
    r3 = n += 1.39664817f;
    n *= -7.58781672f;
    n += 9.93171310f;
    n *= -0.00349953f;
    n = r1 += n;
    n *= r2;
    n *= r3;
    r3 = n += 1.45532846f;
    n *= 0.44303256f;
    n = r3 += n;
    n += -0.16593480f;
    r2 = n += -2.05615592f;
    n += 0.80366653f;
    n *= r1;
    n += r3;
    r3 = n += 1.22733164f;
    n *= r2;
    n *= -0.38994625f;
    n *= r0;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00015545
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += 0.00010288f;
    r0 = n *= -0.36625114f;
    n += -7.84150982f;
    r1 = n *= 0.01821675f;
    n += 0.64264882f;
    n = r0 *= n;
    n *= 0.30841821f;
    n *= -0.42181680f;
    r2 = n *= -0.25519019f;
    n *= r2;
    n *= 29.08914757f;
    r2 = n *= -19.97159958f;
    r3 = n += 0.61413008f;
    n *= 0.64270657f;
    n += 0.57069337f;
    n *= -0.86595869f;
    n = r1 += n;
    n *= r2;
    n *= r3;
    r3 = n += 0.18320206f;
    n *= 0.98151839f;
    n = r3 += n;
    n += -1.82076097f;
    r2 = n += 1.31161976f;
    n += 4.27645111f;
    n *= r1;
    n += r3;
    r3 = n += 1.23040414f;
    n *= r2;
    n *= 8.69741631f;
    n *= r0;
    n *= r3;
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
