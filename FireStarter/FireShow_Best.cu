#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -0.320779f;
    data.d[1] = 0.779743f;
    data.d[2] = -2.418232f;
    data.d[3] = -1.544583f;
    data.d[4] = -0.256191f;
    data.d[5] = 0.403546f;
    data.d[6] = -0.471396f;
    data.d[7] = 0.310634f;
    data.d[8] = -1.269688f;
    data.d[9] = -0.391868f;
    data.d[10] = -1.149397f;
    data.d[11] = 0.570731f;
    data.d[12] = -1.629120f;
    data.d[13] = 0.376132f;
    data.d[14] = 0.546903f;
    data.d[15] = 1.527193f;
    data.d[16] = -0.819007f;
    data.d[17] = -0.249982f;
    data.d[18] = 0.192890f;
    data.d[19] = 0.723002f;
    data.d[20] = 0.005050f;
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
    return 0.000169;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.447559f;
    data.d[1] = -1.537745f;
    data.d[2] = -0.920115f;
    data.d[3] = -0.191611f;
    data.d[4] = -0.833493f;
    data.d[5] = 0.451509f;
    data.d[6] = 0.001632f;
    data.d[7] = -0.971095f;
    data.d[8] = 0.631546f;
    data.d[9] = 0.332110f;
    data.d[10] = -0.008087f;
    data.d[11] = 2.205560f;
    data.d[12] = -0.017465f;
    data.d[13] = 1.518364f;
    data.d[14] = -0.532268f;
    data.d[15] = 1.905464f;
    data.d[16] = -0.510541f;
    data.d[17] = -0.751602f;
    data.d[18] = -2.269671f;
    data.d[19] = 1.161169f;
    data.d[20] = -0.445916f;
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
    return 0.000832;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n += data.d[1];
    n *= data.d[2];
    n += data.d[3];
    data.d[3] = n;
    n *= data.d[4];
    n += data.d[5];
    data.d[5] = n;
    n *= data.d[6];
    n += data.d[7];
    data.d[7] = n;
    n *= data.d[8];
    data.d[8] = n;
    n += data.d[9];
    data.d[9] = n;
    n *= data.d[5];
    data.d[5] = n;
    n += data.d[10];
    n = fabsf(n);
    data.d[3] = n;
    n *= data.d[11];
    n += data.d[3];
    data.d[3] = n;
    n *= data.d[12];
    data.d[12] = n;
    n += data.d[13];
    n *= data.d[12];
    n += data.d[14];
    data.d[14] = n;
    n *= data.d[14];
    n += data.d[9];
    n *= data.d[5];
    n += data.d[15];
    n *= data.d[16];
    n += data.d[3];
    n = fabsf(n);
    n *= data.d[8];
    data.d[8] = n;
    n += data.d[8];
    n *= data.d[18];
    n += data.d[7];
    n *= data.d[19];
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