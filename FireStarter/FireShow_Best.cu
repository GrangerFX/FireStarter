#include "FireStarterDefines.h"
#include "HashRandom.h"

// TARGET //
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
    }
} // Target
// END //

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.927614f;
    data.d[1] = -2.914185f;
    data.d[2] = -0.693461f;
    data.d[3] = 8.802917f;
    data.d[4] = 9.007649f;
    data.d[5] = 9.691804f;
    data.d[6] = -0.000000f;
    data.d[7] = 0.558333f;
    data.d[8] = 1.178792f;
    data.d[9] = 0.144322f;
    data.d[10] = 0.776964f;
    data.d[11] = -0.100895f;
    data.d[12] = -2.381036f;
    data.d[13] = 0.698032f;
    data.d[14] = -0.433798f;
    data.d[15] = 0.414991f;
    data.d[16] = 0.479293f;
    data.d[17] = 2.059347f;
    data.d[18] = -1.421481f;
    data.d[19] = -0.603385f;
    data.d[20] = 0.000001f;
    data.d[21] = 0.000000f;
    data.d[22] = 0.000000f;
    data.d[23] = 0.000000f;
    data.d[24] = 0.000000f;
    data.d[25] = 0.000000f;
    data.d[26] = 0.000000f;
    data.d[27] = 0.000000f;
    data.d[28] = 0.000000f;
    data.d[29] = 0.000000f;
    data.d[30] = 0.000000f;
    data.d[31] = 0.000000f;
    return 0.000000;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.936929f;
    data.d[1] = -2.895726f;
    data.d[2] = -0.657737f;
    data.d[3] = 9.114219f;
    data.d[4] = 6.068958f;
    data.d[5] = 11.428276f;
    data.d[6] = -0.000000f;
    data.d[7] = 0.551456f;
    data.d[8] = 1.434550f;
    data.d[9] = 0.150615f;
    data.d[10] = 0.715327f;
    data.d[11] = -0.087205f;
    data.d[12] = -2.547664f;
    data.d[13] = 0.753104f;
    data.d[14] = -0.436309f;
    data.d[15] = 0.417648f;
    data.d[16] = 0.455785f;
    data.d[17] = 2.072029f;
    data.d[18] = -1.436588f;
    data.d[19] = 0.015708f;
    data.d[20] = -0.118131f;
    data.d[21] = 0.000000f;
    data.d[22] = 0.000000f;
    data.d[23] = 0.000000f;
    data.d[24] = 0.000000f;
    data.d[25] = 0.000000f;
    data.d[26] = 0.000000f;
    data.d[27] = 0.000000f;
    data.d[28] = 0.000000f;
    data.d[29] = 0.000000f;
    data.d[30] = 0.000000f;
    data.d[31] = 0.000000f;
    return 0.000000;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n += data.d[3];
    n *= data.d[4];
    n += data.d[5];
    n = data.d[6] *= n;
    n = data.d[2] += n;
    n = data.d[7] *= n;
    n += data.d[2];
    n *= data.d[1];
    n += data.d[8];
    n *= data.d[9];
    n = data.d[10] += n;
    n *= data.d[11];
    n += data.d[12];
    n = data.d[10] *= n;
    n += data.d[13];
    n = data.d[14] *= n;
    n = data.d[14] += n;
    n *= data.d[6];
    n += data.d[10];
    n *= data.d[15];
    n += data.d[16];
    n = data.d[17] *= n;
    n += data.d[14];
    n *= data.d[17];
    n = data.d[18] += n;
    n *= data.d[18];
    n += data.d[19];
    n *= data.d[7];
    n += data.d[20];
// END //
    return isnan(n) ? 0.0f : n;
} // Evaluate

GPU_GLOBAL void FireShow(const FireStarterResult bestResult, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, const unsigned int variation)
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
        FireStarterData data;
        switch (variation) {
            case 0:
                InitData0(data);
                break;
            case 1:
                InitData1(data);
                break;
            case 2:
                data = bestResult.data;
                break;
        }
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float center = bufferHeight * 0.66f;
        float target = Target(theta, variation);
        int y = (int)(center + target * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
        y = (int)(center + Evaluate(bestResult.data, theta) * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow