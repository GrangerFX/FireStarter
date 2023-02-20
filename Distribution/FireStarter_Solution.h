// Run date: 02/20/23 12:05:42 Pacific Standard Time
// Run duration = 119.997027 seconds
// Run count = 135
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
// Solution Generation = 135

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

// Precision = 0.00000024

// Solution0 precision = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    n *= 2.07310653f;
    r1 = n *= -0.02629299f;
    r2 = n *= -3.93255472f;
    n *= r1;
    n += 0.33881503f;
    r1 = n += 2.15698099f;
    n = r1 *= n;
    r3 = n += -4.14040804f;
    r4 = n *= -0.01817719f;
    r5 = n += -0.54677337f;
    r6 = n *= -0.78540462f;
    r7 = n += 0.09476546f;
    n += 1.43253767f;
    n *= r0;
    n = r5 *= n;
    r0 = n *= 0.42705506f;
    n *= r7;
    n *= r5;
    n += 0.85460681f;
    n += -3.46129966f;
    n = r0 *= n;
    n = r2 += n;
    n *= r6;
    n *= r1;
    n *= r3;
    n += r0;
    n += r2;
    n *= r4;
    n += -0.00264195f;
    n += 0.00264195f;
    n *= 2.23081374f;
    return n;
} // Solution0

// Solution1 precision = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065890f;
    n *= -0.02851548f;
    r1 = n *= 1.56055951f;
    r2 = n *= -1.51408124f;
    n *= r1;
    n += -0.12894219f;
    r1 = n += 1.98921549f;
    n = r1 *= n;
    r3 = n += -0.40418684f;
    r4 = n *= -0.20970412f;
    r5 = n += 0.21804705f;
    r6 = n *= 0.71674186f;
    r7 = n += -2.05206108f;
    n += 0.40776706f;
    n *= r0;
    n = r5 *= n;
    r0 = n *= -0.20199262f;
    n *= r7;
    n *= r5;
    n += -2.87550259f;
    n += -0.93382007f;
    n = r0 *= n;
    n = r2 += n;
    n *= r6;
    n *= r1;
    n *= r3;
    n += r0;
    n += r2;
    n *= r4;
    n += -0.23150192f;
    n += 0.29433820f;
    n *= -1.87999797f;
    return n;
} // Solution1

// Solution2 precision = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799407f;
    n *= -0.09437396f;
    r1 = n *= -1.70246351f;
    r2 = n *= 1.03333163f;
    n *= r1;
    n += -1.40984893f;
    r1 = n += -0.86258197f;
    n = r1 *= n;
    r3 = n += -1.46925509f;
    r4 = n *= 0.41877168f;
    r5 = n += -1.14049339f;
    r6 = n *= -0.43276462f;
    r7 = n += 1.02757859f;
    n += -0.22796826f;
    n *= r0;
    n = r5 *= n;
    r0 = n *= 0.00238566f;
    n *= r7;
    n *= r5;
    n += -1.57768333f;
    n += -3.00167775f;
    n = r0 *= n;
    n = r2 += n;
    n *= r6;
    n *= r1;
    n *= r3;
    n += r0;
    n += r2;
    n *= r4;
    n += 0.61337495f;
    n += -0.29922736f;
    n *= 1.66672862f;
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
