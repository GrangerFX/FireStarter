#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// Note: Data is not used by FireShow. It is here so that the best data can be checked into git.
// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = 1.081282f;
        data.d[1] = 0.247822f;
        data.d[2] = -0.797268f;
        data.d[3] = 0.192619f;
        data.d[4] = 1.178474f;
        data.d[5] = 0.263834f;
        data.d[6] = -2.066970f;
        data.d[7] = 0.132835f;
        data.d[8] = 0.159255f;
        data.d[9] = -0.460696f;
        data.d[10] = -0.825621f;
        data.d[11] = 0.645920f;
        data.d[12] = -0.181054f;
        data.d[13] = -0.281315f;
        data.d[14] = -0.070091f;
        data.d[15] = 0.635622f;
        data.d[16] = 0.498717f;
        data.d[17] = 0.043171f;
        data.d[18] = -0.395453f;
    }
} // InitData

// END //

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    data.d[0] = n;
    n += data.d[1];
    data.d[1] = n;
    n += data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[5];
    data.d[5] = n;
    n += data.d[2];
    data.d[2] = n;
    n *= data.d[4];
    n += data.d[6];
    data.d[6] = n;
    n *= data.d[7];
    n += data.d[0];
    data.d[0] = n;
    n *= data.d[8];
    n += data.d[9];
    data.d[9] = n;
    n += data.d[10];
    n *= data.d[6];
    n += data.d[11];
    n *= data.d[5];
    data.d[5] = n;
    n += fabsf(data.d[12]);
    n *= data.d[1];
    n *= data.d[9];
    data.d[9] = n;
    n *= data.d[13];
    n += data.d[14];
    data.d[14] = n;
    n += data.d[9];
    n *= data.d[0];
    n *= data.d[15];
    data.d[15] = n;
    n += data.d[15];
    n *= data.d[16];
    n += data.d[2];
    n *= data.d[17];
    n += data.d[14];
    n += data.d[5];
    n += data.d[18];
    return isnan(n) ? 0.0f : n;
} // Evaluate
// END //

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