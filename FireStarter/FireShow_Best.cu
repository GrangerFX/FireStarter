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
    data.d[0] = 3.533675f;
    data.d[1] = -11.504198f;
    data.d[2] = -0.040110f;
    data.d[3] = 0.927445f;
    data.d[4] = -3.182371f;
    data.d[5] = -2.473503f;
    data.d[6] = -13.369255f;
    data.d[7] = 4.345375f;
    data.d[8] = 1.304716f;
    data.d[9] = 19.190985f;
    data.d[10] = -0.005044f;
    data.d[11] = -4.779181f;
    data.d[12] = 6.836336f;
    data.d[13] = 0.060798f;
    data.d[14] = 9.499448f;
    data.d[15] = -0.055102f;
    data.d[16] = 0.029093f;
    data.d[17] = -7.159915f;
    data.d[18] = 0.000000f;
    data.d[19] = 0.000000f;
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
    return 0.000071;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 3.635450f;
    data.d[1] = -12.619054f;
    data.d[2] = -0.000020f;
    data.d[3] = 1.112096f;
    data.d[4] = -1.412535f;
    data.d[5] = -1.634617f;
    data.d[6] = -13.899046f;
    data.d[7] = 3.138248f;
    data.d[8] = 0.219992f;
    data.d[9] = 17.106590f;
    data.d[10] = -0.000000f;
    data.d[11] = -4.114134f;
    data.d[12] = 6.687502f;
    data.d[13] = 0.087747f;
    data.d[14] = 7.779241f;
    data.d[15] = -0.067649f;
    data.d[16] = -0.000112f;
    data.d[17] = -6.230594f;
    data.d[18] = 0.000000f;
    data.d[19] = 0.000000f;
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
    return 0.000023;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    data.d[0] = n;
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[3];
    data.d[3] = n;
    n *= data.d[4];
    n += data.d[2];
    data.d[2] = n;
    n *= data.d[5];
    data.d[5] = n;
    n += data.d[6];
    n *= data.d[5];
    n += data.d[7];
    data.d[7] = n;
    n *= data.d[8];
    n += data.d[0];
    n = fabsf(n);
    data.d[9] = n;
    n *= data.d[3];
    data.d[3] = n;
    n += data.d[7];
    data.d[7] = n;
    n *= data.d[1];
    n += data.d[9];
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[11];
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[12];
    n *= data.d[7];
    n += data.d[10];
    n *= data.d[13];
    n += data.d[14];
    data.d[14] = n;
    n = fabsf(n);
    n *= data.d[15];
    data.d[15] = n;
    n += data.d[3];
    n *= data.d[16];
    n += data.d[17];
    n *= data.d[15];
    n += data.d[2];
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