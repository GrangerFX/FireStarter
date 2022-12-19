// Run date: 12/19/22 13:22:41 Pacific Standard Time
// Run duration = 17.963554 seconds
// Run count = 1
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 8;
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

// Precision = 0.00029445

// Solution0 precision = 0.00000072
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.72052765f;
    n *= 0.55590409f;
    n += -0.10225283f;
    n += -1.92599022f;
    r0 = n += 1.55557513f;
    n *= r0;
    n += 0.21505201f;
    n += -0.88213241f;
    r0 = n *= 0.51564378f;
    n *= 0.02362784f;
    r1 = n += -0.93296355f;
    n *= r1;
    r1 = n += -0.39693448f;
    r2 = n *= 0.99721467f;
    r3 = n += 0.80537170f;
    r4 = n += -0.37699190f;
    r5 = n += 0.68528217f;
    n *= r0;
    r0 = n *= -0.89142805f;
    n += r4;
    n += -0.21491724f;
    n += r0;
    n *= r1;
    n *= 0.35265070f;
    n = r2 += n;
    n *= r2;
    n *= r5;
    n += -0.53546757f;
    n *= 1.64794874f;
    n *= r3;
    n += 0.13437775f;
    n += -0.05469238f;
    return n;
} // Solution0

// Solution1 precision = 0.00005418
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.52256489f;
    n *= -0.18475962f;
    n += -0.21696900f;
    n += 0.94564950f;
    r0 = n += 0.79510152f;
    n *= r0;
    n += -0.72054815f;
    n += 0.29030159f;
    r0 = n *= 0.64042968f;
    n *= 0.24783444f;
    r1 = n += -1.26118529f;
    n *= r1;
    r1 = n += -0.09398584f;
    r2 = n *= 0.50508446f;
    r3 = n += -0.38180712f;
    r4 = n += 0.06921987f;
    r5 = n += 2.34879446f;
    n *= r0;
    r0 = n *= 1.93800163f;
    n += r4;
    n += -0.43172446f;
    n += r0;
    n *= r1;
    n *= -2.36380363f;
    n = r2 += n;
    n *= r2;
    n *= r5;
    n += 2.00344849f;
    n *= -0.01082111f;
    n *= r3;
    n += -0.98559040f;
    n += 0.86073071f;
    return n;
} // Solution1

// Solution2 precision = 0.00029445
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.98513728f;
    n *= 0.57921886f;
    n += -0.39522326f;
    n += 1.93371832f;
    r0 = n += -0.17370239f;
    n *= r0;
    n += 2.15649557f;
    n += 0.34867662f;
    r0 = n *= 0.04727423f;
    n *= 0.75553221f;
    r1 = n += -2.74876380f;
    n *= r1;
    r1 = n += -0.61869180f;
    r2 = n *= -0.44603276f;
    r3 = n += 0.52998924f;
    r4 = n += 0.74379522f;
    r5 = n += 0.52575666f;
    n *= r0;
    r0 = n *= -0.12322236f;
    n += r4;
    n += 0.78699940f;
    n += r0;
    n *= r1;
    n *= -0.83370686f;
    n = r2 += n;
    n *= r2;
    n *= r5;
    n += 0.86484736f;
    n *= -0.56290346f;
    n *= r3;
    n += -0.34496841f;
    n += 0.58741105f;
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
