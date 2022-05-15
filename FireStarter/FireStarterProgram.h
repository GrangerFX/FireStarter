#pragma once
#include "FireStarterInstructions.h"
#include "FireStarterUtil.h"
#include "FireStarterPacket.h"
#include <vector>
#include <string>

struct FireStarterRegister {
    unsigned int dataIndex;
    unsigned int registerIndex;
    unsigned int instructionFirst;
    unsigned int instructionLast;
}; // struct FireStarterRegister

class FireStarterProgram {
public:
    std::vector<FireStarterInstruction> m_instructions;
    std::vector<FireStarterRegister> m_registers;
    std::vector<FireStarterOpcode> m_opcodes;
    FireStarterProgramMode m_programMode;
    unsigned int m_programInstructions;
    unsigned int m_dataSize;
    unsigned int m_maxRegisters;

    FireStarterInstructions* Instructions(void)
    {
        return (FireStarterInstructions*)m_instructions.data();
    } // Instructions

    bool Packetize(FireStarterPacket& packet);
    void OptimizeRegisters(bool clean);
    void RandomProgram(unsigned int& seed);
    void RandomInstruction(unsigned int& seed);
    void LoadInstructions(FireStarterInstructions* instructions);
    void SaveInstructions(FireStarterInstructions* instructions);
    void GenerateCode(std::string& code, unsigned int tabs, bool optimize = true);
    void GenerateEvaluate(std::string& code, bool optimize = true);
    void GenerateSolution(std::string& code, FireStarterData& data, bool optimize = true);
    void SaveProgram(std::string& code, unsigned int species = 0xFFFFFFFF);
    float EmulateProgram(FireStarterData& data, float n);
    FireStarterProgram(FireStarterProgramMode programMode, unsigned int programInstructions);
}; // class FireStarterProgram
