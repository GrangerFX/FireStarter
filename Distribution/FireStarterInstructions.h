#pragma once
#include "FireStarterData.h"
#include "HashRandom.h"
#include "CUDADefines.h"

typedef enum {
    Operation_multiply = 0,
    Operation_add,
    Operation_abs
} FireStarterOpcode;

#define PROGRAM_MULTIPLY_ADD 0
#define PROGRAM_MULTIPLY_ADD_ABS 1
#define PROGRAM_MODE PROGRAM_MULTIPLY_ADD

#if PROGRAM_MODE == PROGRAM_MULTIPLY_ADD
#define PROGRAM_OPCODES 2
const FireStarterOpcode fireStarterOpcodes[PROGRAM_OPCODES] = {
    Operation_multiply,
    Operation_add,
};
#endif

#if PROGRAM_MODE == PROGRAM_MULTIPLY_ADD_ABS
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
};
#endif

struct FireStarterInstruction {
    unsigned short op;
    unsigned short reg;

    inline void Execute(float& d, float& n) const
    {
        switch (op) {
            case Operation_multiply:
                n = d *= n;
                break;
            case Operation_add:
                n = d += n;
                break;
            case Operation_abs:
                n = fabsf(n);
                break;
        }
    } // Execute

    inline FireStarterInstruction(void)
    {
        op = 0;
        reg = 0;
    } // FireStarterInstruction
}; // struct FireStarterInstruction

typedef struct FireStarterInstructions {
    FireStarterInstruction i[FIRESTARTER_INSTRUCTIONS];
    
    static inline size_t InstructionsSize(unsigned int instructions)
    {
        return instructions * sizeof(FireStarterInstruction);
    } // InstructionsSize

    inline int Instruction(unsigned int index) const
    {
        return (i[index].op << 16) | i[index].reg;
    } // Instruction

    inline FireStarterOpcode Opcode(unsigned int index) const
    {
        return (FireStarterOpcode)i[index].op;
    } // Opcode

    inline unsigned int Register(unsigned int index) const
    {
        return i[index].reg;
    } // Register

    inline void SetInstruction(unsigned int index, unsigned int instruction = 0)
    {
        i[index].op = (instruction >> 16) % PROGRAM_OPCODES;
        i[index].reg = (unsigned short)instruction % FIRESTARTER_INSTRUCTIONS;
    } // Instruction

    inline void SetRegister(unsigned int index, unsigned int reg = 0)
    {
        i[index].reg = reg;
    } // SetOperation

    inline void SetOperation(unsigned int index, unsigned int op = 0, unsigned int reg = 0)
    {
        i[index].op = (FireStarterOpcode)op;
        i[index].reg = reg;
    } // SetOperation

    inline void SetRandom(unsigned int index, unsigned int& seed)
    {
        SetOperation(index, fireStarterOpcodes[RANDOMSEED(seed) % PROGRAM_OPCODES], RANDOMSEED(seed) % FIRESTARTER_INSTRUCTIONS);
    } // SetRandom

    inline void Randomize(unsigned int& seed)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            SetRandom(i, seed);
    } // Randomize

    inline float Execute(FireStarterData data, float n) const
    {
#if 1
        // About 25% faster but more restrictive.
        for (unsigned int index = 0; index < FIRESTARTER_INSTRUCTIONS; index++) {
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

typedef struct FireStarterEvolutions {
    size_t m_members;
    size_t m_instructions;
    size_t m_instructionsSize;
    size_t m_evolutionsSize;
    unsigned char m_memory[16];

    static inline size_t EvolutionsSize(unsigned int members, unsigned int instructions)
    {
        return (sizeof(FireStarterEvolutions) - 16) + members * FireStarterInstructions::InstructionsSize(instructions);
    } // EvolutionsSize

    inline FireStarterInstructions* Instructions(unsigned int member)
    {
        return (FireStarterInstructions*)(m_memory + member * m_instructionsSize);
    } // Instructions

    inline void InitEvolutions(unsigned int members, unsigned int instructions)
    {
        m_members = members;
        m_instructions = instructions;
        m_instructionsSize = FireStarterInstructions::InstructionsSize(instructions);
        m_evolutionsSize = EvolutionsSize(members, instructions);
    } // FireStarterResults
} FireStarterEvolutions;