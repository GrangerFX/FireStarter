#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
private:
    std::vector<unsigned char> m_result;
public:
    FireStarterProgram m_program;
    unsigned int m_generation = 0;
    unsigned int m_index = 0;

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

    inline unsigned long long StateSeed(unsigned long long seed = 1337)
    {
        return RANDOM64(RANDOM64(m_program.m_settings.m_seed + m_generation) + seed);
    } // StateSeed

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
    void InitState(const FireStarterSettings& settings, unsigned int index = 0);
    FireStarterState(const FireStarterSettings& settings, unsigned int index = 0);
    inline FireStarterState(void) {}
}; // class FireStarterState;
