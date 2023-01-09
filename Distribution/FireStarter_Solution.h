// Run date: 01/09/23 12:45:39 Pacific Standard Time
// Run duration = 132.027887 seconds
// Run count = 16
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
// Solution Generation = 16

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

// Precision = 0.00000036

// Solution0 precision = 0.00000014
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.82907510f;
    n += -4.03112221f;
    r0 = n += -0.93954551f;
    r1 = n *= 0.35486305f;
    n *= -1.64784753f;
    n = r1 *= n;
    r2 = n += 0.08626024f;
    r3 = n += 0.43342525f;
    n *= 0.00765487f;
    r4 = n += 0.05584385f;
    n += 0.24688689f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.02176974f;
    r5 = n += -0.04624759f;
    n += 2.77279449f;
    n += -1.75817847f;
    n += r2;
    n *= -0.28426376f;
    n *= 0.05366709f;
    n += -1.39111698f;
    n *= r1;
    n *= -2.85596991f;
    n += 13.31563377f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.92293841f;
    n *= r5;
    n += 0.00000002f;
    n *= 1.77767432f;
    return n;
} // Solution0

// Solution1 precision = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.17385888f;
    n += -1.76637673f;
    r0 = n += 0.84957701f;
    r1 = n *= 0.36658126f;
    n *= -4.35390902f;
    n = r1 *= n;
    r2 = n += 2.17702627f;
    r3 = n += 3.28422713f;
    n *= 0.00186767f;
    r4 = n += 1.75503802f;
    n += -1.70216072f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.05487331f;
    r5 = n += -1.24502206f;
    n += 4.10131836f;
    n += -3.50483966f;
    n += r2;
    n *= -1.77385235f;
    n *= 0.01793878f;
    n += -0.46371800f;
    n *= r1;
    n *= 0.19522607f;
    n += -0.56087327f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.84142578f;
    n *= r5;
    n += -0.18246907f;
    n *= 0.64740753f;
    return n;
} // Solution1

// Solution2 precision = 0.00000009
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.17167865f;
    n += -2.93986440f;
    r0 = n += 0.49354926f;
    r1 = n *= 0.25549150f;
    n *= 0.72831517f;
    n = r1 *= n;
    r2 = n += -0.12861511f;
    r3 = n += -0.38094786f;
    n *= -0.05311386f;
    r4 = n += 1.22762191f;
    n += -1.22313535f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -1.69153821f;
    r5 = n += -0.45360023f;
    n += 0.76293242f;
    n += 3.51994562f;
    n += r2;
    n *= -10.08961773f;
    n *= 11.65945530f;
    n += -11.27358723f;
    n *= r1;
    n *= 0.01507133f;
    n += 1.44000816f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -0.23063709f;
    n *= r5;
    n += 0.32785609f;
    n *= 1.59703827f;
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
