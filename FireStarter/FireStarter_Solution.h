#include <math.h>

// Run date: 01/16/22 13:25:24 Pacific Standard Time
// Run duration = 0.409995 seconds
// Run count = 6
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
    n *= 0.927614f;
    n += -2.914185f;
    float d1 = n;
    n *= -0.693461f;
    float d2 = n;
    n += 8.802917f;
    n *= 9.007649f;
    n += 9.691804f;
    n *= -0.000000f;
    float d6 = n;
    n += d2;
    d2 = n;
    n *= 0.558333f;
    float d7 = n;
    n += d2;
    n *= d1;
    n += 1.178792f;
    n *= 0.144322f;
    n += 0.776964f;
    float d10 = n;
    n *= -0.100895f;
    n += -2.381036f;
    n *= d10;
    d10 = n;
    n += 0.698032f;
    n *= -0.433798f;
    float d14 = n;
    n += d14;
    d14 = n;
    n *= d6;
    n += d10;
    n *= 0.414991f;
    n += 0.479293f;
    n *= 2.059347f;
    float d17 = n;
    n += d14;
    n *= d17;
    n += -1.421481f;
    float d18 = n;
    n *= d18;
    n += -0.603385f;
    n *= d7;
    n += 0.000001f;
    return n;
} // Solution0

// Solution1 precision = 0.000000
inline float Solution1(float n)
{
    n *= 0.936929f;
    n += -2.895726f;
    float d1 = n;
    n *= -0.657737f;
    float d2 = n;
    n += 9.114219f;
    n *= 6.068958f;
    n += 11.428276f;
    n *= -0.000000f;
    float d6 = n;
    n += d2;
    d2 = n;
    n *= 0.551456f;
    float d7 = n;
    n += d2;
    n *= d1;
    n += 1.434550f;
    n *= 0.150615f;
    n += 0.715327f;
    float d10 = n;
    n *= -0.087205f;
    n += -2.547664f;
    n *= d10;
    d10 = n;
    n += 0.753104f;
    n *= -0.436309f;
    float d14 = n;
    n += d14;
    d14 = n;
    n *= d6;
    n += d10;
    n *= 0.417648f;
    n += 0.455785f;
    n *= 2.072029f;
    float d17 = n;
    n += d14;
    n *= d17;
    n += -1.436588f;
    float d18 = n;
    n *= d18;
    n += 0.015708f;
    n *= d7;
    n += -0.118131f;
    return n;
} // Solution1
