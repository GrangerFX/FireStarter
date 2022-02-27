#include "FireStarterEvolveResults.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

#if PROGRAM_TEST_EVALUATE
// The best result from unit compilation version.
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
    n += data.d[7];
    data.d[7] = n;
    n *= data.d[7];
    n += data.d[5];
    data.d[5] = n;
    n += data.d[8];
    data.d[8] = n;
    n = fabsf(n);
    data.d[9] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[11];
    n *= data.d[12];
    n *= data.d[13];
    n += data.d[14];
    n *= data.d[6];
    n *= data.d[10];
    n += data.d[15];
    data.d[15] = n;
    n *= data.d[16];
    n *= data.d[15];
    n *= data.d[17];
    data.d[17] = n;
    n *= data.d[8];
    n = fabsf(n);
    n += data.d[9];
    n *= data.d[5];
    n += data.d[17];
    n *= data.d[19];
    n *= data.d[2];
    n += data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
#endif

GPU_GLOBAL void FireShow(const FireStarterEvolveResult bestResult, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, const unsigned int variation)
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
        const FireStarterInstructions instructions(bestResult.instructions);
        FireStarterData data(bestResult.data[variation]);
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float target = Target(theta, variation);
        float center = bufferHeight * 0.66f;
        int y = (int)(center + target * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
#if PROGRAM_TEST_EVALUATE
        y = (int)(center + Evaluate(bestResult.data[variation], theta) * yScale);
#else
        y = (int)(center + instructions.Execute(bestResult.data[variation], theta) * yScale);
#endif
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow