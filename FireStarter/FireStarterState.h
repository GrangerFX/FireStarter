#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
private:
    std::vector<unsigned char> m_resultsData;
    FireStarterResults* m_results = nullptr;    // For debugging.

    inline void swap(const FireStarterState& other)
    {
        m_resultsData = other.m_resultsData;
        m_results = Results();
        m_program = other.m_program;
        m_generation = other.m_generation;
        m_index = other.m_index;
        m_test = other.m_test;
        m_seed = other.m_seed;
        m_maxResult = other.m_maxResult;
    } // swap

public:
    FireStarterProgram m_program;
    unsigned long long m_generation = 0;
    unsigned long long m_index = 0;
    unsigned long long m_test = 0;
    unsigned long long m_seed = 0;
    float m_maxResult = 0.0f;

    inline FireStarterState& operator = (const FireStarterState& other)
    {
        swap(other);
        return *this;
    } // operator =

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

    inline unsigned long long EvolveSeed(void) const
    {
        return RANDOM64(RANDOM64(m_program.m_settings.m_seed) + m_test);
    } // EvolveSeed

    inline unsigned long long IndexSeed(void) const
    {
        return RANDOM64(RANDOM64(RANDOM64(m_program.m_settings.m_seed) + m_index) + m_test);
    } // IndexSeed

    inline unsigned long long GenerationSeed(void) const
    {
        return RANDOM64(RANDOM64(RANDOM64(m_program.m_settings.m_seed) + m_generation) + m_test);
    } // GenerationSeed

    inline unsigned long long StateSeed(void) const
    {
        return RANDOM64(RANDOM64(RANDOM64(RANDOM64(m_program.m_settings.m_seed) + m_index) + m_generation) + m_test);
    } // StateSeed

    void InitSeed(unsigned long long seed)
    {
        m_seed = seed;
    } // InitSeed

    void InitSeed(void)
    {
        m_seed = StateSeed();
    } // InitSeed

    unsigned long long RootSeed(unsigned long long seed)
    {
        m_program.m_settings.m_seed = seed;
        InitSeed();
        return m_seed;
    } // RootSeed

    unsigned long long RandomSeed(void)
    {
        return RANDOMSEED64(m_seed);
    } // RandomSeed

    inline void RandomProgram(void)
    {
        m_program.RandomProgram(m_seed);
    } // RandomProgram

    inline void RandomProgram(unsigned long long& seed)
    {
        m_program.RandomProgram(seed);
    } // RandomProgram

    inline void RandomInstruction(void)
    {
        m_program.RandomInstruction(m_seed);
    } // RandomInstruction

    inline void RandomInstruction(unsigned long long& seed)
    {
        m_program.RandomInstruction(seed);
    } // RandomInstruction

    inline void RandomInstruction(unsigned long long seed, unsigned int index)
    {
        m_program.RandomInstruction(seed, index);
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
    void InitState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long test = 0);
    inline FireStarterState(const FireStarterState& other) { swap(other); }
    FireStarterState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long test = 0);
    inline FireStarterState(void) {}
}; // class FireStarterState;
