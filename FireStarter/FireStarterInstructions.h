#pragma once
#include "FireStarterData.h"

typedef enum {
    Operation_multiply = 0,
    Operation_add,
    Operation_add_abs,
} FireStarterOpcode;

typedef enum {
    Program_multiply_add,
    Program_multiply_add_abs,
} FireStarterProgramMode;

#if 1
#define PROGRAM_MODE Program_multiply_add_abs
#define PROGRAM_RANDOM_INSTRUCTIONS 1
#define PROGRAM_OPCODES 16
const FireStarterOpcode fireStarterOpcodes[PROGRAM_OPCODES] = {
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add_abs
};
#else
#define PROGRAM_MODE Program_multiply_add
#define PROGRAM_RANDOM_INSTRUCTIONS 0
#define PROGRAM_OPCODES 2
const FireStarterOpcode fireStarterOpcodes[PROGRAM_OPCODES] = {
    Operation_multiply,
    Operation_add
};
#endif

inline void FireStarterOperation0(float& data, float& n)
{
    n = data *= n;
} // FireStarterOperation0

inline void FireStarterOperation1(float& data, float& n)
{
    n = data += n;
} // FireStarterOperation1

inline void FireStarterOperation2(float& data, float& n)
{
    data = n += fabsf(data);
} // FireStarterOperation2

#if 0
inline void FireStarterOperation0(FireStarterData& data, unsigned int r, float& n)
{
    switch (r) {
        case 0:
            n = data.d[0] *= n;
            break;
        case 1:
            n = data.d[1] *= n;
            break;
        case 2:
            n = data.d[2] *= n;
            break;
        case 3:
            n = data.d[3] *= n;
            break;
        case 4:
            n = data.d[4] *= n;
            break;
        case 5:
            n = data.d[5] *= n;
            break;
        case 6:
            n = data.d[6] *= n;
            break;
        case 7:
            n = data.d[7] *= n;
            break;
        case 8:
            n = data.d[8] *= n;
            break;
        case 9:
            n = data.d[9] *= n;
            break;
        case 10:
            n = data.d[10] *= n;
            break;
        case 11:
            n = data.d[11] *= n;
            break;
        case 12:
            n = data.d[12] *= n;
            break;
        case 13:
            n = data.d[13] *= n;
            break;
        case 14:
            n = data.d[14] *= n;
            break;
        case 15:
            n = data.d[15] *= n;
            break;
        case 16:
            n = data.d[16] *= n;
            break;
        case 17:
            n = data.d[17] *= n;
            break;
        case 18:
            n = data.d[18] *= n;
            break;
        case 19:
            n = data.d[19] *= n;
            break;
        case 20:
            n = data.d[20] *= n;
            break;
        case 21:
            n = data.d[21] *= n;
            break;
        case 22:
            n = data.d[22] *= n;
            break;
        case 23:
            n = data.d[23] *= n;
            break;
        case 24:
            n = data.d[24] *= n;
            break;
        case 25:
            n = data.d[25] *= n;
            break;
        case 26:
            n = data.d[26] *= n;
            break;
        case 27:
            n = data.d[27] *= n;
            break;
        case 28:
            n = data.d[28] *= n;
            break;
        case 29:
            n = data.d[29] *= n;
            break;
        case 30:
            n = data.d[30] *= n;
            break;
        case 31:
            n = data.d[31] *= n;
            break;
    }
} // FireStarterOperation0

inline void FireStarterOperation1(FireStarterData& data, unsigned int r, float& n)
{
    switch (r) {
        case 0:
            n = data.d[0] += n;
            break;
        case 1:
            n = data.d[1] += n;
            break;
        case 2:
            n = data.d[2] += n;
            break;
        case 3:
            n = data.d[3] += n;
            break;
        case 4:
            n = data.d[4] += n;
            break;
        case 5:
            n = data.d[5] += n;
            break;
        case 6:
            n = data.d[6] += n;
            break;
        case 7:
            n = data.d[7] += n;
            break;
        case 8:
            n = data.d[8] += n;
            break;
        case 9:
            n = data.d[9] += n;
            break;
        case 10:
            n = data.d[10] += n;
            break;
        case 11:
            n = data.d[11] += n;
            break;
        case 12:
            n = data.d[12] += n;
            break;
        case 13:
            n = data.d[13] += n;
            break;
        case 14:
            n = data.d[14] += n;
            break;
        case 15:
            n = data.d[15] += n;
            break;
        case 16:
            n = data.d[16] += n;
            break;
        case 17:
            n = data.d[17] += n;
            break;
        case 18:
            n = data.d[18] += n;
            break;
        case 19:
            n = data.d[19] += n;
            break;
        case 20:
            n = data.d[20] += n;
            break;
        case 21:
            n = data.d[21] += n;
            break;
        case 22:
            n = data.d[22] += n;
            break;
        case 23:
            n = data.d[23] += n;
            break;
        case 24:
            n = data.d[24] += n;
            break;
        case 25:
            n = data.d[25] += n;
            break;
        case 26:
            n = data.d[26] += n;
            break;
        case 27:
            n = data.d[27] += n;
            break;
        case 28:
            n = data.d[28] += n;
            break;
        case 29:
            n = data.d[29] += n;
            break;
        case 30:
            n = data.d[30] += n;
            break;
        case 31:
            n = data.d[31] += n;
            break;
    }
} // FireStarterOperation1

