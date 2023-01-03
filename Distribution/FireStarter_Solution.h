// Run date: 01/02/23 16:27:19 Pacific Standard Time
// Run duration = 28.658387 seconds
// Run count = 1
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

// Precision = 0.00000083

// Solution0 precision = 0.00000023
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.82907641f;
    n += -4.03112268f;
    r0 = n += -0.93954623f;
    r1 = n *= 0.35485655f;
    n *= -1.64785528f;
    n = r1 *= n;
    r2 = n += 0.08632158f;
    r3 = n += 0.43344072f;
    n *= 0.00765830f;
    r4 = n += 0.05583464f;
    n += 0.24685310f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.02177295f;
    r5 = n += -0.04624878f;
    n += 3.46321893f;
    n += -2.46756721f;
    n += r2;
    n *= -0.28430581f;
    n *= 0.05376019f;
    n += -1.39108801f;
    n *= r1;
    n *= -2.85595965f;
    n += 13.31564522f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.92298347f;
    n *= r5;
    n += 0.00000002f;
    n *= 1.77764940f;
    return n;
} // Solution0

// Solution1 precision = 0.00000083
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.92966491f;
    n += -0.26229891f;
    r0 = n += -1.89869511f;
    r1 = n *= 1.88271534f;
    n *= -0.09282707f;
    n = r1 *= n;
    r2 = n += 0.81578141f;
    r3 = n += 2.12981367f;
    n *= 0.00550759f;
    r4 = n += 0.73337179f;
    n += -0.72029620f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.14588724f;
    r5 = n += -1.80081856f;
    n += 16.46714211f;
    n += -1.79988372f;
    n += r2;
    n *= -0.14016189f;
    n *= 2.89594483f;
    n += -0.09844625f;
    n *= r1;
    n *= 0.03882454f;
    n += -0.76855272f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.36556974f;
    n *= r5;
    n += -0.09425339f;
    n *= 1.25334585f;
    return n;
} // Solution1

// Solution2 precision = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.35562542f;
    n += -0.52359080f;
    r0 = n += -2.45002842f;
    r1 = n *= 0.33059901f;
    n *= -0.16926011f;
    n = r1 *= n;
    r2 = n += -0.07880749f;
    r3 = n += 0.86069268f;
    n *= 4.80943394f;
    r4 = n += 2.12186766f;
    n += 1.54944432f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.44867668f;
    r5 = n += 0.02039697f;
    n += -2.97665763f;
    n += -1.84169495f;
    n += r2;
    n *= -0.00351517f;
    n *= -2.94000101f;
    n += 0.87836361f;
    n *= r1;
    n *= 0.45847362f;
    n += -0.23955053f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 2.79900241f;
    n *= r5;
    n += 0.99277318f;
    n *= 0.52741009f;
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
