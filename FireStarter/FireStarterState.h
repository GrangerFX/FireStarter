#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"
#include "FireSinSim.h"
#include <vector>

typedef std::vector<class FireStarterState> FireStarterStates;

class FireStarterState {
private:
    std::vector<unsigned char> m_resultsData;  // Backing data for the results.
    std::vector<unsigned char> m_codeData;     // Backing data for the code.
    std::vector<FireStarterResult*> m_results;
    FireStarterCode* m_code = nullptr;
    SinSimNetwork m_network;

    inline void swap(const FireStarterState& other)
    {
        m_resultsData = other.m_resultsData;
        m_codeData = other.m_codeData;
        m_results = Results();
        m_code = Code();
        m_network = other.m_network;
        m_program = other.m_program;
        m_evaluateCode = other.m_evaluateCode;
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
        m_minIndex = other.m_minIndex;
        m_oldResult = other.m_oldResult;
        m_maxResult = other.m_maxResult;
        m_evolveWeight = other.m_evolveWeight;
        m_optimizeValid = other.m_optimizeValid;
        m_evolveComplete = other.m_evolveComplete;
    } // swap

public:
    FireStarterProgram m_program;
    std::string m_evaluateCode;
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
    unsigned int m_minIndex = 0;
    float m_oldResult = -1.0f;  // Set to m_settings.m_startResult when the state is initialized.
    float m_maxResult = -1.0f;  // Set to m_settings.m_startResult when the state is initialized.
    float m_evolveWeight = 0.0f;
    bool m_optimizeValid = false;
    bool m_evolveComplete = false;

    inline FireStarterState& operator = (const FireStarterState& other)
    {
        swap(other);
        return *this;
    } // operator =

    inline FireStarterSettings& Settings(void)
    {
        return m_program.m_settings;
    } // Settings

    inline const FireStarterSettings& Settings(void) const
    {
        return m_program.m_settings;
    } // Settings

    inline size_t ResultSize(void) const
    {
        return FireStarterResult::ResultSize(m_settings);
    } // ResultSize

    inline size_t ResultsSize(void) const
    {
        return ResultSize() * m_settings.m_variations;
    } // OptimizeResultsSize

    inline std::vector<FireStarterResult*> Results(void) const
    {
        std::vector<FireStarterResult*> results;
        size_t resultSize = ResultSize();
        if (m_resultsData.size() == resultSize * m_settings.m_variations) {
            results.resize(m_settings.m_variations);
            for (unsigned int v = 0; v < m_settings.m_variations; v++)
                results[v] = (FireStarterResult*)&m_resultsData[v * resultSize];
        }
        return results;
    } // Results

    inline const FireStarterResult* Result(unsigned int variation = 0) const
    {
        size_t resultSize = FireStarterResult::ResultSize(m_settings);
        if (m_resultsData.size() == resultSize * m_settings.m_variations)
            return (FireStarterResult*)&m_resultsData[variation * resultSize];
        else
            return nullptr;
    } // Result

    inline FireStarterResult* Result(unsigned int variation = 0)
    {
        size_t resultSize = FireStarterResult::ResultSize(m_settings);
        if (m_resultsData.size() == resultSize * m_settings.m_variations)
            return (FireStarterResult*)&m_resultsData[variation * resultSize];
        else
            return nullptr;
    } // Result

    inline const SinSimNetwork* Network(void) const
    {
        return &m_network;
    } // Network

    inline float MinResult(unsigned int variation = 0) const
    {
        const FireStarterResult* result = Result(variation);
        if (result)
            return result->MinResult();
        else
            return m_settings.m_startResult;
    } // MinResult

    inline unsigned short EvolveAge1(unsigned int variation = 0) const
    {
        const FireStarterResult* result = Result(variation);
        if (result)
            return result->EvolveAge1();
        else
            return 0;
    } // EvolveAge1

    inline unsigned short EvolveAge2(unsigned int variation = 0) const
    {
        const FireStarterResult* result = Result(variation);
        if (result)
            return result->EvolveAge2();
        else
            return 0;
    } // EvolveAge2

    inline size_t CodeSize(void) const
    {
        return FireStarterCode::CodeSize(m_settings);
    } // CodeSize

    inline FireStarterCode* Code(void)
    {
        return m_codeData.size() == CodeSize() ? (FireStarterCode*)m_codeData.data() : nullptr;
    } // Code

    inline const FireStarterCode* Code(void) const
    {
        return m_codeData.size() == CodeSize() ? (const FireStarterCode*)m_codeData.data() : nullptr;
    } // Code

