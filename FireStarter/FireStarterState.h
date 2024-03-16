#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"
#include <vector>

typedef std::vector<class FireStarterState> FireStarterStates;

class FireStarterState {
private:
    std::vector<unsigned char> m_resultsData;
    FireStarterResults* m_results = nullptr;    // Used for debugging. null pointer when uninitialized.
 
    inline void swap(const FireStarterState& other)
    {
        m_resultsData = other.m_resultsData;
        m_results = Results();
        m_program = other.m_program;
        m_timer = other.m_timer;
        m_variationOrder = other.m_variationOrder;
        m_variationCount = other.m_variationCount;
        m_generation = other.m_generation;
        m_age = other.m_age;
        m_evolution = other.m_evolution;
        m_index = other.m_index;
        m_copy_index = other.m_copy_index;
        m_id = other.m_id;
        m_test = other.m_test;
        m_seed = other.m_seed;
        m_optimize_pass = other.m_optimize_pass;
        m_oldResult = other.m_oldResult;
        m_maxResult = other.m_maxResult;
        m_evolveWeight = other.m_evolveWeight;
        m_optimizeValid = other.m_optimizeValid;
    } // swap

public:
    FireStarterProgram m_program;
    FireStarterSettings& m_settings = m_program.m_settings;
    SimpleTimer m_timer;
    std::vector<unsigned int> m_variationOrder;
    std::vector<unsigned int> m_variationCount;
    unsigned long long m_generation = 0;
    unsigned long long m_age = 0;
    unsigned long long m_evolution = 0;
    unsigned long long m_index = 0;
    unsigned long long m_copy_index = 0;
    unsigned long long m_id = 0;
    unsigned long long m_test = 0;
    unsigned long long m_seed = 0;
    unsigned long long m_optimize_pass = 0;
    float m_oldResult = -1.0f;  // Set to m_settings.m_startResult when the state is initialized.
    float m_maxResult = -1.0f;  // Set to m_settings.m_startResult when the state is initialized.
    float m_evolveWeight = -1.0f;
    bool m_optimizeValid = false;

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

    inline float MinResult(size_t variation) const
    {
        return m_resultsData.empty() ? Settings().m_startResult : Results()->MinResult(variation);
    } // MinResult

    inline float MaxResult(void) const
    {
        float maxResult = 0.0f;
        size_t variations = Settings().m_variations;
        for (size_t v = 0; v < variations; v++)
            maxResult = MAX(maxResult, MinResult(v));
        return maxResult;
    } // MaxResult

    inline bool ResultsValid(void) const
    {
        const FireStarterResults* results = Results();
        for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++)
            if (results->Result(v)->MinResult() == m_program.m_settings.m_startResult)
                return false;
        return true;
    } // ResultsValid

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
        return m_optimize_pass ? FIRESTARTER_OPTIMIZE : m_program.m_settings.m_mode;
    } // PassMode

    inline const char* Mode(void) const
    {
        return FireStarterSettings::Mode(PassMode());
    } // Mode(void) const

    inline float EvolveWeight(void) const
    {
        return m_age * m_maxResult;
    } // EvolveWeight

    inline unsigned long long OptimizationSeed(unsigned long long optimization) const
    {
        return SEED1(m_program.m_settings.m_optimizeSeed) + SEED2(optimization) + SEED3(m_id) + SEED4(m_test);
    } // OptimizationSeed

    inline unsigned long long GenerationSeed(void) const
    {
        return SEED1(m_program.m_settings.m_evolveSeed) + SEED2(m_generation) + SEED3(m_index) + SEED4(m_test);
    } // GenerationSeed

    unsigned long long InitGenerationSeed(void)
    {
        m_seed = GenerationSeed();
        return m_seed;
    } // InitGenerationSeed

    unsigned long long RootSeed(unsigned long long seed)
    {
        m_program.m_settings.m_evolveSeed = seed;
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

    inline void RandomInstruction(unsigned long long& seed, unsigned int index)
    {
        m_program.RandomInstruction(seed, index);
    } // RandomInstruction

    inline void RandomInstruction(unsigned int index)
    {
        m_program.RandomInstruction(m_seed, index);
    } // RandomInstruction

    inline void RandomInstruction(unsigned long long& seed)
    {
        m_program.RandomInstruction(seed);
    } // RandomInstruction

    inline void RandomInstruction(void)
    {
        m_program.RandomInstruction(m_seed);
    } // RandomInstruction

    inline void CopyInstructions(const FireStarterState& srcState)
    {
        m_program.CopyInstructions(srcState.m_program);
    } // CopyInstructions

    inline void RandomProgram(void)
    {
        m_program.RandomProgram(m_seed);
    } // RandomProgram

    inline void RandomResults(void)
    {
        FireStarterResults* results = Results();
        const FireStarterSettings& settings = Settings();
        unsigned long long seed = GenerationSeed();

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
    void InitState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0);

    inline FireStarterState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0)
    {
        InitState(settings, generation, index, id, test);
    } // FireStarterState

    inline FireStarterState(const FireStarterState& other)
    {
        swap(other);
    } // FireStarterState

    inline FireStarterState(void) {}
}; // class FireStarterState;
