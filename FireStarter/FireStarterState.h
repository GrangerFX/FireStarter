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
        m_timer = other.m_timer;
        m_generation = other.m_generation;
        m_index = other.m_index;
        m_test = other.m_test;
        m_seed = other.m_seed;
        m_maxResult = other.m_maxResult;
        m_optimizePass = other.m_optimizePass;
    } // swap

public:
    FireStarterProgram m_program;
    SimpleTimer m_timer;
    unsigned long long m_generation = 0;
    unsigned long long m_evolution = 0;
    unsigned long long m_index = 0;
    unsigned long long m_test = 0;
    unsigned long long m_seed = 0;
    float m_maxResult = -1.0f;
    bool m_optimizePass = false;

    inline FireStarterState& operator = (const FireStarterState& other)
    {
        swap(other);
        return *this;
    } // operator =

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

    inline unsigned int PassMode(void) const
    {
        return m_optimizePass ? FIRESTARTER_OPTIMIZE : m_program.m_settings.m_mode;
    } // PassMode

    inline const char* Mode(void) const
    {
        return FireStarterSettings::Mode(PassMode());
    } // Mode(void) const

    inline unsigned long long OptimizationSeed(unsigned long long generation, unsigned long long test = 0) const
    {
        return RANDOM(RANDOM(RANDOM(m_program.m_settings.m_optimizeSeed) + generation) + test);
    } // OptimizationSeed

    inline unsigned long long GenerationSeed(void) const
    {
        return RANDOM(RANDOM(RANDOM(m_program.m_settings.m_seed) + m_generation) + m_test);
    } // GenerationSeed

    inline unsigned long long GenerationSeed(unsigned long long generation, unsigned long long test = 0) const
    {
        return test ? RANDOM(RANDOM(RANDOM(m_program.m_settings.m_seed) + generation) + test) : RANDOM(RANDOM(m_program.m_settings.m_seed) + generation);
    } // GenerationSeed

    unsigned long long InitGenerationSeed(void)
    {
        m_seed = GenerationSeed();
        return m_seed;
    } // InitGenerationSeed

    unsigned long long RootSeed(unsigned long long seed)
    {
        m_program.m_settings.m_seed = seed;
        return InitGenerationSeed();
    } // RootSeed

    unsigned long long& Seed(void)
    {
        return m_seed;
    } // Seed

    unsigned long long RandomSeed(void)
    {
        return RANDOMSEED(m_seed);
    } // RandomSeed

    unsigned int RandomMod(unsigned int m)
    {
        return RANDOMMOD(m_seed, m);
    } // RandomMod

    inline void RandomInstruction(void)
    {
        m_program.RandomInstruction(m_seed);
    } // RandomInstruction

    inline void RandomInstruction(unsigned int index)
    {
        m_program.RandomInstruction(m_seed, index);
    } // RandomInstruction

    inline void RandomInstruction(unsigned long long& seed)
    {
        m_program.RandomInstruction(seed);
    } // RandomInstruction

    inline void RandomInstruction(unsigned long long& seed, unsigned int index)
    {
        m_program.RandomInstruction(seed, index);
    } // RandomInstruction

    inline void RandomProgram(void)
    {
        m_program.RandomProgram(m_seed);
    } // RandomProgram

    inline void RandomProgram(unsigned long long& seed)
    {
        m_program.RandomProgram(seed);
    } // RandomProgram

    inline void RandomResults(void)
    {
        FireStarterResults* results = Results();
        const FireStarterSettings& settings = Settings();
        unsigned long long seed = GenerationSeed(0);

        for (unsigned int v = 0; v < settings.m_variations; v++) {
            FireStarterResult* result = results->Result(v);
            FireStarterData* data = result->Data();
            unsigned int dataSize = m_program.m_uniqueRegisters;
            for (unsigned int i = 0; i < dataSize; i++)
                data->d[i] = RANDOMFACTOR(seed) * settings.m_startScale;
            for (unsigned int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data->d[i] = 0.0f;   // Clear the unused data.
        }
    } // RandomResults

    inline void NextGeneration(void)
    {
        m_generation++;
        InitGenerationSeed();
    } // NextGeneration

    bool Packetize(FireStarterPacket& packet);
    void SaveStats(std::string& code) const;
    void SaveVariation(unsigned int variation, std::string& code) const;
    void SaveResult(std::string& code) const;
    void SaveState(std::string& code) const;
    float TestResult(void) const;
    void InitResults(FireStarterResults* initResult = nullptr);
    void InitState(const FireStarterSettings& settings, unsigned long long index = 0, unsigned long long test = 0);

    inline FireStarterState(const FireStarterSettings& settings, unsigned long long index = 0, unsigned long long test = 0)
    {
        InitState(settings, index, test);
    } // FireStarterState

    inline FireStarterState(const FireStarterState& other)
    {
        swap(other);
    } // FireStarterState

    inline FireStarterState(void) {}
}; // class FireStarterState;
