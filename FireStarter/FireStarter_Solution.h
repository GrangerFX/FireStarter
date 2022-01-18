#include <math.h>

// Run date: 01/18/22 11:51:11 Pacific Standard Time
// Run duration = 0.603972 seconds
// Run count = 1
// Run units = 1
// Run population = 4352
// Run iterations = 15
// Run generations = 100

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf(n * 1.2f) + n * 0.2f;
    case 2:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // Target

// Solution0 precision = 0.000169
inline float Solution0(float n)
{
    float d0 = -0.320778667927f;
    float d1 = 0.779742836952f;
    float d2 = -2.418231964111f;
    float d3 = -1.544583082199f;
    float d4 = -0.256191343069f;
    float d5 = 0.403545975685f;
    float d6 = -0.471395641565f;
    float d7 = 0.310633838177f;
    float d8 = -1.269688487053f;
    float d9 = -0.391868442297f;
    float d10 = -1.149396896362f;
    float d11 = 0.570730924606f;
    float d12 = -1.629120349884f;
    float d13 = 0.376132220030f;
    float d14 = 0.546903014183f;
    float d15 = 1.527192592621f;
    float d16 = -0.819006919861f;
    float d17 = -0.249982044101f;
    float d18 = 0.192890241742f;
    float d19 = 0.723001956940f;
    float d20 = 0.005049568601f;

    n *= d0;
    n += d1;
    n *= d2;
    n += d3;
    d3 = n;
    n *= d4;
    n += d5;
    d5 = n;
    n *= d6;
    n += d7;
    d7 = n;
    n *= d8;
    d8 = n;
    n += d9;
    d9 = n;
    n *= d5;
    d5 = n;
    n += d10;
    n = fabsf(n);
    d3 = n;
    n *= d11;
    n += d3;
    d3 = n;
    n *= d12;
    d12 = n;
    n += d13;
    n *= d12;
    n += d14;
    d14 = n;
    n *= d14;
    n += d9;
    n *= d5;
    n += d15;
    n *= d16;
    n += d3;
    n = fabsf(n);
    n *= d8;
    d8 = n;
    n += d8;
    n *= d18;
    n += d7;
    n *= d19;
    n += d20;
    return n;
} // Solution0

// Solution1 precision = 0.000832
inline float Solution1(float n)
{
    float d0 = 0.447559088469f;
    float d1 = -1.537744522095f;
    float d2 = -0.920114994049f;
    float d3 = -0.191610842943f;
    float d4 = -0.833493173122f;
    float d5 = 0.451509207487f;
    float d6 = 0.001632362488f;
    float d7 = -0.971095263958f;
    float d8 = 0.631546199322f;
    float d9 = 0.332110494375f;
    float d10 = -0.008086926304f;
    float d11 = 2.205560445786f;
    float d12 = -0.017464915290f;
    float d13 = 1.518363595009f;
    float d14 = -0.532268226147f;
    float d15 = 1.905464053154f;
    float d16 = -0.510541319847f;
    float d17 = -0.751602172852f;
    float d18 = -2.269671440125f;
    float d19 = 1.161169171333f;
    float d20 = -0.445915818214f;

    n *= d0;
    n += d1;
    n *= d2;
    n += d3;
    d3 = n;
    n *= d4;
    n += d5;
    d5 = n;
    n *= d6;
    n += d7;
    d7 = n;
    n *= d8;
    d8 = n;
    n += d9;
    d9 = n;
    n *= d5;
    d5 = n;
    n += d10;
    n = fabsf(n);
    d3 = n;
    n *= d11;
    n += d3;
    d3 = n;
    n *= d12;
    d12 = n;
    n += d13;
    n *= d12;
    n += d14;
    d14 = n;
    n *= d14;
    n += d9;
    n *= d5;
    n += d15;
    n *= d16;
    n += d3;
    n = fabsf(n);
    n *= d8;
    d8 = n;
    n += d8;
    n *= d18;
    n += d7;
    n *= d19;
    n += d20;
    return n;
} // Solution1
