#include "FireStarterDefines.h"
#include "HashRandom.h"

// TARGET //
inline float Target(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf(n * 1.2f) + n * 0.2f;
    case 2:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    }
} // Target
// END //

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.166358f;
    data.d[1] = -0.367194f;
    data.d[2] = -3.583327f;
    data.d[3] = 0.441628f;
    data.d[4] = 2.826514f;
    data.d[5] = 0.117001f;
    data.d[6] = -0.547351f;
    data.d[7] = 0.840405f;
    data.d[8] = 0.827456f;
    data.d[9] = -0.191815f;
    data.d[10] = -0.921262f;
    data.d[11] = -1.476278f;
    data.d[12] = -1.848571f;
    data.d[13] = 0.753720f;
    data.d[14] = 0.551162f;
    data.d[15] = -1.100033f;
    data.d[16] = 0.729146f;
    data.d[17] = -0.022982f;
    data.d[18] = -0.736473f;
    data.d[19] = -0.034231f;
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
    return 0.000133;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.895871f;
    data.d[1] = -0.217696f;
    data.d[2] = -1.026493f;
    data.d[3] = 1.890561f;
    data.d[4] = 0.912404f;
    data.d[5] = 0.226375f;
    data.d[6] = -1.495189f;
    data.d[7] = 0.732986f;
    data.d[8] = 0.205553f;
    data.d[9] = 1.723023f;
    data.d[10] = -0.407971f;
    data.d[11] = -1.587290f;
    data.d[12] = 0.429032f;
    data.d[13] = 0.359117f;
    data.d[14] = -0.742859f;
    data.d[15] = 0.739383f;
    data.d[16] = 0.397729f;
    data.d[17] = -1.263418f;
    data.d[18] = -0.458699f;
    data.d[19] = -0.668602f;
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
    return 0.000397;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[0] *= n;
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n = data.d[3] += n;
    n = data.d[4] *= n;
    n = data.d[3] += n;
    n = data.d[5] *= n;
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n = data.d[8] += n;
    n = data.d[9] *= n;
    n = data.d[6] += n;
    n = data.d[10] *= n;
    n = data.d[11] += n;
    n = data.d[12] *= n;
    n = data.d[13] += n;
    n = data.d[10] *= n;
    n = data.d[8] += n;
    n = data.d[14] *= n;
    n = data.d[13] += n;
    n = data.d[10] *= n;
    n = data.d[15] += n;
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[6] *= n;
    n = data.d[12] += n;
    n = data.d[13] *= n;
    n = data.d[18] += n;
    n = data.d[19] *= n;
    n = data.d[14] += n;
    n = data.d[12] *= n;
    n = data.d[1] += n;
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