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
inline void Operation0(FireStarterData &data, float &n)
{
    n *= data.d[0];
    data.d[0] = n;
} // Operation0

inline void Operation1(FireStarterData &data, float &n)
{
    n *= data.d[1];
    data.d[1] = n;
} // Operation1

inline void Operation2(FireStarterData &data, float &n)
{
    n *= data.d[2];
    data.d[2] = n;
} // Operation2

inline void Operation3(FireStarterData &data, float &n)
{
    n *= data.d[3];
    data.d[3] = n;
} // Operation3

inline void Operation4(FireStarterData &data, float &n)
{
    n *= data.d[4];
    data.d[4] = n;
} // Operation4

inline void Operation5(FireStarterData &data, float &n)
{
    n *= data.d[5];
    data.d[5] = n;
} // Operation5

inline void Operation6(FireStarterData &data, float &n)
{
    n *= data.d[6];
    data.d[6] = n;
} // Operation6

inline void Operation7(FireStarterData &data, float &n)
{
    n *= data.d[7];
    data.d[7] = n;
} // Operation7

inline void Operation8(FireStarterData &data, float &n)
{
    n *= data.d[8];
    data.d[8] = n;
} // Operation8

inline void Operation9(FireStarterData &data, float &n)
{
    n *= data.d[9];
    data.d[9] = n;
} // Operation9

inline void Operation10(FireStarterData &data, float &n)
{
    n *= data.d[10];
    data.d[10] = n;
} // Operation10

inline void Operation11(FireStarterData &data, float &n)
{
    n *= data.d[11];
    data.d[11] = n;
} // Operation11

inline void Operation12(FireStarterData &data, float &n)
{
    n *= data.d[12];
    data.d[12] = n;
} // Operation12

inline void Operation13(FireStarterData &data, float &n)
{
    n *= data.d[13];
    data.d[13] = n;
} // Operation13

inline void Operation14(FireStarterData &data, float &n)
{
    n *= data.d[14];
    data.d[14] = n;
} // Operation14

inline void Operation15(FireStarterData &data, float &n)
{
    n *= data.d[15];
    data.d[15] = n;
} // Operation15

inline void Operation16(FireStarterData &data, float &n)
{
    n *= data.d[16];
    data.d[16] = n;
} // Operation16

inline void Operation17(FireStarterData &data, float &n)
{
    n *= data.d[17];
    data.d[17] = n;
} // Operation17

inline void Operation18(FireStarterData &data, float &n)
{
    n *= data.d[18];
    data.d[18] = n;
} // Operation18

inline void Operation19(FireStarterData &data, float &n)
{
    n *= data.d[19];
    data.d[19] = n;
} // Operation19

inline void Operation20(FireStarterData &data, float &n)
{
    n *= data.d[20];
    data.d[20] = n;
} // Operation20

inline void Operation21(FireStarterData &data, float &n)
{
    n *= data.d[21];
    data.d[21] = n;
} // Operation21

inline void Operation22(FireStarterData &data, float &n)
{
    n *= data.d[22];
    data.d[22] = n;
} // Operation22

inline void Operation23(FireStarterData &data, float &n)
{
    n *= data.d[23];
    data.d[23] = n;
} // Operation23

inline void Operation24(FireStarterData &data, float &n)
{
    n *= data.d[24];
    data.d[24] = n;
} // Operation24

inline void Operation25(FireStarterData &data, float &n)
{
    n *= data.d[25];
    data.d[25] = n;
} // Operation25

inline void Operation26(FireStarterData &data, float &n)
{
    n *= data.d[26];
    data.d[26] = n;
} // Operation26

inline void Operation27(FireStarterData &data, float &n)
{
    n *= data.d[27];
    data.d[27] = n;
} // Operation27

inline void Operation28(FireStarterData &data, float &n)
{
    n *= data.d[28];
    data.d[28] = n;
} // Operation28

inline void Operation29(FireStarterData &data, float &n)
{
    n *= data.d[29];
    data.d[29] = n;
} // Operation29

inline void Operation30(FireStarterData &data, float &n)
{
    n *= data.d[30];
    data.d[30] = n;
} // Operation30

inline void Operation31(FireStarterData &data, float &n)
{
    n *= data.d[31];
    data.d[31] = n;
} // Operation31

inline void Operation32(FireStarterData &data, float &n)
{
    n += data.d[0];
    data.d[0] = n;
} // Operation32

inline void Operation33(FireStarterData &data, float &n)
{
    n += data.d[1];
    data.d[1] = n;
} // Operation33

inline void Operation34(FireStarterData &data, float &n)
{
    n += data.d[2];
    data.d[2] = n;
} // Operation34

