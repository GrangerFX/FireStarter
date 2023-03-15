// Run date: 03/14/23 01:04:59 Pacific Daylight Time
// Run duration = 15193.580953 seconds
// Run count = 127
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 2
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 1
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 127

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

// Precision = 0.00011730

// Solution0 precision = 0.00011730
inline float Solution0(float n)
{
    float r0, r1, r2;

    r0 = n *= -0.08350060f;
    r1 = n += 0.26236472f;
    n = r0 *= n;
    n = r0 += n;
    r2 = n *= 2.02636456f;
    n += -0.20155336f;
    n *= -3.65334058f;
    n += 38.12841797f;
    n *= 0.12488429f;
    n += -3.12420130f;
    n *= r2;
    n += -1.49785483f;
    n *= -0.37253499f;
    r2 = n += 0.16806333f;
    n = r0 *= n;
    n = r0 += n;
    n *= -1.81754768f;
    n += r2;
    n = r0 *= n;
    n += -30.70058441f;
    n = r0 *= n;
    n += 0.86308753f;
    n *= 18.17519951f;
    n = r1 += n;
    n *= -0.61741024f;
    n += r0;
    n *= 1.61109197f;
    n += r1;
    n *= 0.27231115f;
    n += -0.02292071f;
    r1 = n *= 0.75819743f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00010988
inline float Solution1(float n)
{
    float r0, r1, r2;

    r0 = n *= -0.06988215f;
    r1 = n += 0.67575306f;
    n = r0 *= n;
    n = r0 += n;
    r2 = n *= -0.68673205f;
    n += 1.54568374f;
    n *= -1.71448898f;
    n += 0.25315538f;
    n *= 0.00522070f;
    n += 1.12182999f;
    n *= r2;
    n += 1.12129700f;
    n *= 1.75455320f;
    r2 = n += -0.36318561f;
    n = r0 *= n;
    n = r0 += n;
    n *= -0.51653135f;
    n += r2;
    n = r0 *= n;
    n += 1.49297905f;
    n = r0 *= n;
    n += 0.65258563f;
    n *= -1.54517555f;
    n = r1 += n;
    n *= 2.01810789f;
    n += r0;
    n *= -0.87660629f;
    n += r1;
    n *= 1.41234660f;
    n += -0.68368876f;
    r1 = n *= -1.32160723f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00006343
inline float Solution2(float n)
{
    float r0, r1, r2;

    r0 = n *= 0.09853270f;
    r1 = n += -0.25790495f;
    n = r0 *= n;
    n = r0 += n;
    r2 = n *= -4.37240458f;
    n += -2.37415957f;
    n *= 0.07045168f;
    n += 0.79463273f;
    n *= -0.53879452f;
    n += -0.64708304f;
    n *= r2;
    n += -1.50768554f;
    n *= 0.25436333f;
    r2 = n += -1.93973815f;
    n = r0 *= n;
    n = r0 += n;
    n *= -0.33447206f;
    n += r2;
    n = r0 *= n;
    n += -1.83013237f;
    n = r0 *= n;
    n += -2.09887719f;
    n *= 0.02197414f;
    n = r1 += n;
    n *= -2.44019890f;
    n += r0;
    n *= 0.23772675f;
    n += r1;
    n *= 1.91492963f;
    n += 0.24443562f;
    r1 = n *= 1.26380265f;
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
