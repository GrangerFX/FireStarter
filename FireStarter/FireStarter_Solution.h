#include <math.h>

// Run date: 01/09/22 12:22:34 Pacific Standard Time
// Run duration = 5.235154 seconds
// Run count = 1
// Run units = 16
// Run population = 4352
// Run iterations = 15
// Run generations = 10

#define SAMPLE_MIN 0.000000
#define SAMPLE_MAX 6.283185

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

// Solution0 precision = 0.000133
inline float Solution0(float n)
{
    float d0 = 0.166358f;
    float d1 = -0.367194f;
    float d2 = -3.583327f;
    float d3 = 0.441628f;
    float d4 = 2.826514f;
    float d5 = 0.117001f;
    float d6 = -0.547351f;
    float d7 = 0.840405f;
    float d8 = 0.827456f;
    float d9 = -0.191815f;
    float d10 = -0.921262f;
    float d11 = -1.476278f;
    float d12 = -1.848571f;
    float d13 = 0.753720f;
    float d14 = 0.551162f;
    float d15 = -1.100033f;
    float d16 = 0.729146f;
    float d17 = -0.022982f;
    float d18 = -0.736473f;
    float d19 = -0.034231f;
    n = d0 *= n;
    n = d1 += n;
    n = d2 *= n;
    n = d3 += n;
    n = d4 *= n;
    n = d3 += n;
    n = d5 *= n;
    n = d6 += n;
    n = d7 *= n;
    n = d8 += n;
    n = d9 *= n;
    n = d6 += n;
    n = d10 *= n;
    n = d11 += n;
    n = d12 *= n;
    n = d13 += n;
    n = d10 *= n;
    n = d8 += n;
    n = d14 *= n;
    n = d13 += n;
    n = d10 *= n;
    n = d15 += n;
    n = d16 *= n;
    n = d17 += n;
    n = d6 *= n;
    n = d12 += n;
    n = d13 *= n;
    n = d18 += n;
    n = d19 *= n;
    n = d14 += n;
    n = d12 *= n;
    n = d1 += n;
    return n;
} // Solution0

// Solution1 precision = 0.000397
inline float Solution1(float n)
{
    float d0 = 0.895871f;
    float d1 = -0.217696f;
    float d2 = -1.026493f;
    float d3 = 1.890561f;
    float d4 = 0.912404f;
    float d5 = 0.226375f;
    float d6 = -1.495189f;
    float d7 = 0.732986f;
    float d8 = 0.205553f;
    float d9 = 1.723023f;
    float d10 = -0.407971f;
    float d11 = -1.587290f;
    float d12 = 0.429032f;
    float d13 = 0.359117f;
    float d14 = -0.742859f;
    float d15 = 0.739383f;
    float d16 = 0.397729f;
    float d17 = -1.263418f;
    float d18 = -0.458699f;
    float d19 = -0.668602f;
    n = d0 *= n;
    n = d1 += n;
    n = d2 *= n;
    n = d3 += n;
    n = d4 *= n;
    n = d3 += n;
    n = d5 *= n;
    n = d6 += n;
    n = d7 *= n;
    n = d8 += n;
    n = d9 *= n;
    n = d6 += n;
    n = d10 *= n;
    n = d11 += n;
    n = d12 *= n;
    n = d13 += n;
    n = d10 *= n;
    n = d8 += n;
    n = d14 *= n;
    n = d13 += n;
    n = d10 *= n;
    n = d15 += n;
    n = d16 *= n;
    n = d17 += n;
    n = d6 *= n;
    n = d12 += n;
    n = d13 *= n;
    n = d18 += n;
    n = d19 *= n;
    n = d14 += n;
    n = d12 *= n;
    n = d1 += n;
    return n;
} // Solution1
