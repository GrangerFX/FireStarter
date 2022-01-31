#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// Note: Data is not used by FireShow. It is here so that the best data can be checked into git.
// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = 0.529534f;
        data.d[1] = -1.527844f;
        data.d[2] = -1.613804f;
        data.d[3] = -0.722196f;
        data.d[4] = -2.233782f;
        data.d[5] = -1.605893f;
        data.d[6] = 0.322315f;
        data.d[7] = 1.059479f;
        data.d[8] = -0.203387f;
        data.d[9] = -0.326751f;
        data.d[10] = 0.761151f;
        data.d[11] = 0.305714f;
        data.d[12] = 0.709119f;
        data.d[13] = -1.078450f;
        data.d[14] = 1.185426f;
        data.d[15] = -0.639157f;
        data.d[16] = 0.719359f;
        data.d[17] = 0.339158f;
        data.d[18] = -1.508838f;
        data.d[19] = 0.358487f;
        data.d[20] = -0.000013f;
    }
    if (variation == 1) {
        data.d[0] = -0.913199f;
        data.d[1] = -1.469916f;
        data.d[2] = -1.620601f;
        data.d[3] = -0.739386f;
        data.d[4] = 0.815319f;
        data.d[5] = 0.159717f;
        data.d[6] = 0.697929f;
        data.d[7] = -0.666331f;
        data.d[8] = -1.911094f;
        data.d[9] = 1.680714f;
        data.d[10] = 0.551736f;
        data.d[11] = 1.081342f;
        data.d[12] = -0.800870f;
        data.d[13] = -0.751739f;
        data.d[14] = -0.390989f;
        data.d[15] = 0.460968f;
        data.d[16] = -1.251301f;
        data.d[17] = 0.962080f;
        data.d[18] = -0.695102f;
        data.d[19] = 0.565013f;
        data.d[20] = -0.118066f;
    }
    if (variation == 2) {
        data.d[0] = -0.615886f;
        data.d[1] = -2.067012f;
        data.d[2] = -0.550941f;
        data.d[3] = 0.652221f;
        data.d[4] = -0.288310f;
        data.d[5] = 0.897855f;
        data.d[6] = -0.456377f;
        data.d[7] = -0.697929f;
        data.d[8] = -1.199489f;
        data.d[9] = -0.559555f;
        data.d[10] = 0.035648f;
        data.d[11] = 1.240395f;
        data.d[12] = -0.561976f;
        data.d[13] = 1.481788f;
        data.d[14] = 0.201228f;
        data.d[15] = 0.993646f;
        data.d[16] = -0.634690f;
        data.d[17] = -0.231525f;
        data.d[18] = 0.199657f;
        data.d[19] = 0.613483f;
        data.d[20] = 0.523445f;
    }
    if (variation == 3) {
        data.d[0] = 0.751736f;
        data.d[1] = -1.499430f;
        data.d[2] = -1.642138f;
        data.d[3] = 0.001558f;
        data.d[4] = 0.724583f;
        data.d[5] = 1.124990f;
        data.d[6] = 0.377835f;
        data.d[7] = 0.687801f;
        data.d[8] = 0.719175f;
        data.d[9] = -1.260583f;
        data.d[10] = 0.606172f;
        data.d[11] = 0.670769f;
        data.d[12] = -1.061388f;
        data.d[13] = -1.138493f;
        data.d[14] = -1.596375f;
        data.d[15] = 0.289652f;
        data.d[16] = -1.595204f;
        data.d[17] = 2.387019f;
        data.d[18] = -0.047255f;
        data.d[19] = 1.247126f;
        data.d[20] = 0.000023f;
    }
} // InitData

// END //

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
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
    n *= data.d[7];
    data.d[7] = n;
    n *= data.d[8];
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[12];
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[7];
    n *= data.d[9];
    n *= data.d[6];
    n += data.d[15];
    data.d[15] = n;
    n += data.d[15];
    n *= data.d[11];
    n *= data.d[16];
    data.d[16] = n;
    n *= data.d[10];
    n = fabsf(n);
    n += data.d[18];
    n *= data.d[5];
    n += data.d[16];
    n *= data.d[19];
    n *= data.d[2];
    n += data.d[20];
    return isnan(n) ? 0.0f : n;
} // Evaluate
// END //

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