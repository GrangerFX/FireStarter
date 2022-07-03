// Run date: 07/03/22 11:36:08 Pacific Daylight Time
// Run duration = 2.978821 seconds
// Run count = 1
// Run mode = 3
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 4
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run seed = 1
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

// Precision = 0.000156

// Solution0 precision = 0.000156
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.03577484f;
    r1 = n += 0.58274186f;
    n += r0;
    r0 = n += -0.69590044f;
    n *= 0.16372320f;
    r2 = n += -2.27588296f;
    n += 0.68137789f;
    r3 = n *= 0.59218639f;
    n = r3 += n;
    r4 = n *= -0.49697766f;
    n *= r2;
    r2 = n += 0.15611884f;
    r5 = n *= 0.04513709f;
    r6 = n *= 0.56716287f;
    n *= r0;
    n *= -0.30074713f;
    n = r6 += n;
    n += r4;
    n = r1 *= n;
    n += r2;
    n += r6;
    n += r5;
    n *= -0.10118083f;
    r5 = n += -1.22317362f;
    r6 = n *= -0.67596018f;
    n += -0.38355860f;
    n += 0.57914102f;
    n *= r1;
    n *= r3;
    n += 0.95509619f;
    n *= r5;
    n *= r6;
    return n;
} // Solution0

// Solution1 precision = 0.000079
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.51946831f;
    r1 = n += 0.34166220f;
    n += r0;
    r0 = n += 0.66264677f;
    n *= 0.03336467f;
    r2 = n += 0.75644535f;
    n += 1.22494805f;
    r3 = n *= 0.50165641f;
    n = r3 += n;
    r4 = n *= -0.23901047f;
    n *= r2;
    r2 = n += 0.76309770f;
    r5 = n *= 1.08782566f;
    r6 = n *= -0.34899402f;
    n *= r0;
    n *= 0.17976508f;
    n = r6 += n;
    n += r4;
    n = r1 *= n;
    n += r2;
    n += r6;
    n += r5;
    n *= -0.28370178f;
    r5 = n += -1.18964195f;
    r6 = n *= -0.88525301f;
    n += -0.22543237f;
    n += -1.25772762f;
    n *= r1;
    n *= r3;
    n += -0.47294238f;
    n *= r5;
    n *= r6;
    return n;
} // Solution1

// Solution2 precision = 0.000085
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.18471694f;
    r1 = n += -1.05668128f;
    n += r0;
    r0 = n += -0.06946025f;
    n *= -0.29863483f;
    r2 = n += 0.59866118f;
    n += 0.22295851f;
    r3 = n *= 0.78209907f;
    n = r3 += n;
    r4 = n *= -0.02089453f;
    n *= r2;
    r2 = n += 1.11011422f;
    r5 = n *= -0.80242455f;
    r6 = n *= 0.28907669f;
    n *= r0;
    n *= -0.07445584f;
    n = r6 += n;
    n += r4;
    n = r1 *= n;
    n += r2;
    n += r6;
    n += r5;
    n *= 0.68755031f;
    r5 = n += -1.25875425f;
    r6 = n *= 0.93500763f;
    n += -0.11502629f;
    n += -0.45018733f;
    n *= r1;
    n *= r3;
    n += 0.68748242f;
    n *= r5;
    n *= r6;
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
