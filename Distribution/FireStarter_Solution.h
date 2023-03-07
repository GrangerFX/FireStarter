// Run date: 03/06/23 15:32:16 Pacific Standard Time
// Run duration = 7028.205728 seconds
// Run count = 12
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 2
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 1
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 12

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

// Precision = 0.00018811

// Solution0 precision = 0.00011498
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.56991291f;
    n *= -0.18785131f;
    r0 = n *= -0.92713207f;
    r1 = n *= -0.17738310f;
    n = r0 *= n;
    r2 = n *= 2.06111407f;
    r3 = n += 1.76223767f;
    n += -1.58905327f;
    r4 = n *= -0.75542998f;
    r5 = n *= 1.58368444f;
    n += -1.95497131f;
    n = r3 *= n;
    n += r2;
    n *= -4.12578058f;
    n *= 1.97828221f;
    r2 = n *= -0.37890673f;
    n *= r3;
    n += 4.05235863f;
    n += -3.18214297f;
    r3 = n += -1.19164348f;
    r6 = n *= -1.48661757f;
    n *= r3;
    n += r5;
    n += r6;
    n *= r0;
    n += -0.13395181f;
    n += r1;
    n *= 0.17730696f;
    n += r2;
    n += -1.11046064f;
    n *= r4;
    n += -0.69009763f;
    return n;
} // Solution0

// Solution1 precision = 0.00016558
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.35427666f;
    n *= -0.41712478f;
    r0 = n *= 0.18792701f;
    r1 = n *= -1.85775733f;
    n = r0 *= n;
    r2 = n *= 1.11815226f;
    r3 = n += 1.18277335f;
    n += 1.67991328f;
    r4 = n *= -0.63087273f;
    r5 = n *= -1.49218643f;
    n += 2.57338333f;
    n = r3 *= n;
    n += r2;
    n *= 0.34762630f;
    n *= 0.51695573f;
    r2 = n *= -1.22005081f;
    n *= r3;
    n += -1.06312907f;
    n += 0.35389149f;
    r3 = n += 1.03456819f;
    r6 = n *= -0.42665026f;
    n *= r3;
    n += r5;
    n += r6;
    n *= r0;
    n += 0.11505683f;
    n += r1;
    n *= 0.78769749f;
    n += r2;
    n += 0.85181415f;
    n *= r4;
    n += 0.46366307f;
    return n;
} // Solution1

// Solution2 precision = 0.00018811
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.30062103f;
    n *= -1.14231336f;
    r0 = n *= -0.64310288f;
    r1 = n *= -0.27686512f;
    n = r0 *= n;
    r2 = n *= -0.06925049f;
    r3 = n += -1.73481560f;
    n += 0.86238742f;
    r4 = n *= -1.03614199f;
    r5 = n *= 0.95865810f;
    n += -0.08344913f;
    n = r3 *= n;
    n += r2;
    n *= -0.59714741f;
    n *= 1.02786875f;
    r2 = n *= 2.77811360f;
    n *= r3;
    n += -1.55495620f;
    n += 0.81557423f;
    r3 = n += 0.50410312f;
    r6 = n *= -0.61539465f;
    n *= r3;
    n += r5;
    n += r6;
    n *= r0;
    n += 0.92107558f;
    n += r1;
    n *= -1.15333641f;
    n += r2;
    n += 1.24354708f;
    n *= r4;
    n += -0.99772972f;
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
