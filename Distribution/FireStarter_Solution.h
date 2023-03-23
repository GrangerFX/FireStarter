// Run date: 03/14/23 19:26:07 Pacific Daylight Time
// Run duration = 25.309326 seconds
// Run count = 40
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
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
// Solution Generation = 40

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

// Precision = 0.00026250

// Solution0 precision = 0.00008339
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.48720151f;
    r1 = n += 2.14416575f;
    n = r0 *= n;
    r2 = n += -1.58237565f;
    n *= -1.08122838f;
    n = r0 += n;
    r3 = n *= 0.76421356f;
    n += 2.06893444f;
    r4 = n *= 0.00807990f;
    r5 = n += -0.88847411f;
    r6 = n *= -0.69965273f;
    n += r4;
    r4 = n *= -1.09464514f;
    n += r6;
    n *= r4;
    n += 0.87548316f;
    n *= 0.74004054f;
    n = r0 += n;
    n *= r1;
    n += -0.26165625f;
    r1 = n *= 0.61234695f;
    n += -18.08498383f;
    n *= 0.06787961f;
    r4 = n += 0.94936115f;
    n = r0 *= n;
    n += r3;
    n = r0 *= n;
    n += r2;
    n *= r0;
    n += r4;
    n *= r1;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.00026250
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.42898494f;
    r1 = n += 2.03836775f;
    n = r0 *= n;
    r2 = n += -1.23599076f;
    n *= -1.04516602f;
    n = r0 += n;
    r3 = n *= -1.48423922f;
    n += -0.22937302f;
    r4 = n *= -0.07361908f;
    r5 = n += -0.24006213f;
    r6 = n *= 1.71743917f;
    n += r4;
    r4 = n *= 0.60105479f;
    n += r6;
    n *= r4;
    n += -0.65032631f;
    n *= -0.32742646f;
    n = r0 += n;
    n *= r1;
    n += -1.12788188f;
    r1 = n *= 0.45768711f;
    n += 0.18336980f;
    n *= -0.38554782f;
    r4 = n += 0.61561608f;
    n = r0 *= n;
    n += r3;
    n = r0 *= n;
    n += r2;
    n *= r0;
    n += r4;
    n *= r1;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.00023216
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.37143621f;
    r1 = n += 1.25803912f;
    n = r0 *= n;
    r2 = n += -1.91548681f;
    n *= -1.24728417f;
    n = r0 += n;
    r3 = n *= 1.91607320f;
    n += 1.07777584f;
    r4 = n *= 0.37989289f;
    r5 = n += -1.68703401f;
    r6 = n *= 0.62868369f;
    n += r4;
    r4 = n *= -0.64270097f;
    n += r6;
    n *= r4;
    n += -1.53579974f;
    n *= -0.11242750f;
    n = r0 += n;
    n *= r1;
    n += 1.03526628f;
    r1 = n *= -0.22215582f;
    n += -0.12057595f;
    n *= 0.38892648f;
    r4 = n += 0.36647871f;
    n = r0 *= n;
    n += r3;
    n = r0 *= n;
    n += r2;
    n *= r0;
    n += r4;
    n *= r1;
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
