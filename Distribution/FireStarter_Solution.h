// Run date: 02/20/23 14:24:31 Pacific Standard Time
// Run duration = 79.557453 seconds
// Run count = 25
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
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 25

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

// Precision = 0.00038764

// Solution0 precision = 0.00038764
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.19658668f;
    n *= 0.63369983f;
    r0 = n *= -0.91937506f;
    n += 0.34689203f;
    r1 = n += 1.59981382f;
    n *= r1;
    n += -0.57366014f;
    n *= 0.50827408f;
    n *= 0.32552600f;
    n *= 0.43226957f;
    r1 = n += -1.31718349f;
    n *= r1;
    n += -1.25140715f;
    r1 = n *= -0.47703066f;
    r2 = n += -0.48410010f;
    n += -1.42438567f;
    r3 = n += -1.90054834f;
    r4 = n += 1.81514752f;
    n *= -0.92709643f;
    n = r0 += n;
    n *= 0.19984587f;
    n += 1.74761271f;
    n *= -0.72237873f;
    n *= -0.77176970f;
    n *= -0.83252752f;
    n *= r1;
    n *= r3;
    n *= r0;
    n *= 2.29389930f;
    n *= r2;
    n += r4;
    n += 1.99707747f;
    return n;
} // Solution0

// Solution1 precision = 0.00014877
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.95609164f;
    n *= -0.49345648f;
    r0 = n *= 1.98605525f;
    n += -1.90509868f;
    r1 = n += 2.04460835f;
    n *= r1;
    n += 1.00726998f;
    n *= -1.39309716f;
    n *= -0.25803199f;
    n *= -0.04128981f;
    r1 = n += 1.72397709f;
    n *= r1;
    n += -1.11002553f;
    r1 = n *= 0.77191943f;
    r2 = n += 0.86307383f;
    n += -2.50199080f;
    r3 = n += 1.42387760f;
    r4 = n += 1.37049603f;
    n *= -0.76780868f;
    n = r0 += n;
    n *= -1.20594943f;
    n += -2.19714618f;
    n *= 0.01347190f;
    n *= 3.33627033f;
    n *= 1.44297779f;
    n *= r1;
    n *= r3;
    n *= r0;
    n *= 1.12177694f;
    n *= r2;
    n += r4;
    n += -1.50250280f;
    return n;
} // Solution1

// Solution2 precision = 0.00032585
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.54672515f;
    n *= -1.05428088f;
    r0 = n *= -0.99669224f;
    n += -0.28787181f;
    r1 = n += -1.02111924f;
    n *= r1;
    n += 1.24041772f;
    n *= -1.88535774f;
    n *= -0.31163085f;
    n *= 0.06041957f;
    r1 = n += -1.31067216f;
    n *= r1;
    n += 0.21198265f;
    r1 = n *= 0.30403900f;
    r2 = n += -0.41428092f;
    n += 1.94445860f;
    r3 = n += 0.04799635f;
    r4 = n += -0.56880772f;
    n *= -0.47922474f;
    n = r0 += n;
    n *= 0.04076702f;
    n += -1.08458090f;
    n *= 1.22134399f;
    n *= 1.47210062f;
    n *= -1.47826827f;
    n *= r1;
    n *= r3;
    n *= r0;
    n *= -2.06689858f;
    n *= r2;
    n += r4;
    n += -0.67993116f;
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
