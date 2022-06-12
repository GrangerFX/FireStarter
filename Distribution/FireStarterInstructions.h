#pragma once
#include "FireStarterData.h"
#include "HashRandom.h"
#include "CUDADefines.h"
#include "cnprintf.h"

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

struct FireStarterRegister {
    unsigned int dataIndex;
    unsigned int registerIndex;
    unsigned int instructionFirst;
    unsigned int instructionLast;
}; // struct FireStarterRegister

typedef struct FireStarterRegisters {
    FireStarterRegister r[FIRESTARTER_REGISTERS];

    inline const FireStarterRegister& Register(unsigned int index) const
    {
        return r[index];
    } // Register
} FireStarterRegisters; // FireStarterRegisters

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

    inline size_t GenerateEvaluate(char* buffer, size_t size, size_t &length, unsigned int tabs, bool instructionLast = false) const
    {
        // Insert leading tabs (four spaces).
        unsigned int tabSize = 0;
        while (tabs--)
            tabSize += anprintf(buffer, size, length, "    ");

        // Convert the instructions.
        switch (op) {
            case Operation_multiply:
                if (instructionLast)
                    return tabSize + anprintf(buffer, size, length, "n *= data.d[%u];\r\n", reg);
                else
                    return tabSize + anprintf(buffer, size, length, "n = data.d[%u] *= n;\r\n", reg);
                break;
            case Operation_add:
                if (instructionLast)
                    return tabSize + anprintf(buffer, size, length, "n += data.d[%u];\r\n", reg);
                else
                    return tabSize + anprintf(buffer, size, length, "n = data.d[%u] += n;\r\n", reg);
                break;
            case Operation_abs:
                return tabSize + anprintf(buffer, size, length, "n = fabsf(n);\r\n");
                break;
        }
        return 0;
    } // GenerateEvaluate

    inline size_t GenerateSolution(char* buffer, size_t size, size_t& length, unsigned int tabs, unsigned int r, float data, bool instructionFirst = false, bool instructionLast = false) const
    {
        // Insert leading tabs (four spaces).
        unsigned int tabSize = 0;
        while (tabs--)
            tabSize += anprintf(buffer, size, length, "    ");

        // Convert the instructions.
        switch (op) {
            case Operation_multiply:
                if (instructionFirst)
                    if (instructionLast)
                        return tabSize + anprintf(buffer, size, length, "n *= %.8ff;\r\n", data);
                    else
                        return tabSize + anprintf(buffer, size, length, "r%u = n *= %.8ff;\r\n", r, data);
                else
                    if (instructionLast)
                        return tabSize + anprintf(buffer, size, length, "n *= r%u;\r\n", r);
                    else
                        return tabSize + anprintf(buffer, size, length, "n = r%u *= n;\r\n", r);

            case Operation_add:
                if (instructionFirst)
                    if (instructionLast)
                        return tabSize + anprintf(buffer, size, length, "n += %.8ff;\r\n", data);
                    else
                        return tabSize + anprintf(buffer, size, length, "r%u = n += %.8ff;\r\n", r, data);
                else
                    if (instructionLast)
                        return tabSize + anprintf(buffer, size, length, "n += r%u;\r\n", r);
                    else
                        return tabSize + anprintf(buffer, size, length, "n = r%u += n;\r\n", r);

            case Operation_abs:
                return tabSize + anprintf(buffer, size, length, "n = fabsf(n);\r\n");
        }
        return 0;
    } // GenerateSolution

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

    inline const FireStarterInstruction& Instruction(unsigned int index)
    {
        return i[index];
    } // Instruction

    inline unsigned int Opcode(unsigned int index) const
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
        i[index].op = (unsigned short)op;
        i[index].reg = (unsigned short)reg;
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

inline void FireGenerateEvaluate(char* buffer, size_t size, size_t& length, unsigned int tabs, FireStarterInstructions* instructions, size_t numInstructions, FireStarterRegisters* registers, size_t numRegisters)
{
    // Generate the evaluate function.
    bool optimize = registers && numRegisters;
    for (unsigned int i = 0; i < numInstructions; i++) {
        unsigned int reg = instructions->Register(i);
        const FireStarterRegister& dataRegister = registers->Register(reg);
        instructions->Instruction(i).GenerateEvaluate(buffer, size, length, tabs, optimize && (i == dataRegister.instructionLast));
    }
} // FireGenerateEvaluate

inline void FireGenerateSolution(char* buffer, size_t size, size_t& length, unsigned int tabs, FireStarterInstructions* instructions, size_t numInstructions, FireStarterRegisters* registers, size_t numRegisters, FireStarterData* data)
{
    // Generate the evaluate function.
    bool optimize = registers && numRegisters;

    // Find the maximum code register.
    if (optimize) {
        size_t maxRegister = 0;
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = instructions->Register(i);
            const FireStarterRegister& dataRegister = registers->Register(reg);
            if ((i != dataRegister.instructionFirst) || (i != dataRegister.instructionLast)) {
                unsigned int r = dataRegister.registerIndex;
                if (r > maxRegister)
                    maxRegister = r;
            }
        }

        for (unsigned int i = 0; i < tabs; i++)
            anprintf(buffer, size, length, "    ");
        anprintf(buffer, size, length, "float r0");
        for (unsigned int i = 1; i <= maxRegister; i++)
            anprintf(buffer, size, length, ", r%u", i);
        anprintf(buffer, size, length, ";\r\n\r\n");

        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = instructions->Register(i);
            const FireStarterRegister& dataRegister = registers->Register(reg);
            unsigned int r = dataRegister.registerIndex;
            float f = data->d[reg];
            instructions->Instruction(i).GenerateSolution(buffer, size, length, tabs, r, f, optimize && (i == dataRegister.instructionFirst), optimize && (i == dataRegister.instructionLast));
        }
    } else
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = instructions->Register(i);
            float f = data->d[reg];
            instructions->Instruction(i).GenerateSolution(buffer, size, length, tabs, reg, f, false, false);
        }
} // FireGenerateSolution