inline void Operation35(FireStarterData &data, float &n)
{
    n += data.d[3];
    data.d[3] = n;
} // Operation35

inline void Operation36(FireStarterData &data, float &n)
{
    n += data.d[4];
    data.d[4] = n;
} // Operation36

inline void Operation37(FireStarterData &data, float &n)
{
    n += data.d[5];
    data.d[5] = n;
} // Operation37

inline void Operation38(FireStarterData &data, float &n)
{
    n += data.d[6];
    data.d[6] = n;
} // Operation38

inline void Operation39(FireStarterData &data, float &n)
{
    n += data.d[7];
    data.d[7] = n;
} // Operation39

inline void Operation40(FireStarterData &data, float &n)
{
    n += data.d[8];
    data.d[8] = n;
} // Operation40

inline void Operation41(FireStarterData &data, float &n)
{
    n += data.d[9];
    data.d[9] = n;
} // Operation41

inline void Operation42(FireStarterData &data, float &n)
{
    n += data.d[10];
    data.d[10] = n;
} // Operation42

inline void Operation43(FireStarterData &data, float &n)
{
    n += data.d[11];
    data.d[11] = n;
} // Operation43

inline void Operation44(FireStarterData &data, float &n)
{
    n += data.d[12];
    data.d[12] = n;
} // Operation44

inline void Operation45(FireStarterData &data, float &n)
{
    n += data.d[13];
    data.d[13] = n;
} // Operation45

inline void Operation46(FireStarterData &data, float &n)
{
    n += data.d[14];
    data.d[14] = n;
} // Operation46

inline void Operation47(FireStarterData &data, float &n)
{
    n += data.d[15];
    data.d[15] = n;
} // Operation47

inline void Operation48(FireStarterData &data, float &n)
{
    n += data.d[16];
    data.d[16] = n;
} // Operation48

inline void Operation49(FireStarterData &data, float &n)
{
    n += data.d[17];
    data.d[17] = n;
} // Operation49

inline void Operation50(FireStarterData &data, float &n)
{
    n += data.d[18];
    data.d[18] = n;
} // Operation50

inline void Operation51(FireStarterData &data, float &n)
{
    n += data.d[19];
    data.d[19] = n;
} // Operation51

inline void Operation52(FireStarterData &data, float &n)
{
    n += data.d[20];
    data.d[20] = n;
} // Operation52

inline void Operation53(FireStarterData &data, float &n)
{
    n += data.d[21];
    data.d[21] = n;
} // Operation53

inline void Operation54(FireStarterData &data, float &n)
{
    n += data.d[22];
    data.d[22] = n;
} // Operation54

inline void Operation55(FireStarterData &data, float &n)
{
    n += data.d[23];
    data.d[23] = n;
} // Operation55

inline void Operation56(FireStarterData &data, float &n)
{
    n += data.d[24];
    data.d[24] = n;
} // Operation56

inline void Operation57(FireStarterData &data, float &n)
{
    n += data.d[25];
    data.d[25] = n;
} // Operation57

inline void Operation58(FireStarterData &data, float &n)
{
    n += data.d[26];
    data.d[26] = n;
} // Operation58

inline void Operation59(FireStarterData &data, float &n)
{
    n += data.d[27];
    data.d[27] = n;
} // Operation59

inline void Operation60(FireStarterData &data, float &n)
{
    n += data.d[28];
    data.d[28] = n;
} // Operation60

inline void Operation61(FireStarterData &data, float &n)
{
    n += data.d[29];
    data.d[29] = n;
} // Operation61

inline void Operation62(FireStarterData &data, float &n)
{
    n += data.d[30];
    data.d[30] = n;
} // Operation62

inline void Operation63(FireStarterData &data, float &n)
{
    n += data.d[31];
    data.d[31] = n;
} // Operation63

inline void Operation64(FireStarterData &data, float &n)
{
    n += fabsf(data.d[0]);
    data.d[0] = n;
} // Operation64

inline void Operation65(FireStarterData &data, float &n)
{
    n += fabsf(data.d[1]);
    data.d[1] = n;
} // Operation65

inline void Operation66(FireStarterData &data, float &n)
{
    n += fabsf(data.d[2]);
    data.d[2] = n;
} // Operation66

inline void Operation67(FireStarterData &data, float &n)
{
    n += fabsf(data.d[3]);
    data.d[3] = n;
} // Operation67

inline void Operation68(FireStarterData &data, float &n)
{
    n += fabsf(data.d[4]);
    data.d[4] = n;
} // Operation68

inline void Operation69(FireStarterData &data, float &n)
{
    n += fabsf(data.d[5]);
    data.d[5] = n;
} // Operation69

inline void Operation70(FireStarterData &data, float &n)
{
    n += fabsf(data.d[6]);
    data.d[6] = n;
} // Operation70

inline void Operation71(FireStarterData &data, float &n)
{
    n += fabsf(data.d[7]);
    data.d[7] = n;
} // Operation71

inline void Operation72(FireStarterData &data, float &n)
{
    n += fabsf(data.d[8]);
    data.d[8] = n;
} // Operation72

inline void Operation73(FireStarterData &data, float &n)
{
    n += fabsf(data.d[9]);
    data.d[9] = n;
} // Operation73

inline void Operation74(FireStarterData &data, float &n)
{
    n += fabsf(data.d[10]);
    data.d[10] = n;
} // Operation74

inline void Operation75(FireStarterData &data, float &n)
{
    n += fabsf(data.d[11]);
    data.d[11] = n;
} // Operation75

inline void Operation76(FireStarterData &data, float &n)
{
    n += fabsf(data.d[12]);
    data.d[12] = n;
} // Operation76

inline void Operation77(FireStarterData &data, float &n)
{
    n += fabsf(data.d[13]);
    data.d[13] = n;
} // Operation77

inline void Operation78(FireStarterData &data, float &n)
{
    n += fabsf(data.d[14]);
    data.d[14] = n;
} // Operation78

inline void Operation79(FireStarterData &data, float &n)
{
    n += fabsf(data.d[15]);
    data.d[15] = n;
} // Operation79

inline void Operation80(FireStarterData &data, float &n)
{
    n += fabsf(data.d[16]);
    data.d[16] = n;
} // Operation80

inline void Operation81(FireStarterData &data, float &n)
{
    n += fabsf(data.d[17]);
    data.d[17] = n;
} // Operation81

inline void Operation82(FireStarterData &data, float &n)
{
    n += fabsf(data.d[18]);
    data.d[18] = n;
} // Operation82

inline void Operation83(FireStarterData &data, float &n)
{
    n += fabsf(data.d[19]);
    data.d[19] = n;
} // Operation83

inline void Operation84(FireStarterData &data, float &n)
{
    n += fabsf(data.d[20]);
    data.d[20] = n;
} // Operation84

inline void Operation85(FireStarterData &data, float &n)
{
    n += fabsf(data.d[21]);
    data.d[21] = n;
} // Operation85

inline void Operation86(FireStarterData &data, float &n)
{
    n += fabsf(data.d[22]);
    data.d[22] = n;
} // Operation86

inline void Operation87(FireStarterData &data, float &n)
{
    n += fabsf(data.d[23]);
    data.d[23] = n;
} // Operation87

inline void Operation88(FireStarterData &data, float &n)
{
    n += fabsf(data.d[24]);
    data.d[24] = n;
} // Operation88

inline void Operation89(FireStarterData &data, float &n)
{
    n += fabsf(data.d[25]);
    data.d[25] = n;
} // Operation89

inline void Operation90(FireStarterData &data, float &n)
{
    n += fabsf(data.d[26]);
    data.d[26] = n;
} // Operation90

inline void Operation91(FireStarterData &data, float &n)
{
    n += fabsf(data.d[27]);
    data.d[27] = n;
} // Operation91

inline void Operation92(FireStarterData &data, float &n)
{
    n += fabsf(data.d[28]);
    data.d[28] = n;
} // Operation92

inline void Operation93(FireStarterData &data, float &n)
{
    n += fabsf(data.d[29]);
    data.d[29] = n;
} // Operation93

inline void Operation94(FireStarterData &data, float &n)
{
    n += fabsf(data.d[30]);
    data.d[30] = n;
} // Operation94

inline void Operation95(FireStarterData &data, float &n)
{
    n += fabsf(data.d[31]);
    data.d[31] = n;
} // Operation95

__device__ FireStarterOperation operationFunctions[PROGRAM_OPCODES * PROGRAM_INSTRUCTIONS] = {
    Operation0,
    Operation1,
    Operation2,
    Operation3,
    Operation4,
    Operation5,
    Operation6,
    Operation7,
    Operation8,
    Operation9,
    Operation10,
    Operation11,
    Operation12,
    Operation13,
    Operation14,
    Operation15,
    Operation16,
    Operation17,
    Operation18,
    Operation19,
    Operation20,
    Operation21,
    Operation22,
    Operation23,
    Operation24,
    Operation25,
    Operation26,
    Operation27,
    Operation28,
    Operation29,
    Operation30,
    Operation31,
    Operation32,
    Operation33,
    Operation34,
    Operation35,
    Operation36,
    Operation37,
    Operation38,
    Operation39,
    Operation40,
    Operation41,
    Operation42,
    Operation43,
    Operation44,
    Operation45,
    Operation46,
    Operation47,
    Operation48,
    Operation49,
    Operation50,
    Operation51,
    Operation52,
    Operation53,
    Operation54,
    Operation55,
    Operation56,
    Operation57,
    Operation58,
    Operation59,
    Operation60,
    Operation61,
    Operation62,
    Operation63,
    Operation64,
    Operation65,
    Operation66,
    Operation67,
    Operation68,
    Operation69,
    Operation70,
    Operation71,
    Operation72,
    Operation73,
    Operation74,
    Operation75,
    Operation76,
    Operation77,
    Operation78,
    Operation79,
    Operation80,
    Operation81,
    Operation82,
    Operation83,
    Operation84,
    Operation85,
    Operation86,
    Operation87,
    Operation88,
    Operation89,
    Operation90,
    Operation91,
    Operation92,
    Operation93,
    Operation94,
    Operation95,
}; // operationFunctions

