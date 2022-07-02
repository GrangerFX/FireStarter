// Run date: 07/02/22 11:43:26 Pacific Daylight Time
// Run duration = 0.834722 seconds
// Run count = 16
// Run coients = 4
// Run process = 0
// Run units = 1
// Run states = 1
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

// Precision = 0.000600

// Solution0 precision = 0.000282
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 0.10047594f;
    r1 = n += 0.57171768f;
    n += -1.60726881f;
    r2 = n *= -1.02711177f;
    n *= r1;
    r1 = n *= -0.04460600f;
    r3 = n *= 0.45434770f;
    n *= -0.56020600f;
    r4 = n += 0.61128968f;
    n *= r0;
    n += -0.07120293f;
    n += r3;
    r3 = n *= -0.40570319f;
    r0 = n += 0.64424169f;
    n *= 0.39563081f;
    n = r4 *= n;
    n += r3;
    n += r1;
    n *= -0.27002081f;
    n *= 1.89171362f;
    n *= -5.18865204f;
    n += 0.60427600f;
    n += -0.68608367f;
    n = r2 += n;
    n *= r4;
    n += -0.05197490f;
    n *= -0.57530940f;
    n += r0;
    n *= -1.10152316f;
    n += 0.11674944f;
    n *= r2;
    n += 0.63634437f;
    return n;
} // Solution0

// Solution1 precision = 0.000355
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.50198126f;
    r1 = n += -1.06317616f;
    n += -3.32144165f;
    r2 = n *= -0.47417724f;
    n *= r1;
    r1 = n *= 0.72585315f;
    r3 = n *= -0.19012274f;
    n *= 0.27105221f;
    r4 = n += -0.68852526f;
    n *= r0;
    n += 0.55039775f;
    n += r3;
    r3 = n *= -1.13940322f;
    r0 = n += 0.09841986f;
    n *= 0.71053433f;
    n = r4 *= n;
    n += r3;
    n += r1;
    n *= -1.32655764f;
    n *= 0.85604906f;
    n *= -0.41140580f;
    n += 0.37121877f;
    n += 2.47702074f;
    n = r2 += n;
    n *= r4;
    n += -0.48798034f;
    n *= -1.35561454f;
    n += r0;
    n *= -0.05253403f;
    n += 0.25702068f;
    n *= r2;
    n += -0.26450855f;
    return n;
} // Solution1

// Solution2 precision = 0.000600
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.15233839f;
    r1 = n += -0.88614887f;
    n += 2.06032848f;
    r2 = n *= 0.62458962f;
    n *= r1;
    r1 = n *= 0.37590554f;
    r3 = n *= -0.38475960f;
    n *= 0.47909001f;
    r4 = n += 1.47116363f;
    n *= r0;
    n += -0.96984047f;
    n += r3;
    r3 = n *= -0.23199445f;
    r0 = n += -0.09556581f;
    n *= 0.41101515f;
    n = r4 *= n;
    n += r3;
    n += r1;
    n *= -0.85503638f;
    n *= 1.00342381f;
    n *= 0.44554293f;
    n += 0.67743933f;
    n += -0.91980958f;
    n = r2 += n;
    n *= r4;
    n += 0.76372731f;
    n *= 0.73740005f;
    n += r0;
    n *= 1.69215465f;
    n += -0.27164266f;
    n *= r2;
    n += 0.77756900f;
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
