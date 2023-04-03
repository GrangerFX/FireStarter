#pragma once
#include "FireStarterResults.h"
#include "HashRandom.h"
#include "CUDADefines.h"
#include "cnprintf.h"

struct FireStarterRegister {
    unsigned int registerIndex;
    unsigned int instructionFirst;
    unsigned int instructionLast;
}; // struct FireStarterRegister

typedef struct FireStarterRegisters {
    FireStarterRegister r[FIRESTARTER_REGISTERS];

    static inline size_t RegistersSize(size_t registers)
    {
        return sizeof(FireStarterRegister) * registers;
    } // FireStarterRegistersSize

    inline const FireStarterRegister& Register(unsigned int index) const
    {
        return r[index];
    } // Register
} FireStarterRegisters; // FireStarterRegisters

struct FireStarterInstruction {
    unsigned short op;
    unsigned short reg;

    inline void Execute(FireStarterData& data, float& n) const
    {
#if FIRESTARTER_PROGRAM_MODE == FIRESTARTER_MULTIPLY_ADD
        if (op == Operation_multiply)
            n = data.d[reg] *= n;
        else
            n = data.d[reg] += n;
#else
        switch (op) {
            case Operation_multiply:
                n = data.d[reg] *= n;
                break;

            case Operation_add:
                n = data.d[reg] += n;
                break;

            case Operation_abs:
                n = fabsf(n);
                break;
        }
#endif
    } // Execute

    inline void Execute(FireStarterData* data, float& n) const
    {
        Execute(*data, n);
    } // Execute

    inline void GenerateTabs(char* buffer, size_t size, size_t& length, unsigned int tabs) const
    {
        // Insert leading tabs (four spaces).
        while (tabs--)
            anprintf(buffer, size, length, "    ");
    } // GenerateTabs

    inline void GenerateEvaluate(char* buffer, size_t size, size_t &length, unsigned int tabs, bool instructionLast = false) const
    {
        // Insert leading tabs (four spaces).
        GenerateTabs(buffer, size, length, tabs);

        // Convert the instructions.
        switch (op) {
            case Operation_multiply:
                if (instructionLast)
                    anprintf(buffer, size, length, "n *= data.d[%u];\r\n", reg);
                else
                    anprintf(buffer, size, length, "n = data.d[%u] *= n;\r\n", reg);
                break;

            case Operation_add:
                if (instructionLast)
                    anprintf(buffer, size, length, "n += data.d[%u];\r\n", reg);
                else
                    anprintf(buffer, size, length, "n = data.d[%u] += n;\r\n", reg);
                break;

            case Operation_abs:
                anprintf(buffer, size, length, "n = fabsf(n);\r\n");
                break;
        }
    } // GenerateEvaluate

    inline void GenerateSolution(char* buffer, size_t size, size_t& length, unsigned int tabs, unsigned int r, float data, bool instructionFirst, bool instructionLast) const
    {
        // Insert leading tabs (four spaces).
        GenerateTabs(buffer, size, length, tabs);

        // Convert the instructions.
        switch (op) {
            case Operation_multiply:
                if (instructionFirst)
                    if (instructionLast)
                        anprintf(buffer, size, length, "n *= %.8ff;\r\n", data);
                    else
                        anprintf(buffer, size, length, "r%u = n *= %.8ff;\r\n", r, data);
                else
                    if (instructionLast)
                        anprintf(buffer, size, length, "n *= r%u;\r\n", r);
                    else
                        anprintf(buffer, size, length, "n = r%u *= n;\r\n", r);
                break;

            case Operation_add:
                if (instructionFirst)
                    if (instructionLast)
                        anprintf(buffer, size, length, "n += %.8ff;\r\n", data);
                    else
                        anprintf(buffer, size, length, "r%u = n += %.8ff;\r\n", r, data);
                else
                    if (instructionLast)
                        anprintf(buffer, size, length, "n += r%u;\r\n", r);
                    else
                        anprintf(buffer, size, length, "n = r%u += n;\r\n", r);
                break;

            case Operation_abs:
                anprintf(buffer, size, length, "n = fabsf(n);\r\n");
                break;
        }
    } // GenerateSolution

    inline FireStarterInstruction(void)
    {
        op = 0;
        reg = 0;
    } // FireStarterInstruction
}; // struct FireStarterInstruction

