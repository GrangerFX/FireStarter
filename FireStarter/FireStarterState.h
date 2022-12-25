#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
private:
    std::vector<unsigned char> m_result;
public:
    FireStarterProgram m_program;
    size_t m_generation = 0;
    size_t m_index = 0;

    inline bool Initialized(void) const
    {
        return !m_result.empty();
    } // Initialized

    inline FireStarterSettings& Settings(void)
    {
        return m_program.m_settings;
    } // Settings

    inline const FireStarterSettings& Settings(void) const
    {
        return m_program.m_settings;
    } // Settings

    inline unsigned long long EvolveSeed(unsigned long long seed = 1337)
    {
        return RANDOM64(RANDOM64(m_program.m_settings.m_seed + m_generation) + m_index + seed);
    } // EvolveSeed

    inline unsigned long long OptimizeSeed(unsigned long long seed = 1337)
    {
        return RANDOM64(RANDOM64(m_program.m_settings.m_seed) + m_index + seed);
    } // OptimizeSeed

    inline void RandomProgram(unsigned long long seed = 0)
    {
        m_program.RandomProgram(EvolveSeed() + seed);
    } // RandomProgram

    inline void RandomInstruction(unsigned long long seed = 0)
    {
        m_program.RandomInstruction(EvolveSeed() + seed);
    } // RandomInstruction

    inline size_t ResultSize(void) const
    {
        return FireStarterResult::ResultSize(m_program.m_settings.m_registers, m_program.m_settings.m_variations);
    } // ResultSize

    inline FireStarterResult* Result(void)
    {
        return (FireStarterResult*)m_result.data();
    } // Result

    inline const FireStarterResult* Result(void) const
    {
        return (const FireStarterResult*)m_result.data();
    } // Result

    inline float MaxResult(void) const
    {
        return Initialized() ? Result()->maxResult : m_program.m_settings.m_startResult;
    } // Result

    bool Packetize(FireStarterPacket& packet);
    void SaveVariation(unsigned int variation, std::string& code) const;
    void SaveResult(std::string& code) const;
    void SaveState(std::string& code) const;
    float TestResult(void) const;
    void InitResult(void);
    void InitState(const FireStarterSettings& settings, size_t index = 0);
    FireStarterState(const FireStarterSettings& settings, size_t index = 0);
    inline FireStarterState(void) {}
}; // class FireStarterState;
