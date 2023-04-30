// Run date: 04/30/23 09:59:06 Pacific Daylight Time
// Run duration = 13.003693 seconds
// Run generation = 5
// Run result = 0.00083351
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
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

// Solution0 result = 0.00082423
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.43878230f;
    n *= 3.26624322f;
    n *= 0.03692354f;
    n += -1.33269179f;
    r1 = n *= 0.64385045f;
    n = r0 *= n;
    r2 = n += -1.81455076f;
    n *= 0.66051537f;
    n *= -2.57088828f;
    n *= 2.25835562f;
    n *= 0.76681197f;
    n *= -0.11288114f;
    n *= -1.26101661f;
    r3 = n *= -0.61734396f;
    n += -0.50541830f;
    n = r1 *= n;
    n *= r3;
    n *= 5.40236521f;
    r3 = n *= 0.64512825f;
    r4 = n *= 0.59112602f;
    n += r2;
    n *= -1.14629984f;
    n *= r4;
    n += 6.06713295f;
    n *= r1;
    n = r0 *= n;
    n = r3 += n;
    n *= -0.25562987f;
    n *= r3;
    n += 0.47900489f;
    n += r0;
    n *= 0.45103595f;
    return n;
} // Solution0

// Solution1 result = 0.00083351
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.55602551f;
    n *= -0.33833948f;
    n *= -0.18484087f;
    n += -1.17753875f;
    r1 = n *= 0.55959630f;
    n = r0 *= n;
    r2 = n += -1.08500957f;
    n *= -0.95667696f;
    n *= 4.37653351f;
    n *= -1.84484231f;
    n *= 1.16990602f;
    n *= 0.49642169f;
    n *= -1.24998546f;
    r3 = n *= -0.05809525f;
    n += -1.35058677f;
    n = r1 *= n;
    n *= r3;
    n *= 1.72775066f;
    r3 = n *= -0.60360128f;
    r4 = n *= 0.18526918f;
    n += r2;
    n *= -3.73134661f;
    n *= r4;
    n += -1.09738505f;
    n *= r1;
    n = r0 *= n;
    n = r3 += n;
    n *= 1.88668072f;
    n *= r3;
    n += -1.78010333f;
    n += r0;
    n *= -0.58466309f;
    return n;
} // Solution1

// Solution2 result = 0.00081539
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.71519583f;
    n *= 2.49712563f;
    n *= 0.00126525f;
    n += -1.52839279f;
    r1 = n *= -0.56944644f;
    n = r0 *= n;
    r2 = n += 1.84473181f;
    n *= 0.18767050f;
    n *= -4.07700396f;
    n *= -0.32634038f;
    n *= -0.54374182f;
    n *= -1.82777429f;
    n *= 0.86648202f;
    r3 = n *= 1.38689888f;
    n += 1.58763003f;
    n = r1 *= n;
    n *= r3;
    n *= 0.90929973f;
    r3 = n *= -0.74539000f;
    r4 = n *= 1.77970040f;
    n += r2;
    n *= 0.82649535f;
    n *= r4;
    n += 1.69932508f;
    n *= r1;
    n = r0 *= n;
    n = r3 += n;
    n *= 0.22848487f;
    n *= r3;
    n += -0.11027569f;
    n += r0;
    n *= -1.47591770f;
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