inline void FireStarterOperation2(FireStarterData& data, unsigned int r, float& n)
{
    switch (r) {
        case 0:
            data.d[0] = n += fabsf(data.d[0]);
            break;
        case 1:
            data.d[1] = n += fabsf(data.d[1]);
            break;
        case 2:
            data.d[2] = n += fabsf(data.d[2]);
            break;
        case 3:
            data.d[3] = n += fabsf(data.d[3]);
            break;
        case 4:
            data.d[4] = n += fabsf(data.d[4]);
            break;
        case 5:
            data.d[5] = n += fabsf(data.d[5]);
            break;
        case 6:
            data.d[6] = n += fabsf(data.d[6]);
            break;
        case 7:
            data.d[7] = n += fabsf(data.d[7]);
            break;
        case 8:
            data.d[8] = n += fabsf(data.d[8]);
            break;
        case 9:
            data.d[9] = n += fabsf(data.d[9]);
            break;
        case 10:
            data.d[10] = n += fabsf(data.d[10]);
            break;
        case 11:
            data.d[11] = n += fabsf(data.d[11]);
            break;
        case 12:
            data.d[12] = n += fabsf(data.d[12]);
            break;
        case 13:
            data.d[13] = n += fabsf(data.d[13]);
            break;
        case 14:
            data.d[14] = n += fabsf(data.d[14]);
            break;
        case 15:
            data.d[15] = n += fabsf(data.d[15]);
            break;
        case 16:
            data.d[16] = n += fabsf(data.d[16]);
            break;
        case 17:
            data.d[17] = n += fabsf(data.d[17]);
            break;
        case 18:
            data.d[18] = n += fabsf(data.d[18]);
            break;
        case 19:
            data.d[19] = n += fabsf(data.d[19]);
            break;
        case 20:
            data.d[20] = n += fabsf(data.d[20]);
            break;
        case 21:
            data.d[21] = n += fabsf(data.d[21]);
            break;
        case 22:
            data.d[22] = n += fabsf(data.d[22]);
            break;
        case 23:
            data.d[23] = n += fabsf(data.d[23]);
            break;
        case 24:
            data.d[24] = n += fabsf(data.d[24]);
            break;
        case 25:
            data.d[25] = n += fabsf(data.d[25]);
            break;
        case 26:
            data.d[26] = n += fabsf(data.d[26]);
            break;
        case 27:
            data.d[27] = n += fabsf(data.d[27]);
            break;
        case 28:
            data.d[28] = n += fabsf(data.d[28]);
            break;
        case 29:
            data.d[29] = n += fabsf(data.d[29]);
            break;
        case 30:
            data.d[30] = n += fabsf(data.d[30]);
            break;
        case 31:
            data.d[31] = n += fabsf(data.d[31]);
            break;
    }
} // FireStarterOperation1
#endif

struct FireStarterInstruction {
    unsigned short op;
    unsigned short reg;

    inline FireStarterOpcode Opcode(void) const
    {
        return (FireStarterOpcode)op;
    } // Opcode

    inline unsigned int Register(void) const
    {
        return reg;
    } // Register

    inline void SetOperation(unsigned int o, unsigned int r)
    {
        op = o;
        reg = r;
    } // SetOperation

    inline void SetOpcode(FireStarterOpcode o)
    {
        op = o;
    } // SetOpcode

    inline void SetRegister(unsigned int r)
    {
        reg = r;
    } // SetRegister

