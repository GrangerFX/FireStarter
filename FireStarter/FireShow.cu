#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -0.295293;
    data.d[1] = 0.000074;
    data.d[2] = 1.703755;
    data.d[3] = -0.109123;
    data.d[4] = -0.486119;
    data.d[5] = -0.078535;
    data.d[6] = 0.489754;
    data.d[7] = -0.437806;
    data.d[8] = -0.036958;
    data.d[9] = 0.766143;
    data.d[10] = -1.988164;
    data.d[11] = 0.679022;
    data.d[12] = -1.143087;
    data.d[13] = -0.850597;
    data.d[14] = -0.851114;
    data.d[15] = 0.911351;
    data.d[16] = -1.005253;
    data.d[17] = 0.009188;
    data.d[18] = 0.456678;
    data.d[19] = -1.131497;
    data.d[20] = 1.197553;
    data.d[21] = -1.818129;
    data.d[22] = -0.648024;
    data.d[23] = -1.021434;
    data.d[24] = 1.862041;
    data.d[25] = 1.288801;
    data.d[26] = -0.712072;
    data.d[27] = -1.162377;
    data.d[28] = -0.982848;
    data.d[29] = -0.180974;
    data.d[30] = 0.198489;
    data.d[31] = 1.311061;
    return 0.000023;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.366407;
    data.d[1] = 0.000234;
    data.d[2] = 0.556274;
    data.d[3] = -1.069298;
    data.d[4] = -0.404244;
    data.d[5] = 0.220449;
    data.d[6] = 0.448149;
    data.d[7] = -0.504425;
    data.d[8] = 2.007938;
    data.d[9] = 0.880840;
    data.d[10] = 1.302696;
    data.d[11] = -0.129301;
    data.d[12] = 1.391559;
    data.d[13] = -0.753595;
    data.d[14] = -1.035093;
    data.d[15] = 0.993351;
    data.d[16] = -1.017360;
    data.d[17] = -0.026323;
    data.d[18] = 0.372406;
    data.d[19] = 0.694986;
    data.d[20] = 0.700242;
    data.d[21] = 0.411657;
    data.d[22] = -1.157929;
    data.d[23] = -0.881027;
    data.d[24] = -0.483248;
    data.d[25] = 1.259369;
    data.d[26] = -0.919940;
    data.d[27] = -1.148401;
    data.d[28] = -1.143507;
    data.d[29] = -0.164094;
    data.d[30] = 0.123090;
    data.d[31] = 1.178886;
    return 0.000017;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[1] += n;
    n = data.d[4] *= n;
    n = data.d[31] += n;
    n = data.d[25] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[17] *= n;
    n = data.d[11] *= n;
    n = data.d[28] += n;
    n = data.d[15] *= n;
    n = data.d[6] *= n;
    n = data.d[16] *= n;
    n = data.d[27] *= n;
    n = data.d[30] += n;
    n = data.d[23] *= n;
    n = data.d[13] *= n;
    n = data.d[18] += n;
    n = data.d[26] += n;
    n = data.d[18] *= n;
    n = data.d[27] += n;
    n = data.d[0] += n;
    n = data.d[22] += n;
    n = data.d[1] *= n;
    n = data.d[27] *= n;
    n = data.d[14] += n;
    n = data.d[14] += n;
    n = data.d[29] *= n;
    n = data.d[9] += n;
    n = data.d[7] *= n;
    n = data.d[0] += n;
    n = data.d[27] *= n;
    n = data.d[7] *= n;
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