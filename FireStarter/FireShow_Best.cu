#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION float InitData0(FireStarterData &data)
{
    data.d[0] = 1.004008f;
    data.d[1] = -1.404817f;
    data.d[2] = -1.736777f;
    data.d[3] = 5.229396f;
    data.d[4] = -1.806521f;
    data.d[5] = -0.979231f;
    data.d[6] = -0.001568f;
    data.d[7] = -2.002465f;
    data.d[8] = -1.437733f;
    data.d[9] = -0.329346f;
    data.d[10] = 4.619501f;
    data.d[11] = 0.289469f;
    data.d[12] = -3.333646f;
    data.d[13] = -2.068105f;
    data.d[14] = -2.783159f;
    data.d[15] = 0.427630f;
    data.d[16] = -2.560832f;
    data.d[17] = -6.858009f;
    data.d[18] = -0.600604f;
    data.d[19] = -0.154027f;
    data.d[20] = 0.000000f;
    return 0.000576;
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
    data.d[0] = 3.488365f;
    data.d[1] = -1.002289f;
    data.d[2] = -1.615681f;
    data.d[3] = 4.696813f;
    data.d[4] = -1.629769f;
    data.d[5] = -0.960877f;
    data.d[6] = -0.003193f;
    data.d[7] = -1.860240f;
    data.d[8] = -1.438892f;
    data.d[9] = -0.448153f;
    data.d[10] = 2.969462f;
    data.d[11] = 0.275352f;
    data.d[12] = -0.025310f;
    data.d[13] = -2.051262f;
    data.d[14] = -2.661331f;
    data.d[15] = 0.426139f;
    data.d[16] = -2.341289f;
    data.d[17] = -1.984745f;
    data.d[18] = -0.624287f;
    data.d[19] = -0.325802f;
    data.d[20] = 0.523598f;
    return 0.001469;
} // InitData1

GPU_FUNCTION float InitData2(FireStarterData &data)
{
    data.d[0] = -2.277305f;
    data.d[1] = -1.883543f;
    data.d[2] = -1.207135f;
    data.d[3] = 3.284996f;
    data.d[4] = -1.817452f;
    data.d[5] = -1.621185f;
    data.d[6] = -0.001314f;
    data.d[7] = -2.198744f;
    data.d[8] = 0.005490f;
    data.d[9] = 0.360045f;
    data.d[10] = 3.623161f;
    data.d[11] = 0.379476f;
    data.d[12] = -1.861144f;
    data.d[13] = -1.919492f;
    data.d[14] = -1.509439f;
    data.d[15] = 0.471268f;
    data.d[16] = -1.984904f;
    data.d[17] = -2.619884f;
    data.d[18] = 1.653801f;
    data.d[19] = -0.031357f;
    data.d[20] = -0.118148f;
    return 0.000515;
} // InitData2

GPU_FUNCTION float InitData3(FireStarterData &data)
{
    data.d[0] = 1.613319f;
    data.d[1] = -2.505502f;
    data.d[2] = -0.636089f;
    data.d[3] = 1.237732f;
    data.d[4] = -1.569538f;
    data.d[5] = -0.371990f;
    data.d[6] = 0.616068f;
    data.d[7] = -1.336543f;
    data.d[8] = 0.324000f;
    data.d[9] = 0.622156f;
    data.d[10] = -0.286825f;
    data.d[11] = -0.562115f;
    data.d[12] = 0.226739f;
    data.d[13] = 0.437491f;
    data.d[14] = -0.413911f;
    data.d[15] = -0.543940f;
    data.d[16] = -1.094701f;
    data.d[17] = -1.692189f;
    data.d[18] = 0.896940f;
    data.d[19] = -0.289474f;
    data.d[20] = -0.000002f;
    return 0.001440;
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
    n *= data.d[10];
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