    inline void Execute(float& d, float& n) const
    {
        switch (op) {
        case 0:
            FireStarterOperation0(d, n);
            break;
        case 1:
            FireStarterOperation1(d, n);
            break;
        case 2:
            FireStarterOperation2(d, n);
            break;
        }
    } // Execute

#if 0
    inline void Execute(FireStarterData& data, float& n) const
    {
        switch (op) {
        case 0:
            FireStarterOperation0(data, reg, n);
            break;
        case 1:
            FireStarterOperation1(data, reg, n);
            break;
        case 2:
            FireStarterOperation2(data, reg, n);
            break;
        }
    } // Execute
#endif

    inline void Random(unsigned int index, unsigned int& seed)
    {
#if PROGRAM_RANDOM_INSTRUCTIONS
        SetOperation(fireStarterOpcodes[RANDOMSEED(seed) % PROGRAM_OPCODES], RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS);
#else
        SetOperation(fireStarterOpcodes[index % PROGRAM_OPCODES], RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS);
#endif
    } // Random

    inline FireStarterInstruction(FireStarterOpcode o, unsigned int r = 0)
    {
        SetOperation(o, r);
    } // FireStarterInstruction

    inline FireStarterInstruction(unsigned int o = 0, unsigned int r = 0)
    {
        SetOperation(o, r);
    } // FireStarterInstruction
}; // struct FireStarterInstruction

// INSTRUCTIONS //
typedef struct FireStarterInstructions {
    FireStarterInstruction i[PROGRAM_INSTRUCTIONS];

    inline float Execute(FireStarterData data, float n) const
    {
#if 1
#if PROGRAM_RANDOM_INSTRUCTIONS
        for (unsigned int index = 0; index < PROGRAM_INSTRUCTIONS; index++) {
#if 0
            i[index].Execute(data, n);
#else
            const FireStarterInstruction instruction = i[index];
            switch (instruction.reg) {
            case 0:
                instruction.Execute(data.d[0], n);
                break;
            case 1:
                instruction.Execute(data.d[1], n);
                break;
            case 2:
                instruction.Execute(data.d[2], n);
                break;
            case 3:
                instruction.Execute(data.d[3], n);
                break;
            case 4:
                instruction.Execute(data.d[4], n);
                break;
            case 5:
                instruction.Execute(data.d[5], n);
                break;
            case 6:
                instruction.Execute(data.d[6], n);
                break;
            case 7:
                instruction.Execute(data.d[7], n);
                break;
            case 8:
                instruction.Execute(data.d[8], n);
                break;
            case 9:
                instruction.Execute(data.d[9], n);
                break;
            case 10:
                instruction.Execute(data.d[10], n);
                break;
            case 11:
                instruction.Execute(data.d[11], n);
                break;
            case 12:
                instruction.Execute(data.d[12], n);
                break;
            case 13:
                instruction.Execute(data.d[13], n);
                break;
            case 14:
                instruction.Execute(data.d[14], n);
                break;
            case 15:
                instruction.Execute(data.d[15], n);
                break;
            case 16:
                instruction.Execute(data.d[16], n);
                break;
            case 17:
                instruction.Execute(data.d[17], n);
                break;
            case 18:
                instruction.Execute(data.d[18], n);
                break;
            case 19:
                instruction.Execute(data.d[19], n);
                break;
            case 20:
                instruction.Execute(data.d[20], n);
                break;
            case 21:
                instruction.Execute(data.d[21], n);
                break;
            case 22:
                instruction.Execute(data.d[22], n);
                break;
            case 23:
                instruction.Execute(data.d[23], n);
                break;
            case 24:
                instruction.Execute(data.d[24], n);
                break;
            case 25:
                instruction.Execute(data.d[25], n);
                break;
            case 26:
                instruction.Execute(data.d[26], n);
                break;
            case 27:
                instruction.Execute(data.d[27], n);
                break;
            case 28:
                instruction.Execute(data.d[28], n);
                break;
            case 29:
                instruction.Execute(data.d[29], n);
                break;
            case 30:
                instruction.Execute(data.d[30], n);
                break;
            case 31:
                instruction.Execute(data.d[31], n);
                break;
            }
#endif
        }
#else
#endif
#else
        for (unsigned int index = 0; index < PROGRAM_INSTRUCTIONS; index++)
            i[index].Execute(data, n);
#endif
        return isnan(n) ? 0.0f : n;
    } // Execute
} FireStarterInstructions;
// END //