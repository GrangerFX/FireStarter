#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// Note: Data is not used by FireShow. It is here so that the best data can be checked into git.
// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = 0.077120f;
        data.d[1] = 0.594562f;
        data.d[2] = -0.540383f;
        data.d[3] = 1.799093f;
        data.d[4] = 1.220648f;
        data.d[5] = 0.416624f;
        data.d[6] = -0.175643f;
        data.d[7] = 0.120029f;
        data.d[8] = -0.237022f;
        data.d[9] = -0.725542f;
        data.d[10] = -0.769042f;
        data.d[11] = 0.878510f;
        data.d[12] = 0.034978f;
        data.d[13] = -0.025804f;
        data.d[14] = -0.608258f;
        data.d[15] = 0.866228f;
        data.d[16] = 1.013594f;
    }
    if (variation == 1) {
        data.d[0] = 0.006203f;
        data.d[1] = 0.651515f;
        data.d[2] = -0.267898f;
        data.d[3] = 0.227329f;
        data.d[4] = -0.272069f;
        data.d[5] = -0.731529f;
        data.d[6] = 0.530347f;
        data.d[7] = 0.835206f;
        data.d[8] = 0.628945f;
        data.d[9] = 0.080923f;
        data.d[10] = -1.236930f;
        data.d[11] = -0.431142f;
        data.d[12] = 0.086602f;
        data.d[13] = -1.179769f;
        data.d[14] = -1.776976f;
        data.d[15] = 0.222033f;
        data.d[16] = -0.836469f;
    }
    if (variation == 2) {
        data.d[0] = 0.399342f;
        data.d[1] = -0.471709f;
        data.d[2] = -0.533200f;
        data.d[3] = -0.925869f;
        data.d[4] = 0.334162f;
        data.d[5] = 0.122086f;
        data.d[6] = 0.742482f;
        data.d[7] = -0.163117f;
        data.d[8] = -0.568048f;
        data.d[9] = -0.210995f;
        data.d[10] = -0.324084f;
        data.d[11] = -0.894137f;
        data.d[12] = 0.672208f;
        data.d[13] = 0.183251f;
        data.d[14] = -2.039269f;
        data.d[15] = -1.320433f;
        data.d[16] = 0.694116f;
    }
    if (variation == 3) {
        data.d[0] = -1.570794f;
        data.d[1] = 0.488700f;
        data.d[2] = -0.000002f;
        data.d[3] = -1.106391f;
        data.d[4] = 0.675715f;
        data.d[5] = 0.747634f;
        data.d[6] = -0.242389f;
        data.d[7] = -1.203727f;
        data.d[8] = -0.836069f;
        data.d[9] = -0.959643f;
        data.d[10] = -0.000015f;
        data.d[11] = -0.000023f;
        data.d[12] = -0.519390f;
        data.d[13] = -1.479850f;
        data.d[14] = 3.477779f;
        data.d[15] = 3.114951f;
        data.d[16] = 1.558186f;
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
    n += data.d[9];
    data.d[9] = n;
    n += data.d[2];
    n *= data.d[10];
    n *= data.d[8];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[1];
    n *= data.d[12];
    data.d[12] = n;
    n += data.d[12];
    data.d[12] = n;
    n += data.d[13];
    data.d[13] = n;
    n += fabsf(data.d[9]);
    data.d[9] = n;
    n += data.d[14];
    n += data.d[15];
    n += data.d[16];
    n *= data.d[5];
    n += data.d[12];
    n += data.d[3];
    data.d[3] = n;
    n += data.d[3];
    n *= data.d[13];
    data.d[13] = n;
    n += data.d[11];
    n *= data.d[9];
    n += data.d[13];
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