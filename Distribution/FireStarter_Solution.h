// Run date: 12/27/22 20:31:06 Pacific Standard Time
// Run duration = 81.520122 seconds
// Run count = 75
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 75

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

// Precision = 0.00000083

// Solution0 precision = 0.00000083
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.12912345f;
    r0 = n += -0.01246926f;
    r1 = n *= 0.39776674f;
    n = r1 *= n;
    n += -1.43322563f;
    n *= -1.31239069f;
    n *= 0.00398596f;
    r2 = n *= 4.01697350f;
    r3 = n += -0.70009196f;
    n += -2.81490278f;
    r4 = n += -3.04942632f;
    n *= r2;
    n = r3 += n;
    n = r1 *= n;
    r2 = n *= 0.98428202f;
    n += r1;
    r1 = n *= 0.03592820f;
    n = r4 += n;
    n *= r2;
    r2 = n += 2.95878577f;
    n *= r1;
    n += r4;
    n += 1.23386359f;
    n *= 1.61364758f;
    n += r2;
    n *= -0.09922677f;
    n *= r3;
    n *= -0.90532839f;
    n *= r0;
    n *= -2.29571438f;
    n += -0.08242334f;
    n += 0.08242331f;
    return n;
} // Solution0

// Solution1 precision = 0.00000003
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.88749057f;
    r0 = n += -2.20316792f;
    r1 = n *= 0.61932254f;
    n = r1 *= n;
    n += -1.25731170f;
    n *= -4.51509619f;
    n *= -0.19094944f;
    r2 = n *= 0.00993774f;
    r3 = n += 0.28141961f;
    n += -1.13542938f;
    r4 = n += -2.07180071f;
    n *= r2;
    n = r3 += n;
    n = r1 *= n;
    r2 = n *= -1.22901285f;
    n += r1;
    r1 = n *= 0.22206281f;
    n = r4 += n;
    n *= r2;
    r2 = n += 1.12173414f;
    n *= r1;
    n += r4;
    n += -1.11079943f;
    n *= 1.39940786f;
    n += r2;
    n *= -3.42184114f;
    n *= r3;
    n *= 0.06773827f;
    n *= r0;
    n *= -3.45637202f;
    n += -0.17346990f;
    n += 0.05533823f;
    return n;
} // Solution1

// Solution2 precision = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.85815704f;
    r0 = n += -0.75983661f;
    r1 = n *= 0.43266684f;
    n = r1 *= n;
    n += -2.12650108f;
    n *= 1.10629475f;
    n *= 0.32881880f;
    r2 = n *= -0.40174466f;
    r3 = n += 1.85022438f;
    n += -1.08885574f;
    r4 = n += 0.69510210f;
    n *= r2;
    n = r3 += n;
    n = r1 *= n;
    r2 = n *= -0.87832832f;
    n += r1;
    r1 = n *= -0.04106176f;
    n = r4 += n;
    n *= r2;
    r2 = n += 2.13353276f;
    n *= r1;
    n += r4;
    n += -0.55646420f;
    n *= 0.86788630f;
    n += r2;
    n *= 0.72658598f;
    n *= r3;
    n *= -0.13362645f;
    n *= r0;
    n *= 1.19343066f;
    n += 0.54722661f;
    n += -0.02362780f;
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
