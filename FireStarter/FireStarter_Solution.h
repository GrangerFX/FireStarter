#include <math.h>

// Run date: 01/16/22 15:09:46 Pacific Standard Time
// Run duration = 2.119503 seconds
// Run count = 4
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

// Solution0 precision = 0.000147
inline float Solution0(float n)
{
    n *= -0.646812f;
    n += 0.852414f;
    float d1 = n;
    n *= -0.399541f;
    n += -0.467955f;
    float d3 = n;
    n *= -0.742798f;
    float d4 = n;
    n += -0.023894f;
    float d5 = n;
    n *= 0.598775f;
    n += d1;
    d1 = n;
    n *= -0.139734f;
    n += d5;
    n *= d1;
    d1 = n;
    n += 0.224145f;
    n *= 0.262392f;
    n += -0.888789f;
    float d10 = n;
    n *= -1.460212f;
    n += 0.926282f;
    float d12 = n;
    n *= d12;
    n += -0.420153f;
    n *= d4;
    d4 = n;
    n += 0.814381f;
    n *= d3;
    n += 1.617430f;
    n *= 0.052022f;
    n += 0.153610f;
    float d17 = n;
    n *= d17;
    n += d1;
    n *= d10;
    n += 1.437820f;
    float d18 = n;
    n *= d18;
    n += -1.182027f;
    n *= d4;
    n += 0.012947f;
    return n;
} // Solution0

// Solution1 precision = 0.000196
inline float Solution1(float n)
{
    n *= 0.635886f;
    n += -0.697097f;
    float d1 = n;
    n *= -0.553038f;
    n += 0.533378f;
    float d3 = n;
    n *= 0.275275f;
    float d4 = n;
    n += 0.300110f;
    float d5 = n;
    n *= -1.090370f;
    n += d1;
    d1 = n;
    n *= -0.170969f;
    n += d5;
    n *= d1;
    d1 = n;
    n += 0.499506f;
    n *= 0.095868f;
    n += 0.874769f;
    float d10 = n;
    n *= 1.428909f;
    n += 0.521133f;
    float d12 = n;
    n *= d12;
    n += -0.604094f;
    n *= d4;
    d4 = n;
    n += -0.371962f;
    n *= d3;
    n += 1.360465f;
    n *= -0.011695f;
    n += -1.316438f;
    float d17 = n;
    n *= d17;
    n += d1;
    n *= d10;
    n += 0.798875f;
    float d18 = n;
    n *= d18;
    n += -2.977944f;
    n *= d4;
    n += 0.528571f;
    return n;
} // Solution1
