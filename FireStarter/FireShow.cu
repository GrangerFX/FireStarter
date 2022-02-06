#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// Note: Data is not used by FireShow. It is here so that the best data can be checked into git.
// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = 1.381685f;
        data.d[1] = -0.366775f;
        data.d[2] = 0.956945f;
        data.d[3] = 0.049005f;
        data.d[4] = 0.743476f;
        data.d[5] = -0.680612f;
        data.d[6] = -0.175430f;
        data.d[7] = -1.857885f;
        data.d[8] = -0.544204f;
        data.d[9] = -0.414635f;
        data.d[10] = 2.429102f;
        data.d[11] = -0.429605f;
        data.d[12] = 0.630584f;
        data.d[13] = -1.160951f;
        data.d[14] = -0.001740f;
        data.d[15] = -0.423754f;
        data.d[16] = -0.421405f;
        data.d[17] = -0.568071f;
        data.d[18] = -0.719595f;
    }
    if (variation == 1) {
        data.d[0] = 0.817658f;
        data.d[1] = 0.259479f;
        data.d[2] = 0.056252f;
        data.d[3] = -0.081283f;
        data.d[4] = -0.956521f;
        data.d[5] = -1.014236f;
        data.d[6] = -0.660646f;
        data.d[7] = 0.163752f;
        data.d[8] = 0.085897f;
        data.d[9] = -0.060254f;
        data.d[10] = 1.940298f;
        data.d[11] = 0.383277f;
        data.d[12] = 0.262334f;
        data.d[13] = 0.429956f;
        data.d[14] = 0.246360f;
        data.d[15] = 0.378072f;
        data.d[16] = -2.225730f;
        data.d[17] = -0.366602f;
        data.d[18] = -0.082220f;
    }
    if (variation == 2) {
        data.d[0] = 0.383242f;
        data.d[1] = -0.341430f;
        data.d[2] = -0.603431f;
        data.d[3] = 0.387629f;
        data.d[4] = -0.782557f;
        data.d[5] = 0.877344f;
        data.d[6] = 0.137371f;
        data.d[7] = 0.173265f;
        data.d[8] = -0.760082f;
        data.d[9] = 0.519182f;
        data.d[10] = -1.775746f;
        data.d[11] = 0.344218f;
        data.d[12] = -0.855607f;
        data.d[13] = -0.872786f;
        data.d[14] = -1.978984f;
        data.d[15] = -1.001677f;
        data.d[16] = -1.212659f;
        data.d[17] = 0.551047f;
        data.d[18] = 0.141189f;
    }
    if (variation == 3) {
        data.d[0] = -0.542347f;
        data.d[1] = 0.106211f;
        data.d[2] = 0.364396f;
        data.d[3] = 0.580748f;
        data.d[4] = 0.886899f;
        data.d[5] = 1.383310f;
        data.d[6] = -0.734435f;
        data.d[7] = 1.200480f;
        data.d[8] = 0.168287f;
        data.d[9] = 0.626408f;
        data.d[10] = -0.903916f;
        data.d[11] = 0.035916f;
        data.d[12] = -0.812876f;
        data.d[13] = 1.071187f;
        data.d[14] = 1.472351f;
        data.d[15] = 0.545167f;
        data.d[16] = 1.572266f;
        data.d[17] = -0.064317f;
        data.d[18] = -0.386189f;
    }
} // InitData
// END //

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    data.d[0] = n;
    n += data.d[1];
    n += data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[5];
    data.d[5] = n;
    n += data.d[2];
    data.d[2] = n;
    n *= data.d[4];
    n += data.d[6];
    data.d[6] = n;
    n *= data.d[7];
    n += data.d[0];
    data.d[0] = n;
    n *= data.d[8];
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    n *= data.d[6];
    n += data.d[11];
    n *= data.d[5];
    data.d[5] = n;
    n += fabsf(data.d[9]);
    n += data.d[12];
    data.d[12] = n;
    n *= data.d[13];
    data.d[13] = n;
    n *= data.d[14];
    n += data.d[15];
    data.d[15] = n;
    n += data.d[13];
    n *= data.d[0];
    n *= data.d[16];
    data.d[16] = n;
    n += data.d[16];
    n *= data.d[12];
    n += data.d[2];
    n *= data.d[17];
    n *= data.d[15];
    n += data.d[5];
    n += data.d[18];
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
#if 1
        FireStarterData data;
        InitData(variation, data);
#else
        FireStarterData data(bestResult.data);
#endif
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