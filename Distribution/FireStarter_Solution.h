// Run date: 10/01/22 17:03:21 Pacific Daylight Time
// Run duration = 3.222632 seconds
// Run count = 1
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 1

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

// Precision = 0.00043746

// Solution0 precision = 0.00043746
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.28771752f;
    r1 = n += 0.88382530f;
    n += -0.83917648f;
    r2 = n += 0.07317292f;
    r3 = n += 0.49781731f;
    n = r3 *= n;
    r4 = n += -3.62270713f;
    r5 = n *= 0.02526570f;
    n *= r0;
    n = r2 += n;
    n += 3.59464097f;
    n += -4.31381750f;
    n *= 0.11888862f;
    r0 = n += -0.50650603f;
    n *= r2;
    n *= r4;
    n += r1;
    r1 = n *= -1.57506967f;
    n *= r1;
    n += -2.69699740f;
    n = r0 *= n;
    n *= -1.49426317f;
    r1 = n *= 0.33508074f;
    n *= 0.00330926f;
    n *= 1.48731327f;
    n *= 5.32256460f;
    n += 0.73689663f;
    n *= 0.26471877f;
    n *= r0;
    n *= r3;
    n += r1;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.00004387
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.30452767f;
    r1 = n += -0.12665653f;
    n += -0.30536446f;
    r2 = n += -0.24424338f;
    r3 = n += 0.05335627f;
    n = r3 *= n;
    r4 = n += -3.27964377f;
    r5 = n *= -0.30430505f;
    n *= r0;
    n = r2 += n;
    n += -0.02492055f;
    n += -5.40970850f;
    n *= 0.02090339f;
    r0 = n += -0.86553448f;
    n *= r2;
    n *= r4;
    n += r1;
    r1 = n *= 0.56400293f;
    n *= r1;
    n += -1.24289596f;
    n = r0 *= n;
    n *= 0.68848431f;
    r1 = n *= 0.33974037f;
    n *= -0.60011715f;
    n *= -0.38570300f;
    n *= 4.28631783f;
    n += 1.53657544f;
    n *= 0.00062888f;
    n *= r0;
    n *= r3;
    n += r1;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.00016928
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.22792597f;
    r1 = n += -0.95657593f;
    n += 0.81360400f;
    r2 = n += -0.68056738f;
    r3 = n += -0.17322643f;
    n = r3 *= n;
    r4 = n += -0.63001090f;
    r5 = n *= -0.37837249f;
    n *= r0;
    n = r2 += n;
    n += -2.71672606f;
    n += -0.93340462f;
    n *= -0.01681442f;
    r0 = n += -0.70734751f;
    n *= r2;
    n *= r4;
    n += r1;
    r1 = n *= -2.51430964f;
    n *= r1;
    n += -0.52772921f;
    n = r0 *= n;
    n *= 1.16034126f;
    r1 = n *= -1.17626297f;
    n *= -0.00434065f;
    n *= -0.35928038f;
    n *= 12.28961277f;
    n += -3.42240548f;
    n *= -0.38732585f;
    n *= r0;
    n *= r3;
    n += r1;
    n += r5;
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
