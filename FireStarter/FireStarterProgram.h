#pragma once
#include "FireStarterInstructions.h"
#include "FireStarterPacket.h"
#include "FireStarterUtil.h"
#include <vector>
#include <string>

class FireStarterProgram {
private:
    std::vector<unsigned char> m_instructions;
public:
    std::vector<FireStarterRegister> m_registers;
    FireStarterSettings m_settings;
    unsigned int m_dataSize = 0;
    unsigned int m_maxRegisters = 0;

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
    void GenerateEvaluateCode(std::string& code, unsigned int tabs);
    void GenerateSolutionCode(std::string& code, FireStarterData& data);
    void GenerateEvaluate(std::string& code);
    void GenerateSolution(std::string& code, FireStarterData& data);
    void SaveProgram(std::string& code);
    void InitProgram(const FireStarterSettings& settings);
    FireStarterProgram(void);
}; // class FireStarterProgram
