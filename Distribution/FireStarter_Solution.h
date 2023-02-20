// Run date: 02/20/23 13:10:39 Pacific Standard Time
// Run duration = 60.492131 seconds
// Run count = 13
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
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 13

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

// Precision = 0.00044775

// Solution0 precision = 0.00010532
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 0.51287985f;
    n *= -0.35477236f;
    r1 = n += 0.74700117f;
    n += 0.62424666f;
    n *= -0.33543760f;
    n = r1 += n;
    r2 = n += 0.62517101f;
    n += -0.63221872f;
    n += 0.68890685f;
    r3 = n *= -0.24672854f;
    n *= 1.80644453f;
    n *= r3;
    n *= 1.26595497f;
    n += -0.64903700f;
    r3 = n *= 1.36993074f;
    r4 = n *= 0.88058543f;
    n *= r2;
    n *= 0.92863286f;
    n *= -1.47871053f;
    n = r3 *= n;
    r2 = n += 0.89994311f;
    n += -0.88780367f;
    n = r2 += n;
    n *= -1.55494487f;
    n += 0.72469378f;
    n *= r3;
    n = r2 += n;
    n *= r4;
    n += 0.58445776f;
    n *= r0;
    n += r2;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00015509
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.91529512f;
    n *= 1.15473819f;
    r1 = n += 0.51969486f;
    n += 2.25531220f;
    n *= -0.40644601f;
    n = r1 += n;
    r2 = n += 1.24770498f;
    n += -0.41516370f;
    n += -1.44570339f;
    r3 = n *= 0.11559673f;
    n *= -0.56123012f;
    n *= r3;
    n *= -1.75903273f;
    n += -0.62718457f;
    r3 = n *= -1.93461776f;
    r4 = n *= -0.19299585f;
    n *= r2;
    n *= 1.16827893f;
    n *= 1.58385229f;
    n = r3 *= n;
    r2 = n += -0.02207678f;
    n += 1.55296016f;
    n = r2 += n;
    n *= -1.45999932f;
    n += -0.99645895f;
    n *= r3;
    n = r2 += n;
    n *= r4;
    n += -0.73300743f;
    n *= r0;
    n += r2;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00044775
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.44834197f;
    n *= -0.24664770f;
    r1 = n += 0.02884954f;
    n += -1.80340242f;
    n *= -0.17787160f;
    n = r1 += n;
    r2 = n += 0.25094739f;
    n += 0.75079107f;
    n += -1.17541504f;
    r3 = n *= 1.10116816f;
    n *= -0.53935701f;
    n *= r3;
    n *= -0.23541753f;
    n += -0.36264724f;
    r3 = n *= -1.19363558f;
    r4 = n *= 1.88068676f;
    n *= r2;
    n *= 1.95937228f;
    n *= -1.24502170f;
    n = r3 *= n;
    r2 = n += 0.43508983f;
    n += -1.10207534f;
    n = r2 += n;
    n *= 4.04750252f;
    n += 0.64977527f;
    n *= r3;
    n = r2 += n;
    n *= r4;
    n += 0.34701028f;
    n *= r0;
    n += r2;
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
