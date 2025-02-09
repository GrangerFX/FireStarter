#pragma once
#include "FireStarterResults.h"
#include "FireStarterCodeGenerate.h"
#include "FireStarterPacket.h"
#include "FireStarterUtil.h"
#include <vector>
#include <string>
#include <set>

typedef std::set<std::vector<unsigned char>> TestedInstructions;

class FireStarterProgram {
private:
    std::vector<unsigned char> m_evolvedCodeData;
    std::vector<unsigned char> m_optimizedCodeData;
    FireStarterCodeGenerate* m_evolvedCode = nullptr;   // For debugging.
    FireStarterCodeGenerate* m_optimizedCode = nullptr; // For debugging.

    inline void swap(const FireStarterProgram& other)
    {
        m_evolvedCodeData = other.m_evolvedCodeData;
        m_optimizedCodeData = other.m_optimizedCodeData;
        m_evolvedCode = EvolvedCode();
        m_optimizedCode = OptimizedCode();
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

    inline const std::vector<unsigned char>& EvolvedCodeData(void) const
    {
        return m_evolvedCodeData;
    } // EvolvedInstructionsData

    inline const std::vector<unsigned char>& OptimizedCodeData(void) const
    {
        return m_optimizedCodeData;
    } // OptimizedInstructionsData

    inline FireStarterCodeGenerate* EvolvedCode(void)
    {
        return (FireStarterCodeGenerate*)m_evolvedCodeData.data();
    } // EvolvedCode

    inline const FireStarterCodeGenerate* EvolvedCode(void) const
    {
        return (const FireStarterCodeGenerate*)m_evolvedCodeData.data();
    } // EvolvedCode

    inline FireStarterCodeGenerate* OptimizedCode(void)
    {
        return (FireStarterCodeGenerate*)(m_optimizedCodeData.data());
    } // OptimizedCode

    inline const FireStarterCodeGenerate* OptimizedCode(void) const
    {
        return (const FireStarterCodeGenerate*)(m_optimizedCodeData.data());
    } // OptimizedCode

    inline size_t CodeSize(void) const
    {
        return FireStarterCode::CodeSize(m_settings.m_instructions);
    } // CodeSize

    inline FireStarterCodeInstruction& EvolvedInstruction(unsigned int index)
    {
        return EvolvedCode()->Instruction(index);
    } // EvolvedInstruction

    inline const FireStarterCodeInstruction& EvolvedInstruction(unsigned int index) const
    {
        return EvolvedCode()->Instruction(index);
    } // EvolvedInstruction

    inline FireStarterCodeInstruction& OptimizedInstruction(unsigned int index)
    {
        return OptimizedCode()->Instruction(index);
    } // OptimizedInstruction

    inline const FireStarterCodeInstruction& OptimizedInstruction(unsigned int index) const
    {
        return OptimizedCode()->Instruction(index);
    } // OptimizedInstruction

    bool Packetize(FireStarterPacket& packet);
    void OptimizeRegisters(void);
    unsigned int GenerateRegisters(std::vector<FireStarterRegisterInfo>& registers) const;
    void RandomProgram(unsigned long long& seed);
    void RandomInstruction(unsigned long long& seed, unsigned int index);
    void RandomInstruction(unsigned long long& seed);
    bool CopyCode(const FireStarterProgram& srcProgram);
    bool LoadCode(const FireStarterCode* code);
    static void SettingsText(const FireStarterSettings& settings, std::string& code, const std::string& prefix = "", const std::string& postfix = "");
    void SaveSettings(std::string& code) const;
    void SaveProgram(std::string& code) const;
    void InitProgram(const FireStarterSettings& settings);
    inline FireStarterProgram(const FireStarterSettings& settings) { InitProgram(settings);  }
    inline FireStarterProgram(const FireStarterProgram& other) { swap(other); }
    inline FireStarterProgram(void) {}
}; // class FireStarterProgram
