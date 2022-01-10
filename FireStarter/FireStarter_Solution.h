#include <math.h>

// Run date: 01/09/22 19:45:39 Pacific Standard Time
// Run duration = 0.403285 seconds
// Run count = 26
// Run units = 1
// Run population = 4352
// Run iterations = 15
// Run generations = 100

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

// Solution0 precision = 0.000026
inline float Solution0(float n)
{
    float d0 = -0.050911f;
    float d1 = -0.095168f;
    float d2 = -55.678799f;
    float d3 = -15.918847f;
    float d4 = -0.756818f;
    float d5 = -0.115125f;
    float d6 = 0.021131f;
    float d7 = -0.424197f;
    float d8 = 1.633703f;
    float d9 = -0.234050f;
    float d10 = -2.232526f;
    float d11 = -2.143106f;
    float d12 = -1.498720f;
    float d13 = -0.654248f;
    float d14 = 0.578747f;
    float d15 = -1.296861f;
    float d16 = 3.129124f;
    float d17 = 0.365554f;
    float d18 = 8.608454f;
    float d19 = -0.048320f;
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

// Solution1 precision = 0.000021
inline float Solution1(float n)
{
    float d0 = -0.057789f;
    float d1 = -0.051612f;
    float d2 = -58.158268f;
    float d3 = -12.618521f;
    float d4 = -0.094677f;
    float d5 = -0.031466f;
    float d6 = 0.108511f;
    float d7 = 0.265973f;
    float d8 = 1.599992f;
    float d9 = -0.224752f;
    float d10 = -2.208896f;
    float d11 = -2.204640f;
    float d12 = -1.389546f;
    float d13 = -0.770473f;
    float d14 = 0.521914f;
    float d15 = -0.335802f;
    float d16 = 3.250836f;
    float d17 = 0.730017f;
    float d18 = 10.149578f;
    float d19 = -0.029820f;
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
