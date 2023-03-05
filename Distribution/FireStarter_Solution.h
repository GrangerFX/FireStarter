// Run date: 03/04/23 15:49:15 Pacific Standard Time
// Run duration = 2959.213990 seconds
// Run count = 27
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 27

#define SOLUTION_VARIATIONS 3

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

// Precision = 0.00030489

// Solution0 precision = 0.00028357
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.41667691f;
    r1 = n += -0.21415755f;
    r2 = n *= 0.10909184f;
    r3 = n += -0.46653268f;
    r4 = n += 0.34708658f;
    r5 = n += 1.75338519f;
    n = r3 *= n;
    r6 = n *= 0.67958397f;
    n *= r5;
    n += 0.49914226f;
    n = r4 *= n;
    r5 = n += 1.81936610f;
    r7 = n += 0.32521889f;
    n += 0.29891184f;
    n *= r5;
    n = r7 *= n;
    n = r6 *= n;
    n *= 0.40420938f;
    n += 0.01767209f;
    n *= r2;
    n += -1.66345179f;
    n *= r3;
    n += -0.45006800f;
    n *= r0;
    n += 1.36156499f;
    n = r6 *= n;
    n *= r6;
    n *= r1;
    n += -2.30772257f;
    n += 4.05658817f;
    n += r7;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.00013423
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.37070552f;
    r1 = n += -1.31623363f;
    r2 = n *= -0.10997280f;
    r3 = n += 0.47353655f;
    r4 = n += -0.28931963f;
    r5 = n += 0.91734105f;
    n = r3 *= n;
    r6 = n *= 1.35867774f;
    n *= r5;
    n += -1.91612494f;
    n = r4 *= n;
    r5 = n += 1.78579712f;
    r7 = n += 0.11374941f;
    n += -1.94891477f;
    n *= r5;
    n = r7 *= n;
    n = r6 *= n;
    n *= -2.70587707f;
    n += 0.34859282f;
    n *= r2;
    n += 0.60230714f;
    n *= r3;
    n += -3.61583567f;
    n *= r0;
    n += -3.30929375f;
    n = r6 *= n;
    n *= r6;
    n *= r1;
    n += -0.30023086f;
    n += 3.91668606f;
    n += r7;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.00030489
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.51694262f;
    r1 = n += 1.79249191f;
    r2 = n *= -0.07783817f;
    r3 = n += -0.85312617f;
    r4 = n += 1.78309119f;
    r5 = n += -2.16767001f;
    n = r3 *= n;
    r6 = n *= -0.97148895f;
    n *= r5;
    n += -1.14728510f;
    n = r4 *= n;
    r5 = n += -0.97991121f;
    r7 = n += -0.53453958f;
    n += 2.10962200f;
    n *= r5;
    n = r7 *= n;
    n = r6 *= n;
    n *= -0.04378020f;
    n += 0.25348550f;
    n *= r2;
    n += 2.41015434f;
    n *= r3;
    n += -1.35950756f;
    n *= r0;
    n += -1.52930021f;
    n = r6 *= n;
    n *= r6;
    n *= r1;
    n += -2.97732854f;
    n += 0.72911423f;
    n += r7;
    n *= r4;
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
