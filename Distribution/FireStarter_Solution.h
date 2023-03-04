// Run date: 03/04/23 14:39:49 Pacific Standard Time
// Run duration = 3191.605416 seconds
// Run count = 56
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
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 56

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

// Precision = 0.00032490

// Solution0 precision = 0.00032490
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.96655107f;
    n += -0.90405357f;
    n += 0.61000448f;
    n += -0.64539224f;
    r1 = n *= 0.11051289f;
    n *= -3.56900597f;
    r2 = n += 3.49831653f;
    n += -1.71721315f;
    n += r0;
    n += 1.58060253f;
    n *= 2.38378000f;
    r0 = n *= 0.25401950f;
    n *= 0.65791541f;
    r3 = n += -4.78429413f;
    r4 = n += 2.56490421f;
    n *= 1.34428275f;
    n *= -0.96256155f;
    n *= r1;
    r1 = n += 0.71822655f;
    n += 1.11906290f;
    r5 = n += 0.79587722f;
    n *= r4;
    r4 = n *= -0.11116090f;
    n += -0.24879916f;
    n *= r0;
    n *= 1.63639784f;
    n *= r5;
    n *= r2;
    n *= r1;
    n *= r3;
    n += -3.14436316f;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.00014365
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.31358892f;
    n += -1.86146069f;
    n += 0.75718898f;
    n += -0.13588348f;
    r1 = n *= -1.24317205f;
    n *= -0.11656640f;
    r2 = n += -0.02950517f;
    n += -0.67198390f;
    n += r0;
    n += 1.89982283f;
    n *= -1.95451427f;
    r0 = n *= 0.38126951f;
    n *= -0.77778554f;
    r3 = n += 1.25881696f;
    r4 = n += -2.13711977f;
    n *= 0.04018226f;
    n *= 3.20971155f;
    n *= r1;
    r1 = n += 1.77530348f;
    n += 0.98350358f;
    r5 = n += -1.07440281f;
    n *= r4;
    r4 = n *= -1.64110529f;
    n += 0.60490882f;
    n *= r0;
    n *= 0.91218686f;
    n *= r5;
    n *= r2;
    n *= r1;
    n *= r3;
    n += 0.07960833f;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.00030753
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 1.28703737f;
    n += -3.02128625f;
    n += -0.70284635f;
    n += -1.62275863f;
    r1 = n *= -0.11694052f;
    n *= -1.90155911f;
    r2 = n += -1.32095599f;
    n += -0.83274847f;
    n += r0;
    n += -0.34012586f;
    n *= 0.44809580f;
    r0 = n *= -0.69330019f;
    n *= -0.62342793f;
    r3 = n += -0.99060363f;
    r4 = n += 1.70381391f;
    n *= -0.21203192f;
    n *= -2.84815860f;
    n *= r1;
    r1 = n += 1.85507703f;
    n += 0.43326545f;
    r5 = n += -0.63578975f;
    n *= r4;
    r4 = n *= 0.52249175f;
    n += 0.52816135f;
    n *= r0;
    n *= 0.51995391f;
    n *= r5;
    n *= r2;
    n *= r1;
    n *= r3;
    n += 1.20409489f;
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
