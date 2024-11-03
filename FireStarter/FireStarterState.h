#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"
#include <vector>

typedef std::vector<class FireStarterState> FireStarterStates;

class FireStarterState {
private:
    std::vector<unsigned char> m_evolveResultsData;
    std::vector<unsigned char> m_optimizeResultsData;
    std::vector<unsigned char> m_codeData;
    FireStarterEvolveResults* m_evolveResults = nullptr;     // Used for debugging. null pointer when uninitialized.
    FireStarterOptimizeResults* m_optimizeResults = nullptr; // Used for debugging. null pointer when uninitialized.
    FireStarterCode* m_code = nullptr;                       // Used for debugging. null pointer when uninitialized.

    inline void swap(const FireStarterState& other)
    {
        m_evolveResultsData = other.m_evolveResultsData;
        m_optimizeResultsData = other.m_optimizeResultsData;
        m_codeData = other.m_codeData;
        m_evolveResults = EvolveResults();
        m_optimizeResults = OptimizeResults();
        m_code = Code();
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

    inline size_t EvolveResultsSize(void) const
    {
        return FireStarterEvolveResults::ResultsSize(Settings());
    } // EvolveResultSize

    inline size_t OptimizeResultsSize(void) const
    {
        return FireStarterOptimizeResults::ResultsSize(Settings());
    } // OptimizeResultsSize

    inline const FireStarterEvolveResults* EvolveResults(void) const
    {
        return m_evolveResultsData.empty() ? nullptr : (const FireStarterEvolveResults*)m_evolveResultsData.data();
    } // EvolveResults

    inline FireStarterEvolveResults* EvolveResults(void)
    {
        return m_evolveResultsData.empty() ? nullptr : (FireStarterEvolveResults*)m_evolveResultsData.data();
    } // EvolveResults

    inline const FireStarterOptimizeResults* OptimizeResults(void) const
    {
        return m_optimizeResultsData.empty() ? nullptr : (const FireStarterOptimizeResults*)m_optimizeResultsData.data();
    } // OptimizeResults

    inline FireStarterOptimizeResults* OptimizeResults(void)
    {
        return m_optimizeResultsData.empty() ? nullptr : (FireStarterOptimizeResults*)m_optimizeResultsData.data();
    } // OptimizeResults

    inline size_t ResultSize(void) const
    {
        return FireStarterResult::ResultSize(Settings());
    } // ResultSize

    inline FireStarterResult* EvolveResult(void)
    {
        return m_evolveResultsData.empty() ? nullptr : EvolveResults()->Result();
    } // Result

    inline const FireStarterResult* EvolveResult(void) const
    {
        return m_evolveResultsData.empty() ? nullptr : EvolveResults()->Result();
    } // Result

    inline FireStarterResult* OptimizeResult(unsigned int variation = 0)
    {
        return m_optimizeResultsData.empty() ? nullptr : OptimizeResults()->Result(variation);
    } // Result

    inline const FireStarterResult* OptimizeResult(unsigned int variation = 0) const
    {
        return m_optimizeResultsData.empty() ? nullptr : OptimizeResults()->Result(variation);
    } // Result

    inline float EvolveMinResult(void) const
    {
        return m_evolveResultsData.empty() ? Settings().m_startResult : EvolveResults()->MinResult();
    } // MinResult

    inline float OptimizeMinResult(unsigned int variation = 0) const
    {
        return m_optimizeResultsData.empty() ? Settings().m_startResult : OptimizeResults()->MinResult(variation);
    } // MinResult

    inline unsigned short EvolveAge1(void) const
    {
        return m_evolveResultsData.empty() ? 0 : EvolveResults()->EvolveAge1();
    } // EvolveAge1

    inline unsigned short EvolveAge2(void) const
    {
        return m_evolveResultsData.empty() ? 0 : EvolveResults()->EvolveAge2();
    } // EvolveAge2

    inline unsigned short OptimizeAge1(unsigned int variation = 0) const
    {
        return m_optimizeResultsData.empty() ? 0 : OptimizeResults()->EvolveAge1(variation);
    } // OptimizeAge1

    inline unsigned short OptimizeAge2(unsigned int variation = 0) const
    {
        return m_optimizeResultsData.empty() ? 0 : OptimizeResults()->EvolveAge2(variation);
    } // OptimizeAge2

    inline FireStarterCode* Code(void)
    {
        return m_codeData.empty() ? nullptr : (FireStarterCode*)m_codeData.data();
    } // Code

    inline const FireStarterCode* Code(void) const
    {
        return m_codeData.empty() ? nullptr : (const FireStarterCode*)m_codeData.data();
    } // Code

    inline float EvolveMaxResult(void) const
    {
        return EvolveMinResult();
    } // MaxResult

    inline float OptimizeMaxResult(void) const
    {
        float maxResult = 0.0f;
        unsigned int variations = Settings().m_variations;
        for (unsigned int v = 0; v < variations; v++)
            maxResult = MAX(maxResult, OptimizeMinResult(v));
        return maxResult;
    } // MaxResult

    inline bool EvolveResultsValid(void) const
    {
        const FireStarterEvolveResults* results = EvolveResults();
        if (results->Result()->MinResult() == m_program.m_settings.m_startResult)
            return false;
        return true;
    } // EvolveResultsValid

    inline bool OptimizeResultsValid(void) const
    {
        const FireStarterOptimizeResults* results = OptimizeResults();
        for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++)
            if (results->Result(v)->MinResult() == m_program.m_settings.m_startResult)
                return false;
        return true;
    } // OptimizeResultsValid

    inline bool Initialized(void) const
    {
        return !m_evolveResultsData.empty() && !m_optimizeResultsData.empty();
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

    inline unsigned long long EvolutionSeed(unsigned long long evolution = 0) const
    {
        return SEED1(m_program.m_settings.m_evolveSeed) + SEED2(evolution) + SEED3(m_id) + SEED4(m_test);
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

    inline void LoadProgramFromCode(void)
    {
        unsigned int numInstructions = Settings().m_instructions;
        FireStarterInstructions* instructions = m_program.EvolvedInstructions();
        FireStarterCode* code = Code();
        for (unsigned int i = 0; i < numInstructions; i++) {
            FireStarterInstruction& instruction = instructions->Instruction(i);
            FireStarterCodeInstruction& codeInstruction = code->Instruction(i);
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
    float TestResult(void) const;
    void InitResults(void);
    void InitCode(void);
    void InitState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0);
    void InitResults(const FireStarterSettings& settings, const FireStarterEvolvePopulation* population, unsigned int index);
    void InitResults(const FireStarterSettings& settings, const FireStarterOptimizePopulation* population, unsigned int index);

    inline FireStarterState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0)
    {
        InitState(settings, generation, index, id, test);
    } // FireStarterState

    inline FireStarterState(const FireStarterSettings& settings, const FireStarterEvolvePopulation* population, unsigned int index)
    {
        InitState(settings);
        InitResults(settings, population, index);
    } // FireStarterState

    inline FireStarterState(const FireStarterSettings& settings, const FireStarterOptimizePopulation* population, unsigned int index)
    {
        InitState(settings);
        InitResults(settings, population, index);
    } // FireStarterState

    inline FireStarterState(const FireStarterState& other)
    {
        swap(other);
    } // FireStarterState

    inline FireStarterState(void) {}
}; // class FireStarterState;
