// Run date: 01/04/25 11:45:09 Pacific Standard Time
// Run duration = 884.835194 seconds
// Run generation = 10
// Run evolution = 0
// Run max result = 0.00000014
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1

#ifndef __CUDACC__
#include <cmath>
#endif

#if 0
namespace Constants {
    constexpr long double PIld = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899L; // 80 digits of precision but long double is only 80 bits.
    constexpr double PId = 3.1415926535897932;
    constexpr float PIf = 3.14159265f;
} // Constants
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
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

inline float Solution(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.22372085f;
    n *= 1.15618503f;
    r0 = n += -0.81261283f;
    r1 = n *= -0.13614394f;
    r2 = n *= 1.72038817f;
    n += r2;
    r2 = n *= -2.41943669f;
    n = r1 *= n;
    n += 1.51071143f;
    n += -2.29751587f;
    n += -1.05827606f;
    n += 9.04480076f;
    n *= r2;
    n *= -0.91933644f;
    r2 = n *= -0.06105228f;
    n = r2 *= n;
    r3 = n *= 12.61672401f;
    n += -1.59657156f;
    n = r1 += n;
    n += -15.57171917f;
    r4 = n *= 0.02442276f;
    n += -3.45590305f;
    r5 = n += -1.77451062f;
    n *= r4;
    n *= r2;
    r2 = n += -1.09254670f;
    n += r5;
    n += r3;
    n *= 0.32872456f;
    n *= r2;
    n *= r1;
    n *= r0;
    return n;
} // Solution
