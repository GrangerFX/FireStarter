#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = -1.071393f;
        data.d[1] = 0.178957f;
        data.d[2] = 0.752222f;
        data.d[3] = -0.455129f;
        data.d[4] = -0.105304f;
        data.d[5] = 0.678899f;
        data.d[6] = -0.225647f;
        data.d[7] = 0.078584f;
        data.d[8] = 0.687086f;
        data.d[9] = 0.893288f;
        data.d[10] = -1.060378f;
        data.d[11] = 0.423247f;
        data.d[12] = -0.894063f;
        data.d[13] = 0.405222f;
        data.d[14] = 0.405523f;
        data.d[15] = 0.512572f;
        data.d[16] = -0.295672f;
        data.d[17] = -0.605587f;
        data.d[18] = 0.138542f;
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
        data.d[0] = -0.418744f;
        data.d[1] = 0.679817f;
        data.d[2] = 0.848620f;
        data.d[3] = -1.032346f;
        data.d[4] = -0.891693f;
        data.d[5] = -0.230704f;
        data.d[6] = -2.440952f;
        data.d[7] = -0.901650f;
        data.d[8] = 0.207363f;
        data.d[9] = -0.247618f;
        data.d[10] = -0.587304f;
        data.d[11] = 0.796318f;
        data.d[12] = -1.253612f;
        data.d[13] = 0.048657f;
        data.d[14] = -1.001368f;
        data.d[15] = -0.216748f;
        data.d[16] = -0.956515f;
        data.d[17] = 0.243031f;
        data.d[18] = 0.127839f;
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
        data.d[0] = 1.189609f;
        data.d[1] = 0.445425f;
        data.d[2] = 0.003999f;
        data.d[3] = 0.138460f;
        data.d[4] = 0.407641f;
        data.d[5] = -0.700217f;
        data.d[6] = -0.118608f;
        data.d[7] = 0.299345f;
        data.d[8] = 0.691603f;
        data.d[9] = 0.908452f;
        data.d[10] = -0.034873f;
        data.d[11] = 0.038944f;
        data.d[12] = 0.924352f;
        data.d[13] = 0.284977f;
        data.d[14] = -0.214091f;
        data.d[15] = -0.405603f;
        data.d[16] = -0.859724f;
        data.d[17] = 0.840676f;
        data.d[18] = 0.688361f;
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
        data.d[0] = 0.241234f;
        data.d[1] = -0.098757f;
        data.d[2] = -0.731473f;
        data.d[3] = -0.821017f;
        data.d[4] = -1.905133f;
        data.d[5] = 0.062168f;
        data.d[6] = -1.274883f;
        data.d[7] = -0.679742f;
        data.d[8] = 2.899965f;
        data.d[9] = 0.367704f;
        data.d[10] = 2.163547f;
        data.d[11] = 0.232237f;
        data.d[12] = -0.263929f;
        data.d[13] = -0.538203f;
        data.d[14] = 0.513906f;
        data.d[15] = 0.231920f;
        data.d[16] = -0.174085f;
        data.d[17] = -0.455868f;
        data.d[18] = 0.419858f;
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