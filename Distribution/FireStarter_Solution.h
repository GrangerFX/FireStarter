// Run date: 02/19/23 13:34:40 Pacific Standard Time
// Run duration = 201.180795 seconds
// Run count = 379
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
// Run attempts = 32
// Run seed = 12
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 379

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

// Precision = 0.00003338

// Solution0 precision = 0.00001764
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.08071351f;
    r1 = n += 0.00832189f;
    n = r1 *= n;
    n *= -1.17750931f;
    r2 = n += -1.65623474f;
    n += 0.80880028f;
    n += r2;
    n += -2.72147155f;
    n += 14.75550175f;
    n *= 0.00775564f;
    n += 0.89335889f;
    r2 = n += 0.30350420f;
    n = r2 += n;
    r3 = n *= -0.39722702f;
    n *= r1;
    r1 = n *= 0.05201319f;
    n += -0.28383425f;
    n *= -0.61042511f;
    n = r1 += n;
    n *= 0.46831238f;
    r4 = n *= 0.93920863f;
    n += 0.62058759f;
    n = r0 *= n;
    n *= r3;
    n += r4;
    n *= r2;
    r2 = n += -0.00611785f;
    n += r0;
    n += r2;
    n = r1 *= n;
    n += -0.06916343f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00000465
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.25970387f;
    r1 = n += 0.18934838f;
    n = r1 *= n;
    n *= 1.92302895f;
    r2 = n += -3.86099958f;
    n += 5.99899340f;
    n += r2;
    n += -6.93646860f;
    n += -1.69211113f;
    n *= -0.00117102f;
    n += 1.73758972f;
    r2 = n += -1.52828932f;
    n = r2 += n;
    r3 = n *= 4.89668131f;
    n *= r1;
    r1 = n *= 0.03664321f;
    n += 0.56574512f;
    n *= -0.63564032f;
    n = r1 += n;
    n *= 0.18957224f;
    r4 = n *= -0.30352637f;
    n += 0.50290543f;
    n = r0 *= n;
    n *= r3;
    n += r4;
    n *= r2;
    r2 = n += 0.11420778f;
    n += r0;
    n += r2;
    n = r1 *= n;
    n += -0.12659504f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00003338
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.25968528f;
    r1 = n += -0.47816753f;
    n = r1 *= n;
    n *= -3.00943327f;
    r2 = n += 16.11316872f;
    n += -5.39608383f;
    n += r2;
    n += 5.59522152f;
    n += 17.71356392f;
    n *= 0.00676268f;
    n += 0.02062885f;
    r2 = n += 1.22429860f;
    n = r2 += n;
    r3 = n *= 0.30905175f;
    n *= r1;
    r1 = n *= 0.09127142f;
    n += 0.69947326f;
    n *= -0.35631669f;
    n = r1 += n;
    n *= -0.28264412f;
    r4 = n *= 0.22984955f;
    n += 0.25886196f;
    n = r0 *= n;
    n *= r3;
    n += r4;
    n *= r2;
    r2 = n += -0.25288838f;
    n += r0;
    n += r2;
    n = r1 *= n;
    n += 0.67554516f;
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
