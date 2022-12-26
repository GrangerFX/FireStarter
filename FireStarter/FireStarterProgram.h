#pragma once
#include "FireStarterInstructions.h"
#include "FireStarterPacket.h"
#include "FireStarterUtil.h"
#include <vector>
#include <string>

class FireStarterProgram {
private:
    std::vector<unsigned char> m_evolvedInstructions;
    std::vector<unsigned char> m_optimizedInstructions;
public:
    FireStarterSettings m_settings;
    unsigned int m_uniqueRegisters = 0;

    inline FireStarterInstructions* EvolvedInstructions(void)
    {
        return (FireStarterInstructions*)m_evolvedInstructions.data();
    } // EvolvedInstructions

    inline const FireStarterInstructions* EvolvedInstructions(void) const
    {
        return (const FireStarterInstructions*)m_evolvedInstructions.data();
    } // EvolvedInstructions

    inline FireStarterInstructions* OptimizedInstructions(void)
    {
        return (FireStarterInstructions*)(m_optimizedInstructions.data());
    } // RawInstructions

    inline const FireStarterInstructions* OptimizedInstructions(void) const
    {
        return (const FireStarterInstructions*)(m_optimizedInstructions.data());
    } // OptimizedInstructions

    inline size_t InstructionsSize(void) const
    {
        return FireStarterInstructions::InstructionsSize(m_settings.m_instructions);
    } // InstructionsSize

    inline FireStarterInstruction& EvolvedInstruction(unsigned int index)
    {
        return EvolvedInstructions()->Instruction(index);
    } // EvolvedInstruction

    inline const FireStarterInstruction& EvolvedInstruction(unsigned int index) const
    {
        return EvolvedInstructions()->Instruction(index);
    } // EvolvedInstruction

    inline FireStarterInstruction& OptimizedInstruction(unsigned int index)
    {
        return OptimizedInstructions()->Instruction(index);
    } // OptimizedInstruction

    inline const FireStarterInstruction& OptimizedInstruction(unsigned int index) const
    {
        return OptimizedInstructions()->Instruction(index);
    } // OptimizedInstruction

    bool Packetize(FireStarterPacket& packet);
    void OptimizeRegisters(void);
    unsigned int GenerateRegisters(std::vector<FireStarterRegister>& registers) const;
    void RandomProgram(unsigned long long seed);
    void RandomInstruction(unsigned long long seed);
    void RandomInstruction(unsigned long long seed, unsigned int index);
    void LoadInstructions(FireStarterInstructions* instructions);
    static void SettingsText(const FireStarterSettings& settings, std::string& code, const std::string& prefix = "");
    void SaveSettings(std::string& code) const;
    void SaveProgram(std::string& code) const;
    void InitProgram(const FireStarterSettings& settings);
    inline FireStarterProgram(void) {}
}; // class FireStarterProgram
