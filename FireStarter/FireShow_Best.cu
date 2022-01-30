#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = -0.510002f;
        data.d[1] = -0.027538f;
        data.d[2] = 0.803942f;
        data.d[3] = -0.123809f;
        data.d[4] = 0.631589f;
        data.d[5] = 0.412195f;
        data.d[6] = -0.956262f;
        data.d[7] = 0.257135f;
        data.d[8] = 0.427778f;
        data.d[9] = 0.215928f;
        data.d[10] = 0.758746f;
        data.d[11] = -0.332229f;
        data.d[12] = -1.251999f;
        data.d[13] = -0.394949f;
        data.d[14] = -0.543644f;
        data.d[15] = 0.739627f;
        data.d[16] = -0.536932f;
        data.d[17] = -0.545372f;
        data.d[18] = 0.976526f;
        data.d[19] = -0.940386f;
    }
} // InitData

// END //

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    n += data.d[3];
    data.d[3] = n;
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[5];
    n *= data.d[3];
    data.d[3] = n;
    n += data.d[1];
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[4];
    n *= data.d[7];
    data.d[7] = n;
    n += data.d[8];
    data.d[8] = n;
    n *= data.d[9];
    n += data.d[10];
    data.d[10] = n;
    n *= data.d[11];
    n += data.d[10];
    data.d[10] = n;
    n *= data.d[12];
    n += data.d[13];
    data.d[13] = n;
    n *= data.d[7];
    n += data.d[14];
    n *= data.d[13];
    n += data.d[15];
    data.d[15] = n;
    n *= data.d[16];
    n += data.d[17];
    n *= data.d[3];
    n += data.d[18];
    n *= data.d[15];
    data.d[15] = n;
    n += data.d[15];
    n *= data.d[6];
    n += data.d[19];
    n *= data.d[10];
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
        FireStarterData data(bestResult.data);
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