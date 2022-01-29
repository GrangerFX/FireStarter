#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION float InitData0(FireStarterData &data)
{
    data.d[0] = -2.274100f;
    data.d[1] = -1.897639f;
    data.d[2] = -1.243956f;
    data.d[3] = -0.974466f;
    data.d[4] = 1.557794f;
    data.d[5] = -0.291210f;
    data.d[6] = 0.125963f;
    data.d[7] = -0.556576f;
    data.d[8] = 0.193358f;
    data.d[9] = 0.682905f;
    data.d[10] = -0.814217f;
    data.d[11] = 0.431371f;
    data.d[12] = 4.870991f;
    data.d[13] = -0.854256f;
    data.d[14] = 0.728825f;
    data.d[15] = 0.713693f;
    data.d[16] = -2.152958f;
    data.d[17] = -1.903084f;
    data.d[18] = -0.176671f;
    data.d[19] = -0.677931f;
    data.d[20] = 0.000001f;
    return 0.000008;
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
    data.d[0] = 2.538497f;
    data.d[1] = -1.608705f;
    data.d[2] = -1.009287f;
    data.d[3] = 1.879219f;
    data.d[4] = 0.684697f;
    data.d[5] = -0.303319f;
    data.d[6] = -0.370888f;
    data.d[7] = -0.711157f;
    data.d[8] = -0.620505f;
    data.d[9] = 1.143682f;
    data.d[10] = 0.870069f;
    data.d[11] = 1.426189f;
    data.d[12] = -1.537504f;
    data.d[13] = 0.442595f;
    data.d[14] = -0.401115f;
    data.d[15] = 0.710732f;
    data.d[16] = 0.524981f;
    data.d[17] = -3.104136f;
    data.d[18] = -0.005589f;
    data.d[19] = -0.478672f;
    data.d[20] = 0.523599f;
    return 0.000088;
} // InitData1

GPU_FUNCTION float InitData2(FireStarterData &data)
{
    data.d[0] = 0.764526f;
    data.d[1] = -1.263689f;
    data.d[2] = -1.826967f;
    data.d[3] = 1.048350f;
    data.d[4] = 1.670881f;
    data.d[5] = -0.151186f;
    data.d[6] = -1.027512f;
    data.d[7] = -0.723021f;
    data.d[8] = -0.692206f;
    data.d[9] = -0.601614f;
    data.d[10] = -0.651733f;
    data.d[11] = -0.290409f;
    data.d[12] = -0.099297f;
    data.d[13] = -1.703647f;
    data.d[14] = -0.255150f;
    data.d[15] = 1.127906f;
    data.d[16] = -0.962946f;
    data.d[17] = 3.951971f;
    data.d[18] = -1.020781f;
    data.d[19] = -0.453826f;
    data.d[20] = -0.118130f;
    return 0.000007;
} // InitData2

GPU_FUNCTION float InitData3(FireStarterData &data)
{
    data.d[0] = -0.322478f;
    data.d[1] = -2.687839f;
    data.d[2] = -0.453754f;
    data.d[3] = 4.760558f;
    data.d[4] = -1.570559f;
    data.d[5] = -0.213626f;
    data.d[6] = 0.855548f;
    data.d[7] = -1.295445f;
    data.d[8] = 0.536156f;
    data.d[9] = -0.240636f;
    data.d[10] = 0.369374f;
    data.d[11] = 1.386878f;
    data.d[12] = 0.828396f;
    data.d[13] = -0.906183f;
    data.d[14] = 0.183554f;
    data.d[15] = 0.200225f;
    data.d[16] = -1.332981f;
    data.d[17] = 0.641120f;
    data.d[18] = 0.181938f;
    data.d[19] = -0.350737f;
    data.d[20] = 0.000001f;
    return 0.000220;
} // InitData3

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
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[10];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[12];
    n += data.d[13];
    n *= data.d[14];
    n *= data.d[6];
    n += data.d[15];
    data.d[15] = n;
    n += data.d[15];
    n *= data.d[11];
    n *= data.d[16];
    data.d[16] = n;
    n *= data.d[8];
    n = fabsf(n);
    n += data.d[18];
    n *= data.d[5];
    n += data.d[16];
    n *= data.d[19];
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