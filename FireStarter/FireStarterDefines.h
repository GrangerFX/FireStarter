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
} // FireStarterOperation2

typedef void (*FireStarterOperation) (float&, float&);
const FireStarterOperation fireStarterOperations[PROGRAM_OPCODES * PROGRAM_INSTRUCTIONS] = { FireStarterOperation0, FireStarterOperation1, FireStarterOperation2 };

struct FireStarterInstruction {
    unsigned short op;
    unsigned short reg;

    inline unsigned int Operation(void) const
    {
        return op * PROGRAM_INSTRUCTIONS + reg;
    } // operation

    inline FireStarterOpcode Opcode(void) const
    {
        return (FireStarterOpcode)op;
    } // Opcode

    inline unsigned int Register(void) const
    {
        return reg;
    } // Register

    inline void SetOperation(unsigned int operation)
    {
        op = operation / PROGRAM_INSTRUCTIONS;
        reg = operation % PROGRAM_INSTRUCTIONS;
    } // SetOperation

    inline void SetOpcode(FireStarterOpcode o)
    {
        op = o;
    } // SetOpcode

    inline void SetRegister(unsigned int r)
    {
        reg = r;
    } // SetRegister

    inline void Execute(FireStarterData& data, float &n) const
    {
        fireStarterOperations[op](data.d[reg], n);
    } // Execute

    inline FireStarterInstruction(FireStarterOpcode o, unsigned int r = 0)
    {
        op = o;
        reg = r;
     } // FireStarterInstruction

    inline FireStarterInstruction(unsigned int o = 0, unsigned int r = 0)
    {
        op = o;
        reg = r;
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
