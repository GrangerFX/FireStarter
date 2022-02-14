#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = -0.646918f;
        data.d[1] = -0.891954f;
        data.d[2] = 0.377038f;
        data.d[3] = -0.886844f;
        data.d[4] = -0.023868f;
        data.d[5] = 1.637231f;
        data.d[6] = 0.028290f;
        data.d[7] = 1.469058f;
        data.d[8] = 0.470220f;
        data.d[9] = 0.152645f;
        data.d[10] = -0.365708f;
        data.d[11] = -1.022437f;
        data.d[12] = 0.445511f;
        data.d[13] = -0.347695f;
        data.d[14] = 1.498033f;
        data.d[15] = 0.081802f;
        data.d[16] = 0.805333f;
        data.d[17] = -0.592702f;
        data.d[18] = 0.398365f;
        data.d[19] = 0.0f;
        data.d[20] = 0.0f;
        data.d[21] = 0.0f;
        data.d[22] = 0.0f;
        data.d[23] = 0.0f;
        data.d[24] = 0.0f;
        data.d[25] = 0.0f;
        data.d[26] = 0.0f;
        data.d[27] = 0.0f;
        data.d[28] = 0.0f;
        data.d[29] = 0.0f;
        data.d[30] = 0.0f;
        data.d[31] = 0.0f;
    }
    if (variation == 1) {
        data.d[0] = -0.138299f;
        data.d[1] = -0.132491f;
        data.d[2] = -1.121427f;
        data.d[3] = -0.980665f;
        data.d[4] = -0.170519f;
        data.d[5] = 0.529941f;
        data.d[6] = 0.677157f;
        data.d[7] = -0.334593f;
        data.d[8] = 0.580993f;
        data.d[9] = -0.745660f;
        data.d[10] = -0.417010f;
        data.d[11] = 0.210443f;
        data.d[12] = 0.030139f;
        data.d[13] = -0.038085f;
        data.d[14] = 0.572746f;
        data.d[15] = -0.814972f;
        data.d[16] = -0.199870f;
        data.d[17] = 0.576847f;
        data.d[18] = -0.756932f;
        data.d[19] = 0.0f;
        data.d[20] = 0.0f;
        data.d[21] = 0.0f;
        data.d[22] = 0.0f;
        data.d[23] = 0.0f;
        data.d[24] = 0.0f;
        data.d[25] = 0.0f;
        data.d[26] = 0.0f;
        data.d[27] = 0.0f;
        data.d[28] = 0.0f;
        data.d[29] = 0.0f;
        data.d[30] = 0.0f;
        data.d[31] = 0.0f;
    }
    if (variation == 2) {
        data.d[0] = 0.203843f;
        data.d[1] = 0.110195f;
        data.d[2] = -0.324832f;
        data.d[3] = -0.051653f;
        data.d[4] = -0.251848f;
        data.d[5] = -0.139909f;
        data.d[6] = -0.717860f;
        data.d[7] = -1.020938f;
        data.d[8] = 1.052117f;
        data.d[9] = -0.169786f;
        data.d[10] = 1.153746f;
        data.d[11] = 0.755295f;
        data.d[12] = 0.885226f;
        data.d[13] = 0.908530f;
        data.d[14] = 0.288396f;
        data.d[15] = -1.155439f;
        data.d[16] = 0.375348f;
        data.d[17] = -0.258250f;
        data.d[18] = 0.336535f;
        data.d[19] = 0.0f;
        data.d[20] = 0.0f;
        data.d[21] = 0.0f;
        data.d[22] = 0.0f;
        data.d[23] = 0.0f;
        data.d[24] = 0.0f;
        data.d[25] = 0.0f;
        data.d[26] = 0.0f;
        data.d[27] = 0.0f;
        data.d[28] = 0.0f;
        data.d[29] = 0.0f;
        data.d[30] = 0.0f;
        data.d[31] = 0.0f;
    }
    if (variation == 3) {
        data.d[0] = 0.114745f;
        data.d[1] = -0.186143f;
        data.d[2] = -0.611759f;
        data.d[3] = -1.047649f;
        data.d[4] = 0.901155f;
        data.d[5] = -1.422475f;
        data.d[6] = 0.510804f;
        data.d[7] = -1.032651f;
        data.d[8] = -0.940946f;
        data.d[9] = -0.367215f;
        data.d[10] = -1.326840f;
        data.d[11] = -0.469591f;
        data.d[12] = -0.715341f;
        data.d[13] = 0.686436f;
        data.d[14] = 0.840053f;
        data.d[15] = 0.321843f;
        data.d[16] = -0.459600f;
        data.d[17] = -0.941477f;
        data.d[18] = -1.007056f;
        data.d[19] = 0.0f;
        data.d[20] = 0.0f;
        data.d[21] = 0.0f;
        data.d[22] = 0.0f;
        data.d[23] = 0.0f;
        data.d[24] = 0.0f;
        data.d[25] = 0.0f;
        data.d[26] = 0.0f;
        data.d[27] = 0.0f;
        data.d[28] = 0.0f;
        data.d[29] = 0.0f;
        data.d[30] = 0.0f;
        data.d[31] = 0.0f;
    }
} // InitData
// END //

// PROGRAM //
inline float Program(const FireStarterInstructions& instructions, FireStarterData data, float n)
{
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
       instructions.i[i].Execute(data, n);
    return isnan(n) ? 0.0f : n;
} // Program
// END //

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    data.d[0] = n;
    n += data.d[1];
    n += data.d[2];
    data.d[2] = n;
    n += data.d[3];
    n *= data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    data.d[5] = n;
    n += data.d[2];
    data.d[2] = n;
    n += data.d[4];
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n += data.d[0];
    data.d[0] = n;
    n *= data.d[8];
    n += data.d[9];
    data.d[9] = n;
    n *= data.d[10];
    n += data.d[6];
    n *= data.d[11];
    n += fabsf(data.d[5]);
    data.d[5] = n;
    n *= data.d[9];
    n *= data.d[12];
    data.d[12] = n;
    n *= data.d[13];
    data.d[13] = n;
    n *= data.d[14];
    n += data.d[15];
    data.d[15] = n;
    n *= data.d[13];
    n *= data.d[0];
    n *= data.d[16];
    data.d[16] = n;
    n *= data.d[16];
    n += data.d[12];
    n += data.d[2];
    n *= data.d[17];
    n += data.d[15];
    n += data.d[5];
    n *= data.d[18];
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
        FireStarterInstructions instructions(bestResult.instructions);
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
        y = (int)(center + Program(instructions, bestResult.data, theta) * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow