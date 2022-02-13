#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = 0.623661f;
        data.d[1] = 0.792402f;
        data.d[2] = -0.578523f;
        data.d[3] = 0.229182f;
        data.d[4] = 1.464046f;
        data.d[5] = -2.321604f;
        data.d[6] = 0.977031f;
        data.d[7] = -0.311349f;
        data.d[8] = -0.023471f;
        data.d[9] = -0.760649f;
        data.d[10] = 1.175130f;
        data.d[11] = -1.325314f;
        data.d[12] = 0.422151f;
        data.d[13] = 0.437261f;
        data.d[14] = -0.832719f;
        data.d[15] = 0.172271f;
        data.d[16] = 2.037757f;
        data.d[17] = 0.309449f;
        data.d[18] = 0.211772f;
        data.d[19] = 0.0f;
        data.d[20] = 0.0f;
        data.d[21] = 0.0f;
        data.d[22] = 0.0f;
        data.d[23] = 0.0f;
        data.d[24] = 0.0f;
        data.d[25] = 0.0f;
        data.d[26] = 0.0f;
        data.d[27] = 0.0f;
        data.d[28] = 0.0f;
        data.d[29] = 0.0f;
        data.d[30] = 0.0f;
        data.d[31] = 0.0f;
    }
    if (variation == 1) {
        data.d[0] = 0.771664f;
        data.d[1] = -0.670573f;
        data.d[2] = -0.379706f;
        data.d[3] = -0.754176f;
        data.d[4] = 0.162569f;
        data.d[5] = 1.042325f;
        data.d[6] = 0.153069f;
        data.d[7] = 1.035593f;
        data.d[8] = 0.288760f;
        data.d[9] = -0.702907f;
        data.d[10] = -1.994032f;
        data.d[11] = -0.720896f;
        data.d[12] = -1.063093f;
        data.d[13] = 0.966620f;
        data.d[14] = -0.815957f;
        data.d[15] = -0.226448f;
        data.d[16] = -0.819390f;
        data.d[17] = -0.608918f;
        data.d[18] = 0.355977f;
        data.d[19] = 0.0f;
        data.d[20] = 0.0f;
        data.d[21] = 0.0f;
        data.d[22] = 0.0f;
        data.d[23] = 0.0f;
        data.d[24] = 0.0f;
        data.d[25] = 0.0f;
        data.d[26] = 0.0f;
        data.d[27] = 0.0f;
        data.d[28] = 0.0f;
        data.d[29] = 0.0f;
        data.d[30] = 0.0f;
        data.d[31] = 0.0f;
    }
    if (variation == 2) {
        data.d[0] = 0.544825f;
        data.d[1] = -1.021200f;
        data.d[2] = -0.004265f;
        data.d[3] = 0.431549f;
        data.d[4] = 1.470848f;
        data.d[5] = -0.318692f;
        data.d[6] = -1.339968f;
        data.d[7] = -1.007019f;
        data.d[8] = 0.232600f;
        data.d[9] = 0.493320f;
        data.d[10] = 0.376588f;
        data.d[11] = -1.374591f;
        data.d[12] = -0.250360f;
        data.d[13] = -0.005188f;
        data.d[14] = 1.610765f;
        data.d[15] = -0.665244f;
        data.d[16] = -0.453428f;
        data.d[17] = 0.653175f;
        data.d[18] = 0.612727f;
        data.d[19] = 0.0f;
        data.d[20] = 0.0f;
        data.d[21] = 0.0f;
        data.d[22] = 0.0f;
        data.d[23] = 0.0f;
        data.d[24] = 0.0f;
        data.d[25] = 0.0f;
        data.d[26] = 0.0f;
        data.d[27] = 0.0f;
        data.d[28] = 0.0f;
        data.d[29] = 0.0f;
        data.d[30] = 0.0f;
        data.d[31] = 0.0f;
    }
    if (variation == 3) {
        data.d[0] = 0.304092f;
        data.d[1] = 0.162367f;
        data.d[2] = -1.190185f;
        data.d[3] = 0.717847f;
        data.d[4] = 1.551930f;
        data.d[5] = 0.058103f;
        data.d[6] = -0.870087f;
        data.d[7] = -0.918355f;
        data.d[8] = 0.563178f;
        data.d[9] = 1.341693f;
        data.d[10] = 2.258713f;
        data.d[11] = -0.930280f;
        data.d[12] = 0.198628f;
        data.d[13] = 0.222697f;
        data.d[14] = 0.307498f;
        data.d[15] = -0.342887f;
        data.d[16] = 1.010302f;
        data.d[17] = -0.484316f;
        data.d[18] = 0.474236f;
        data.d[19] = 0.0f;
        data.d[20] = 0.0f;
        data.d[21] = 0.0f;
        data.d[22] = 0.0f;
        data.d[23] = 0.0f;
        data.d[24] = 0.0f;
        data.d[25] = 0.0f;
        data.d[26] = 0.0f;
        data.d[27] = 0.0f;
        data.d[28] = 0.0f;
        data.d[29] = 0.0f;
        data.d[30] = 0.0f;
        data.d[31] = 0.0f;
    }
} // InitData
// END //

// PROGRAM //
inline float Program(const FireStarterInstructions& instructions, FireStarterData data, float n)
{
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
       instructions.i[i].Execute(data, n);
    return isnan(n) ? 0.0f : n;
} // Program
// END //

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    data.d[0] = n;
    n += data.d[1];
    n += data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[5];
    data.d[5] = n;
    n += data.d[2];
    data.d[2] = n;
    n *= data.d[4];
    n += data.d[6];
    data.d[6] = n;
    n *= data.d[7];
    n += data.d[0];
    data.d[0] = n;
    n *= data.d[8];
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    n *= data.d[6];
    n += data.d[11];
    n *= data.d[5];
    data.d[5] = n;
    n += fabsf(data.d[9]);
    n += data.d[12];
    data.d[12] = n;
    n *= data.d[13];
    data.d[13] = n;
    n *= data.d[14];
    n += data.d[15];
    data.d[15] = n;
    n += data.d[13];
    n *= data.d[0];
    n *= data.d[16];
    data.d[16] = n;
    n += data.d[16];
    n *= data.d[12];
    n += data.d[2];
    n *= data.d[17];
    n += data.d[15];
    n += data.d[5];
    n += data.d[18];
    return isnan(n) ? 0.0f : n;
} // Evaluate
// END //

GPU_GLOBAL void FireShow(const FireStarterInstructions instructions, const FireStarterResult bestResult, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, const unsigned int variation)
{
    int x = blockDim.x * blockIdx.x + threadIdx.x;
    int xScale = bufferHeight / 8;
    int yScale = bufferHeight / 16;
    if (x < bufferHeight) {
        int x0 = (bufferWidth / 2) - xScale;
        int x1 = (bufferWidth / 2) + xScale;
        if (x0 >= 0) {
            uchar4 &pixel(bufferPixels[x * bufferWidth + x0]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
        if (x1 < bufferWidth) {
            uchar4 &pixel(bufferPixels[x * bufferWidth + x1]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
    }
    if (x < bufferWidth) {
#if 1
        FireStarterData data;
        InitData(variation, data);
#else
        FireStarterData data(bestResult.data);
#endif
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float center = bufferHeight * 0.66f;
        float target = Target(theta, variation);
        int y = (int)(center + target * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
#if 1
        y = (int)(center + Program(instructions, bestResult.data, theta) * yScale);
#endif
#if 0
        y = (int)(center + Evaluate(bestResult.data, theta) * yScale);
#endif
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow