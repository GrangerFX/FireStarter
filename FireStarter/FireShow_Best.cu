#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.562132f;
    data.d[1] = -0.746156f;
    data.d[2] = -0.224150f;
    data.d[3] = 0.061345f;
    data.d[4] = 0.268025f;
    data.d[5] = 0.113774f;
    data.d[6] = 1.456129f;
    data.d[7] = -0.735055f;
    data.d[8] = -0.396627f;
    data.d[9] = -0.401858f;
    data.d[10] = 1.317264f;
    data.d[11] = -1.117691f;
    data.d[12] = 0.667979f;
    data.d[13] = -0.319932f;
    data.d[14] = 0.552779f;
    data.d[15] = -1.070151f;
    data.d[16] = -0.156951f;
    data.d[17] = -0.338397f;
    data.d[18] = -1.314910f;
    data.d[19] = 0.842174f;
    data.d[20] = 0.704771f;
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
    data.d[0] = 0.087853f;
    data.d[1] = -0.263018f;
    data.d[2] = 0.000136f;
    data.d[3] = -1.353429f;
    data.d[4] = 0.382564f;
    data.d[5] = 0.000055f;
    data.d[6] = -0.928486f;
    data.d[7] = 0.878817f;
    data.d[8] = 0.355729f;
    data.d[9] = -1.781142f;
    data.d[10] = -0.000072f;
    data.d[11] = -1.039992f;
    data.d[12] = -0.173839f;
    data.d[13] = -1.202999f;
    data.d[14] = 1.252112f;
    data.d[15] = -0.164511f;
    data.d[16] = 0.819586f;
    data.d[17] = -0.824693f;
    data.d[18] = 2.427008f;
    data.d[19] = 1.139900f;
    data.d[20] = 0.799302f;
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
    return 0.000013;
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
    n *= data.d[1];
    data.d[1] = n;
    n += data.d[4];
    n *= data.d[5];
    n += data.d[6];
    data.d[6] = n;
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n *= data.d[1];
    n += data.d[8];
    n = fabsf(n);
    data.d[9] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[11];
    n *= data.d[12];
    data.d[12] = n;
    n += data.d[13];
    n *= data.d[14];
    n += data.d[15];
    data.d[15] = n;
    n *= data.d[12];
    n += data.d[16];
    n *= data.d[17];
    data.d[17] = n;
    n += data.d[9];
    data.d[9] = n;
    n *= data.d[18];
    n += data.d[17];
    n = fabsf(n);
    n *= data.d[15];
    n += data.d[19];
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[6];
    n *= data.d[20];
    n += data.d[10];
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