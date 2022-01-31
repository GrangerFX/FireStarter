#include <math.h>

// Run date: 01/31/22 12:18:06 Pacific Standard Time
// Run duration = 3.470352 seconds
// Run count = 2
// Run units = 16
// Run population = 4352
// Run iterations = 1024
// Run generations = 50
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f
#define TARGET_VARIATIONS 4

inline float Target(float n, unsigned int variation)
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
} // Target

// Solution0 precision = 0.002675
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n = fabsf(n);
    n += -1.52784395f;
    r0 = n;
    n += -1.61380374f;
    r1 = n;
    n = fabsf(n);
    n += -2.23378229f;
    n *= -1.60589254f;
    r2 = n;
    n *= 0.32231516f;
    r3 = n;
    n = fabsf(n);
    n *= 1.05947852f;
    r0 = n;
    n *= -0.20338671f;
    n *= -0.32675096f;
    r4 = n;
    n += 0.76115143f;
    r5 = n;
    n += 0.30571443f;
    r6 = n;
    n *= r3;
    r3 = n;
    n += 0.70911866f;
    n *= -1.07844996f;
    n *= 1.18542564f;
    n += r0;
    n *= r4;
    n *= r3;
    n += -0.63915730f;
    r3 = n;
    n += r3;
    n *= r6;
    n *= 0.71935886f;
    r6 = n;
    n *= r5;
    n = fabsf(n);
    n += -1.50883758f;
    n *= r2;
    n += r6;
    n *= 0.35848665f;
    n *= r1;
    n += -0.00001266f;
    return n;
} // Solution0

// Solution1 precision = 0.000899
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n = fabsf(n);
    n += -1.46991563f;
    r0 = n;
    n += -1.62060094f;
    r1 = n;
    n = fabsf(n);
    n += 0.81531936f;
    n *= 0.15971714f;
    r2 = n;
    n *= 0.69792938f;
    r3 = n;
    n = fabsf(n);
    n *= -0.66633058f;
    r0 = n;
    n *= -1.91109419f;
    n *= 1.68071353f;
    r4 = n;
    n += 0.55173552f;
    r5 = n;
    n += 1.08134186f;
    r6 = n;
    n *= r3;
    r3 = n;
    n += -0.80086952f;
    n *= -0.75173891f;
    n *= -0.39098948f;
    n += r0;
    n *= r4;
    n *= r3;
    n += 0.46096843f;
    r3 = n;
    n += r3;
    n *= r6;
    n *= -1.25130117f;
    r6 = n;
    n *= r5;
    n = fabsf(n);
    n += -0.69510156f;
    n *= r2;
    n += r6;
    n *= 0.56501335f;
    n *= r1;
    n += -0.11806571f;
    return n;
} // Solution1

// Solution2 precision = 0.003419
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n = fabsf(n);
    n += -2.06701159f;
    r0 = n;
    n += -0.55094093f;
    r1 = n;
    n = fabsf(n);
    n += -0.28830966f;
    n *= 0.89785463f;
    r2 = n;
    n *= -0.45637676f;
    r3 = n;
    n = fabsf(n);
    n *= -0.69792879f;
    r0 = n;
    n *= -1.19948852f;
    n *= -0.55955470f;
    r4 = n;
    n += 0.03564849f;
    r5 = n;
    n += 1.24039531f;
    r6 = n;
    n *= r3;
    r3 = n;
    n += -0.56197613f;
    n *= 1.48178768f;
    n *= 0.20122823f;
    n += r0;
    n *= r4;
    n *= r3;
    n += 0.99364597f;
    r3 = n;
    n += r3;
    n *= r6;
    n *= -0.63469046f;
    r6 = n;
    n *= r5;
    n = fabsf(n);
    n += 0.19965708f;
    n *= r2;
    n += r6;
    n *= 0.61348337f;
    n *= r1;
    n += 0.52344477f;
    return n;
} // Solution2

// Solution3 precision = 0.008250
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n = fabsf(n);
    n += -1.49942970f;
    r0 = n;
    n += -1.64213789f;
    r1 = n;
    n = fabsf(n);
    n += 0.72458327f;
    n *= 1.12499022f;
    r2 = n;
    n *= 0.37783498f;
    r3 = n;
    n = fabsf(n);
    n *= 0.68780130f;
    r0 = n;
    n *= 0.71917486f;
    n *= -1.26058340f;
    r4 = n;
    n += 0.60617238f;
    r5 = n;
    n += 0.67076892f;
    r6 = n;
    n *= r3;
    r3 = n;
    n += -1.06138825f;
    n *= -1.13849282f;
    n *= -1.59637487f;
    n += r0;
    n *= r4;
    n *= r3;
    n += 0.28965250f;
    r3 = n;
    n += r3;
    n *= r6;
    n *= -1.59520364f;
    r6 = n;
    n *= r5;
    n = fabsf(n);
    n += -0.04725452f;
    n *= r2;
    n += r6;
    n *= 1.24712598f;
    n *= r1;
    n += 0.00002332f;
    return n;
} // Solution3