typedef struct FireStarterInstructions {
    FireStarterInstruction i[FIRESTARTER_INSTRUCTIONS];

    static inline size_t InstructionsSize(void)
    {
        return FIRESTARTER_INSTRUCTIONS * sizeof(FireStarterInstruction);
    } // InstructionsSize

    static inline size_t InstructionsSize(size_t instructions)
    {
        return instructions * sizeof(FireStarterInstruction);
    } // InstructionsSize

    inline FireStarterInstruction& Instruction(unsigned int index)
    {
        return i[index];
    } // Instruction

    inline const FireStarterInstruction& Instruction(unsigned int index) const
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
        i[index].reg = (unsigned short)reg;
    } // SetOperation

    inline void SetOperation(unsigned int index, unsigned int op = 0, unsigned int reg = 0)
    {
        i[index].op = (unsigned short)op;
        i[index].reg = (unsigned short)reg;
    } // SetOperation

    // Current attempt
    inline void SetRandomReg(unsigned int index, unsigned long long& seed)
    {
        i[index].reg = RANDOMMOD(seed, FIRESTARTER_REGISTERS);
    } // SetRandomReg

    inline void SetRandomReg(unsigned int index, unsigned long long& seed, unsigned int registers)
    {
        i[index].reg = RANDOMMOD(seed, registers);
    } // SetRandomReg

    inline void SetRandomOp(unsigned int index, unsigned long long& seed)
    {
        i[index].op = fireStarterOpcodes[RANDOMMOD(seed, FIRESTARTER_OPCODES)];
    } // SetRandomOp

    inline void SetRandomOp(unsigned int index, unsigned long long& seed, unsigned int opcodes)
    {
        i[index].op = fireStarterOpcodes[RANDOMMOD(seed, opcodes)];
    } // SetRandomOp

    inline void SetRandom(unsigned int index, unsigned long long& seed, unsigned int registers, unsigned int opcodes)
    {
        i[index].op = fireStarterOpcodes[RANDOMMOD(seed, opcodes)];
        i[index].reg = RANDOMMOD(seed, registers);
    } // SetRandom

    inline void SetRandom(unsigned int index, unsigned long long& seed)
    {
        i[index].op = fireStarterOpcodes[RANDOMMOD(seed, FIRESTARTER_OPCODES)];
        i[index].reg = RANDOMMOD(seed, FIRESTARTER_REGISTERS);
    } // SetRandom

    inline void SetRandom(unsigned long long& seed)
    {
        unsigned int index = RANDOMMOD(seed, FIRESTARTER_INSTRUCTIONS);
        SetRandom(index, seed);
    } // SetRandom

    inline void Randomize(unsigned long long& seed)
    {
        for (unsigned int index = 0; index < FIRESTARTER_INSTRUCTIONS; index++) {
            i[index].op = fireStarterPattern[RANDOMMOD(seed, FIRESTARTER_PATTERN_OPCODES)];
            i[index].reg = RANDOMMOD(seed, FIRESTARTER_REGISTERS);
        }
    } // Randomize

    inline void Randomize(unsigned long long& seed, unsigned int instructions, unsigned int registers, unsigned int opcodes)
    {
        for (unsigned int index = 0; index < instructions; index++) {
            i[index].op = fireStarterPattern[RANDOMMOD(seed, opcodes)];
            i[index].reg = RANDOMMOD(seed, registers);
        }
    } // Randomize

    inline float Execute(FireStarterData data, float n) const
    {
        for (unsigned int index = 0; index < FIRESTARTER_INSTRUCTIONS; index++) // Constant loop is unrolled by compiler.
            i[index].Execute(data, n);
        return isfinite(n) ? n : 0.0f;
    } // Execute

    inline float Execute(FireStarterData* data, unsigned int instructions, float n) const
    {
        size_t dataSize = FireStarterData::DataSize(instructions);
        for (unsigned int index = 0; index < instructions; index++)
            Instruction(index).Execute(data, n);
        return isfinite(n) ? n : 0.0f;
    } // Execute

    inline void InitInstructions(unsigned int instructions)
    {
        for (unsigned int index = 0; index < instructions; index++)
            SetOperation(index);
    } // InitInstructions
} FireStarterInstructions;

inline void GenerateDataCode(char* buffer, size_t size, size_t& length, unsigned int tabs, size_t numRegisters, const FireStarterData* data)
{
    if (!numRegisters)
        numRegisters = FIRESTARTER_REGISTERS;
    for (unsigned int i = 0; i < tabs; i++)
        anprintf(buffer, size, length, "    ");
    anprintf(buffer, size, length, "FireStarterData data = { %.8ff", numRegisters, data->d[0]);
    for (unsigned int i = 1; i < numRegisters; i++)
        anprintf(buffer, size, length, ", %.8ff", data->d[i]);
    anprintf(buffer, size, length, "};\r\n");
} // GenerateDataCode

inline void GenerateEvaluateCode(char* buffer, size_t size, size_t& length, unsigned int tabs, const FireStarterInstructions* instructions, size_t numInstructions, const FireStarterRegisters* registers, size_t numRegisters)
{
    // Generate the evaluate function code.
    bool optimize = registers && numRegisters;
    for (unsigned int i = 0; i < numInstructions; i++) {
        unsigned int reg = instructions->Register(i);
        const FireStarterRegister& dataRegister = registers->Register(reg);
        instructions->Instruction(i).GenerateEvaluate(buffer, size, length, tabs, optimize && (i == dataRegister.instructionLast));
    }
} // GenerateEvaluateCode

inline void GenerateSolutionCode(char* buffer, size_t size, size_t& length, unsigned int tabs, const FireStarterInstructions* instructions, size_t numInstructions, const FireStarterRegisters* registers, size_t numRegisters, const FireStarterData* data)
{
    // Find the maximum code register.
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

    // Generate the solution function code.
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
        instructions->Instruction(i).GenerateSolution(buffer, size, length, tabs, r, f, i == dataRegister.instructionFirst, i == dataRegister.instructionLast);
    }
} // GenerateSolutionCode