    inline float MaxResult(void) const
    {
        float maxResult = 0.0f;
        unsigned int variations = m_settings.m_variations;
        for (unsigned int v = 0; v < variations; v++)
            maxResult = MAX(maxResult, MinResult(v));
        return maxResult;
    } // MaxResult

    inline bool ResultsValid(void) const
    {
        for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++)
            if (MinResult(v) == m_program.m_settings.m_startResult)
                return false;
        return true;
    } // ResultsValid

    inline bool Initialized(void) const
    {
        return m_resultsData.size() == ResultsSize();
    } // Initialized

    inline unsigned int PassMode(void) const
    {
        return m_program.m_settings.m_mode;
    } // PassMode

    inline const char* Mode(void) const
    {
        return FireStarterSettings::Mode(PassMode());
    } // Mode(void) const

    inline float EvolveWeight(void) const
    {
        return m_generation * m_maxResult;
    } // EvolveWeight

    inline unsigned long long EvolutionSeed(void) const
    {
        return SEED1(m_program.m_settings.m_evolveSeed) + SEED2(m_generation) + SEED3(m_id) + SEED4(m_test);
    } // EvolutionSeed

    inline unsigned long long OptimizationSeed(unsigned long long optimization = 0) const
    {
        return SEED1(m_program.m_settings.m_optimizeSeed) + SEED2(optimization) + SEED3(m_generation) + SEED4(m_id) + SEED5(m_test);
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

    unsigned long long RootSeed(unsigned int seed)
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

    inline void LoadProgramFromCode(const FireStarterCode* code = nullptr)
    {
        unsigned int numInstructions = Settings().m_instructions;
        FireStarterInstructions* instructions = m_program.EvolvedInstructions();
        if (code)
            *Code() = code;
        else
            code = Code();
        for (unsigned int i = 0; i < numInstructions; i++) {
            FireStarterInstruction& instruction = instructions->Instruction(i);
            const FireStarterCodeInstruction& codeInstruction = code->Instruction(i);
            instruction.op = codeInstruction.op;
            instruction.reg = codeInstruction.reg;
        }
        m_program.OptimizeRegisters();
    } // LoadProgramFromCode

    inline void LoadCodeFromProgram(void)
    {
        unsigned int numInstructions = Settings().m_instructions;
        FireStarterInstructions* instructions = m_program.OptimizedInstructions();
        FireStarterCode* code = Code();
        for (unsigned int i = 0; i < numInstructions; i++) {
            FireStarterInstruction& instruction = instructions->Instruction(i);
            FireStarterCodeInstruction& codeInstruction = code->Instruction(i);
            codeInstruction.op = instruction.op;
            codeInstruction.reg =  instruction.reg;
        }
    } // LoadCodeFromProgram

    inline void CopyInstructions(const FireStarterState& srcState)
    {
        m_program.CopyInstructions(srcState.m_program);
        LoadCodeFromProgram();
    } // CopyInstructions

    inline void CopyCode(const FireStarterCode& srcCode)
    {
        memcpy(Code(), &srcCode, FireStarterCode::CodeSize(m_settings));
        LoadProgramFromCode();
    } // CopyInstructions

    inline void RandomProgram(void)
    {
        m_program.RandomProgram(m_seed);
    } // RandomProgram

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
    float TestResult(unsigned int sample) const;
    void InitResults(void);
    void InitCode(void);
    void InitNetwork(void);
    void InitState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0);
    void InitResult(const FireStarterSettings& settings, float result, const FireStarterCode* code, unsigned int index);
    void InitResult(const FireStarterSettings& settings, const FireStarterResult* result, const FireStarterCode* code, unsigned int variation, unsigned int index);
    void InitResults(const FireStarterSettings& settings, const FireStarterResult* results, const FireStarterCode* code, unsigned int index);
    void InitResults(const FireStarterSettings& settings, const FireStarterResult* results, unsigned int variation, unsigned int index);

    inline void InitNetwork(const FireStarterSettings& settings, const SinSimNetwork& network, unsigned int index)
    {
        m_network = network;
        m_maxResult = network.grade;
        m_minIndex = index;
        m_optimizeValid = true;
    } // InitNetwork

    inline FireStarterState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0)
    {
        InitState(settings, generation, index, id, test);
    } // FireStarterState

    inline FireStarterState(const FireStarterSettings& settings, const FireStarterResult* results, const FireStarterCode* code, unsigned int index)
    {
        InitState(settings);
        InitResults(settings, results, code, index);
    } // FireStarterState

    inline FireStarterState(const FireStarterState& other)
    {
        swap(other);
    } // FireStarterState

    inline FireStarterState(void) {
        SinSimInitNetwork(m_network);
    } // FireStarterState
}; // class FireStarterState;
