#include <math.h>

// Run date: 01/16/22 15:56:01 Pacific Standard Time
// Run duration = 2.052516 seconds
// Run count = 5
// Run units = 16
// Run population = 4352
// Run iterations = 15
// Run generations = 10

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

inline float Target(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf(n * 1.2f) + n * 0.2f;
    case 2:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    }
} // Target

// Solution0 precision = 0.000218
inline float Solution0(float n)
{
    n *= 0.147631f;
    n += -0.059146f;
    float d0 = n;
    n *= -2.231767f;
    n += 1.304104f;
    float d1 = n;
    n *= 0.570817f;
    n += d1;
    n *= 0.536862f;
    n += -0.960582f;
    d1 = n;
    n *= 0.604844f;
    n += 0.810656f;
    float d2 = n;
    n *= -0.287727f;
    n += d1;
    d1 = n;
    n *= -0.790731f;
    float d3 = n;
    n += -1.196499f;
    n *= -1.875646f;
    float d4 = n;
    n += 0.936001f;
    float d5 = n;
    n *= d3;
    d3 = n;
    n += d2;
    n *= 0.779106f;
    d2 = n;
    n += d5;
    d5 = n;
    n *= d3;
    n += -0.599340f;
    n *= 0.607282f;
    n += -0.180131f;
    n *= d1;
    n += d4;
    d4 = n;
    n *= d5;
    n += 1.823968f;
    n *= -0.073667f;
    n += d2;
    n *= d4;
    n += d0;
    return n;
} // Solution0

// Solution1 precision = 0.000394
inline float Solution1(float n)
{
    n *= 0.868628f;
    n += -0.277484f;
    float d0 = n;
    n *= -0.965830f;
    n += 1.389340f;
    float d1 = n;
    n *= -0.095932f;
    n += d1;
    n *= 0.571882f;
    n += -1.401554f;
    d1 = n;
    n *= 0.763038f;
    n += 0.204349f;
    float d2 = n;
    n *= 1.885065f;
    n += d1;
    d1 = n;
    n *= -0.390096f;
    float d3 = n;
    n += -1.517491f;
    n *= 0.329436f;
    float d4 = n;
    n += 0.289943f;
    float d5 = n;
    n *= d3;
    d3 = n;
    n += d2;
    n *= -0.813003f;
    d2 = n;
    n += d5;
    d5 = n;
    n *= d3;
    n += 0.129184f;
    n *= 0.408802f;
    n += -1.188487f;
    n *= d1;
    n += d4;
    d4 = n;
    n *= d5;
    n += -0.549903f;
    n *= -0.380334f;
    n += d2;
    n *= d4;
    n += d0;
    return n;
} // Solution1
