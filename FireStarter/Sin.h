#pragma once

// Google AI provided sin function with 6 digits of accuracy for comparision.

// Key Implementation Details Precision Limit: 32-bit floats (IEEE 754) naturally provide roughly 7 decimal digits of precision.
// Range Reduction: For values of x significantly larger than 2 pi, accuracy may degrade slightly because 32-bit floats
// cannot perfectly represent pi, leading to cumulative errors during repeated subtractions.Performance: This implementation
// uses only 11 multiplications and 6 additions/subtractions in the core calculation, making it highly efficient for hardware
// without a dedicated FPU (Floating Point Unit) or division support.

inline float custom_sinf(float x)
{
    // 1. Constants for range reduction and Taylor series
    const float PI = 3.1415927f;
    const float TWO_PI = 6.2831855f;

    // 2. Simple range reduction to [-PI, PI] using subtraction
    while (x > PI) x -= TWO_PI;
    while (x < -PI) x += TWO_PI;

    // 3. Pre-calculated reciprocal factorials (1/n!)
    const float inv3f = 0.16666667f;       // 1/6
    const float inv5f = 0.0083333334f;     // 1/120
    const float inv7f = 0.0001984127f;     // 1/5040
    const float inv9f = 0.000002755732f;   // 1/362880
    const float inv11f = 0.0000000250521f; // 1/39916800
    const float inv13f = 0.00000000016059f; // 1/6227020800

    // 4. Power calculations using only multiplication
    float x2 = x * x;
    float x3 = x * x2;
    float x5 = x3 * x2;
    float x7 = x5 * x2;
    float x9 = x7 * x2;
    float x11 = x9 * x2;
    float x13 = x11 * x2;

    // 5. Final series sum using addition and subtraction
    return x - (x3 * inv3f) + (x5 * inv5f) - (x7 * inv7f) + (x9 * inv9f) - (x11 * inv11f) + (x13 * inv13f);
} // custom_sinf