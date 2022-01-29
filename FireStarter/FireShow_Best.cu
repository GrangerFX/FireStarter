#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -0.469605f;
    data.d[1] = -0.131099f;
    data.d[2] = 0.281184f;
    data.d[3] = 0.811615f;
    data.d[4] = -0.243416f;
    data.d[5] = -0.290672f;
    data.d[6] = -1.045902f;
    data.d[7] = -1.261326f;
    data.d[8] = 0.787845f;
    data.d[9] = 0.686401f;
    data.d[10] = -0.835511f;
    data.d[11] = 0.519882f;
    data.d[12] = -1.263028f;
    data.d[13] = 0.817187f;
    data.d[14] = 1.191949f;
    data.d[15] = -0.801394f;
    data.d[16] = -0.166946f;
    data.d[17] = -0.759551f;
    data.d[18] = -0.727626f;
    data.d[19] = -0.062394f;
    data.d[20] = -0.179360f;
    data.d[21] = 0.154454f;
    return 0.001473;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = -0.199038f;
    data.d[1] = -0.699677f;
    data.d[2] = -0.871119f;
    data.d[3] = 1.809560f;
    data.d[4] = 0.155934f;
    data.d[5] = -1.155334f;
    data.d[6] = 0.780454f;
    data.d[7] = -0.405062f;
    data.d[8] = -0.404652f;
    data.d[9] = 1.241222f;
    data.d[10] = 1.289948f;
    data.d[11] = -0.675349f;
    data.d[12] = 0.612408f;
    data.d[13] = -0.000000f;
    data.d[14] = 0.469565f;
    data.d[15] = -1.156235f;
    data.d[16] = 0.773867f;
    data.d[17] = -1.231633f;
    data.d[18] = 1.158339f;
    data.d[19] = -0.919971f;
    data.d[20] = -1.570798f;
    data.d[21] = 0.000000f;
    return 0.000002;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = fabsf(n);
    n += data.d[1];
    data.d[1] = n;
    n += data.d[2];
    data.d[2] = n;
    n = fabsf(n);
    n += data.d[4];
    n *= data.d[5];
    data.d[5] = n;
    n *= data.d[6];
    data.d[6] = n;
    n = fabsf(n);
    n += data.d[7];
    n *= data.d[8];
    n *= data.d[9];
    n += data.d[10];
    data.d[10] = n;
    n += data.d[11];
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[12];
    n *= data.d[13];
    data.d[13] = n;
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[13];
    n *= data.d[6];
    n += data.d[16];
    data.d[16] = n;
    n += data.d[16];
    n *= data.d[17];
    n *= data.d[18];
    data.d[18] = n;
    n *= data.d[10];
    n = fabsf(n);
    n += data.d[20];
    data.d[20] = n;
    n *= data.d[5];
    n += data.d[18];
    n *= data.d[21];
    n *= data.d[2];
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