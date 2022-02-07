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

struct FireStarterInstruction {
    unsigned int operation;

    inline FireStarterOpcode Opcode(void)
    {
        return (FireStarterOpcode)(operation / PROGRAM_INSTRUCTIONS);
    } // Opcode

    inline unsigned int Register(void)
    {
        return operation % PROGRAM_INSTRUCTIONS;
    } // Register

    inline void SetOpcode(FireStarterOpcode opcode)
    {
        operation = (opcode * PROGRAM_INSTRUCTIONS) + Register();
    } // SetOpcode

    inline void SetRegister(unsigned int reg)
    {
        operation = Opcode() * PROGRAM_INSTRUCTIONS + reg;
    } // SetRegister

    inline FireStarterInstruction(FireStarterOpcode opcode, unsigned int reg)
    {
        operation = (unsigned int)opcode * PROGRAM_INSTRUCTIONS + reg;
     } // FireStarterInstruction

    inline FireStarterInstruction(unsigned int opcode = 0) : operation(opcode * PROGRAM_INSTRUCTIONS)
    {
    } // FireStarterInstruction
}; // union FireStarterInstruction

typedef struct FireStarterData {
    float d[PROGRAM_INSTRUCTIONS];
} FireStarterData;

typedef struct FireStarterInstructions {
    FireStarterInstruction i[PROGRAM_INSTRUCTIONS];
} FireStarterInstructions;

typedef struct FireStarterOpcodes {
    unsigned int count;
    FireStarterOpcode i[1];
} FireStarterOpcodes;

typedef struct {
    FireStarterData data;
    float result;
} FireStarterResult;

typedef struct {
    FireStarterResult results[1];
} FireStarterResults;
