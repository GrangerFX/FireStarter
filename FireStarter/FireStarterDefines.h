#pragma once
#include "CUDADefines.h"

#define PROGRAM_INSTRUCTIONS 32

#define SAMPLE_MIN 0.0f
#define SAMPLE_MAX (2.0f * 3.14159265f)
#define SAMPLE_ITERATIONS 15
#define EVOLUTION_FACTOR 0.1f
#define EVOLUTION_SAMPLES 16
#define START_RESULT 10.0f

typedef enum {
    Operation_multiply = 0,
    Operation_add,
    Operation_add_abs,
    PROGRAM_OPCODES
} FireStarterOpcode;

typedef struct {
    unsigned int count;
    FireStarterOpcode i[1];
} FireStarterOpcodes;

typedef struct {
    float d[PROGRAM_INSTRUCTIONS];
} FireStarterData;

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
//  n += fabsf(data);
//  n = fabsf(data += n);
} // FireStarterOperation2

typedef void (*FireStarterOperation) (float&, float&);
const FireStarterOperation fireStarterOperations[PROGRAM_OPCODES * PROGRAM_INSTRUCTIONS] = { FireStarterOperation0, FireStarterOperation1, FireStarterOperation2 };

struct FireStarterInstruction {
    unsigned int operation;

    inline unsigned int Operation(void) const
    {
        return operation;
    } // operation

    inline FireStarterOpcode Opcode(void) const
    {
        return (FireStarterOpcode)(operation >> 16);
    } // Opcode

    inline unsigned int Register(void) const
    {
        return operation & 0xFFFF;
    } // Register

    inline void SetOperation(unsigned int op)
    {
        operation = op;
    } // SetOperation

    inline void SetOpcode(FireStarterOpcode opcode)
    {
        operation = (opcode << 16) | (operation & 0xFFFF);
    } // SetOpcode

    inline void SetRegister(unsigned int reg)
    {
        operation = (operation & 0xFFFF0000) | reg;
    } // SetRegister

    inline void Execute(FireStarterData& data, float &n) const
    {
        fireStarterOperations[Opcode()](data.d[Register()], n);
    } // Execute

    inline FireStarterInstruction(FireStarterOpcode opcode, unsigned int reg)
    {
        SetOpcode(opcode);
        SetRegister(reg);
     } // FireStarterInstruction

    inline FireStarterInstruction(unsigned int opcode = 0)
    {
        operation = 0;
        SetOpcode((FireStarterOpcode)opcode);
    } // FireStarterInstruction
}; // union FireStarterInstruction

typedef struct {
    FireStarterInstruction i[PROGRAM_INSTRUCTIONS];
} FireStarterInstructions;

typedef struct {
    FireStarterData data;
    float result;
} FireStarterResult;

typedef struct {
    FireStarterResult results[1];
} FireStarterResults;
