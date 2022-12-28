// Run date: 12/28/22 11:01:09 Pacific Standard Time
// Run duration = 6.506446 seconds
// Run count = 35
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
// Solution Generation = 35

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

// Precision = 0.00003839

// Solution0 precision = 0.00000316
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.45607683f;
    n += 0.29960668f;
    n += 1.73287511f;
    r1 = n += 0.11673252f;
    r2 = n *= 0.00000038f;
    r3 = n *= -9.08450222f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -0.59448189f;
    n = r1 *= n;
    n += 1.70805156f;
    n *= -0.94392002f;
    n += -1.32482779f;
    r0 = n *= -0.23093931f;
    n += 0.94771212f;
    r2 = n *= -0.41309953f;
    r4 = n += -1.59871209f;
    r5 = n += 1.91232550f;
    n *= r4;
    r4 = n += 1.50527477f;
    n *= -0.47133428f;
    r6 = n *= -1.32646000f;
    n *= r1;
    n *= r0;
    n = r2 *= n;
    n *= r6;
    n += r2;
    n += r5;
    n += r3;
    n *= r4;
    n += -0.16984934f;
    return n;
} // Solution0

// Solution1 precision = 0.00001431
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.30286837f;
    n += -2.23350334f;
    n += -1.83435082f;
    r1 = n += 0.03476119f;
    r2 = n *= -0.25544044f;
    r3 = n *= -1.20130026f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.08897068f;
    n = r1 *= n;
    n += -1.35196400f;
    n *= -2.42282915f;
    n += 1.56751430f;
    r0 = n *= 0.29793295f;
    n += 1.47263646f;
    r2 = n *= -1.81154120f;
    r4 = n += 1.14015472f;
    r5 = n += 3.09000993f;
    n *= r4;
    r4 = n += 1.23032725f;
    n *= 0.87963700f;
    r6 = n *= -0.68720412f;
    n *= r1;
    n *= r0;
    n = r2 *= n;
    n *= r6;
    n += r2;
    n += r5;
    n += r3;
    n *= r4;
    n += -0.13198651f;
    return n;
} // Solution1

// Solution2 precision = 0.00003839
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.38209781f;
    n += -2.82768869f;
    n += 2.99347973f;
    r1 = n += -0.66015190f;
    r2 = n *= -0.20131046f;
    r3 = n *= -1.00828421f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -1.36503351f;
    n = r1 *= n;
    n += 0.48868755f;
    n *= 0.06869462f;
    n += 1.14061213f;
    r0 = n *= 1.44771063f;
    n += 0.07061046f;
    r2 = n *= 0.88969809f;
    r4 = n += 0.62059569f;
    r5 = n += -1.45863926f;
    n *= r4;
    r4 = n += 1.24026072f;
    n *= -0.58885413f;
    r6 = n *= 0.78069901f;
    n *= r1;
    n *= r0;
    n = r2 *= n;
    n *= r6;
    n += r2;
    n += r5;
    n += r3;
    n *= r4;
    n += -0.84885198f;
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
