// Run date: 06/04/22 12:24:12 Pacific Daylight Time
// Run duration = 1.574249 seconds
// Run count = 1
// Run units = 4
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 0

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

// Precision = 0.000262

// Solution0 precision = 0.000129
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -0.23453431f;
    r1 = n += -1.27488673f;
    r2 = n *= 0.90082049f;
    r3 = n *= -0.91259408f;
    n *= -0.76469970f;
    n += 1.16260254f;
    n = r3 += n;
    r4 = n *= 0.71898007f;
    n += 1.54984736f;
    n += -2.94692659f;
    n += -0.43078142f;
    n *= r1;
    n += 1.61237013f;
    n *= r0;
    r0 = n += -0.32136038f;
    n *= r3;
    r3 = n += 1.90906858f;
    n += r0;
    n = r3 += n;
    n += 0.55476171f;
    n += r2;
    n *= 0.16397941f;
    n += r4;
    n *= 0.26400951f;
    n *= -0.41520751f;
    r4 = n += -0.84523624f;
    n += 0.63654000f;
    n *= 0.53150344f;
    n *= 0.04000674f;
    n += -0.08280098f;
    n *= r3;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.000180
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -0.39471123f;
    r1 = n += -0.37087011f;
    r2 = n *= 0.68843645f;
    r3 = n *= -0.25638947f;
    n *= -0.48998815f;
    n += 0.44254610f;
    n = r3 += n;
    r4 = n *= 0.21204780f;
    n += -0.95488751f;
    n += 0.25928241f;
    n += 0.44418213f;
    n *= r1;
    n += 0.17096443f;
    n *= r0;
    r0 = n += 0.80500638f;
    n *= r3;
    r3 = n += -0.07439510f;
    n += r0;
    n = r3 += n;
    n += -0.31737328f;
    n += r2;
    n *= 0.59999561f;
    n += r4;
    n *= 0.26558253f;
    n *= 0.76018447f;
    r4 = n += 0.49137706f;
    n += -0.71956152f;
    n *= 1.37970781f;
    n *= 0.36969623f;
    n += 1.28486836f;
    n *= r3;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.000262
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.96151495f;
    r1 = n += 0.70510030f;
    r2 = n *= 0.30792230f;
    r3 = n *= -0.90127534f;
    n *= -0.58835298f;
    n += -1.22594893f;
    n = r3 += n;
    r4 = n *= 0.58372444f;
    n += 1.10422754f;
    n += 0.39452329f;
    n += -0.24373594f;
    n *= r1;
    n += -0.01581966f;
    n *= r0;
    r0 = n += -1.05106544f;
    n *= r3;
    r3 = n += -0.72877669f;
    n += r0;
    n = r3 += n;
    n += 0.74897110f;
    n += r2;
    n *= -0.33551300f;
    n += r4;
    n *= -0.61298925f;
    n *= -0.74475276f;
    r4 = n += -0.98565763f;
    n += -1.41208243f;
    n *= 0.10901868f;
    n *= -1.04975772f;
    n += 0.23755370f;
    n *= r3;
    n *= r4;
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
