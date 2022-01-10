#include <math.h>

// Run date: 01/09/22 19:58:06 Pacific Standard Time
// Run duration = 0.433981 seconds
// Run count = 48
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

// Solution0 precision = 0.000000
inline float Solution0(float n)
{
    float d0 = 0.625101f;
    float d1 = -1.963810f;
    float d2 = 0.132740f;
    float d3 = -0.132741f;
    float d4 = 0.068899f;
    float d5 = -0.020627f;
    float d6 = 6.372983f;
    float d7 = -4.410119f;
    float d8 = -6.375785f;
    float d9 = 7.536968f;
    float d10 = 2.627861f;
    float d11 = -17.460800f;
    float d12 = 22.221685f;
    float d13 = 15.905842f;
    float d14 = -8.541908f;
    float d15 = -0.000001f;
    float d16 = -4.158216f;
    float d17 = 1.503352f;
    float d18 = 0.000006f;
    n = d0 *= n;
    n = d1 += n;
    n = d2 *= n;
    n = d3 += n;
    n = d1 *= n;
    n = d3 += n;
    n = d4 *= n;
    n = d5 += n;
    n = d6 *= n;
    n = d7 += n;
    n = d5 *= n;
    n = d5 += n;
    n = d8 *= n;
    n = d9 += n;
    n = d10 *= n;
    n = d11 += n;
    n = d12 *= n;
    n = d10 += n;
    n = d11 *= n;
    n = d12 += n;
    n = d13 *= n;
    n = d14 += n;
    n = d15 *= n;
    n = d7 += n;
    n = d5 *= n;
    n = d16 += n;
    n = d3 *= n;
    n = d17 += n;
    n = d16 *= n;
    n = d4 += n;
    n = d2 *= n;
    n = d18 += n;
    return n;
} // Solution0

// Solution1 precision = 0.000000
inline float Solution1(float n)
{
    float d0 = 0.609682f;
    float d1 = -1.884315f;
    float d2 = 0.138154f;
    float d3 = -0.138156f;
    float d4 = 0.056093f;
    float d5 = -0.000328f;
    float d6 = 5.368011f;
    float d7 = -4.413926f;
    float d8 = -6.001370f;
    float d9 = 7.266527f;
    float d10 = 2.255331f;
    float d11 = -17.035461f;
    float d12 = 20.018755f;
    float d13 = 13.055929f;
    float d14 = -10.803656f;
    float d15 = -0.000006f;
    float d16 = -4.150561f;
    float d17 = 2.301107f;
    float d18 = -0.118124f;
    n = d0 *= n;
    n = d1 += n;
    n = d2 *= n;
    n = d3 += n;
    n = d1 *= n;
    n = d3 += n;
    n = d4 *= n;
    n = d5 += n;
    n = d6 *= n;
    n = d7 += n;
    n = d5 *= n;
    n = d5 += n;
    n = d8 *= n;
    n = d9 += n;
    n = d10 *= n;
    n = d11 += n;
    n = d12 *= n;
    n = d10 += n;
    n = d11 *= n;
    n = d12 += n;
    n = d13 *= n;
    n = d14 += n;
    n = d15 *= n;
    n = d7 += n;
    n = d5 *= n;
    n = d16 += n;
    n = d3 *= n;
    n = d17 += n;
    n = d16 *= n;
    n = d4 += n;
    n = d2 *= n;
    n = d18 += n;
    return n;
} // Solution1
