#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// Note: Data is not used by FireShow. It is here so that the best data can be checked into git.
// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = 0.559027f;
        data.d[1] = -0.522894f;
        data.d[2] = 0.215429f;
        data.d[3] = 0.725035f;
        data.d[4] = 1.752049f;
        data.d[5] = -0.328876f;
        data.d[6] = -1.091448f;
        data.d[7] = 0.442171f;
        data.d[8] = -1.451047f;
        data.d[9] = -0.516263f;
        data.d[10] = 0.340582f;
        data.d[11] = -0.004786f;
        data.d[12] = -1.196477f;
        data.d[13] = -0.145857f;
        data.d[14] = -0.253263f;
        data.d[15] = -1.435294f;
        data.d[16] = 0.120992f;
    }
    if (variation == 1) {
        data.d[0] = 0.207293f;
        data.d[1] = -0.252062f;
        data.d[2] = 0.337937f;
        data.d[3] = 0.932402f;
        data.d[4] = 0.383710f;
        data.d[5] = 0.926573f;
        data.d[6] = 0.634653f;
        data.d[7] = 1.022948f;
        data.d[8] = -0.789985f;
        data.d[9] = 0.597619f;
        data.d[10] = -1.425959f;
        data.d[11] = 1.317525f;
        data.d[12] = -1.421030f;
        data.d[13] = 0.028537f;
        data.d[14] = -1.135451f;
        data.d[15] = -0.269128f;
        data.d[16] = 0.748218f;
    }
    if (variation == 2) {
        data.d[0] = 0.306053f;
        data.d[1] = 0.327999f;
        data.d[2] = -0.841229f;
        data.d[3] = 0.654223f;
        data.d[4] = -0.804226f;
        data.d[5] = -0.327986f;
        data.d[6] = 0.962762f;
        data.d[7] = -1.832412f;
        data.d[8] = -0.523882f;
        data.d[9] = 0.751932f;
        data.d[10] = 1.644837f;
        data.d[11] = 0.599174f;
        data.d[12] = 0.497616f;
        data.d[13] = -1.670971f;
        data.d[14] = 0.844486f;
        data.d[15] = -0.057926f;
        data.d[16] = 0.581454f;
    }
    if (variation == 3) {
        data.d[0] = -1.570949f;
        data.d[1] = -0.289830f;
        data.d[2] = -0.000153f;
        data.d[3] = -1.534432f;
        data.d[4] = -0.338207f;
        data.d[5] = 0.935844f;
        data.d[6] = 0.614052f;
        data.d[7] = -0.942615f;
        data.d[8] = 0.842269f;
        data.d[9] = -0.029908f;
        data.d[10] = 0.001649f;
        data.d[11] = -0.564239f;
        data.d[12] = -1.150150f;
        data.d[13] = 2.858837f;
        data.d[14] = -0.002408f;
        data.d[15] = -1.184937f;
        data.d[16] = 0.385521f;
    }
} // InitData

// END //

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n *= data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[3];
    data.d[3] = n;
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[5];
    data.d[5] = n;
    n *= data.d[6];
    n *= data.d[7];
    n += fabsf(data.d[1]);
    data.d[1] = n;
    n *= data.d[8];
    data.d[8] = n;
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[9];
    data.d[9] = n;
    n += data.d[2];
    n *= data.d[10];
    n *= data.d[8];
    n *= data.d[4];
    n *= data.d[1];
    n *= data.d[11];
    data.d[11] = n;
    n += data.d[11];
    data.d[11] = n;
    n += data.d[12];
    data.d[12] = n;
    n += fabsf(data.d[9]);
    data.d[9] = n;
    n += data.d[13];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[5];
    n += data.d[11];
    n += data.d[3];
    data.d[3] = n;
    n += data.d[3];
    n *= data.d[12];
    data.d[12] = n;
    n += data.d[16];
    n *= data.d[9];
    n += data.d[12];
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