#define FIRESTARTER_GENERATE

#include "FireStarterSettings.h"
#include "FireStarterInstructions.h"

GPU_GLOBAL void FireGenerateCode(FireStarterInstruction* instructions, size_t numInstructions, FireStarterRegister* registers, size_t numRegisters, char* code, size_t* codeLength, unsigned int tabs)
{
    // Generate the evaluate function.
    bool optimize = registers && numRegisters;
    std::string indent;
    for (unsigned int i = 0; i < tabs; i++)
        indent += "    ";
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int op = instructions->Opcode(i);
        unsigned int reg = instructions->Register(i);
        switch (op) {
        case Operation_multiply:
            if (optimize && (i == m_registers[reg].instructionLast))
                code += Format(indent + "n *= data.d[%u];\r\n", reg);
            else
                code += Format(indent + "n = data.d[%u] *= n;\r\n", reg);
            break;
        case Operation_add:
            if (optimize && (i == m_registers[reg].instructionLast))
                code += Format(indent + "n += data.d[%u];\r\n", reg);
            else
                code += Format(indent + "n = data.d[%u] += n;\r\n", reg);
            break;
        case Operation_abs:
            code += Format(indent + "n = fabsf(n);\r\n");
            break;
        }
    }
} // FireGenerateCode

GPU_GLOBAL void FireGenerateSolution(FireStarterInstruction* instructions, size_t numInstructions, FireStarterRegister* registers, size_t numRegisters, FireStarterData* data, size_t numData, char* code, size_t* codeLength, unsigned int tabs)
{
    // Generate the evaluate function.
    bool optimize = registers && numRegisters;
    std::string indent;
    for (unsigned int i = 0; i < tabs; i++)
        indent += "    ";
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int op = instructions->Opcode(i);
        unsigned int reg = instructions->Register(i);
        switch (op) {
        case Operation_multiply:
            if (optimize && (i == m_registers[reg].instructionLast))
                code += Format(indent + "n *= data.d[%u];\r\n", reg);
            else
                code += Format(indent + "n = data.d[%u] *= n;\r\n", reg);
            break;
        case Operation_add:
            if (optimize && (i == m_registers[reg].instructionLast))
                code += Format(indent + "n += data.d[%u];\r\n", reg);
            else
                code += Format(indent + "n = data.d[%u] += n;\r\n", reg);
            break;
        case Operation_abs:
            code += Format(indent + "n = fabsf(n);\r\n");
            break;
        }
    }
} // FireGenerateSolution