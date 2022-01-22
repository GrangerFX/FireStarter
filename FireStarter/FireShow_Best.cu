#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -0.481535f;
    data.d[1] = -1.668748f;
    data.d[2] = 0.579487f;
    data.d[3] = 1.040919f;
    data.d[4] = -0.446460f;
    data.d[5] = 0.553406f;
    data.d[6] = 1.156351f;
    data.d[7] = 0.981960f;
    data.d[8] = -1.092467f;
    data.d[9] = -1.073251f;
    data.d[10] = 2.038401f;
    data.d[11] = -0.848179f;
    data.d[12] = 0.792818f;
    data.d[13] = 0.095836f;
    data.d[14] = -0.797980f;
    data.d[15] = -1.019093f;
    data.d[16] = -1.429486f;
    data.d[17] = -0.849598f;
    data.d[18] = -0.502431f;
    data.d[19] = -1.101061f;
    data.d[20] = 0.482337f;
    data.d[21] = 1.220879f;
    data.d[22] = 0.875915f;
    data.d[23] = 0.000000f;
    data.d[24] = 0.000000f;
    data.d[25] = 0.000000f;
    data.d[26] = 0.000000f;
    data.d[27] = 0.000000f;
    data.d[28] = 0.000000f;
    data.d[29] = 0.000000f;
    data.d[30] = 0.000000f;
    data.d[31] = 0.000000f;
    return 0.000018;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.457625f;
    data.d[1] = -1.216632f;
    data.d[2] = -0.811789f;
    data.d[3] = 1.091650f;
    data.d[4] = -0.597156f;
    data.d[5] = 0.213119f;
    data.d[6] = -0.096952f;
    data.d[7] = -0.161221f;
    data.d[8] = 0.010564f;
    data.d[9] = 0.334050f;
    data.d[10] = -0.862535f;
    data.d[11] = 0.533429f;
    data.d[12] = -0.009000f;
    data.d[13] = 1.196165f;
    data.d[14] = -0.867347f;
    data.d[15] = -0.501885f;
    data.d[16] = 0.111235f;
    data.d[17] = 0.859577f;
    data.d[18] = 4.572107f;
    data.d[19] = 4.340545f;
    data.d[20] = 4.787995f;
    data.d[21] = 1.011621f;
    data.d[22] = 3.124367f;
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
    n += data.d[0];
    n += data.d[1];
    n += data.d[2];
    n = fabsf(n);
    n *= data.d[4];
    n += data.d[5];
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n *= data.d[8];
    n = fabsf(n);
    data.d[6] = n;
    n += data.d[9];
    n *= data.d[10];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[12];
    data.d[12] = n;
    n *= data.d[13];
    data.d[13] = n;
    n += data.d[14];
    n *= data.d[15];
    n = fabsf(n);
    n *= data.d[12];
    n += data.d[6];
    data.d[6] = n;
    n *= data.d[17];
    n += data.d[11];
    data.d[11] = n;
    n += data.d[18];
    data.d[18] = n;
    n += data.d[19];
    n *= data.d[20];
    n = fabsf(n);
    data.d[21] = n;
    n += data.d[13];
    n += data.d[18];
    n *= data.d[6];
    n *= data.d[22];
    n *= data.d[21];
    n *= data.d[11];
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