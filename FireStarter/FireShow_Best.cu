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
    data.d[0] = 0.569920f;
    data.d[1] = -1.790603f;
    data.d[2] = -0.801878f;
    data.d[3] = 0.002406f;
    data.d[4] = -1.085438f;
    data.d[5] = 0.003137f;
    data.d[6] = -1.307473f;
    data.d[7] = 0.886324f;
    data.d[8] = 1.558194f;
    data.d[9] = 29.188852f;
    data.d[10] = -21.529325f;
    data.d[11] = 0.003427f;
    data.d[12] = -0.584813f;
    data.d[13] = -0.004082f;
    data.d[14] = -2.100516f;
    data.d[15] = -23.070280f;
    data.d[16] = -0.052285f;
    data.d[17] = -0.012178f;
    data.d[18] = -0.000007f;
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
    return 0.000272;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.584041f;
    data.d[1] = -1.832860f;
    data.d[2] = -0.865238f;
    data.d[3] = -0.001807f;
    data.d[4] = -1.055369f;
    data.d[5] = -0.006508f;
    data.d[6] = -1.486934f;
    data.d[7] = 0.886853f;
    data.d[8] = 1.550317f;
    data.d[9] = 28.155954f;
    data.d[10] = -20.107454f;
    data.d[11] = 0.007152f;
    data.d[12] = -0.362341f;
    data.d[13] = -0.010055f;
    data.d[14] = -2.856197f;
    data.d[15] = -25.374146f;
    data.d[16] = 0.029329f;
    data.d[17] = -0.008694f;
    data.d[18] = 0.000167f;
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
    return 0.001740;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n = data.d[3] += n;
    n = data.d[4] *= n;
    n = data.d[5] += n;
    n = data.d[5] *= n;
    n = data.d[6] += n;
    n = data.d[4] *= n;
    n += data.d[2];
    n = data.d[7] *= n;
    n += data.d[3];
    n *= data.d[4];
    n = data.d[8] += n;
    n = data.d[9] *= n;
    n += data.d[10];
    n *= data.d[11];
    n += data.d[12];
    n = data.d[13] *= n;
    n = data.d[8] += n;
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[16];
    n += data.d[5];
    n *= data.d[6];
    n += data.d[8];
    n *= data.d[1];
    n += data.d[17];
    n *= data.d[13];
    n += data.d[18];
    n *= data.d[9];
    n += data.d[7];
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