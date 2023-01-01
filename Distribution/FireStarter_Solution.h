// Run date: 01/01/23 12:52:24 Pacific Standard Time
// Run duration = 33.444570 seconds
// Run count = 118
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
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 118

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

// Precision = 0.00007510

// Solution0 precision = 0.00000038
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.57079637f;
    r0 = n *= 1.07606769f;
    n *= r0;
    r0 = n += -2.35171103f;
    n *= 2.26000524f;
    n *= 0.33972171f;
    n = r0 += n;
    n += -33.84540176f;
    n *= 0.00332261f;
    r1 = n *= -0.45443031f;
    n = r1 += n;
    r2 = n *= -0.27682275f;
    n *= -0.00954197f;
    n = r1 += n;
    n += 0.58813643f;
    r3 = n += 0.11750123f;
    n *= -0.27133816f;
    n = r3 *= n;
    r4 = n += 0.16095573f;
    r5 = n *= -8.93770504f;
    n *= 0.50960338f;
    r6 = n *= -3.46962667f;
    n *= r4;
    n = r1 += n;
    n *= r3;
    n *= 5.49529839f;
    n += r6;
    n += -0.85310268f;
    n *= r1;
    n += r2;
    n *= r0;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.00007510
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 2.03273845f;
    r0 = n *= -0.10883715f;
    n *= r0;
    r0 = n += -0.33435088f;
    n *= -0.03156036f;
    n *= -4.16246605f;
    n = r0 += n;
    n += -0.92461598f;
    n *= -1.50456285f;
    r1 = n *= 0.17102668f;
    n = r1 += n;
    r2 = n *= -0.00000014f;
    n *= -2.55853605f;
    n = r1 += n;
    n += -0.09592386f;
    r3 = n += 0.96575600f;
    n *= -2.98676467f;
    n = r3 *= n;
    r4 = n += 2.75281143f;
    r5 = n *= 0.12264912f;
    n *= -4.44223976f;
    r6 = n *= -0.31804070f;
    n *= r4;
    n = r1 += n;
    n *= r3;
    n *= -0.25955945f;
    n += r6;
    n += -6.71807671f;
    n *= r1;
    n += r2;
    n *= r0;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.00006199
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 1.37907863f;
    r0 = n *= -0.34518915f;
    n *= r0;
    r0 = n += -2.92864060f;
    n *= -1.22626340f;
    n *= 1.77947569f;
    n = r0 += n;
    n += -0.96175176f;
    n *= 0.51100475f;
    r1 = n *= -0.04657471f;
    n = r1 += n;
    r2 = n *= 0.00000000f;
    n *= 19.89911842f;
    n = r1 += n;
    n += -1.52991581f;
    r3 = n += 0.59081072f;
    n *= 1.41067350f;
    n = r3 *= n;
    r4 = n += -0.79827106f;
    r5 = n *= -0.60523039f;
    n *= 3.35323524f;
    r6 = n *= 0.79254484f;
    n *= r4;
    n = r1 += n;
    n *= r3;
    n *= -1.95811379f;
    n += r6;
    n += -1.94919181f;
    n *= r1;
    n += r2;
    n *= r0;
    n += r5;
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
