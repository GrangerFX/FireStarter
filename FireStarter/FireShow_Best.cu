#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -0.289090f;
    data.d[1] = -1.303467f;
    data.d[2] = -1.838125f;
    data.d[3] = 0.373037f;
    data.d[4] = -3.141582f;
    data.d[5] = -0.510863f;
    data.d[6] = -0.559002f;
    data.d[7] = -1.110430f;
    data.d[8] = -1.000000f;
    data.d[9] = 1.168224f;
    data.d[10] = 0.495580f;
    data.d[11] = -1.299237f;
    data.d[12] = -0.421746f;
    data.d[13] = 0.622736f;
    data.d[14] = -0.553655f;
    data.d[15] = -2.226254f;
    data.d[16] = -0.880161f;
    data.d[17] = -0.798907f;
    data.d[18] = 2.567938f;
    data.d[19] = 0.191024f;
    data.d[20] = -0.873333f;
    return 0.000014;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.098999f;
    data.d[1] = -0.451570f;
    data.d[2] = -1.119227f;
    data.d[3] = 2.685291f;
    data.d[4] = -3.141593f;
    data.d[5] = 0.566262f;
    data.d[6] = 0.858579f;
    data.d[7] = -0.763691f;
    data.d[8] = 1.056848f;
    data.d[9] = -3.845915f;
    data.d[10] = -3.357795f;
    data.d[11] = -0.738411f;
    data.d[12] = 2.972141f;
    data.d[13] = 0.653228f;
    data.d[14] = 0.718845f;
    data.d[15] = 1.455028f;
    data.d[16] = 3.087654f;
    data.d[17] = -0.353678f;
    data.d[18] = -4.670408f;
    data.d[19] = 2.857769f;
    data.d[20] = 0.000000f;
    return 0.000000;
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
    data.d[7] = n;
    n *= data.d[8];
    data.d[8] = n;
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[12];
    n += data.d[13];
    n *= data.d[10];
    data.d[10] = n;
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[9];
    n *= data.d[6];
    data.d[6] = n;
    n = fabsf(n);
    n += data.d[16];
    n *= data.d[17];
    n += data.d[6];
    n *= data.d[10];
    n = fabsf(n);
    n += data.d[19];
    n *= data.d[5];
    n *= data.d[20];
    n *= data.d[2];
    n += data.d[7];
    n += data.d[8];
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