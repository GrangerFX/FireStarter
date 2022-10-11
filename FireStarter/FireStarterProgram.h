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
    FireStarterSettings m_settings;
    unsigned int m_uniqueRegisters = 0;

    inline FireStarterInstructions* Instructions(void)
    {
        return (FireStarterInstructions*)m_instructions.data();
    } // Instructions

    inline const FireStarterInstructions* Instructions(void) const
    {
        return (const FireStarterInstructions*)m_instructions.data();
    } // Instructions

    inline const FireStarterInstructions* Instructions(size_t* numInstructions) const
    {
        *numInstructions = m_settings.m_instructions;
        return (FireStarterInstructions*)m_instructions.data();
    } // Instructions

    inline size_t InstructionsSize(void) const
    {
        return Instructions()->InstructionsSize(m_settings.m_instructions);
    } // InstructionsSize

    bool Packetize(FireStarterPacket& packet);
    void OptimizeRegisters(void);
    unsigned int GenerateRegisters(std::vector<FireStarterRegister>& registers) const;
    void RandomProgram(unsigned long long seed);
    void RandomInstruction(unsigned long long seed);
    void LoadInstructions(FireStarterInstructions* instructions);
    void SaveInstructions(FireStarterInstructions* instructions);
    static void SettingsText(const FireStarterSettings& settings, std::string& code, const std::string& prefix = "");
    void SaveSettings(std::string& code);
    void SaveProgram(std::string& code);
    void InitProgram(const FireStarterSettings& settings);
    inline FireStarterProgram(void) {}
}; // class FireStarterProgram
