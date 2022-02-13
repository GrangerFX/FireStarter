#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = -0.421415f;
        data.d[1] = 0.830486f;
        data.d[2] = -0.319883f;
        data.d[3] = 1.594543f;
        data.d[4] = -0.796329f;
        data.d[5] = -0.859298f;
        data.d[6] = -1.034938f;
        data.d[7] = 2.675779f;
        data.d[8] = 0.283636f;
        data.d[9] = 0.027885f;
        data.d[10] = -0.169623f;
        data.d[11] = 0.082676f;
        data.d[12] = -0.266059f;
        data.d[13] = 2.326662f;
        data.d[14] = -0.713828f;
        data.d[15] = -0.349197f;
        data.d[16] = -0.913324f;
        data.d[17] = 0.649440f;
        data.d[18] = 0.013895f;
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
        data.d[0] = -0.198473f;
        data.d[1] = 0.971296f;
        data.d[2] = -0.605680f;
        data.d[3] = 1.598972f;
        data.d[4] = 1.347906f;
        data.d[5] = 0.894991f;
        data.d[6] = -1.390849f;
        data.d[7] = 0.650440f;
        data.d[8] = 0.293350f;
        data.d[9] = 0.370592f;
        data.d[10] = -0.438840f;
        data.d[11] = 1.246334f;
        data.d[12] = -0.881273f;
        data.d[13] = 0.000026f;
        data.d[14] = -0.908404f;
        data.d[15] = 0.261076f;
        data.d[16] = 2.592181f;
        data.d[17] = -0.087880f;
        data.d[18] = -1.147157f;
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
        data.d[0] = 0.647857f;
        data.d[1] = -1.086583f;
        data.d[2] = -1.160280f;
        data.d[3] = 0.965966f;
        data.d[4] = -0.784736f;
        data.d[5] = 0.007729f;
        data.d[6] = 0.426949f;
        data.d[7] = 1.659891f;
        data.d[8] = -0.001681f;
        data.d[9] = -1.995193f;
        data.d[10] = 0.762282f;
        data.d[11] = 1.413962f;
        data.d[12] = -0.062272f;
        data.d[13] = -1.173226f;
        data.d[14] = 0.312682f;
        data.d[15] = -0.041629f;
        data.d[16] = -0.158977f;
        data.d[17] = 0.557307f;
        data.d[18] = -0.143975f;
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
        data.d[0] = -0.359798f;
        data.d[1] = -0.054708f;
        data.d[2] = 1.136936f;
        data.d[3] = 1.036696f;
        data.d[4] = 1.147784f;
        data.d[5] = 0.248106f;
        data.d[6] = -1.942072f;
        data.d[7] = 0.544476f;
        data.d[8] = -0.531136f;
        data.d[9] = -1.503433f;
        data.d[10] = -1.193171f;
        data.d[11] = -0.692508f;
        data.d[12] = -0.525286f;
        data.d[13] = 0.827296f;
        data.d[14] = -0.426362f;
        data.d[15] = 0.047360f;
        data.d[16] = 0.123754f;
        data.d[17] = 0.422608f;
        data.d[18] = 0.288649f;
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