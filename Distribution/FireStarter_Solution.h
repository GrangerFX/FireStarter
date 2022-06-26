// Run date: 06/26/22 15:48:17 Pacific Daylight Time
// Run duration = 5.413057 seconds
// Run count = 1
// Run units = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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

// Precision = 0.000070

// Solution0 precision = 0.000040
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.15999904f;
    r0 = n += -0.05330738f;
    n += -0.44489428f;
    n += -0.68535382f;
    n += 0.30263120f;
    r1 = n *= 0.73450220f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.02573283f;
    r3 = n += 0.56068456f;
    r4 = n += -0.18151383f;
    n *= -0.23646630f;
    n *= 0.81313819f;
    n *= r2;
    n *= -0.68124044f;
    r2 = n += -0.42489132f;
    n *= 0.87883294f;
    n *= r1;
    n *= r2;
    n *= 0.97768825f;
    n += 0.13118972f;
    n *= r4;
    r4 = n *= 1.15682650f;
    r2 = n += 0.83166409f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.71531618f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.53438395f;
    return n;
} // Solution0

// Solution1 precision = 0.000070
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.54100347f;
    r0 = n += -0.41539073f;
    n += -0.79610854f;
    n += 0.01323793f;
    n += -0.70029187f;
    r1 = n *= -0.21847895f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.04363412f;
    r3 = n += -0.31358063f;
    r4 = n += -0.27464929f;
    n *= -0.90140486f;
    n *= 0.31161785f;
    n *= r2;
    n *= -0.55689228f;
    r2 = n += -0.69679505f;
    n *= 1.42358518f;
    n *= r1;
    n *= r2;
    n *= 2.11501670f;
    n += 0.13896132f;
    n *= r4;
    r4 = n *= 0.65230387f;
    r2 = n += 1.08534110f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.64148772f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.08175740f;
    return n;
} // Solution1

// Solution2 precision = 0.000034
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.31049135f;
    r0 = n += 0.24544045f;
    n += -0.33274129f;
    n += -1.50863552f;
    n += -0.41918150f;
    r1 = n *= 0.54938954f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.06402521f;
    r3 = n += 0.50754541f;
    r4 = n += 0.35528344f;
    n *= -0.76024246f;
    n *= 0.11616581f;
    n *= r2;
    n *= -0.58133292f;
    r2 = n += -0.49707872f;
    n *= -1.98809135f;
    n *= r1;
    n *= r2;
    n *= 0.45117909f;
    n += -0.05073510f;
    n *= r4;
    r4 = n *= -0.50797349f;
    r2 = n += 0.70590413f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.52602786f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.33960059f;
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
