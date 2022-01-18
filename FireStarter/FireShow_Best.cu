#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.265913f;
    data.d[1] = -0.835930f;
    data.d[2] = 0.895861f;
    data.d[3] = 0.082314f;
    data.d[4] = -0.480859f;
    data.d[5] = 0.039261f;
    data.d[6] = -0.865577f;
    data.d[7] = 1.048932f;
    data.d[8] = -0.850466f;
    data.d[9] = 0.503966f;
    data.d[10] = -0.885390f;
    data.d[11] = 0.551003f;
    data.d[12] = -0.149045f;
    data.d[13] = -1.231680f;
    data.d[14] = -0.787059f;
    data.d[15] = -0.172835f;
    data.d[16] = 0.171238f;
    data.d[17] = 0.087092f;
    data.d[18] = 0.443304f;
    data.d[19] = 0.000826f;
    data.d[20] = 0.000000f;
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
    return 0.000011;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.214535f;
    data.d[1] = -0.571012f;
    data.d[2] = 1.058796f;
    data.d[3] = -0.049095f;
    data.d[4] = -0.542474f;
    data.d[5] = -0.034020f;
    data.d[6] = -0.989398f;
    data.d[7] = 0.899998f;
    data.d[8] = -0.348956f;
    data.d[9] = 1.278149f;
    data.d[10] = -0.635030f;
    data.d[11] = 0.264008f;
    data.d[12] = 1.206722f;
    data.d[13] = -0.548950f;
    data.d[14] = -0.203169f;
    data.d[15] = -1.972621f;
    data.d[16] = -0.083258f;
    data.d[17] = -0.128424f;
    data.d[18] = 0.379759f;
    data.d[19] = 0.541981f;
    data.d[20] = 0.000000f;
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
    return 0.000048;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    n += data.d[3];
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[5];
    data.d[5] = n;
    n *= data.d[5];
    data.d[5] = n;
    n += data.d[6];
    data.d[6] = n;
    n *= data.d[7];
    data.d[7] = n;
    n += data.d[8];
    data.d[8] = n;
    n *= data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[12];
    n += data.d[11];
    n *= data.d[13];
    data.d[13] = n;
    n += data.d[5];
    data.d[5] = n;
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[16];
    n += data.d[5];
    n *= data.d[1];
    data.d[1] = n;
    n += data.d[17];
    n *= data.d[18];
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[1];
    n += data.d[8];
    n *= data.d[13];
    n += data.d[7];
    n *= data.d[4];
    n += data.d[19];
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