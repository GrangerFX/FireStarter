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
    data.d[0] = -0.050911f;
    data.d[1] = -0.095168f;
    data.d[2] = -55.678799f;
    data.d[3] = -15.918847f;
    data.d[4] = -0.756818f;
    data.d[5] = -0.115125f;
    data.d[6] = 0.021131f;
    data.d[7] = -0.424197f;
    data.d[8] = 1.633703f;
    data.d[9] = -0.234050f;
    data.d[10] = -2.232526f;
    data.d[11] = -2.143106f;
    data.d[12] = -1.498720f;
    data.d[13] = -0.654248f;
    data.d[14] = 0.578747f;
    data.d[15] = -1.296861f;
    data.d[16] = 3.129124f;
    data.d[17] = 0.365554f;
    data.d[18] = 8.608454f;
    data.d[19] = -0.048320f;
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
    return 0.000026;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = -0.057789f;
    data.d[1] = -0.051612f;
    data.d[2] = -58.158268f;
    data.d[3] = -12.618521f;
    data.d[4] = -0.094677f;
    data.d[5] = -0.031466f;
    data.d[6] = 0.108511f;
    data.d[7] = 0.265973f;
    data.d[8] = 1.599992f;
    data.d[9] = -0.224752f;
    data.d[10] = -2.208896f;
    data.d[11] = -2.204640f;
    data.d[12] = -1.389546f;
    data.d[13] = -0.770473f;
    data.d[14] = 0.521914f;
    data.d[15] = -0.335802f;
    data.d[16] = 3.250836f;
    data.d[17] = 0.730017f;
    data.d[18] = 10.149578f;
    data.d[19] = -0.029820f;
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
    return 0.000021;
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