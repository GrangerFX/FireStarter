#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.288560;
    data.d[1] = -0.906578;
    data.d[2] = 0.346084;
    data.d[3] = -0.346043;
    data.d[4] = 0.968992;
    data.d[5] = -0.729204;
    data.d[6] = 0.329383;
    data.d[7] = -1.198706;
    data.d[8] = 0.438703;
    data.d[9] = -0.190072;
    data.d[10] = -0.218142;
    data.d[11] = 0.240372;
    data.d[12] = 0.891292;
    data.d[13] = 0.030582;
    data.d[14] = 0.155239;
    data.d[15] = 0.027638;
    data.d[16] = -0.576269;
    data.d[17] = -0.257056;
    data.d[18] = -0.000135;
    data.d[19] = -0.229741;
    data.d[20] = 1.179767;
    data.d[21] = 0.066788;
    data.d[22] = 0.658075;
    data.d[23] = 0.236062;
    data.d[24] = 0.000000;
    data.d[25] = 0.000000;
    data.d[26] = 0.000000;
    data.d[27] = 0.000000;
    data.d[28] = 0.000000;
    data.d[29] = 0.000000;
    data.d[30] = 0.000000;
    data.d[31] = 0.000000;
    return 0.000010;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.391981;
    data.d[1] = -1.026229;
    data.d[2] = 0.761381;
    data.d[3] = -0.761324;
    data.d[4] = -0.142412;
    data.d[5] = 0.884228;
    data.d[6] = -0.933176;
    data.d[7] = -0.125559;
    data.d[8] = -0.127825;
    data.d[9] = 1.082693;
    data.d[10] = -0.397337;
    data.d[11] = -0.759085;
    data.d[12] = -0.369776;
    data.d[13] = 0.018575;
    data.d[14] = -2.185133;
    data.d[15] = 0.003142;
    data.d[16] = 0.142739;
    data.d[17] = 0.322198;
    data.d[18] = 0.523538;
    data.d[19] = -0.229741;
    data.d[20] = 1.179767;
    data.d[21] = 0.066788;
    data.d[22] = 0.658075;
    data.d[23] = 0.236062;
    data.d[24] = 0.000000;
    data.d[25] = 0.000000;
    data.d[26] = 0.000000;
    data.d[27] = 0.000000;
    data.d[28] = 0.000000;
    data.d[29] = 0.000000;
    data.d[30] = 0.000000;
    data.d[31] = 0.000000;
    return 0.000006;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[0] *= n;
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n = data.d[3] += n;
    n = data.d[1] *= n;
    n = data.d[3] += n;
    n = data.d[4] *= n;
    n = data.d[5] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[5] *= n;
    n = data.d[5] += n;
    n = data.d[8] *= n;
    n = data.d[9] += n;
    n = data.d[10] *= n;
    n = data.d[11] += n;
    n = data.d[12] *= n;
    n = data.d[10] += n;
    n = data.d[11] *= n;
    n = data.d[12] += n;
    n = data.d[13] *= n;
    n = data.d[14] += n;
    n = data.d[15] *= n;
    n = data.d[7] += n;
    n = data.d[5] *= n;
    n = data.d[16] += n;
    n = data.d[3] *= n;
    n = data.d[17] += n;
    n = data.d[16] *= n;
    n = data.d[4] += n;
    n = data.d[2] *= n;
    n = data.d[18] += n;
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