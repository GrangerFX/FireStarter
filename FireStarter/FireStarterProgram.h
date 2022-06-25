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
    unsigned int m_evolveInstruction = 0;

    FireStarterInstructions* Instructions(void)
    {
        return (FireStarterInstructions*)m_instructions.data();
    } // Instructions

    const FireStarterInstructions* Instructions(size_t* numInstructions) const
    {
        *numInstructions = m_settings.m_instructions;
        return (FireStarterInstructions*)m_instructions.data();
    } // Instructions

    const FireStarterRegisters* Registers(size_t* numRegisters) const
    {
        *numRegisters = m_registers.size();
        return (FireStarterRegisters*)m_registers.data();
    } // Registers

    bool Packetize(FireStarterPacket& packet);
    void OptimizeRegisters(bool clean);
    void RandomProgram(unsigned int& seed);
    void RandomInstruction(unsigned int& seed);
    void RandomEvolve(unsigned int& seed);
    void LoadInstructions(FireStarterInstructions* instructions);
    void SaveInstructions(FireStarterInstructions* instructions);
    void SaveSettings(std::string& code);
    void SaveProgram(std::string& code);
    void InitProgram(const FireStarterSettings& settings);
    FireStarterProgram(void);
}; // class FireStarterProgram
