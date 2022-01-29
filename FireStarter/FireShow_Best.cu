#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -1.138541f;
    data.d[1] = 0.570952f;
    data.d[2] = -0.345262f;
    data.d[3] = -0.897526f;
    data.d[4] = -0.485846f;
    data.d[5] = 0.815567f;
    data.d[6] = -0.271410f;
    data.d[7] = -0.970425f;
    data.d[8] = 0.486293f;
    data.d[9] = -0.454392f;
    data.d[10] = -0.900877f;
    data.d[11] = -1.468574f;
    data.d[12] = -1.303280f;
    data.d[13] = 0.504249f;
    data.d[14] = 0.270352f;
    data.d[15] = 1.211082f;
    data.d[16] = -0.904802f;
    data.d[17] = 0.575435f;
    data.d[18] = 1.499739f;
    data.d[19] = -0.365702f;
    data.d[20] = 1.020463f;
    data.d[21] = -1.030367f;
    return 0.000840;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.006352f;
    data.d[1] = -0.551362f;
    data.d[2] = -1.019434f;
    data.d[3] = 0.378503f;
    data.d[4] = -1.361623f;
    data.d[5] = -1.196770f;
    data.d[6] = -0.000000f;
    data.d[7] = 0.306366f;
    data.d[8] = 0.130783f;
    data.d[9] = 0.258075f;
    data.d[10] = 0.590137f;
    data.d[11] = -0.267662f;
    data.d[12] = 0.619671f;
    data.d[13] = 0.294975f;
    data.d[14] = -0.572827f;
    data.d[15] = 1.431743f;
    data.d[16] = -0.934250f;
    data.d[17] = -0.577538f;
    data.d[18] = -0.374891f;
    data.d[19] = 0.307595f;
    data.d[20] = 1.152056f;
    data.d[21] = -1.570796f;
    return 0.000001;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = fabsf(n);
    n += data.d[1];
    data.d[1] = n;
    n += data.d[2];
    n = fabsf(n);
    n += data.d[4];
    n *= data.d[5];
    data.d[5] = n;
    n *= data.d[6];
    data.d[6] = n;
    n = fabsf(n);
    data.d[1] = n;
    n += data.d[7];
    data.d[7] = n;
    n *= data.d[7];
    n *= data.d[8];
    n += data.d[9];
    data.d[9] = n;
    n += data.d[10];
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[11];
    n *= data.d[12];
    data.d[12] = n;
    n *= data.d[13];
    n += data.d[14];
    n += data.d[12];
    n *= data.d[6];
    n += data.d[15];
    data.d[15] = n;
    n += data.d[15];
    n *= data.d[16];
    n *= data.d[17];
    data.d[17] = n;
    n *= data.d[9];
    n = fabsf(n);
    n += data.d[19];
    n *= data.d[5];
    n += data.d[17];
    n *= data.d[20];
    n = fabsf(n);
    n += data.d[21];
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