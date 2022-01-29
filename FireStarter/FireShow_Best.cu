#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 1.824402f;
    data.d[1] = -0.594824f;
    data.d[2] = 0.776090f;
    data.d[3] = -1.336579f;
    data.d[4] = 0.672240f;
    data.d[5] = -0.219930f;
    data.d[6] = 0.849391f;
    data.d[7] = -0.418158f;
    data.d[8] = -1.087505f;
    data.d[9] = -0.898604f;
    data.d[10] = 0.182356f;
    data.d[11] = -0.426272f;
    data.d[12] = 0.331210f;
    data.d[13] = 1.077876f;
    data.d[14] = -0.015527f;
    data.d[15] = -0.914903f;
    data.d[16] = 1.183160f;
    data.d[17] = -1.511452f;
    data.d[18] = -0.754128f;
    data.d[19] = 0.207467f;
    return 0.000858;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.830636f;
    data.d[1] = -0.780500f;
    data.d[2] = -0.790298f;
    data.d[3] = 0.252760f;
    data.d[4] = -0.627750f;
    data.d[5] = 0.278061f;
    data.d[6] = 0.000002f;
    data.d[7] = -0.156182f;
    data.d[8] = -0.723393f;
    data.d[9] = -0.295245f;
    data.d[10] = 0.547860f;
    data.d[11] = 1.599175f;
    data.d[12] = 0.166673f;
    data.d[13] = -2.086456f;
    data.d[14] = -0.675812f;
    data.d[15] = -1.828263f;
    data.d[16] = -1.455341f;
    data.d[17] = -0.197079f;
    data.d[18] = -1.570790f;
    data.d[19] = 0.000000f;
    return 0.000003;
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
    n *= data.d[7];
    n += data.d[5];
    data.d[5] = n;
    n += data.d[8];
    data.d[8] = n;
    n += data.d[9];
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[10];
    n *= data.d[11];
    n *= data.d[12];
    data.d[12] = n;
    n += data.d[13];
    n += data.d[12];
    n *= data.d[6];
    n += data.d[14];
    data.d[14] = n;
    n += data.d[14];
    n *= data.d[15];
    n *= data.d[16];
    data.d[16] = n;
    n *= data.d[8];
    n = fabsf(n);
    n += data.d[18];
    data.d[18] = n;
    n *= data.d[5];
    n += data.d[16];
    n *= data.d[19];
    n *= data.d[2];
    n += data.d[18];
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