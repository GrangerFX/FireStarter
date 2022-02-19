#pragma once
#include "CUDADefines.h"
#include "HashRandom.h"

#define PROGRAM_INSTRUCTIONS 32
#define TARGET_VARIATIONS 1
#define EVOLVE_THREADS 32    // Number of threads per evolution member. Same as the number of threads in a warp.

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

    inline void Execute(float &d, float& n) const
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

    inline void Execute(FireStarterData& data, float &n) const
    {
        Execute(data.d[reg], n);
    } // Execute

    inline void Random(unsigned int index, unsigned int &seed)
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

typedef struct {
    FireStarterInstruction i[PROGRAM_INSTRUCTIONS];
} FireStarterInstructions;

typedef struct {
    FireStarterInstructions instructions;
    FireStarterData data[TARGET_VARIATIONS];
    float minResult[TARGET_VARIATIONS];
    float maxResult;
} FireStarterResult;

typedef struct {
    FireStarterResult results[1];
} FireStarterResults;
