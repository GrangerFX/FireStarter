// Run date: 11/14/23 07:54:01 Pacific Standard Time
// Run duration = 39330.857338 seconds
// Run generation = 79
// Run evolution = 4
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.59240973f;
    n += -1.54918301f;
    r0 = n *= 0.15738074f;
    n *= -7.32874632f;
    n *= -0.36316592f;
    n *= -11.43089771f;
    r1 = n *= 0.01447401f;
    r2 = n *= 2.30365467f;
    n *= r1;
    r1 = n += -0.64590412f;
    r3 = n += 0.03103963f;
    r4 = n *= -1.10287917f;
    r5 = n += 1.21814740f;
    n = r0 *= n;
    r6 = n *= -0.85629755f;
    n = r2 += n;
    n = r2 += n;
    n += r6;
    n *= r3;
    r3 = n *= -0.56736147f;
    n = r4 *= n;
    n *= r1;
    n *= -0.34120113f;
    n += r2;
    n *= r0;
    n += 0.32832637f;
    n += 0.94678926f;
    n *= r5;
    n *= r4;
    n += 0.22787783f;
    n += r3;
    n += -0.22787783f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.72352898f;
    n += -2.36712956f;
    r0 = n *= 1.06827998f;
    n *= -0.00633741f;
    n *= 0.24381872f;
    n *= 9.37018394f;
    r1 = n *= 1.99239039f;
    r2 = n *= -3.52240825f;
    n *= r1;
    r1 = n += -0.54762578f;
    r3 = n += 1.57607031f;
    r4 = n *= -1.74958134f;
    r5 = n += 1.31479931f;
    n = r0 *= n;
    r6 = n *= -0.60721046f;
    n = r2 += n;
    n = r2 += n;
    n += r6;
    n *= r3;
    r3 = n *= -0.60500640f;
    n = r4 *= n;
    n *= r1;
    n *= 0.75175464f;
    n += r2;
    n *= r0;
    n += 0.48910832f;
    n += 0.11188224f;
    n *= r5;
    n *= r4;
    n += -0.39219278f;
    n += r3;
    n += 0.27406099f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.19978452f;
    n += 0.58179080f;
    r0 = n *= 0.12520073f;
    n *= 1.26222205f;
    n *= 0.03008790f;
    n *= -146.45416260f;
    r1 = n *= -0.56599557f;
    r2 = n *= 0.15348388f;
    n *= r1;
    r1 = n += -1.89135551f;
    r3 = n += 0.80793124f;
    r4 = n *= -1.91976845f;
    r5 = n += 2.04053164f;
    n = r0 *= n;
    r6 = n *= 0.29565671f;
    n = r2 += n;
    n = r2 += n;
    n += r6;
    n *= r3;
    r3 = n *= -0.17423438f;
    n = r4 *= n;
    n *= r1;
    n *= -0.07112965f;
    n += r2;
    n *= r0;
    n += 1.15811098f;
    n += -2.34317327f;
    n *= r5;
    n *= r4;
    n += -0.35100585f;
    n += r3;
    n += 0.87460464f;
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
