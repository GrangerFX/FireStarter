// Run date: 08/06/22 12:04:34 Pacific Daylight Time
// Run duration = 1.959997 seconds
// Run count = 13
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 60

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f
#define TARGET_MIN 0.0f
#define TARGET_MAX (2.0f * 3.14159265f)

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.00923744

// Solution0 precision = 0.00884932
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.25184569f;
    r1 = n += 0.16412631f;
    n *= -0.54667008f;
    r2 = n *= -0.77800220f;
    n *= 0.74270368f;
    n *= -0.25445715f;
    n = r2 += n;
    r3 = n *= -0.96901423f;
    r4 = n *= -0.35974139f;
    r5 = n += -0.90169519f;
    n = r1 *= n;
    n += -0.23343362f;
    n = r1 *= n;
    r6 = n += -0.35590324f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += -1.00710917f;
    n += -0.43051240f;
    n += -0.78955364f;
    n *= -0.59621918f;
    n += -0.49009436f;
    n *= r0;
    n *= 1.83652830f;
    n = r4 *= n;
    n *= r1;
    n *= 0.92571121f;
    n *= r2;
    n += r4;
    n *= 0.00282280f;
    n += r6;
    return n;
} // Solution0

// Solution1 precision = 0.00923744
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.13205290f;
    r1 = n += 1.58323729f;
    n *= -0.94355106f;
    r2 = n *= 0.53190279f;
    n *= -0.00857587f;
    n *= -1.30264521f;
    n = r2 += n;
    r3 = n *= 0.64780486f;
    r4 = n *= -0.32050753f;
    r5 = n += -0.76734865f;
    n = r1 *= n;
    n += -0.44659370f;
    n = r1 *= n;
    r6 = n += 0.63523924f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += 0.07233268f;
    n += -0.09296411f;
    n += 0.82066226f;
    n *= 0.61037666f;
    n += 3.82141376f;
    n *= r0;
    n *= 0.75487697f;
    n = r4 *= n;
    n *= r1;
    n *= 0.78486949f;
    n *= r2;
    n += r4;
    n *= 0.00481094f;
    n += r6;
    return n;
} // Solution1

// Solution2 precision = 0.00398469
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.54202193f;
    r1 = n += -0.17964846f;
    n *= 0.89818615f;
    r2 = n *= -0.42672086f;
    n *= 0.02982527f;
    n *= 0.17952320f;
    n = r2 += n;
    r3 = n *= 0.57753843f;
    r4 = n *= 0.79493016f;
    r5 = n += 1.06297088f;
    n = r1 *= n;
    n += 1.09670210f;
    n = r1 *= n;
    r6 = n += -0.44410720f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += -0.41549927f;
    n += -2.51569629f;
    n += 0.13602902f;
    n *= 0.39307186f;
    n += 0.04333146f;
    n *= r0;
    n *= 0.81639600f;
    n = r4 *= n;
    n *= r1;
    n *= -0.05975391f;
    n *= r2;
    n += r4;
    n *= 0.23037687f;
    n += r6;
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
