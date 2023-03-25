// Run date: 03/25/23 13:43:11 Pacific Daylight Time
// Run duration = 1806.290419 seconds
// Run count = 120
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 8
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 120

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

// Precision = 0.00032347

// Solution0 precision = 0.00031877
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.27101547f;
    r1 = n += -0.11024226f;
    r2 = n *= 0.59095550f;
    r3 = n += -0.20207255f;
    n *= -1.84703505f;
    r4 = n += 1.69954550f;
    n = r2 *= n;
    n += -0.57224673f;
    r5 = n *= 0.63448161f;
    r6 = n += 0.67497057f;
    n = r0 *= n;
    n += r5;
    n = r0 *= n;
    n += 0.21945088f;
    n *= 0.50339645f;
    n += -0.66013312f;
    n *= 0.01415953f;
    n += -0.25909445f;
    n *= r1;
    n = r0 += n;
    r1 = n *= -3.52568674f;
    n += 0.95850784f;
    n *= 0.30787298f;
    n = r0 += n;
    n *= 0.64992857f;
    n += r2;
    n *= 1.38625431f;
    n += r3;
    n *= r0;
    n += r4;
    n *= r1;
    n += r6;
    return n;
} // Solution0

// Solution1 precision = 0.00026131
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.49590850f;
    r1 = n += -0.97352338f;
    r2 = n *= -0.03945257f;
    r3 = n += -1.54489994f;
    n *= 0.15494123f;
    r4 = n += -2.01034760f;
    n = r2 *= n;
    n += -0.81861913f;
    r5 = n *= 0.85086441f;
    r6 = n += 0.37976527f;
    n = r0 *= n;
    n += r5;
    n = r0 *= n;
    n += 0.86117822f;
    n *= 0.81635320f;
    n += -0.87072909f;
    n *= -1.13005006f;
    n += -0.50222123f;
    n *= r1;
    n = r0 += n;
    r1 = n *= -1.57912064f;
    n += -0.68179333f;
    n *= 0.06764486f;
    n = r0 += n;
    n *= 0.38418448f;
    n += r2;
    n *= 0.17620799f;
    n += r3;
    n *= r0;
    n += r4;
    n *= r1;
    n += r6;
    return n;
} // Solution1

// Solution2 precision = 0.00032347
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.44311884f;
    r1 = n += 2.32789445f;
    r2 = n *= 1.54151309f;
    r3 = n += 0.05292847f;
    n *= 0.03509791f;
    r4 = n += -0.25302112f;
    n = r2 *= n;
    n += 1.08347225f;
    r5 = n *= -1.01457918f;
    r6 = n += 1.95011246f;
    n = r0 *= n;
    n += r5;
    n = r0 *= n;
    n += -1.66558051f;
    n *= -0.08235783f;
    n += 1.01241565f;
    n *= -2.13402939f;
    n += 1.38088036f;
    n *= r1;
    n = r0 += n;
    r1 = n *= -0.07567553f;
    n += 2.22090507f;
    n *= 0.16887800f;
    n = r0 += n;
    n *= -0.01479596f;
    n += r2;
    n *= 0.93325615f;
    n += r3;
    n *= r0;
    n += r4;
    n *= r1;
    n += r6;
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
