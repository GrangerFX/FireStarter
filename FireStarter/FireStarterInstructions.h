#pragma once
#include "FireStarterData.h"

typedef enum {
    Operation_multiply = 0,
    Operation_add,
    Operation_add_abs,
    Operation_abs,
} FireStarterOpcode;

typedef enum {
    Program_multiply_add,
    Program_multiply_add_abs,
} FireStarterProgramMode;

#if 1
#define PROGRAM_MODE Program_multiply_add_abs
#define PROGRAM_RANDOM_INSTRUCTIONS 1
#define PROGRAM_OPCODES 13
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
    Operation_abs
//  Operation_add_abs
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

inline void FireStarterOperationMultiply(float& data, float& n)
{
    n *= data;
    data = n;
} // FireStarterOperationMultiply

inline void FireStarterOperationAdd(float& data, float& n)
{
    n += data;
    data = n;
} // FireStarterOperationAdd

inline void FireStarterOperationAddAbs(float& data, float& n)
{
    n += fabsf(data);
    data = n;
} // FireStarterOperationAddAbs

inline void FireStarterOperationAbs(float& data, float& n)
{
    n = fabsf(n);
} // FireStarterOperationAbs

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

    inline void SetOperation(unsigned int o)
    {
        op = (unsigned short)o;
        reg = o >> 16;
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
            case Operation_multiply:
                FireStarterOperationMultiply(d, n);
                break;
            case Operation_add:
                FireStarterOperationAdd(d, n);
                break;
            case Operation_add_abs:
                FireStarterOperationAddAbs(d, n);
                break;
            case Operation_abs:
                FireStarterOperationAbs(d, n);
                break;
        }
    } // Execute

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
        // About 25% faster but more restrictive.
        for (unsigned int index = 0; index < PROGRAM_INSTRUCTIONS; index++) {
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
        }
#else
        // More general but 25% slower.
        for (unsigned int index = 0; index < PROGRAM_INSTRUCTIONS; index++) {
            const FireStarterInstruction instruction = i[index];
            instruction.Execute(data.d[instruction.reg], n);
        }
#endif
        return isfinite(n) ? n : 0.0f;
    } // Execute
} FireStarterInstructions;
// END //