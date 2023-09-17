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
        m_variation_pass_results = other.m_variation_pass_results;
        m_generation = other.m_generation;
        m_evolution = other.m_evolution;
        m_age = other.m_age;
        m_index = other.m_index;
        m_id = other.m_id;
        m_copy_id = other.m_copy_id;
        m_test = other.m_test;
        m_seed = other.m_seed;
        m_maxResult = other.m_maxResult;
        m_lastResult = other.m_lastResult;
        m_lastEvolved = other.m_lastEvolved;
        m_optimizePass = other.m_optimizePass;
    } // swap

public:
    FireStarterProgram m_program;
    SimpleTimer m_timer;
    std::vector<std::vector<float>> m_variation_pass_results;
    unsigned long long m_generation = 0;
    unsigned long long m_evolution = 0;
    unsigned long long m_age = 0;
    unsigned long long m_index = 0;
    unsigned long long m_id = 0;
    unsigned long long m_copy_id = 0;
    unsigned long long m_test = 0;
    unsigned long long m_seed = 0;
    float m_maxResult = -1.0f;
    float m_lastResult = -1.0f;
    bool m_lastEvolved = false;
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
            if (results->Result(v)->m_minResult == m_program.m_settings.m_startResult)
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
        if (m_test)
            return RANDOM(RANDOM(RANDOM(RANDOM(m_program.m_settings.m_evolveSeed) + m_generation) + m_index) + m_test);
        else
            return RANDOM(RANDOM(RANDOM(m_program.m_settings.m_evolveSeed) + m_generation) + m_index);
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

    inline void CopyInstructions(const FireStarterState& srcState)
    {
        m_program.CopyInstructions(srcState.m_program);
     } // CopyInstructions

    inline void EvolveInstructions(const FireStarterState& srcState, unsigned int mode, unsigned long long& seed)
    {
        unsigned int numInstructions = Settings().m_instructions;
        
        // Copy evolution.
        if (mode == FIRESTARTER_EVOLVE_MODE_COPY) {
            for (unsigned int i = 0; i < numInstructions; i++)
                m_program.EvolvedInstruction(i) = srcState.m_program.EvolvedInstruction(i);
            for (unsigned int i = 0; i <= m_age / FIRESTARTER_EVOLVE_MAX_AGE; i++)
                RandomInstruction(seed);
            m_maxResult = srcState.m_maxResult;
            return;
        }

        // Random evolution.
        if (mode == FIRESTARTER_EVOLVE_MODE_RANDOM) {
            RandomProgram(seed);
            return;
        }

        // Evolve a range of instructions.
        unsigned int startCross, endCross, shiftCross;
        switch (mode) {
            case FIRESTARTER_EVOLVE_MODE_COPY:
                startCross = 0;
                endCross = numInstructions;
                shiftCross = 0;
                break;
            case FIRESTARTER_EVOLVE_MODE_CROSSOVER_FIRST:
                startCross = 0;
                endCross = RANDOMMOD(seed, numInstructions) + 1;
                shiftCross = 0;
                break;
            case FIRESTARTER_EVOLVE_MODE_CROSSOVER_MIDDLE:
                startCross = RANDOMMOD(seed, numInstructions);
                endCross = startCross + RANDOMMOD(seed, numInstructions) / 2 + 1;
                if (endCross > numInstructions)
                    endCross = numInstructions;
                shiftCross = 0;
                break;
            case FIRESTARTER_EVOLVE_MODE_CROSSOVER_LAST:
                startCross = RANDOMMOD(seed, numInstructions);
                endCross = numInstructions;
                shiftCross = 0;
                break;
            case FIRESTARTER_EVOLVE_MODE_CROSSOVER_WRAP:
                startCross = RANDOMMOD(seed, numInstructions);
                endCross = startCross + RANDOMMOD(seed, numInstructions) + 1;
                shiftCross = 0;
                break;
            case FIRESTARTER_EVOLVE_MODE_CROSSOVER_RANDOM:
                startCross = RANDOMMOD(seed, numInstructions);
                endCross = startCross + RANDOMMOD(seed, numInstructions) + 1;
                shiftCross = RANDOMMOD(seed, numInstructions);
                break;
        }
        for (unsigned int i = startCross; i < endCross; i++) {
            unsigned int srcIndex = i % numInstructions;
            unsigned int dstIndex = (i + shiftCross) % numInstructions;
            m_program.EvolvedInstruction(dstIndex) = srcState.m_program.EvolvedInstruction(srcIndex);
        }
    } // EvolveInstructions

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
