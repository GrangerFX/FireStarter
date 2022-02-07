#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// DATA //
GPU_FUNCTION void InitData(const unsigned int variation, FireStarterData &data)
{
    if (variation == 0) {
        data.d[0] = -1.071393f;
        data.d[1] = 0.178957f;
        data.d[2] = 0.752222f;
        data.d[3] = -0.455129f;
        data.d[4] = -0.105304f;
        data.d[5] = 0.678899f;
        data.d[6] = -0.225647f;
        data.d[7] = 0.078584f;
        data.d[8] = 0.687086f;
        data.d[9] = 0.893288f;
        data.d[10] = -1.060378f;
        data.d[11] = 0.423247f;
        data.d[12] = -0.894063f;
        data.d[13] = 0.405222f;
        data.d[14] = 0.405523f;
        data.d[15] = 0.512572f;
        data.d[16] = -0.295672f;
        data.d[17] = -0.605587f;
        data.d[18] = 0.138542f;
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
        data.d[0] = -0.418744f;
        data.d[1] = 0.679817f;
        data.d[2] = 0.848620f;
        data.d[3] = -1.032346f;
        data.d[4] = -0.891693f;
        data.d[5] = -0.230704f;
        data.d[6] = -2.440952f;
        data.d[7] = -0.901650f;
        data.d[8] = 0.207363f;
        data.d[9] = -0.247618f;
        data.d[10] = -0.587304f;
        data.d[11] = 0.796318f;
        data.d[12] = -1.253612f;
        data.d[13] = 0.048657f;
        data.d[14] = -1.001368f;
        data.d[15] = -0.216748f;
        data.d[16] = -0.956515f;
        data.d[17] = 0.243031f;
        data.d[18] = 0.127839f;
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
        data.d[0] = 1.189609f;
        data.d[1] = 0.445425f;
        data.d[2] = 0.003999f;
        data.d[3] = 0.138460f;
        data.d[4] = 0.407641f;
        data.d[5] = -0.700217f;
        data.d[6] = -0.118608f;
        data.d[7] = 0.299345f;
        data.d[8] = 0.691603f;
        data.d[9] = 0.908452f;
        data.d[10] = -0.034873f;
        data.d[11] = 0.038944f;
        data.d[12] = 0.924352f;
        data.d[13] = 0.284977f;
        data.d[14] = -0.214091f;
        data.d[15] = -0.405603f;
        data.d[16] = -0.859724f;
        data.d[17] = 0.840676f;
        data.d[18] = 0.688361f;
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
        data.d[0] = 0.241234f;
        data.d[1] = -0.098757f;
        data.d[2] = -0.731473f;
        data.d[3] = -0.821017f;
        data.d[4] = -1.905133f;
        data.d[5] = 0.062168f;
        data.d[6] = -1.274883f;
        data.d[7] = -0.679742f;
        data.d[8] = 2.899965f;
        data.d[9] = 0.367704f;
        data.d[10] = 2.163547f;
        data.d[11] = 0.232237f;
        data.d[12] = -0.263929f;
        data.d[13] = -0.538203f;
        data.d[14] = 0.513906f;
        data.d[15] = 0.231920f;
        data.d[16] = -0.174085f;
        data.d[17] = -0.455868f;
        data.d[18] = 0.419858f;
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
GPU_FUNCTION float Program(const FireStarterInstructions& instructions, FireStarterData data, float n)
{
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        switch (instructions.i[i].operation) {
        case 0:
            n *= data.d[0];
            data.d[0] = n;
            break;
        case 1:
            n *= data.d[1];
            data.d[1] = n;
            break;
        case 2:
            n *= data.d[2];
            data.d[2] = n;
            break;
        case 3:
            n *= data.d[3];
            data.d[3] = n;
            break;
        case 4:
            n *= data.d[4];
            data.d[4] = n;
            break;
        case 5:
            n *= data.d[5];
            data.d[5] = n;
            break;
        case 6:
            n *= data.d[6];
            data.d[6] = n;
            break;
        case 7:
            n *= data.d[7];
            data.d[7] = n;
            break;
        case 8:
            n *= data.d[8];
            data.d[8] = n;
            break;
        case 9:
            n *= data.d[9];
            data.d[9] = n;
            break;
        case 10:
            n *= data.d[10];
            data.d[10] = n;
            break;
        case 11:
            n *= data.d[11];
            data.d[11] = n;
            break;
        case 12:
            n *= data.d[12];
            data.d[12] = n;
            break;
        case 13:
            n *= data.d[13];
            data.d[13] = n;
            break;
        case 14:
            n *= data.d[14];
            data.d[14] = n;
            break;
        case 15:
            n *= data.d[15];
            data.d[15] = n;
            break;
        case 16:
            n *= data.d[16];
            data.d[16] = n;
            break;
        case 17:
            n *= data.d[17];
            data.d[17] = n;
            break;
        case 18:
            n *= data.d[18];
            data.d[18] = n;
            break;
        case 19:
            n *= data.d[19];
            data.d[19] = n;
            break;
        case 20:
            n *= data.d[20];
            data.d[20] = n;
            break;
        case 21:
            n *= data.d[21];
            data.d[21] = n;
            break;
        case 22:
            n *= data.d[22];
            data.d[22] = n;
            break;
        case 23:
            n *= data.d[23];
            data.d[23] = n;
            break;
        case 24:
            n *= data.d[24];
            data.d[24] = n;
            break;
        case 25:
            n *= data.d[25];
            data.d[25] = n;
            break;
        case 26:
            n *= data.d[26];
            data.d[26] = n;
            break;
        case 27:
            n *= data.d[27];
            data.d[27] = n;
            break;
        case 28:
            n *= data.d[28];
            data.d[28] = n;
            break;
        case 29:
            n *= data.d[29];
            data.d[29] = n;
            break;
        case 30:
            n *= data.d[30];
            data.d[30] = n;
            break;
        case 31:
            n *= data.d[31];
            data.d[31] = n;
            break;
        case 32:
            n += data.d[0];
            data.d[0] = n;
            break;
        case 33:
            n += data.d[1];
            data.d[1] = n;
            break;
        case 34:
            n += data.d[2];
            data.d[2] = n;
            break;
        case 35:
            n += data.d[3];
            data.d[3] = n;
            break;
        case 36:
            n += data.d[4];
            data.d[4] = n;
            break;
        case 37:
            n += data.d[5];
            data.d[5] = n;
            break;
        case 38:
            n += data.d[6];
            data.d[6] = n;
            break;
        case 39:
            n += data.d[7];
            data.d[7] = n;
            break;
        case 40:
            n += data.d[8];
            data.d[8] = n;
            break;
        case 41:
            n += data.d[9];
            data.d[9] = n;
            break;
        case 42:
            n += data.d[10];
            data.d[10] = n;
            break;
        case 43:
            n += data.d[11];
            data.d[11] = n;
            break;
        case 44:
            n += data.d[12];
            data.d[12] = n;
            break;
        case 45:
            n += data.d[13];
            data.d[13] = n;
            break;
        case 46:
            n += data.d[14];
            data.d[14] = n;
            break;
        case 47:
            n += data.d[15];
            data.d[15] = n;
            break;
        case 48:
            n += data.d[16];
            data.d[16] = n;
            break;
        case 49:
            n += data.d[17];
            data.d[17] = n;
            break;
        case 50:
            n += data.d[18];
            data.d[18] = n;
            break;
        case 51:
            n += data.d[19];
            data.d[19] = n;
            break;
        case 52:
            n += data.d[20];
            data.d[20] = n;
            break;
        case 53:
            n += data.d[21];
            data.d[21] = n;
            break;
        case 54:
            n += data.d[22];
            data.d[22] = n;
            break;
        case 55:
            n += data.d[23];
            data.d[23] = n;
            break;
        case 56:
            n += data.d[24];
            data.d[24] = n;
            break;
        case 57:
            n += data.d[25];
            data.d[25] = n;
            break;
        case 58:
            n += data.d[26];
            data.d[26] = n;
            break;
        case 59:
            n += data.d[27];
            data.d[27] = n;
            break;
        case 60:
            n += data.d[28];
            data.d[28] = n;
            break;
        case 61:
            n += data.d[29];
            data.d[29] = n;
            break;
        case 62:
            n += data.d[30];
            data.d[30] = n;
            break;
        case 63:
            n += data.d[31];
            data.d[31] = n;
            break;
        case 64:
            n += fabsf(data.d[0]);
            data.d[0] = n;
            break;
        case 65:
            n += fabsf(data.d[1]);
            data.d[1] = n;
            break;
        case 66:
            n += fabsf(data.d[2]);
            data.d[2] = n;
            break;
        case 67:
            n += fabsf(data.d[3]);
            data.d[3] = n;
            break;
        case 68:
            n += fabsf(data.d[4]);
            data.d[4] = n;
            break;
        case 69:
            n += fabsf(data.d[5]);
            data.d[5] = n;
            break;
        case 70:
            n += fabsf(data.d[6]);
            data.d[6] = n;
            break;
        case 71:
            n += fabsf(data.d[7]);
            data.d[7] = n;
            break;
        case 72:
            n += fabsf(data.d[8]);
            data.d[8] = n;
            break;
        case 73:
            n += fabsf(data.d[9]);
            data.d[9] = n;
            break;
        case 74:
            n += fabsf(data.d[10]);
            data.d[10] = n;
            break;
        case 75:
            n += fabsf(data.d[11]);
            data.d[11] = n;
            break;
        case 76:
            n += fabsf(data.d[12]);
            data.d[12] = n;
            break;
        case 77:
            n += fabsf(data.d[13]);
            data.d[13] = n;
            break;
        case 78:
            n += fabsf(data.d[14]);
            data.d[14] = n;
            break;
        case 79:
            n += fabsf(data.d[15]);
            data.d[15] = n;
            break;
        case 80:
            n += fabsf(data.d[16]);
            data.d[16] = n;
            break;
        case 81:
            n += fabsf(data.d[17]);
            data.d[17] = n;
            break;
        case 82:
            n += fabsf(data.d[18]);
            data.d[18] = n;
            break;
        case 83:
            n += fabsf(data.d[19]);
            data.d[19] = n;
            break;
        case 84:
            n += fabsf(data.d[20]);
            data.d[20] = n;
            break;
        case 85:
            n += fabsf(data.d[21]);
            data.d[21] = n;
            break;
        case 86:
            n += fabsf(data.d[22]);
            data.d[22] = n;
            break;
        case 87:
            n += fabsf(data.d[23]);
            data.d[23] = n;
            break;
        case 88:
            n += fabsf(data.d[24]);
            data.d[24] = n;
            break;
        case 89:
            n += fabsf(data.d[25]);
            data.d[25] = n;
            break;
        case 90:
            n += fabsf(data.d[26]);
            data.d[26] = n;
            break;
        case 91:
            n += fabsf(data.d[27]);
            data.d[27] = n;
            break;
        case 92:
            n += fabsf(data.d[28]);
            data.d[28] = n;
            break;
        case 93:
            n += fabsf(data.d[29]);
            data.d[29] = n;
            break;
        case 94:
            n += fabsf(data.d[30]);
            data.d[30] = n;
            break;
        case 95:
            n += fabsf(data.d[31]);
            data.d[31] = n;
            break;
        }
    }
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
    n += data.d[15];
    n += data.d[5];
    n += data.d[18];
    return isnan(n) ? 0.0f : n;
} // Evaluate
// END //

GPU_GLOBAL void FireShow(const FireStarterInstructions instructions, const FireStarterResult bestResult, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, const unsigned int variation)
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
#if 1
        y = (int)(center + Program(instructions, bestResult.data, theta) * yScale);
#else
        y = (int)(center + Evaluate(bestResult.data, theta) * yScale);
#endif
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow