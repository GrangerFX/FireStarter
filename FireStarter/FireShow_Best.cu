#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.629986f;
    data.d[1] = -0.681059f;
    data.d[2] = 0.188070f;
    data.d[3] = -0.860486f;
    data.d[4] = 0.253544f;
    data.d[5] = 0.951329f;
    data.d[6] = 0.970938f;
    data.d[7] = 0.001489f;
    data.d[8] = -0.345441f;
    data.d[9] = 1.776382f;
    data.d[10] = -0.576469f;
    data.d[11] = 0.256998f;
    data.d[12] = -0.682772f;
    data.d[13] = 0.256698f;
    data.d[14] = 0.128418f;
    data.d[15] = 1.748669f;
    data.d[16] = 0.050811f;
    data.d[17] = -0.307580f;
    data.d[18] = 0.318302f;
    data.d[19] = -1.070278f;
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
    return 0.000010;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = -0.129559f;
    data.d[1] = 0.639916f;
    data.d[2] = 0.000005f;
    data.d[3] = 2.011723f;
    data.d[4] = -0.575881f;
    data.d[5] = 0.000002f;
    data.d[6] = -0.194120f;
    data.d[7] = -0.280113f;
    data.d[8] = 1.201703f;
    data.d[9] = -0.428313f;
    data.d[10] = -0.648939f;
    data.d[11] = 2.032713f;
    data.d[12] = 0.745552f;
    data.d[13] = 0.378895f;
    data.d[14] = -0.365066f;
    data.d[15] = 0.342395f;
    data.d[16] = -0.427801f;
    data.d[17] = 2.483715f;
    data.d[18] = -0.472745f;
    data.d[19] = 0.634619f;
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
    return 0.000002;
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
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    data.d[5] = n;
    n += data.d[6];
    n *= data.d[7];
    data.d[7] = n;
    n += data.d[4];
    n *= data.d[8];
    n += data.d[9];
    n = fabsf(n);
    data.d[10] = n;
    n *= data.d[5];
    data.d[5] = n;
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[12];
    data.d[12] = n;
    n += data.d[5];
    n *= data.d[12];
    n += data.d[13];
    data.d[13] = n;
    n *= data.d[14];
    n += data.d[13];
    data.d[13] = n;
    n *= data.d[7];
    n += data.d[15];
    n *= data.d[10];
    n += data.d[16];
    n = fabsf(n);
    n *= data.d[13];
    data.d[13] = n;
    n += data.d[18];
    data.d[18] = n;
    n *= data.d[19];
    n += data.d[18];
    n *= data.d[11];
    n += data.d[13];
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