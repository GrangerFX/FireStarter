#include <math.h>

// Run date: 01/16/22 18:04:26 Pacific Standard Time
// Run duration = 0.402574 seconds
// Run count = 48
// Run units = 1
// Run population = 4352
// Run iterations = 15
// Run generations = 100

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

// Solution0 precision = 0.000000
inline float Solution0(float n)
{
    n *= 0.62510133f;
    n += -1.96380997f;
    float d0 = n;
    n *= 0.13273989f;
    float d1 = n;
    n += -0.13274148f;
    float d2 = n;
    n *= d0;
    n += d2;
    d2 = n;
    n *= 0.06889851f;
    d0 = n;
    n += -0.02062664f;
    float d3 = n;
    n *= 6.37298298f;
    n += -4.41011906f;
    float d4 = n;
    n *= d3;
    d3 = n;
    n += d3;
    d3 = n;
    n *= -6.37578535f;
    n += 7.53696775f;
    n *= 2.62786102f;
    float d5 = n;
    n += -17.46080017f;
    float d6 = n;
    n *= 22.22168541f;
    float d7 = n;
    n += d5;
    n *= d6;
    n += d7;
    n *= 15.90584183f;
    n += -8.54190826f;
    n *= -0.00000143f;
    n += d4;
    n *= d3;
    n += -4.15821648f;
    d3 = n;
    n *= d2;
    n += 1.50335169f;
    n *= d3;
    n += d0;
    n *= d1;
    n += 0.00000613f;
    return n;
} // Solution0

// Solution1 precision = 0.000000
inline float Solution1(float n)
{
    n *= 0.60968208f;
    n += -1.88431478f;
    float d0 = n;
    n *= 0.13815416f;
    float d1 = n;
    n += -0.13815606f;
    float d2 = n;
    n *= d0;
    n += d2;
    d2 = n;
    n *= 0.05609309f;
    d0 = n;
    n += -0.00032811f;
    float d3 = n;
    n *= 5.36801100f;
    n += -4.41392612f;
    float d4 = n;
    n *= d3;
    d3 = n;
    n += d3;
    d3 = n;
    n *= -6.00137043f;
    n += 7.26652718f;
    n *= 2.25533080f;
    float d5 = n;
    n += -17.03546143f;
    float d6 = n;
    n *= 20.01875496f;
    float d7 = n;
    n += d5;
    n *= d6;
    n += d7;
    n *= 13.05592918f;
    n += -10.80365562f;
    n *= -0.00000579f;
    n += d4;
    n *= d3;
    n += -4.15056086f;
    d3 = n;
    n *= d2;
    n += 2.30110741f;
    n *= d3;
    n += d0;
    n *= d1;
    n += -0.11812385f;
    return n;
} // Solution1
