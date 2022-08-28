// Run date: 08/28/22 11:08:31 Pacific Daylight Time
// Run duration = 2.584720 seconds
// Run count = 150
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
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
// Solution Generation = 15000

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

// Precision = 0.00015664

// Solution0 precision = 0.00012958
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -4.10668087f;
    r0 = n += 4.62569714f;
    n += -0.51911199f;
    r1 = n *= 0.35083190f;
    r2 = n *= 1.06050074f;
    n *= -0.69309109f;
    r3 = n += 1.04682231f;
    r4 = n += 0.57839096f;
    r5 = n *= -0.49582279f;
    n += 0.66242796f;
    n = r4 *= n;
    r6 = n *= 0.62139666f;
    n *= 0.36147833f;
    n = r5 += n;
    n += r2;
    n += -0.81195045f;
    n *= 0.33278790f;
    n = r1 *= n;
    n *= 0.48788634f;
    n += r6;
    n += 0.74061352f;
    n *= r3;
    n *= 3.93242121f;
    n += r0;
    n *= r4;
    n += 0.75555044f;
    n += 1.02043879f;
    n = r5 *= n;
    n += 0.00380864f;
    n *= 4.54656363f;
    n += r5;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.00002754
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.41460431f;
    r0 = n += 0.20463388f;
    n += -1.77314889f;
    r1 = n *= 1.39326084f;
    r2 = n *= 0.28898522f;
    n *= 0.35562402f;
    r3 = n += 0.50271177f;
    r4 = n += 0.91583282f;
    r5 = n *= 0.79801351f;
    n += -1.46073902f;
    n = r4 *= n;
    r6 = n *= 2.15446115f;
    n *= -1.51820946f;
    n = r5 += n;
    n += r2;
    n += -1.06098163f;
    n *= 0.04932437f;
    n = r1 *= n;
    n *= 0.88940603f;
    n += r6;
    n += 0.54078358f;
    n *= r3;
    n *= -1.31913280f;
    n += r0;
    n *= r4;
    n += -3.84534502f;
    n += 1.22833455f;
    n = r5 *= n;
    n += -9.80445385f;
    n *= 0.02358528f;
    n += r5;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.00015664
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 5.87381315f;
    r0 = n += -4.58864117f;
    n += -5.64010286f;
    r1 = n *= -0.30092782f;
    r2 = n *= 0.65387237f;
    n *= -1.14967203f;
    r3 = n += -1.04741096f;
    r4 = n += 0.04012958f;
    r5 = n *= 1.37190294f;
    n += 1.99448919f;
    n = r4 *= n;
    r6 = n *= -0.71191013f;
    n *= -1.40535188f;
    n = r5 += n;
    n += r2;
    n += 0.40342444f;
    n *= 0.93803912f;
    n = r1 *= n;
    n *= -40.18970108f;
    n += r6;
    n += -55.32259369f;
    n *= r3;
    n *= 0.01011641f;
    n += r0;
    n *= r4;
    n += -3.89933658f;
    n += 8.05678177f;
    n = r5 *= n;
    n += -3.19255042f;
    n *= -0.62368011f;
    n += r5;
    n *= r1;
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
