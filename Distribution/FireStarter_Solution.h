// Run date: 07/17/22 17:28:56 Pacific Daylight Time
// Run duration = 1.984672 seconds
// Run count = 81
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run generations = 100;
// Run precision = 256;
// Run evolve = 1;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 8000

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

// Precision = 0.00006938

// Solution0 precision = 0.00001699
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.56986046f;
    n += 0.57836467f;
    n *= 1.43121064f;
    n += 0.00771665f;
    n *= -0.29358432f;
    r1 = n *= -0.30221993f;
    r2 = n *= -0.80700421f;
    n *= -1.12272882f;
    r3 = n += 0.34306479f;
    n = r1 *= n;
    n = r2 += n;
    r4 = n += -2.31475830f;
    n += r3;
    r3 = n += -0.50428373f;
    n = r2 *= n;
    n = r3 *= n;
    n = r3 += n;
    n += 0.74439049f;
    r5 = n += -1.40735972f;
    n += -1.92685950f;
    n = r0 += n;
    r6 = n += -0.82056487f;
    n *= r6;
    n *= r5;
    n *= r0;
    n += r3;
    n = r1 *= n;
    n += r4;
    n += r1;
    n *= -15.59050369f;
    n *= 0.02367470f;
    n += r2;
    return n;
} // Solution0

// Solution1 precision = 0.00002778
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.13848028f;
    n += 0.24802108f;
    n *= -0.11766044f;
    n += -0.02102855f;
    n *= -33.83282089f;
    r1 = n *= 0.07735555f;
    r2 = n *= -0.49806157f;
    n *= -1.73268521f;
    r3 = n += 0.48817056f;
    n = r1 *= n;
    n = r2 += n;
    r4 = n += -0.50086755f;
    n += r3;
    r3 = n += -5.06744862f;
    n = r2 *= n;
    n = r3 *= n;
    n = r3 += n;
    n += -0.79017246f;
    r5 = n += -0.88576460f;
    n += -1.56858420f;
    n = r0 += n;
    r6 = n += -0.78288102f;
    n *= r6;
    n *= r5;
    n *= r0;
    n += r3;
    n = r1 *= n;
    n += r4;
    n += r1;
    n *= -0.05177575f;
    n *= -4.17219257f;
    n += r2;
    return n;
} // Solution1

// Solution2 precision = 0.00006938
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.33670068f;
    n += 0.89703512f;
    n *= 0.64232242f;
    n += -0.82017100f;
    n *= 4.10823727f;
    r1 = n *= -0.09933847f;
    r2 = n *= -0.33312315f;
    n *= 1.19311273f;
    r3 = n += 2.16515732f;
    n = r1 *= n;
    n = r2 += n;
    r4 = n += -1.08517051f;
    n += r3;
    r3 = n += -0.44627085f;
    n = r2 *= n;
    n = r3 *= n;
    n = r3 += n;
    n += -0.91242111f;
    r5 = n += -1.24106491f;
    n += 1.64445174f;
    n = r0 += n;
    r6 = n += -1.67154658f;
    n *= r6;
    n *= r5;
    n *= r0;
    n += r3;
    n = r1 *= n;
    n += r4;
    n += r1;
    n *= 0.11093094f;
    n *= -9.98645687f;
    n += r2;
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
