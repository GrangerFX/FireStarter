#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION float InitData0(FireStarterData &data)
{
    data.d[0] = -1.284715f;
    data.d[1] = 0.729497f;
    data.d[2] = 0.364543f;
    data.d[3] = -1.845706f;
    data.d[4] = 0.794632f;
    data.d[5] = -0.433704f;
    data.d[6] = -0.417250f;
    data.d[7] = -0.064309f;
    data.d[8] = -0.784940f;
    data.d[9] = 0.698825f;
    data.d[10] = -0.101321f;
    data.d[11] = -1.144925f;
    data.d[12] = -0.626631f;
    data.d[13] = 0.064155f;
    data.d[14] = 1.447167f;
    data.d[15] = 0.962894f;
    data.d[16] = 2.294275f;
    data.d[17] = -1.246661f;
    data.d[18] = 0.317668f;
    return 0.000321;
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
    data.d[0] = -1.247857f;
    data.d[1] = -0.784281f;
    data.d[2] = -0.786516f;
    data.d[3] = 0.849480f;
    data.d[4] = -1.026288f;
    data.d[5] = -0.717374f;
    data.d[6] = 0.000000f;
    data.d[7] = -1.091956f;
    data.d[8] = 0.325098f;
    data.d[9] = 0.297368f;
    data.d[10] = -1.093659f;
    data.d[11] = -1.385691f;
    data.d[12] = 0.925166f;
    data.d[13] = 0.700004f;
    data.d[14] = -1.402335f;
    data.d[15] = 0.710022f;
    data.d[16] = -0.381699f;
    data.d[17] = -1.570796f;
    data.d[18] = 0.000000f;
    return 0.000000;
} // InitData1

// END //

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
    n *= data.d[7];
    n += data.d[5];
    data.d[5] = n;
    n += data.d[8];
    data.d[8] = n;
    n += data.d[9];
    data.d[9] = n;
    n *= data.d[6];
    data.d[6] = n;
    n *= data.d[10];
    data.d[10] = n;
    n *= data.d[11];
    n = fabsf(n);
    n += data.d[10];
    n += data.d[12];
    n *= data.d[6];
    n += data.d[13];
    data.d[13] = n;
    n += data.d[13];
    n *= data.d[14];
    n *= data.d[15];
    data.d[15] = n;
    n *= data.d[8];
    n = fabsf(n);
    n += data.d[17];
    data.d[17] = n;
    n *= data.d[5];
    n += data.d[15];
    n *= data.d[18];
    n *= data.d[2];
    n += data.d[17];
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