#include "FireStarterDefines.h"
#include "HashRandom.h"

// TARGET //
#define TARGET_PI 3.14159265f

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
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // Target
// END //

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.591823f;
    data.d[1] = -1.528090f;
    data.d[2] = 0.135853f;
    data.d[3] = 0.332736f;
    data.d[4] = -0.183580f;
    data.d[5] = 0.854382f;
    data.d[6] = -2.052434f;
    data.d[7] = 1.677671f;
    data.d[8] = -52.073879f;
    data.d[9] = 18.588467f;
    data.d[10] = -1.743280f;
    data.d[11] = 8.449594f;
    data.d[12] = 0.018710f;
    data.d[13] = -0.436256f;
    data.d[14] = 1.857282f;
    data.d[15] = 0.204137f;
    data.d[16] = 0.278077f;
    data.d[17] = -10.688974f;
    data.d[18] = -9.666184f;
    data.d[19] = -3.875105f;
    data.d[20] = 0.356870f;
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
    return 0.000041;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.789079f;
    data.d[1] = -1.216612f;
    data.d[2] = -0.136646f;
    data.d[3] = 0.341865f;
    data.d[4] = -0.000000f;
    data.d[5] = 0.861240f;
    data.d[6] = -2.111936f;
    data.d[7] = 1.818884f;
    data.d[8] = -55.620064f;
    data.d[9] = 18.781837f;
    data.d[10] = -4.139421f;
    data.d[11] = 8.636095f;
    data.d[12] = 0.165631f;
    data.d[13] = -0.253519f;
    data.d[14] = 1.761667f;
    data.d[15] = 0.409582f;
    data.d[16] = 0.020156f;
    data.d[17] = -15.374425f;
    data.d[18] = -9.699841f;
    data.d[19] = -3.614556f;
    data.d[20] = 0.339051f;
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
    return 0.000000;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n += data.d[1];
    n *= data.d[2];
    n += data.d[3];
    data.d[3] = n;
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[5];
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[7];
    data.d[7] = n;
    n *= data.d[8];
    n += data.d[9];
    data.d[9] = n;
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[3];
    n = fabsf(n);
    data.d[10] = n;
    n *= data.d[11];
    n += data.d[10];
    data.d[10] = n;
    n *= data.d[4];
    n += data.d[6];
    data.d[6] = n;
    n *= data.d[12];
    n += data.d[13];
    n *= data.d[10];
    n += data.d[14];
    data.d[14] = n;
    n *= data.d[7];
    n += data.d[15];
    n *= data.d[14];
    n += data.d[16];
    n = fabsf(n);
    n *= data.d[9];
    n += data.d[18];
    data.d[18] = n;
    n *= data.d[19];
    n += data.d[6];
    n *= data.d[20];
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