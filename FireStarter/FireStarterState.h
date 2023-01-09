#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
private:
    std::vector<unsigned char> m_resultsData;
    FireStarterResults* m_results = nullptr;    // For debugging.
public:
    FireStarterProgram m_program;
    size_t m_generation = 0;
    size_t m_index = 0;
    size_t m_test = 0;
    float m_maxResult;

    inline bool Initialized(void) const
    {
        return !m_resultsData.empty();
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

    inline size_t ResultsSize(void) const
    {
        return FireStarterResults::ResultsSize(m_program.m_settings.m_registers, m_program.m_settings.m_variations);
    } // ResultSize

    inline const FireStarterResults* Results(void) const
    {
        return m_resultsData.empty() ? nullptr : (const FireStarterResults*)m_resultsData.data();
    } // Results

    inline FireStarterResults* Results(void)
    {
        return m_resultsData.empty() ? nullptr : (FireStarterResults*)m_resultsData.data();
    } // Result

    inline size_t ResultSize(void) const
    {
        return FireStarterResult::ResultSize(m_program.m_settings.m_registers);
    } // ResultSize

    inline FireStarterResult* Result(size_t variation)
    {
        return m_resultsData.empty() ? nullptr : Results()->Result(variation);
    } // Result

    inline const FireStarterResult* Result(size_t variation) const
    {
        return m_resultsData.empty() ? nullptr : Results()->Result(variation);
    } // Result

    bool Packetize(FireStarterPacket& packet);
    void SaveVariation(unsigned int variation, std::string& code) const;
    void SaveResult(std::string& code) const;
    void SaveState(std::string& code) const;
    float TestResult(void) const;
    void InitResult(void);
    void InitState(const FireStarterSettings& settings, size_t index = 0, size_t test = 0);
    FireStarterState(const FireStarterSettings& settings, size_t index = 0, size_t test = 0);
    inline FireStarterState(void) {}
}; // class FireStarterState;
