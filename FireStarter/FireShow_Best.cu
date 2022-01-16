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
    data.d[0] = -0.646812f;
    data.d[1] = 0.852414f;
    data.d[2] = -0.399541f;
    data.d[3] = -0.467955f;
    data.d[4] = -0.742798f;
    data.d[5] = -0.023894f;
    data.d[6] = 0.598775f;
    data.d[7] = -0.139734f;
    data.d[8] = 0.224145f;
    data.d[9] = 0.262392f;
    data.d[10] = -0.888789f;
    data.d[11] = -1.460212f;
    data.d[12] = 0.926282f;
    data.d[13] = -0.420153f;
    data.d[14] = 0.814381f;
    data.d[15] = 1.617430f;
    data.d[16] = 0.052022f;
    data.d[17] = 0.153610f;
    data.d[18] = 1.437820f;
    data.d[19] = -1.182027f;
    data.d[20] = 0.012947f;
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
    return 0.000147;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.635886f;
    data.d[1] = -0.697097f;
    data.d[2] = -0.553038f;
    data.d[3] = 0.533378f;
    data.d[4] = 0.275275f;
    data.d[5] = 0.300110f;
    data.d[6] = -1.090370f;
    data.d[7] = -0.170969f;
    data.d[8] = 0.499506f;
    data.d[9] = 0.095868f;
    data.d[10] = 0.874769f;
    data.d[11] = 1.428909f;
    data.d[12] = 0.521133f;
    data.d[13] = -0.604094f;
    data.d[14] = -0.371962f;
    data.d[15] = 1.360465f;
    data.d[16] = -0.011695f;
    data.d[17] = -1.316438f;
    data.d[18] = 0.798875f;
    data.d[19] = -2.977944f;
    data.d[20] = 0.528571f;
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
    return 0.000196;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n = data.d[1] += n;
    n *= data.d[2];
    n = data.d[3] += n;
    n = data.d[4] *= n;
    n = data.d[5] += n;
    n *= data.d[6];
    n = data.d[1] += n;
    n *= data.d[7];
    n += data.d[5];
    n = data.d[1] *= n;
    n += data.d[8];
    n *= data.d[9];
    n = data.d[10] += n;
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[12];
    n += data.d[13];
    n = data.d[4] *= n;
    n += data.d[14];
    n *= data.d[3];
    n += data.d[15];
    n *= data.d[16];
    n = data.d[17] += n;
    n *= data.d[17];
    n += data.d[1];
    n *= data.d[10];
    n = data.d[18] += n;
    n *= data.d[18];
    n += data.d[19];
    n *= data.d[4];
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