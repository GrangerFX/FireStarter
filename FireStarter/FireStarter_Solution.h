#include <math.h>

// Run date: 01/17/22 10:31:37 Pacific Standard Time
// Run duration = 0.483323 seconds
// Run count = 44
// Run units = 1
// Run population = 4352
// Run iterations = 15
// Run generations = 100

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f

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
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // Target

// Solution0 precision = 0.000272
inline float Solution0(float n)
{
    n *= 0.56992000f;
    n += -1.79060268f;
    float d0 = n;
    n *= -0.80187774f;
    float d1 = n;
    n += 0.00240583f;
    float d2 = n;
    n *= -1.08543754f;
    float d3 = n;
    n += 0.00313707f;
    float d4 = n;
    n *= d4;
    d4 = n;
    n += -1.30747294f;
    float d5 = n;
    n *= d3;
    d3 = n;
    n += d1;
    n *= 0.88632399f;
    d1 = n;
    n += d2;
    n *= d3;
    n += 1.55819404f;
    d3 = n;
    n *= 29.18885231f;
    d2 = n;
    n += -21.52932549f;
    n *= 0.00342682f;
    n += -0.58481336f;
    n *= -0.00408181f;
    float d6 = n;
    n += d3;
    d3 = n;
    n *= -2.10051584f;
    n += -23.07028008f;
    n *= -0.05228462f;
    n += d4;
    n *= d5;
    n += d3;
    n *= d0;
    n += -0.01217840f;
    n *= d6;
    n += -0.00000740f;
    n *= d2;
    n += d1;
    return n;
} // Solution0

// Solution1 precision = 0.001740
inline float Solution1(float n)
{
    n *= 0.58404100f;
    n += -1.83286035f;
    float d0 = n;
    n *= -0.86523795f;
    float d1 = n;
    n += -0.00180710f;
    float d2 = n;
    n *= -1.05536890f;
    float d3 = n;
    n += -0.00650813f;
    float d4 = n;
    n *= d4;
    d4 = n;
    n += -1.48693359f;
    float d5 = n;
    n *= d3;
    d3 = n;
    n += d1;
    n *= 0.88685340f;
    d1 = n;
    n += d2;
    n *= d3;
    n += 1.55031669f;
    d3 = n;
    n *= 28.15595436f;
    d2 = n;
    n += -20.10745430f;
    n *= 0.00715164f;
    n += -0.36234149f;
    n *= -0.01005461f;
    float d6 = n;
    n += d3;
    d3 = n;
    n *= -2.85619712f;
    n += -25.37414551f;
    n *= 0.02932857f;
    n += d4;
    n *= d5;
    n += d3;
    n *= d0;
    n += -0.00869357f;
    n *= d6;
    n += 0.00016675f;
    n *= d2;
    n += d1;
    return n;
} // Solution1
