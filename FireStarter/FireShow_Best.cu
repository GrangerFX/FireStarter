#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -0.756416f;
    data.d[1] = -1.767132f;
    data.d[2] = -1.374461f;
    data.d[3] = 1.143578f;
    data.d[4] = -3.141592f;
    data.d[5] = -1.859303f;
    data.d[6] = -0.604994f;
    data.d[7] = 2.216021f;
    data.d[8] = -0.986223f;
    data.d[9] = 0.042945f;
    data.d[10] = -0.318405f;
    data.d[11] = 0.361162f;
    data.d[12] = -0.379067f;
    data.d[13] = 0.000000f;
    data.d[14] = 0.021517f;
    data.d[15] = -0.430862f;
    data.d[16] = -1.494115f;
    data.d[17] = 0.694912f;
    data.d[18] = 4.112866f;
    data.d[19] = 1.184538f;
    data.d[20] = -0.301428f;
    return 0.000001;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.392095f;
    data.d[1] = -0.122252f;
    data.d[2] = -1.448544f;
    data.d[3] = 5.573698f;
    data.d[4] = -3.141593f;
    data.d[5] = 1.182368f;
    data.d[6] = 0.940891f;
    data.d[7] = 1.930147f;
    data.d[8] = -1.460912f;
    data.d[9] = 0.763858f;
    data.d[10] = -1.552419f;
    data.d[11] = -1.267499f;
    data.d[12] = 0.243507f;
    data.d[13] = 0.609684f;
    data.d[14] = -2.135434f;
    data.d[15] = -0.818564f;
    data.d[16] = -0.168106f;
    data.d[17] = -2.915506f;
    data.d[18] = 1.734677f;
    data.d[19] = -5.996959f;
    data.d[20] = -0.000000f;
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
    n = fabsf(n);
    n *= data.d[7];
    data.d[7] = n;
    n = fabsf(n);
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    n += data.d[11];
    n += data.d[12];
    data.d[12] = n;
    n *= data.d[13];
    data.d[13] = n;
    n += data.d[14];
    data.d[14] = n;
    n *= data.d[7];
    n += data.d[9];
    n *= data.d[12];
    n += data.d[15];
    data.d[15] = n;
    n += data.d[14];
    data.d[14] = n;
    n += data.d[14];
    n *= data.d[16];
    n *= data.d[17];
    n *= data.d[15];
    n = fabsf(n);
    data.d[18] = n;
    n += data.d[19];
    n *= data.d[5];
    n *= data.d[18];
    n *= data.d[20];
    n *= data.d[2];
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