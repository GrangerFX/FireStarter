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
    data.d[0] = 0.147631f;
    data.d[1] = -0.059146f;
    data.d[2] = -2.231767f;
    data.d[3] = 1.304104f;
    data.d[4] = 0.570817f;
    data.d[5] = 0.536862f;
    data.d[6] = -0.960582f;
    data.d[7] = 0.604844f;
    data.d[8] = 0.810656f;
    data.d[9] = -0.287727f;
    data.d[10] = -0.790731f;
    data.d[11] = -1.196499f;
    data.d[12] = -1.875646f;
    data.d[13] = 0.936001f;
    data.d[14] = 0.779106f;
    data.d[15] = -0.599340f;
    data.d[16] = 0.607282f;
    data.d[17] = -0.180131f;
    data.d[18] = 1.823968f;
    data.d[19] = -0.073667f;
    data.d[20] = 0.749525f;
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
    return 0.000218;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.868628f;
    data.d[1] = -0.277484f;
    data.d[2] = -0.965830f;
    data.d[3] = 1.389340f;
    data.d[4] = -0.095932f;
    data.d[5] = 0.571882f;
    data.d[6] = -1.401554f;
    data.d[7] = 0.763038f;
    data.d[8] = 0.204349f;
    data.d[9] = 1.885065f;
    data.d[10] = -0.390096f;
    data.d[11] = -1.517491f;
    data.d[12] = 0.329436f;
    data.d[13] = 0.289943f;
    data.d[14] = -0.813003f;
    data.d[15] = 0.129184f;
    data.d[16] = 0.408802f;
    data.d[17] = -1.188487f;
    data.d[18] = -0.549903f;
    data.d[19] = -0.380334f;
    data.d[20] = 0.749525f;
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
    return 0.000394;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n = data.d[1] += n;
    n *= data.d[2];
    n = data.d[3] += n;
    n *= data.d[4];
    n += data.d[3];
    n *= data.d[5];
    n = data.d[6] += n;
    n *= data.d[7];
    n = data.d[8] += n;
    n *= data.d[9];
    n = data.d[6] += n;
    n = data.d[10] *= n;
    n += data.d[11];
    n = data.d[12] *= n;
    n = data.d[13] += n;
    n = data.d[10] *= n;
    n += data.d[8];
    n = data.d[14] *= n;
    n = data.d[13] += n;
    n *= data.d[10];
    n += data.d[15];
    n *= data.d[16];
    n += data.d[17];
    n *= data.d[6];
    n = data.d[12] += n;
    n *= data.d[13];
    n += data.d[18];
    n *= data.d[19];
    n += data.d[14];
    n *= data.d[12];
    n += data.d[1];
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