// Run date: 04/02/23 16:38:10 Pacific Daylight Time
// Run duration = 2645.096755 seconds
// Run generation = 177
// Run result = 0.00001001
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
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

// Solution0 result = 0.00001001
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14158773f;
    r1 = n *= -1.02221835f;
    r2 = n *= -0.34454718f;
    r3 = n *= -0.61126459f;
    n *= 0.90906924f;
    n *= r1;
    n += -1.32573354f;
    r1 = n *= 1.15022230f;
    n *= 1.05758047f;
    r4 = n *= -0.09180760f;
    n += 0.80766463f;
    n = r0 *= n;
    n *= r3;
    n *= -0.04077093f;
    n *= -1.72314596f;
    n *= 1.34283149f;
    n *= -0.10388075f;
    r3 = n += -0.61382270f;
    n += 1.40457618f;
    n = r1 *= n;
    n *= r3;
    r3 = n += -0.08596794f;
    n += r3;
    n += r1;
    n *= 1.64933765f;
    n *= r0;
    n = r2 += n;
    n *= r4;
    n += 1.75844252f;
    n += r2;
    n *= -1.69504559f;
    n += 2.98063588f;
    return n;
} // Solution0

// Solution1 result = 0.00000525
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065700f;
    r1 = n *= -0.51321441f;
    r2 = n *= -0.54504603f;
    r3 = n *= 1.60492587f;
    n *= -0.92742062f;
    n *= r1;
    n += -1.80951798f;
    r1 = n *= -1.20208764f;
    n *= -0.07535475f;
    r4 = n *= -0.01345976f;
    n += 0.03112997f;
    n = r0 *= n;
    n *= r3;
    n *= 1.21755803f;
    n *= -0.62264782f;
    n *= -1.22561431f;
    n *= 1.42680991f;
    r3 = n += -1.25669038f;
    n += -0.25504303f;
    n = r1 *= n;
    n *= r3;
    r3 = n += -1.01399601f;
    n += r3;
    n += r1;
    n *= 1.91950977f;
    n *= r0;
    n = r2 += n;
    n *= r4;
    n += 1.26006746f;
    n += r2;
    n *= -2.34323335f;
    n += 2.83450150f;
    return n;
} // Solution1

// Solution2 result = 0.00000882
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61798835f;
    r1 = n *= 0.63424176f;
    r2 = n *= 0.36899525f;
    r3 = n *= 0.91773564f;
    n *= 1.74531579f;
    n *= r1;
    n += -1.44172013f;
    r1 = n *= 0.20564836f;
    n *= 1.63477814f;
    r4 = n *= -0.07526183f;
    n += 0.37062427f;
    n = r0 *= n;
    n *= r3;
    n *= 1.88709676f;
    n *= -0.49233794f;
    n *= 0.37286720f;
    n *= -1.27356565f;
    r3 = n += -1.31523299f;
    n += -1.00312889f;
    n = r1 *= n;
    n *= r3;
    r3 = n += 0.45969290f;
    n += r3;
    n += r1;
    n *= -0.80045760f;
    n *= r0;
    n = r2 += n;
    n *= r4;
    n += -20.40619087f;
    n += r2;
    n *= -3.21984506f;
    n += -65.18117523f;
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
