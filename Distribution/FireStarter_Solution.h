// Run date: 07/23/22 18:15:30 Pacific Daylight Time
// Run duration = 4.858025 seconds
// Run count = 6
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run generations = 10;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 50

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.05088961

// Solution0 precision = 0.03670359
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.67931271f;
    n += 0.12211066f;
    n += -1.02880716f;
    r0 = n *= -0.84375882f;
    r1 = n += 0.65080762f;
    r2 = n += -0.81824017f;
    n *= 0.10403702f;
    r3 = n *= 0.73433512f;
    n *= -0.08553883f;
    r4 = n += -1.42196822f;
    n += -0.43168706f;
    n *= -0.55455661f;
    n = r2 *= n;
    n = r3 *= n;
    n = r3 += n;
    r5 = n += -0.16512442f;
    n *= -0.67867494f;
    n += -0.91906852f;
    n += r0;
    n += 0.10118583f;
    r0 = n *= -0.58792877f;
    n *= -0.64000183f;
    n += r3;
    n *= r2;
    n *= r4;
    n += r0;
    n *= 0.66172612f;
    n += -0.43419325f;
    n = r1 += n;
    n *= -0.66462898f;
    n *= r5;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.05088961
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.56048000f;
    n += -2.82935596f;
    n += 0.65626353f;
    r0 = n *= -0.78080130f;
    r1 = n += 0.94672811f;
    r2 = n += -0.07443580f;
    n *= -1.40369105f;
    r3 = n *= 0.10399354f;
    n *= -0.11297946f;
    r4 = n += 0.65225202f;
    n += -0.93041700f;
    n *= -2.71572447f;
    n = r2 *= n;
    n = r3 *= n;
    n = r3 += n;
    r5 = n += 0.24449317f;
    n *= -0.79633296f;
    n += -3.10819435f;
    n += r0;
    n += 0.62166011f;
    r0 = n *= 0.53807408f;
    n *= 0.51812196f;
    n += r3;
    n *= r2;
    n *= r4;
    n += r0;
    n *= 0.82148385f;
    n += 0.73369330f;
    n = r1 += n;
    n *= 0.47060919f;
    n *= r5;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.04939961
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.10122219f;
    n += -1.52971315f;
    n += 0.38426715f;
    r0 = n *= 0.14054832f;
    r1 = n += -0.66656363f;
    r2 = n += 0.54114431f;
    n *= -0.83452791f;
    r3 = n *= 1.45000827f;
    n *= -0.58597940f;
    r4 = n += -0.97801161f;
    n += -4.63657618f;
    n *= -0.61807764f;
    n = r2 *= n;
    n = r3 *= n;
    n = r3 += n;
    r5 = n += -0.54553223f;
    n *= 0.68264788f;
    n += -0.38429204f;
    n += r0;
    n += 1.70315886f;
    r0 = n *= -2.62724733f;
    n *= 1.94804096f;
    n += r3;
    n *= r2;
    n *= r4;
    n += r0;
    n *= -0.73261648f;
    n += 0.08186284f;
    n = r1 += n;
    n *= 0.74805880f;
    n *= r5;
    n += r1;
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
