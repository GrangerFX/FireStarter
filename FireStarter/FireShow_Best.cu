#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = 5.969586f;
        data.d[1] = -5.110033f;
        data.d[2] = 0.519661f;
        data.d[3] = -11.498133f;
        data.d[4] = -0.020073f;
        data.d[5] = 0.348248f;
        data.d[6] = -0.850531f;
        data.d[7] = -0.332598f;
        data.d[8] = -1.048695f;
        data.d[9] = 0.600303f;
        data.d[10] = -3.226162f;
        data.d[11] = -1.461043f;
        data.d[12] = -4.363666f;
        data.d[13] = -3.617711f;
        data.d[14] = 1.178481f;
        data.d[15] = 9.419980f;
        data.d[16] = 0.037142f;
        data.d[17] = 3.829350f;
        data.d[18] = 0.087937f;
        data.d[19] = 0.093597f;
    }
    if (variation == 1) {
        data.d[0] = 7.011803f;
        data.d[1] = -7.022340f;
        data.d[2] = 0.434879f;
        data.d[3] = -11.853927f;
        data.d[4] = -0.015081f;
        data.d[5] = 0.267947f;
        data.d[6] = -0.753388f;
        data.d[7] = -0.484046f;
        data.d[8] = -1.434955f;
        data.d[9] = 0.751815f;
        data.d[10] = -2.505546f;
        data.d[11] = -1.193880f;
        data.d[12] = -4.931779f;
        data.d[13] = -4.689807f;
        data.d[14] = 1.192049f;
        data.d[15] = 9.268222f;
        data.d[16] = 0.028339f;
        data.d[17] = 2.681547f;
        data.d[18] = 0.160557f;
        data.d[19] = -0.533647f;
    }
    if (variation == 2) {
        data.d[0] = 6.788815f;
        data.d[1] = -6.368399f;
        data.d[2] = 0.495317f;
        data.d[3] = -12.538713f;
        data.d[4] = -0.023921f;
        data.d[5] = 0.272381f;
        data.d[6] = -0.600497f;
        data.d[7] = -0.314053f;
        data.d[8] = -1.084521f;
        data.d[9] = 0.605465f;
        data.d[10] = -2.441021f;
        data.d[11] = -1.606661f;
        data.d[12] = -3.823837f;
        data.d[13] = -4.079471f;
        data.d[14] = 1.226390f;
        data.d[15] = 9.867546f;
        data.d[16] = 0.039343f;
        data.d[17] = 1.139551f;
        data.d[18] = 0.121385f;
        data.d[19] = 0.459872f;
    }
} // InitData

// END //

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n *= data.d[0];
    n += data.d[1];
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[3];
    data.d[3] = n;
    n *= data.d[4];
    n += data.d[5];
    data.d[5] = n;
    n *= data.d[5];
    data.d[5] = n;
    n += data.d[6];
    n *= data.d[7];
    data.d[7] = n;
    n += data.d[5];
    n *= data.d[8];
    data.d[8] = n;
    n += data.d[9];
    n *= data.d[2];
    n += data.d[10];
    data.d[10] = n;
    n *= data.d[7];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[12];
    data.d[12] = n;
    n += data.d[13];
    n *= data.d[8];
    n += data.d[3];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[11];
    data.d[11] = n;
    n += data.d[11];
    n *= data.d[16];
    data.d[16] = n;
    n += data.d[16];
    data.d[16] = n;
    n *= data.d[10];
    n += data.d[12];
    n *= data.d[16];
    n += data.d[17];
    n *= data.d[18];
    n += data.d[19];
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
        FireStarterData data(bestResult.data);
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