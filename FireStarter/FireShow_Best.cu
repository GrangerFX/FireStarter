#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// Note: Data is not used by FireShow. It is here so that the best data can be checked into git.
// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = -1.774742f;
        data.d[1] = -1.653549f;
        data.d[2] = -0.218668f;
        data.d[3] = 0.002308f;
        data.d[4] = 0.007644f;
        data.d[5] = -0.257737f;
        data.d[6] = -0.477793f;
        data.d[7] = -0.862853f;
        data.d[8] = -1.125002f;
        data.d[9] = 0.313273f;
        data.d[10] = 0.831185f;
        data.d[11] = -0.314381f;
        data.d[12] = -0.304519f;
        data.d[13] = -0.767323f;
        data.d[14] = 0.055355f;
        data.d[15] = 0.947301f;
        data.d[16] = -0.517989f;
        data.d[17] = -0.805118f;
    }
    if (variation == 1) {
        data.d[0] = -1.321936f;
        data.d[1] = -2.004178f;
        data.d[2] = -0.148767f;
        data.d[3] = -0.305718f;
        data.d[4] = -0.021214f;
        data.d[5] = 0.403430f;
        data.d[6] = -0.157461f;
        data.d[7] = 0.471169f;
        data.d[8] = 1.548995f;
        data.d[9] = -1.184386f;
        data.d[10] = -0.058825f;
        data.d[11] = 0.634284f;
        data.d[12] = 0.001528f;
        data.d[13] = -0.166738f;
        data.d[14] = -1.161193f;
        data.d[15] = 1.213526f;
        data.d[16] = 0.517941f;
        data.d[17] = -1.363568f;
    }
    if (variation == 2) {
        data.d[0] = -0.168778f;
        data.d[1] = -2.802442f;
        data.d[2] = 0.197827f;
        data.d[3] = -0.171861f;
        data.d[4] = 0.039316f;
        data.d[5] = -0.663861f;
        data.d[6] = 0.445972f;
        data.d[7] = 0.912794f;
        data.d[8] = 0.475928f;
        data.d[9] = -0.853657f;
        data.d[10] = -0.124584f;
        data.d[11] = 0.504898f;
        data.d[12] = 0.338080f;
        data.d[13] = -0.744862f;
        data.d[14] = 0.090549f;
        data.d[15] = -1.230011f;
        data.d[16] = 0.574652f;
        data.d[17] = -1.904222f;
    }
    if (variation == 3) {
        data.d[0] = -0.022802f;
        data.d[1] = -2.676379f;
        data.d[2] = -0.285320f;
        data.d[3] = -0.940456f;
        data.d[4] = 0.396444f;
        data.d[5] = -0.811753f;
        data.d[6] = 0.768044f;
        data.d[7] = 0.251206f;
        data.d[8] = -1.637332f;
        data.d[9] = -1.426117f;
        data.d[10] = -4.029300f;
        data.d[11] = 0.213501f;
        data.d[12] = -0.190220f;
        data.d[13] = -0.328692f;
        data.d[14] = 3.561042f;
        data.d[15] = 2.578787f;
        data.d[16] = -0.460279f;
        data.d[17] = 1.220342f;
    }
} // InitData

// END //

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    data.d[0] = n;
    n += data.d[1];
    data.d[1] = n;
    n += data.d[2];
    data.d[2] = n;
    n *= data.d[1];
    data.d[1] = n;
    n *= data.d[3];
    data.d[3] = n;
    n += fabsf(data.d[1]);
    data.d[1] = n;
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[5];
    data.d[5] = n;
    n *= data.d[1];
    n *= data.d[6];
    n += data.d[7];
    data.d[7] = n;
    n *= data.d[8];
    data.d[8] = n;
    n += data.d[2];
    n *= data.d[8];
    data.d[8] = n;
    n *= data.d[7];
    n *= data.d[9];
    n *= data.d[10];
    n *= data.d[11];
    n *= data.d[0];
    data.d[0] = n;
    n += fabsf(data.d[12]);
    n += data.d[13];
    n += data.d[8];
    data.d[8] = n;
    n *= data.d[14];
    n += data.d[15];
    n += data.d[5];
    n *= data.d[0];
    n += data.d[4];
    n *= data.d[3];
    n *= data.d[16];
    data.d[16] = n;
    n += data.d[17];
    n += data.d[16];
    n *= data.d[8];
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