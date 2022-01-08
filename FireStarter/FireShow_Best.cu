#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.147631;
    data.d[1] = -0.059146;
    data.d[2] = -2.231767;
    data.d[3] = 1.304104;
    data.d[4] = 0.570817;
    data.d[5] = 0.536862;
    data.d[6] = -0.960582;
    data.d[7] = 0.604844;
    data.d[8] = 0.810656;
    data.d[9] = -0.287727;
    data.d[10] = -0.790731;
    data.d[11] = -1.196499;
    data.d[12] = -1.875646;
    data.d[13] = 0.936001;
    data.d[14] = 0.779106;
    data.d[15] = -0.599340;
    data.d[16] = 0.607282;
    data.d[17] = -0.180131;
    data.d[18] = 1.823968;
    data.d[19] = -0.073667;
    data.d[20] = 0.749525;
    data.d[21] = 0.000000;
    data.d[22] = 0.000000;
    data.d[23] = 0.000000;
    data.d[24] = 0.000000;
    data.d[25] = 0.000000;
    data.d[26] = 0.000000;
    data.d[27] = 0.000000;
    data.d[28] = 0.000000;
    data.d[29] = 0.000000;
    data.d[30] = 0.000000;
    data.d[31] = 0.000000;
    return 0.000218;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.868628;
    data.d[1] = -0.277484;
    data.d[2] = -0.965830;
    data.d[3] = 1.389340;
    data.d[4] = -0.095932;
    data.d[5] = 0.571882;
    data.d[6] = -1.401554;
    data.d[7] = 0.763038;
    data.d[8] = 0.204349;
    data.d[9] = 1.885065;
    data.d[10] = -0.390096;
    data.d[11] = -1.517491;
    data.d[12] = 0.329436;
    data.d[13] = 0.289943;
    data.d[14] = -0.813003;
    data.d[15] = 0.129184;
    data.d[16] = 0.408802;
    data.d[17] = -1.188487;
    data.d[18] = -0.549903;
    data.d[19] = -0.380334;
    data.d[20] = 0.749525;
    data.d[21] = 0.000000;
    data.d[22] = 0.000000;
    data.d[23] = 0.000000;
    data.d[24] = 0.000000;
    data.d[25] = 0.000000;
    data.d[26] = 0.000000;
    data.d[27] = 0.000000;
    data.d[28] = 0.000000;
    data.d[29] = 0.000000;
    data.d[30] = 0.000000;
    data.d[31] = 0.000000;
    return 0.000394;
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