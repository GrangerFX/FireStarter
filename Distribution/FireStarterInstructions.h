#pragma once
#include "FireStarterData.h"
#include "HashRandom.h"
#include "CUDADefines.h"

typedef enum {
    Operation_multiply = 0,
    Operation_add,
    Operation_abs
} FireStarterOpcode;

#if PROGRAM_MODE == PROGRAM_MULTIPLY_ADD
const FireStarterOpcode fireStarterOpcodes[FIRESTARTER_OPCODES] = {
    Operation_multiply,
    Operation_add,
};
#endif

#if PROGRAM_MODE == PROGRAM_MULTIPLY_ADD_ABS
const FireStarterOpcode fireStarterOpcodes[FIRESTARTER_OPCODES] = {
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

    inline FireStarterOpcode Opcode(unsigned int index) const
    {
        return (FireStarterOpcode)i[index].op;
    } // Opcode

    inline unsigned int Register(unsigned int index) const
    {
        return i[index].reg;
    } // Register

    inline void SetRegister(unsigned int index, unsigned int reg = 0)
    {
        i[index].reg = reg;
    } // SetOperation

    inline void SetOperation(unsigned int index, unsigned int op = 0, unsigned int reg = 0)
    {
        i[index].op = (FireStarterOpcode)op;
        i[index].reg = reg;
    } // SetOperation

    inline void SetRandom(unsigned int index, unsigned int& seed, unsigned int instructions, unsigned int opcodes)
    {
        unsigned int reg = RANDOMMOD(seed, instructions);
        unsigned int op = RANDOMMOD(seed, opcodes);
        SetOperation(index, fireStarterOpcodes[op], reg);
    } // SetRandom

    inline void Randomize(unsigned int& seed, unsigned int instructions, unsigned int opcodes)
    {
        for (unsigned int i = 0; i < instructions; i++)
            SetRandom(i, seed, instructions, opcodes);
    } // Randomize

    inline float Execute(FireStarterData data, float n, unsigned int instructions) const
    {
        for (unsigned int index = 0; index < instructions; index++) {
            const FireStarterInstruction instruction = i[index];
            instruction.Execute(data.d[instruction.reg], n);
        }
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