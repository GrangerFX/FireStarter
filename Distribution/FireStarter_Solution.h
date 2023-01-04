// Run date: 01/03/23 17:58:20 Pacific Standard Time
// Run duration = 11.973060 seconds
// Run count = 72
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 10484
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 72

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000048

// Solution0 precision = 0.00000048
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 1.08449471f;
    n = r1 *= n;
    n *= 0.02909756f;
    n += -3.43925524f;
    r2 = n *= -0.74863732f;
    r3 = n *= 0.35110217f;
    n *= -0.69453526f;
    n *= -1.02429914f;
    r4 = n *= -0.40007359f;
    n = r3 *= n;
    r5 = n *= 0.23926020f;
    r6 = n *= 0.86354190f;
    n = r1 *= n;
    r7 = n *= 3.21049070f;
    n *= r2;
    n += 3.92869139f;
    n += 34.92493057f;
    n += -69.27806854f;
    n *= 3.32383680f;
    n *= r6;
    n += 3.18357849f;
    n += -65.76079559f;
    n = r1 += n;
    n *= r7;
    n += 0.33913273f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.00000001f;
    return n;
} // Solution0

// Solution1 precision = 0.00000027
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065890f;
    r1 = n *= -0.63247305f;
    n = r1 *= n;
    n *= -0.01030448f;
    n += 1.18151331f;
    r2 = n *= 1.01967156f;
    r3 = n *= -1.01427555f;
    n *= -0.56787515f;
    n *= 1.55960143f;
    r4 = n *= -0.25138211f;
    n = r3 *= n;
    r5 = n *= 1.17119777f;
    r6 = n *= 0.78164124f;
    n = r1 *= n;
    r7 = n *= -1.14504921f;
    n *= r2;
    n += 1.82386220f;
    n += 1.92281246f;
    n += 0.63974649f;
    n *= -0.33121753f;
    n *= r6;
    n += -0.85894799f;
    n += -3.72294235f;
    n = r1 += n;
    n *= r7;
    n += -1.37257433f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813187f;
    return n;
} // Solution1

// Solution2 precision = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= -0.28063518f;
    n = r1 *= n;
    n *= -0.13471247f;
    n += 1.81558096f;
    r2 = n *= 1.65096736f;
    r3 = n *= -0.75676650f;
    n *= 2.26016688f;
    n *= -0.36699170f;
    r4 = n *= 0.42511377f;
    n = r3 *= n;
    r5 = n *= 0.37804148f;
    r6 = n *= -0.90942270f;
    n = r1 *= n;
    r7 = n *= -2.94279313f;
    n *= r2;
    n += -1.01019001f;
    n += -0.85374576f;
    n += 3.04243875f;
    n *= -0.04893781f;
    n *= r6;
    n += -2.00718570f;
    n += 1.08457959f;
    n = r1 += n;
    n *= r7;
    n += -0.48763245f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
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
