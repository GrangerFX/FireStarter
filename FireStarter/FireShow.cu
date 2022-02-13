#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = -0.431842f;
        data.d[1] = 0.665099f;
        data.d[2] = -0.244178f;
        data.d[3] = 1.564296f;
        data.d[4] = -0.805906f;
        data.d[5] = -0.886916f;
        data.d[6] = -1.044022f;
        data.d[7] = 1.968727f;
        data.d[8] = 0.149943f;
        data.d[9] = 0.088231f;
        data.d[10] = -0.226924f;
        data.d[11] = 0.062983f;
        data.d[12] = -0.316756f;
        data.d[13] = 1.334331f;
        data.d[14] = -0.850591f;
        data.d[15] = -0.211242f;
        data.d[16] = -1.229728f;
        data.d[17] = 1.049579f;
        data.d[18] = 0.394993f;
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
        data.d[0] = 0.549200f;
        data.d[1] = -0.726083f;
        data.d[2] = -0.757471f;
        data.d[3] = -1.217797f;
        data.d[4] = 0.909325f;
        data.d[5] = 0.195196f;
        data.d[6] = -0.515329f;
        data.d[7] = 0.448467f;
        data.d[8] = 0.807353f;
        data.d[9] = 0.102871f;
        data.d[10] = -1.040973f;
        data.d[11] = 0.689533f;
        data.d[12] = 0.925445f;
        data.d[13] = -0.295034f;
        data.d[14] = -0.001795f;
        data.d[15] = 0.156844f;
        data.d[16] = 2.275737f;
        data.d[17] = -0.231236f;
        data.d[18] = -0.392971f;
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
        data.d[0] = -0.869657f;
        data.d[1] = 0.276956f;
        data.d[2] = -0.625041f;
        data.d[3] = 0.178498f;
        data.d[4] = -0.598353f;
        data.d[5] = -0.941746f;
        data.d[6] = 0.501112f;
        data.d[7] = -0.839773f;
        data.d[8] = -2.262047f;
        data.d[9] = -0.140275f;
        data.d[10] = -1.333237f;
        data.d[11] = 0.807928f;
        data.d[12] = 0.533665f;
        data.d[13] = -0.249055f;
        data.d[14] = 0.818191f;
        data.d[15] = -0.440606f;
        data.d[16] = -1.833768f;
        data.d[17] = -0.775076f;
        data.d[18] = -0.675364f;
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
        data.d[0] = 0.415244f;
        data.d[1] = -0.309810f;
        data.d[2] = -1.202882f;
        data.d[3] = 0.982791f;
        data.d[4] = 0.769215f;
        data.d[5] = 0.221662f;
        data.d[6] = -0.924297f;
        data.d[7] = -1.532706f;
        data.d[8] = 1.016996f;
        data.d[9] = 0.404060f;
        data.d[10] = 2.426615f;
        data.d[11] = -0.674693f;
        data.d[12] = 0.527102f;
        data.d[13] = -0.218001f;
        data.d[14] = -0.268592f;
        data.d[15] = 0.140700f;
        data.d[16] = -1.290609f;
        data.d[17] = -0.480460f;
        data.d[18] = 0.346979f;
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