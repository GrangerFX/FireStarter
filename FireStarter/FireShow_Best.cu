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
    data.d[0] = 0.625101f;
    data.d[1] = -1.963810f;
    data.d[2] = 0.132740f;
    data.d[3] = -0.132741f;
    data.d[4] = 0.068899f;
    data.d[5] = -0.020627f;
    data.d[6] = 6.372983f;
    data.d[7] = -4.410119f;
    data.d[8] = -6.375785f;
    data.d[9] = 7.536968f;
    data.d[10] = 2.627861f;
    data.d[11] = -17.460800f;
    data.d[12] = 22.221685f;
    data.d[13] = 15.905842f;
    data.d[14] = -8.541908f;
    data.d[15] = -0.000001f;
    data.d[16] = -4.158216f;
    data.d[17] = 1.503352f;
    data.d[18] = 0.000006f;
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
    return 0.000000;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.609682f;
    data.d[1] = -1.884315f;
    data.d[2] = 0.138154f;
    data.d[3] = -0.138156f;
    data.d[4] = 0.056093f;
    data.d[5] = -0.000328f;
    data.d[6] = 5.368011f;
    data.d[7] = -4.413926f;
    data.d[8] = -6.001370f;
    data.d[9] = 7.266527f;
    data.d[10] = 2.255331f;
    data.d[11] = -17.035461f;
    data.d[12] = 20.018755f;
    data.d[13] = 13.055929f;
    data.d[14] = -10.803656f;
    data.d[15] = -0.000006f;
    data.d[16] = -4.150561f;
    data.d[17] = 2.301107f;
    data.d[18] = -0.118124f;
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
    return 0.000000;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n = data.d[3] += n;
    n *= data.d[1];
    n = data.d[3] += n;
    n = data.d[4] *= n;
    n = data.d[5] += n;
    n *= data.d[6];
    n = data.d[7] += n;
    n = data.d[5] *= n;
    n = data.d[5] += n;
    n *= data.d[8];
    n += data.d[9];
    n = data.d[10] *= n;
    n = data.d[11] += n;
    n = data.d[12] *= n;
    n += data.d[10];
    n *= data.d[11];
    n += data.d[12];
    n *= data.d[13];
    n += data.d[14];
    n *= data.d[15];
    n += data.d[7];
    n *= data.d[5];
    n = data.d[16] += n;
    n *= data.d[3];
    n += data.d[17];
    n *= data.d[16];
    n += data.d[4];
    n *= data.d[2];
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