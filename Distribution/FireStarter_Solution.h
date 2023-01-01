// Run date: 01/01/23 15:28:10 Pacific Standard Time
// Run duration = 72.483054 seconds
// Run count = 249
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
// Solution Generation = 249

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

// Precision = 0.00014162

// Solution0 precision = 0.00000077
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159250f;
    r0 = n *= -1.01522148f;
    n += -52.02356720f;
    r1 = n *= -0.00000005f;
    n += 0.95642245f;
    n = r0 *= n;
    n *= -1.42061567f;
    n *= -0.01274277f;
    r2 = n *= 4.90353394f;
    n *= r2;
    n *= -2.09690595f;
    r2 = n *= -1.69930589f;
    r3 = n += -2.05255532f;
    n *= 1.00358081f;
    n += 0.58109164f;
    n *= 0.29077622f;
    n = r1 += n;
    n *= r2;
    n *= r3;
    r3 = n += -0.23495595f;
    n *= -1.81664038f;
    n = r3 += n;
    n += -1.15658796f;
    r2 = n += 1.09991467f;
    n += -1.78688431f;
    n *= r1;
    n += r3;
    r3 = n += 0.94891214f;
    n *= r2;
    n *= 2.22324491f;
    n *= r0;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00011599
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += 1.29797935f;
    r0 = n *= 0.33422658f;
    n += -1.07515419f;
    r1 = n *= -0.74550343f;
    n += 1.78704715f;
    n = r0 *= n;
    n *= -0.20527807f;
    n *= 0.77740663f;
    r2 = n *= -0.55244446f;
    n *= r2;
    n *= 1.72154987f;
    r2 = n *= -4.56071234f;
    r3 = n += 1.39760816f;
    n *= -14.86975956f;
    n += 25.11056328f;
    n *= -0.00169265f;
    n = r1 += n;
    n *= r2;
    n *= r3;
    r3 = n += 1.43578768f;
    n *= 0.44265488f;
    n = r3 += n;
    n += -0.11819327f;
    r2 = n += -2.08259892f;
    n += 0.80330467f;
    n *= r1;
    n += r3;
    r3 = n += 1.25964046f;
    n *= r2;
    n *= -0.37236375f;
    n *= r0;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00014162
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += 0.00009688f;
    r0 = n *= -0.31429052f;
    n += -12.63541222f;
    r1 = n *= 0.01573739f;
    n += 0.63133794f;
    n = r0 *= n;
    n *= -0.32581663f;
    n *= -0.16384633f;
    r2 = n *= 0.40494618f;
    n *= r2;
    n *= 58.46499252f;
    r2 = n *= -42.35740280f;
    r3 = n += 0.61826622f;
    n *= 0.59517133f;
    n += 0.51085174f;
    n *= -0.79148042f;
    n = r1 += n;
    n *= r2;
    n *= r3;
    r3 = n += 0.17856604f;
    n *= 0.97137493f;
    n = r3 += n;
    n += -1.33021963f;
    r2 = n += 0.84289598f;
    n += 4.30009651f;
    n *= r1;
    n += r3;
    r3 = n += 1.26522207f;
    n *= r2;
    n *= 17.08791733f;
    n *= r0;
    n *= r3;
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
