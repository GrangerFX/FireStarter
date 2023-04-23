// Run date: 04/23/23 13:33:51 Pacific Daylight Time
// Run duration = 2369.043481 seconds
// Run generation = 274
// Run result = 0.00000030
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

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
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.61514103f;
    r0 = n += 1.93252254f;
    r1 = n *= 0.03185044f;
    n *= r0;
    r0 = n *= -0.27925605f;
    n *= -0.65079248f;
    r2 = n *= 1.79474688f;
    n += -1.20972466f;
    n *= -2.38263011f;
    r3 = n *= -1.32090974f;
    n += 0.11831556f;
    n = r0 += n;
    n = r2 *= n;
    r4 = n *= -0.05128027f;
    n *= r4;
    n *= 5.29643345f;
    r4 = n += -1.70072150f;
    n *= r2;
    r2 = n += -0.86269456f;
    n *= -1.92925119f;
    n = r2 += n;
    r5 = n += 1.43891180f;
    n *= r4;
    n = r2 *= n;
    n = r3 *= n;
    n *= r2;
    n *= 0.50115979f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r0;
    n += 0.00000005f;
    return n;
} // Solution0

// Solution1 result = 0.00000030
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.12182277f;
    r0 = n += 0.37651262f;
    r1 = n *= 0.05760266f;
    n *= r0;
    r0 = n *= -0.06438356f;
    n *= -3.82222748f;
    r2 = n *= -2.31673741f;
    n += 1.80566204f;
    n *= 3.25018239f;
    r3 = n *= -1.88400495f;
    n += -5.96967459f;
    n = r0 += n;
    n = r2 *= n;
    r4 = n *= -0.07226992f;
    n *= r4;
    n *= 24.27585220f;
    r4 = n += 1.24181116f;
    n *= r2;
    r2 = n += -0.47229043f;
    n *= -3.55253053f;
    n = r2 += n;
    r5 = n += -0.52784520f;
    n *= r4;
    n = r2 *= n;
    n = r3 *= n;
    n *= r2;
    n *= 0.20806095f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r0;
    n += -0.11813216f;
    return n;
} // Solution1

// Solution2 result = 0.00000013
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.35370511f;
    r0 = n += -0.92599773f;
    r1 = n *= -0.24069588f;
    n *= r0;
    r0 = n *= 0.75836092f;
    n *= -1.40484524f;
    r2 = n *= 1.44698906f;
    n += -0.23133086f;
    n *= 0.16324069f;
    r3 = n *= 2.99442387f;
    n += 0.17661385f;
    n = r0 += n;
    n = r2 *= n;
    r4 = n *= 0.38654163f;
    n *= r4;
    n *= -26.54205322f;
    r4 = n += -3.98847294f;
    n *= r2;
    r2 = n += 1.20569968f;
    n *= 2.15395331f;
    n = r2 += n;
    r5 = n += -2.12556100f;
    n *= r4;
    n = r2 *= n;
    n = r3 *= n;
    n *= r2;
    n *= -1.46717703f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r0;
    n += 0.52359873f;
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
