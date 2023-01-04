// Run date: 01/04/23 09:51:57 Pacific Standard Time
// Run duration = 107.908197 seconds
// Run count = 40
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
// Solution Generation = 40

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

// Precision = 0.00000077

// Solution0 precision = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.24413063f;
    n = r1 *= n;
    n *= -0.13568749f;
    n += 1.88434064f;
    r2 = n *= -13.22573090f;
    r3 = n *= -0.34543428f;
    n *= 0.10194906f;
    n *= -0.97993535f;
    r4 = n *= -0.04113173f;
    n = r3 *= n;
    r5 = n *= 3.71330285f;
    r6 = n *= 1.14114702f;
    n = r1 *= n;
    r7 = n *= -1.86855900f;
    n *= r2;
    n += 7.40379477f;
    n += -16.80095863f;
    n += 1.57807207f;
    n *= 0.00226568f;
    n *= r6;
    n += -0.97283715f;
    n += -1.40624404f;
    n = r1 += n;
    n *= r7;
    n += -0.60443759f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 precision = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= -0.23782745f;
    n = r1 *= n;
    n *= -0.22404337f;
    n += 3.78480148f;
    r2 = n *= 9.31133556f;
    r3 = n *= 0.18127388f;
    n *= 0.45724502f;
    n *= 0.44524512f;
    r4 = n *= -0.08996645f;
    n = r3 *= n;
    r5 = n *= -0.60184878f;
    r6 = n *= -2.15683413f;
    n = r1 *= n;
    r7 = n *= 2.13351917f;
    n *= r2;
    n += -4.86055851f;
    n += -15.74392509f;
    n += 29.43723297f;
    n *= -0.00302808f;
    n *= r6;
    n += -0.49163899f;
    n += 2.63323808f;
    n = r1 += n;
    n *= r7;
    n += 0.75554764f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813182f;
    return n;
} // Solution1

// Solution2 precision = 0.00000077
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 0.17489466f;
    n = r1 *= n;
    n *= 0.09316853f;
    n += -0.48073411f;
    r2 = n *= 2.16231489f;
    r3 = n *= -1.07852280f;
    n *= 0.53516042f;
    n *= -1.31648803f;
    r4 = n *= -0.85941744f;
    n = r3 *= n;
    r5 = n *= 0.86929584f;
    r6 = n *= 5.03333998f;
    n = r1 *= n;
    r7 = n *= -1.76478469f;
    n *= r2;
    n += -2.83996940f;
    n += -1.43840456f;
    n += 4.51250744f;
    n *= 0.03584889f;
    n *= r6;
    n += -2.25043154f;
    n += 0.12466323f;
    n = r1 += n;
    n *= r7;
    n += -1.23655546f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359885f;
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