inline void TranslateInstructions(const FireStarterInstructions& instructions, FireStarterOperations &operations)
{
    operations.op[0] = operationFunctions[instructions.i[0].operation];
    operations.op[1] = operationFunctions[instructions.i[1].operation];
    operations.op[2] = operationFunctions[instructions.i[2].operation];
    operations.op[3] = operationFunctions[instructions.i[3].operation];
    operations.op[4] = operationFunctions[instructions.i[4].operation];
    operations.op[5] = operationFunctions[instructions.i[5].operation];
    operations.op[6] = operationFunctions[instructions.i[6].operation];
    operations.op[7] = operationFunctions[instructions.i[7].operation];
    operations.op[8] = operationFunctions[instructions.i[8].operation];
    operations.op[9] = operationFunctions[instructions.i[9].operation];
    operations.op[10] = operationFunctions[instructions.i[10].operation];
    operations.op[11] = operationFunctions[instructions.i[11].operation];
    operations.op[12] = operationFunctions[instructions.i[12].operation];
    operations.op[13] = operationFunctions[instructions.i[13].operation];
    operations.op[14] = operationFunctions[instructions.i[14].operation];
    operations.op[15] = operationFunctions[instructions.i[15].operation];
    operations.op[16] = operationFunctions[instructions.i[16].operation];
    operations.op[17] = operationFunctions[instructions.i[17].operation];
    operations.op[18] = operationFunctions[instructions.i[18].operation];
    operations.op[19] = operationFunctions[instructions.i[19].operation];
    operations.op[20] = operationFunctions[instructions.i[20].operation];
    operations.op[21] = operationFunctions[instructions.i[21].operation];
    operations.op[22] = operationFunctions[instructions.i[22].operation];
    operations.op[23] = operationFunctions[instructions.i[23].operation];
    operations.op[24] = operationFunctions[instructions.i[24].operation];
    operations.op[25] = operationFunctions[instructions.i[25].operation];
    operations.op[26] = operationFunctions[instructions.i[26].operation];
    operations.op[27] = operationFunctions[instructions.i[27].operation];
    operations.op[28] = operationFunctions[instructions.i[28].operation];
    operations.op[29] = operationFunctions[instructions.i[29].operation];
    operations.op[30] = operationFunctions[instructions.i[30].operation];
    operations.op[31] = operationFunctions[instructions.i[31].operation];
} // TranslateInstructions

inline float Program(const FireStarterOperations& operations, FireStarterData data, float n)
{
    operations.op[0](data, n);
    operations.op[1](data, n);
    operations.op[2](data, n);
    operations.op[3](data, n);
    operations.op[4](data, n);
    operations.op[5](data, n);
    operations.op[6](data, n);
    operations.op[7](data, n);
    operations.op[8](data, n);
    operations.op[9](data, n);
    operations.op[10](data, n);
    operations.op[11](data, n);
    operations.op[12](data, n);
    operations.op[13](data, n);
    operations.op[14](data, n);
    operations.op[15](data, n);
    operations.op[16](data, n);
    operations.op[17](data, n);
    operations.op[18](data, n);
    operations.op[19](data, n);
    operations.op[20](data, n);
    operations.op[21](data, n);
    operations.op[22](data, n);
    operations.op[23](data, n);
    operations.op[24](data, n);
    operations.op[25](data, n);
    operations.op[26](data, n);
    operations.op[27](data, n);
    operations.op[28](data, n);
    operations.op[29](data, n);
    operations.op[30](data, n);
    operations.op[31](data, n);
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
#if 1
        FireStarterOperations operations;
        TranslateInstructions(instructions, operations);
        y = (int)(center + Program(operations, bestResult.data, theta) * yScale);
#else
        y = (int)(center + Program(operations, bestResult.data, theta) * yScale);
#endif
#else
        y = (int)(center + Evaluate(bestResult.data, theta) * yScale);
#endif
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow