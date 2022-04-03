#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "FireStarterOrder.h"
#include "HashRandom.h"

// EVALUATE //
inline float Evaluate0(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n = data.d[15] *= n;
    n *= data.d[8];
    n = data.d[15] *= n;
    n = data.d[16] += n;
    n = data.d[15] += n;
    n += data.d[16];
    n = data.d[7] *= n;
    n += data.d[17];
    n *= data.d[15];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[18];
    return isfinite(n) ? n : 0.0f;
} // Evaluate0

inline float Evaluate1(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n *= data.d[7];
    n += data.d[18];
    n *= data.d[16];
    n = data.d[1] *= n;
    n += data.d[1];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate1

inline float Evaluate2(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n *= data.d[17];
    n = data.d[16] += n;
    n += data.d[18];
    n = data.d[7] *= n;
    n += data.d[19];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate2

inline float Evaluate3(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate3

inline float Evaluate4(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n = data.d[4] += n;
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n += data.d[4];
    n = data.d[11] += n;
    n *= data.d[12];
    n *= data.d[5];
    n *= data.d[11];
    n *= data.d[13];
    n += data.d[14];
    n *= data.d[8];
    n = data.d[15] *= n;
    n = data.d[16] += n;
    n = data.d[15] += n;
    n += data.d[16];
    n = data.d[7] *= n;
    n += data.d[17];
    n *= data.d[15];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[18];
    return isfinite(n) ? n : 0.0f;
} // Evaluate4

inline float Evaluate5(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n = data.d[13] *= n;
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n *= data.d[13];
    n = data.d[16] += n;
    n = data.d[17] += n;
    n += data.d[16];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[17];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate5

inline float Evaluate6(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n *= data.d[16];
    n = data.d[17] += n;
    n = data.d[18] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[19];
    n *= data.d[18];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate6

inline float Evaluate7(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate7

inline float Evaluate8(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n += data.d[17];
    n = data.d[16] += n;
    n = data.d[16] += n;
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate8

inline float Evaluate9(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate9

inline float Evaluate10(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n *= data.d[5];
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[14];
    n *= data.d[12];
    n *= data.d[15];
    n += data.d[16];
    n *= data.d[8];
    n = data.d[17] *= n;
    n = data.d[18] += n;
    n = data.d[17] += n;
    n += data.d[18];
    n = data.d[7] *= n;
    n += data.d[19];
    n *= data.d[17];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate10

inline float Evaluate11(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n = data.d[11] *= n;
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n *= data.d[11];
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate11

inline float Evaluate12(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n *= data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate12

inline float Evaluate13(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n = data.d[4] *= n;
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[4] += n;
    n = data.d[16] += n;
    n += data.d[4];
    n = data.d[7] *= n;
    n += data.d[17];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[18];
    return isfinite(n) ? n : 0.0f;
} // Evaluate13

inline float Evaluate14(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n = data.d[9] *= n;
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[9];
    return isfinite(n) ? n : 0.0f;
} // Evaluate14

inline float Evaluate15(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n += data.d[6];
    n = data.d[1] += n;
    n = data.d[7] *= n;
    n = data.d[8] += n;
    n = data.d[9] += n;
    n += data.d[10];
    n += data.d[11];
    n *= data.d[7];
    n *= data.d[12];
    n = data.d[13] += n;
    n *= data.d[14];
    n *= data.d[5];
    n *= data.d[13];
    n *= data.d[15];
    n += data.d[16];
    n *= data.d[9];
    n = data.d[17] *= n;
    n = data.d[18] += n;
    n = data.d[17] += n;
    n += data.d[18];
    n = data.d[8] *= n;
    n += data.d[19];
    n *= data.d[17];
    n *= data.d[1];
    n *= data.d[8];
    n += data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate15

inline float Evaluate16(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n += data.d[16];
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n += data.d[19];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate16

inline float Evaluate17(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n = data.d[6] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[7];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[6] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[6];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate17

inline float Evaluate18(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n += data.d[1];
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n = data.d[8] *= n;
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[8];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate18

inline float Evaluate19(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n = data.d[9] += n;
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n += data.d[9];
    n += data.d[14];
    n *= data.d[8];
    n = data.d[15] *= n;
    n = data.d[16] += n;
    n = data.d[15] += n;
    n += data.d[16];
    n = data.d[7] *= n;
    n += data.d[17];
    n *= data.d[15];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[18];
    return isfinite(n) ? n : 0.0f;
} // Evaluate19

inline float Evaluate20(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n *= data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate20

inline float Evaluate21(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n = data.d[9] += n;
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[9];
    n = data.d[11] += n;
    n *= data.d[12];
    n *= data.d[5];
    n *= data.d[11];
    n *= data.d[13];
    n += data.d[14];
    n *= data.d[8];
    n = data.d[15] *= n;
    n = data.d[16] += n;
    n = data.d[15] += n;
    n += data.d[16];
    n = data.d[7] *= n;
    n += data.d[17];
    n *= data.d[15];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[18];
    return isfinite(n) ? n : 0.0f;
} // Evaluate21

inline float Evaluate22(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n = data.d[4] += n;
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n *= data.d[4];
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate22

inline float Evaluate23(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n *= data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate23

inline float Evaluate24(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n += data.d[16];
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n += data.d[19];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate24

inline float Evaluate25(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n *= data.d[7];
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n += data.d[0];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate25

inline float Evaluate26(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n = data.d[14] *= n;
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[14];
    return isfinite(n) ? n : 0.0f;
} // Evaluate26

inline float Evaluate27(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n = data.d[9] += n;
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n *= data.d[7];
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n += data.d[9];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate27

inline float Evaluate28(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n *= data.d[6];
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n = data.d[11] += n;
    n *= data.d[12];
    n = data.d[11] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[11];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate28

inline float Evaluate29(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n = data.d[8] += n;
    n = data.d[9] += n;
    n += data.d[10];
    n += data.d[11];
    n *= data.d[7];
    n *= data.d[12];
    n = data.d[13] += n;
    n *= data.d[6];
    n *= data.d[5];
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[9];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[8] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[8];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate29

inline float Evaluate30(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n *= data.d[6];
    n = data.d[7] += n;
    n = data.d[8] += n;
    n += data.d[9];
    n += data.d[10];
    n += data.d[11];
    n *= data.d[12];
    n = data.d[13] += n;
    n *= data.d[14];
    n *= data.d[5];
    n *= data.d[13];
    n *= data.d[15];
    n += data.d[16];
    n *= data.d[8];
    n = data.d[17] *= n;
    n = data.d[18] += n;
    n = data.d[17] += n;
    n += data.d[18];
    n = data.d[7] *= n;
    n += data.d[19];
    n *= data.d[17];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate30

inline float Evaluate31(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n = data.d[2] += n;
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[2] += n;
    n += data.d[8];
    n += data.d[9];
    n *= data.d[6];
    n *= data.d[10];
    n = data.d[11] += n;
    n *= data.d[12];
    n *= data.d[5];
    n *= data.d[11];
    n *= data.d[13];
    n += data.d[14];
    n *= data.d[2];
    n = data.d[15] *= n;
    n = data.d[16] += n;
    n = data.d[15] += n;
    n += data.d[16];
    n = data.d[7] *= n;
    n += data.d[17];
    n *= data.d[15];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[18];
    return isfinite(n) ? n : 0.0f;
} // Evaluate31
// END //

// OPTMIZE //
GPU_GLOBAL void Optimize0(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate0(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate0(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize0

GPU_GLOBAL void Optimize1(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate1(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate1(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize1

GPU_GLOBAL void Optimize2(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate2(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate2(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize2

GPU_GLOBAL void Optimize3(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate3(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate3(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize3

GPU_GLOBAL void Optimize4(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate4(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate4(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize4

GPU_GLOBAL void Optimize5(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate5(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate5(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize5

GPU_GLOBAL void Optimize6(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate6(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate6(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize6

GPU_GLOBAL void Optimize7(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate7(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate7(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize7

GPU_GLOBAL void Optimize8(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate8(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate8(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize8

GPU_GLOBAL void Optimize9(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate9(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate9(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize9

GPU_GLOBAL void Optimize10(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate10(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate10(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize10

GPU_GLOBAL void Optimize11(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate11(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate11(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize11

GPU_GLOBAL void Optimize12(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate12(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate12(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize12

GPU_GLOBAL void Optimize13(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate13(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate13(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize13

GPU_GLOBAL void Optimize14(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate14(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate14(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize14

GPU_GLOBAL void Optimize15(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate15(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate15(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize15

GPU_GLOBAL void Optimize16(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate16(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate16(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize16

GPU_GLOBAL void Optimize17(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate17(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate17(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize17

GPU_GLOBAL void Optimize18(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate18(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate18(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize18

GPU_GLOBAL void Optimize19(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate19(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate19(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize19

GPU_GLOBAL void Optimize20(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate20(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate20(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize20

GPU_GLOBAL void Optimize21(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate21(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate21(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize21

GPU_GLOBAL void Optimize22(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate22(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate22(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize22

GPU_GLOBAL void Optimize23(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate23(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate23(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize23

GPU_GLOBAL void Optimize24(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate24(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate24(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize24

GPU_GLOBAL void Optimize25(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate25(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate25(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize25

GPU_GLOBAL void Optimize26(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate26(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate26(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize26

GPU_GLOBAL void Optimize27(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate27(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate27(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize27

GPU_GLOBAL void Optimize28(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate28(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate28(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize28

GPU_GLOBAL void Optimize29(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate29(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate29(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize29

GPU_GLOBAL void Optimize30(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate30(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate30(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize30

GPU_GLOBAL void Optimize31(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate31(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate31(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (generation && (result >= oldResult)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        } else {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize31
// END //
