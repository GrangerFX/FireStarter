#pragma once
#include "FireStarterInstructions.h"
#include "FireStarterPacket.h"
#include "FireStarterUtil.h"
#include <vector>
#include <string>
#include <set>

#define EVOLVE_PROGRAM_NAME   "FireEvolver.cu"
#define OPTIMIZE_PROGRAM_NAME "FireOptimizer.cu"

typedef std::set<std::vector<unsigned char>> TestedInstructions;

class FireStarterProgram {
private:
    std::vector<unsigned char> m_evolvedInstructionsData;
    std::vector<unsigned char> m_optimizedInstructionsData;
    FireStarterInstructions* m_evolvedInstructions = nullptr;   // For debugging.
    FireStarterInstructions* m_optimizedInstructions = nullptr; // For debugging.

    inline void swap(const FireStarterProgram& other)
    {
        m_evolvedInstructionsData = other.m_evolvedInstructionsData;
        m_optimizedInstructionsData = other.m_optimizedInstructionsData;
        m_evolvedInstructions = EvolvedInstructions();
        m_optimizedInstructions = OptimizedInstructions();
        m_settings = other.m_settings;
        m_uniqueRegisters = other.m_uniqueRegisters;
    } // swap
public:
    FireStarterSettings m_settings;
    unsigned int m_uniqueRegisters = 0;

    inline FireStarterProgram& operator = (const FireStarterProgram& other)
    {
        swap(other);
        return *this;
    } // operator =

    inline const std::vector<unsigned char>& EvolvedInstructionsData(void) const
    {
        return m_evolvedInstructionsData;
    } // EvolvedInstructionsData

    inline const std::vector<unsigned char>& OptimizedInstructionsData(void) const
    {
        return m_optimizedInstructionsData;
    } // OptimizedInstructionsData

    inline FireStarterInstructions* EvolvedInstructions(void)
    {
        return (FireStarterInstructions*)m_evolvedInstructionsData.data();
    } // EvolvedInstructions

    inline const FireStarterInstructions* EvolvedInstructions(void) const
    {
        return (const FireStarterInstructions*)m_evolvedInstructionsData.data();
    } // EvolvedInstructions

    inline FireStarterInstructions* OptimizedInstructions(void)
    {
        return (FireStarterInstructions*)(m_optimizedInstructionsData.data());
    } // RawInstructions

    inline const FireStarterInstructions* OptimizedInstructions(void) const
    {
        return (const FireStarterInstructions*)(m_optimizedInstructionsData.data());
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
    void RandomProgram(unsigned long long& seed);
    void RandomInstruction(unsigned long long& seed, unsigned int index);
    void RandomInstruction(unsigned long long& seed);
    bool CopyInstructions(const FireStarterProgram& srcProgram);
    bool LoadInstructions(const FireStarterInstructions* instructions);
    static void SettingsText(const FireStarterSettings& settings, std::string& code, const std::string& prefix = "", const std::string& postfix = "");
    void SaveSettings(std::string& code) const;
    void SaveProgram(std::string& code) const;
    void InitProgram(const FireStarterSettings& settings);
    inline FireStarterProgram(const FireStarterProgram& other) { swap(other); }
    inline FireStarterProgram(void) {}
}; // class FireStarterProgram
