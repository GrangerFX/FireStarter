// Run date: 12/25/22 10:34:58 Pacific Standard Time
// Run duration = 10.194756 seconds
// Run count = 9
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
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 9

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

// Precision = 0.00000256

// Solution0 precision = 0.00000256
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.61663204f;
    n = r1 *= n;
    n *= -0.30978900f;
    n += 12.36670971f;
    r2 = n *= 1.32754529f;
    r3 = n *= 0.45871928f;
    n *= -0.60801739f;
    n *= -0.10558201f;
    r4 = n *= -0.37880692f;
    n = r3 *= n;
    r5 = n *= -0.68921942f;
    r6 = n *= -0.28312168f;
    n = r1 *= n;
    r7 = n *= 0.00473831f;
    n *= r2;
    n *= -7.50318146f;
    n += 2.33414936f;
    n += 0.79217207f;
    n *= -0.74658293f;
    n = r6 *= n;
    n += -1.53028059f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 1.18975401f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 precision = 0.00000238
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065890f;
    r1 = n *= -0.31066075f;
    n = r1 *= n;
    n *= -0.69885457f;
    n += 2.56696153f;
    r2 = n *= 0.54505908f;
    r3 = n *= 1.15030837f;
    n *= -0.59326255f;
    n *= -0.10894426f;
    r4 = n *= 0.73788393f;
    n = r3 *= n;
    r5 = n *= 0.65272164f;
    r6 = n *= 1.17415583f;
    n = r1 *= n;
    r7 = n *= 8.77781105f;
    n *= r2;
    n *= 7.47766113f;
    n += 46.13288498f;
    n += -29.46086311f;
    n *= -0.73909187f;
    n = r6 *= n;
    n += 1.42517245f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -117.83114624f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813194f;
    return n;
} // Solution1

// Solution2 precision = 0.00000142
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= 0.54017168f;
    n = r1 *= n;
    n *= 0.09014782f;
    n += -4.19999790f;
    r2 = n *= 0.56789827f;
    r3 = n *= -1.03792500f;
    n *= -0.81200820f;
    n *= 0.42207250f;
    r4 = n *= -0.74060667f;
    n = r3 *= n;
    r5 = n *= -0.68972057f;
    r6 = n *= 0.43848035f;
    n = r1 *= n;
    r7 = n *= 0.32050306f;
    n *= r2;
    n *= -1.11717224f;
    n += 2.77990127f;
    n += 3.20683479f;
    n *= 0.11630715f;
    n = r6 *= n;
    n += -0.06338829f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.84751862f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359867f;
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
