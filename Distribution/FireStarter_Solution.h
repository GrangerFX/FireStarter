// Run date: 03/27/23 09:25:46 Pacific Daylight Time
// Run duration = 2373.980189 seconds
// Run generation = 0
// Run result = 0.00002493
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 7749
// Run seeds = 11000
// Run mode = FIRESTARTER_RANDOM
// Run tests = 0
// Run units = 8
// Run processes = 16
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
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

// Solution0 result = 0.00000163
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.06053874f;
    n += -0.28798461f;
    r0 = n += -2.91414189f;
    r1 = n *= 0.27514634f;
    r2 = n *= 1.44819999f;
    r3 = n *= 1.59534085f;
    n *= r3;
    r3 = n *= 0.02153028f;
    n *= 3.24761009f;
    n += -1.03924286f;
    r4 = n *= -1.47722208f;
    r5 = n *= -0.95794070f;
    n *= -0.00011553f;
    r6 = n *= -0.04531771f;
    n *= r4;
    n = r2 += n;
    r4 = n *= -1.80307221f;
    n *= 1.44819951f;
    n *= r6;
    n *= -3.83058310f;
    n *= -0.41847369f;
    n += r4;
    n *= r3;
    n += r2;
    n = r0 *= n;
    n *= 0.03655268f;
    n += -0.86502147f;
    n *= r0;
    n += 2.47134876f;
    n *= r5;
    n *= r1;
    n += 0.00000655f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.81225091f;
    n += -0.52468061f;
    r0 = n += -1.75372684f;
    r1 = n *= -0.30256596f;
    r2 = n *= 1.38182247f;
    r3 = n *= -0.02459260f;
    n *= r3;
    r3 = n *= -93.26544952f;
    n *= -1.32057750f;
    n += -0.58107489f;
    r4 = n *= -0.10761991f;
    r5 = n *= 1.13918209f;
    n *= 0.00445256f;
    r6 = n *= 0.04215075f;
    n *= r4;
    n = r2 += n;
    r4 = n *= 1.98857629f;
    n *= 1.37819839f;
    n *= r6;
    n *= -47.87842560f;
    n *= 2.58171344f;
    n += r4;
    n *= r3;
    n += r2;
    n = r0 *= n;
    n *= 0.22742894f;
    n += 10.74743652f;
    n *= r0;
    n += 51.03347778f;
    n *= r5;
    n *= r1;
    n += -0.11813121f;
    return n;
} // Solution1

// Solution2 result = 0.00002493
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.02771952f;
    n += 0.22290276f;
    r0 = n += -2.81308556f;
    r1 = n *= 0.49975738f;
    r2 = n *= -0.79208106f;
    r3 = n *= -0.66146344f;
    n *= r3;
    r3 = n *= -0.11493254f;
    n *= 3.63337779f;
    n += 0.87680584f;
    r4 = n *= -0.03166274f;
    r5 = n *= 2.64260006f;
    n *= 0.29370138f;
    r6 = n *= 0.24372706f;
    n *= r4;
    n = r2 += n;
    r4 = n *= 2.68103957f;
    n *= 41.20901489f;
    n *= r6;
    n *= 1.67795372f;
    n *= -2.75954080f;
    n += r4;
    n *= r3;
    n += r2;
    n = r0 *= n;
    n *= 0.28297287f;
    n += 17.59591484f;
    n *= r0;
    n += 27.27421379f;
    n *= r5;
    n *= r1;
    n += 0.52369487f;
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
