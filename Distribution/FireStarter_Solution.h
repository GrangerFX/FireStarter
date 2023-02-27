// Run date: 02/26/23 21:12:10 Pacific Standard Time
// Run duration = 2609.718526 seconds
// Run count = 150
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
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 150

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

// Precision = 0.00000179

// Solution0 precision = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.47194886f;
    r0 = n += -1.48267138f;
    r1 = n *= -0.80820084f;
    n += -0.00000068f;
    n = r1 *= n;
    n += -1.12008369f;
    n *= 3.11754107f;
    r2 = n *= 0.01556399f;
    n += 1.07490528f;
    r3 = n += -2.07424068f;
    r4 = n *= 0.49311775f;
    r5 = n += -1.32073426f;
    n += 0.16675599f;
    n = r2 += n;
    n = r5 *= n;
    n += -0.72318822f;
    n = r2 *= n;
    r6 = n *= 1.91597414f;
    n += 0.38818225f;
    n *= r1;
    n *= r2;
    n *= 1.77535701f;
    n += r6;
    n *= r4;
    n += 25.45220947f;
    n *= r5;
    n *= r3;
    n *= r0;
    n += 0.90176475f;
    n += -0.98505503f;
    n += 0.08326180f;
    n *= 0.02130786f;
    return n;
} // Solution0

// Solution1 precision = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.57653719f;
    r0 = n += 1.78188121f;
    r1 = n *= 1.18045831f;
    n += -0.00000651f;
    n = r1 *= n;
    n += -1.32115269f;
    n *= -0.00365860f;
    r2 = n *= 4.81712484f;
    n += -0.47769323f;
    r3 = n += 1.98054516f;
    r4 = n *= -1.20258474f;
    r5 = n += 0.21006817f;
    n += 0.97719061f;
    n = r2 += n;
    n = r5 *= n;
    n += -0.62270641f;
    n = r2 *= n;
    r6 = n *= 2.31926441f;
    n += -1.52485943f;
    n *= r1;
    n *= r2;
    n *= 0.31347615f;
    n += r6;
    n *= r4;
    n += 0.70539373f;
    n *= r5;
    n *= r3;
    n *= r0;
    n += -0.37699750f;
    n += -0.82602859f;
    n += 1.03514564f;
    n *= 0.70368439f;
    return n;
} // Solution1

// Solution2 precision = 0.00000179
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.58234853f;
    r0 = n += 1.52458847f;
    r1 = n *= 0.64686698f;
    n += -0.00000925f;
    n = r1 *= n;
    n += -1.12493742f;
    n *= 0.23908286f;
    r2 = n *= -0.37171754f;
    n += -2.28805757f;
    r3 = n += 2.79429793f;
    r4 = n *= -1.58616447f;
    r5 = n += -0.27034384f;
    n += 0.06825952f;
    n = r2 += n;
    n = r5 *= n;
    n += 3.45842290f;
    n = r2 *= n;
    r6 = n *= -5.82245684f;
    n += 16.84450150f;
    n *= r1;
    n *= r2;
    n *= 0.20899487f;
    n += r6;
    n *= r4;
    n += -3.06735754f;
    n *= r5;
    n *= r3;
    n *= r0;
    n += -0.00934834f;
    n += -2.37261605f;
    n += -5.23919678f;
    n *= -0.06870230f;
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
