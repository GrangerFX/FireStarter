#pragma once
#include "FireStarterCodeGenerate.h"
#include "FireStarterPacket.h"
#include "FireSinSim.h"
#include "SimpleTimer.h"
#include <vector>
#include <string>
#include <set>

typedef std::vector<class FireStarterState> FireStarterStates;
typedef std::set<std::vector<unsigned char>> TestedCodes;

class FireStarterCodeVector {
private:
    std::vector<unsigned char> m_codeData;      // Backing data for the code.

public:
    inline void operator=(const FireStarterCodeVector* code)
    {
        m_codeData = code->m_codeData;
    } // operator=

    inline void operator=(const FireStarterCode* code)
    {
        memcpy(m_codeData.data(), code, m_codeData.size());
    } // operator=

    inline FireStarterCodeInstruction& operator[](unsigned int i)
    {
        return (*Code())[i];
    } // operator[]

    inline FireStarterCodeInstruction operator[](unsigned int i) const
    {
        return (*Code())[i];
    } // operator[]

    inline size_t size(void) const
    {
        return m_codeData.size();
    } // size

    inline unsigned char* data(void)
    {
        return m_codeData.data();
    } // data

    inline const unsigned char* data(void) const
    {
        return m_codeData.data();
    } // data

    inline const std::vector<unsigned char>& vector(void) const
    {
        return m_codeData;
    } // vector

    inline FireStarterCodeGenerate* Code(void)
    {
        return (FireStarterCodeGenerate*)m_codeData.data();
    } // Code

    inline const FireStarterCodeGenerate* Code(void) const
    {
        return (const FireStarterCodeGenerate*)m_codeData.data();
    } // Code

    void Init(const FireStarterSettings& settings)
    {
        m_codeData.resize(FireStarterCodeGenerate::CodeSize(settings));
    } // Init

    FireStarterCodeVector(const FireStarterSettings& settings)
    {
        Init(settings);
    } // FireStarterCodeVector

    FireStarterCodeVector(void)
    {
        Init(FireStarterSettings());
    } // FireStarterCodeVector
}; // class FireStarterCodeVector

class FireStarterDataVector {
private:
    std::vector<unsigned char> m_data;    // Backing data for the result.

public:
    inline void operator=(const FireStarterData* data)
    {
        memcpy(m_data.data(), data, m_data.size());
    } // operator=

    inline float& operator[](unsigned int i)
    {
        return Data()[i];
    } // operator[]

    inline float operator[](unsigned int i) const
    {
        return Data()[i];
    } // operator[]

    inline size_t size(void) const
    {
        return m_data.size();
    } // size

    inline unsigned char* data(void)
    {
        return m_data.data();
    } // data

    inline const unsigned char* data(void) const
    {
        return m_data.data();
    } // data

    inline const std::vector<unsigned char>& vector(void) const
    {
        return m_data;
    } // vector

    inline FireStarterData& Data(void)
    {
        return *(FireStarterData*)m_data.data();
    } // Result

    inline const FireStarterData& Data(void) const
    {
        return *(const FireStarterData*)m_data.data();
    } // Data

    void Init(const FireStarterSettings& settings)
    {
        m_data.resize(FireStarterData::DataSize(settings));
    } // Init

    FireStarterDataVector(const FireStarterSettings& settings)
    {
        Init(settings);
    } // FireStarterDataVector

    FireStarterDataVector(void)
    {
        Init(FireStarterSettings());
    } // FireStarterDataVector
}; // class FireStartercDataVector

class FireStarterResultVector {
private:
    std::vector<unsigned char> m_resultData;    // Backing data for the result.

public:
    inline void operator=(const FireStarterResultVector* result)
    {
        m_resultData = result->m_resultData;
    } // operator=

    inline void operator=(const FireStarterResult* result)
    {
        memcpy(m_resultData.data(), result, m_resultData.size());
    } // operator=

    inline size_t size(void) const
    {
        return m_resultData.size();
    } // size

    inline unsigned char* data(void)
    {
        return m_resultData.data();
    } // data

    inline const unsigned char* data(void) const
    {
        return m_resultData.data();
    } // data

    inline const std::vector<unsigned char>& vector(void) const
    {
        return m_resultData;
    } // vector

    inline FireStarterResult* Result(void)
    {
        return (FireStarterResult*)m_resultData.data();
    } // Result

    inline const FireStarterResult* Result(void) const
    {
        return (FireStarterResult*)m_resultData.data();
    } // Result

    inline void Init(const FireStarterSettings& settings)
    {
        m_resultData.resize(FireStarterResult::ResultSize(settings));
    } // Init

    inline FireStarterResultVector(const FireStarterResultVector& other)
    {
        m_resultData = other.m_resultData;
    } // FireStarterResultVector

    inline FireStarterResultVector(const FireStarterSettings& settings)
    {
        Init(settings);
    } // FireStarterResultVector

    inline FireStarterResultVector(void)
    {
        Init(FireStarterSettings());
    } // FireStarterResultVector
}; // class FireStarterDynamicResult

class FireStarterState {
private:
    FireStarterResultVector m_result;
    FireStarterCodeVector m_code;
    SinSimNetwork m_network;

    inline void swap(const FireStarterState& other)
    {
        m_result = other.m_result;
        m_code = other.m_code;
        m_network = other.m_network;
        m_settings = other.m_settings;
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
        m_uniqueRegisters = other.m_uniqueRegisters;
        m_oldResult = other.m_oldResult;
        m_evolveWeight = other.m_evolveWeight;
        m_optimizeValid = other.m_optimizeValid;
        m_evolveComplete = other.m_evolveComplete;
    } // swap

public:
    std::string m_evaluateCode;
    FireStarterSettings m_settings;
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
    unsigned int m_uniqueRegisters = 0;
    float m_oldResult = -1.0f;  // Set to m_settings.m_startResult when the state is initialized.
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
        return m_settings;
    } // Settings

    inline const FireStarterSettings& Settings(void) const
    {
        return m_settings;
    } // Settings

    inline double Duration(void) const
    {
        return m_timer.Duration();
    } // Duration

    inline size_t ResultSize(void) const
    {
        return FireStarterResult::ResultSize(m_settings);
    } // ResultSize

    inline const FireStarterResult* Result(void) const
    {
         return (const FireStarterResult*)m_result.Result();
    } // Result

    inline FireStarterResult* Result(void)
    {
        return m_result.Result();
     } // Result

    inline const SinSimNetwork* Network(void) const
    {
        return &m_network;
    } // Network

    inline float MaxResult(void) const
    {
        const FireStarterResult* result = Result();
        if (result)
            return result->MaxResult();
        else
            return m_settings.m_startResult;
    } // MaxResult

    inline float& MaxResult(void)
    {
         FireStarterResult* result = Result();
         return *result->MaxResult();
    } // MaxResult

    inline unsigned short EvolveAge1(void) const
    {
        const FireStarterResult* result = Result();
        if (result)
            return result->EvolveAge1();
        else
            return 0;
    } // EvolveAge1

    inline unsigned short EvolveAge2(void) const
    {
        const FireStarterResult* result = Result();
        if (result)
            return result->EvolveAge2();
        else
            return 0;
    } // EvolveAge2

    inline size_t CodeSize(void) const
    {
        return FireStarterCode::CodeSize(m_settings);
    } // CodeSize

    inline FireStarterCodeGenerate* Code(void)
    {
        return m_code.size() == CodeSize() ? m_code.Code() : nullptr;
    } // Code

    inline const FireStarterCodeGenerate* Code(void) const
    {
        return m_code.size() == CodeSize() ? m_code.Code() : nullptr;
    } // Code

    const std::vector<unsigned char>& CodeVector(void) const
    {
        return m_code.vector();
    } // CodeVector

    inline bool ResultValid(void) const
    {
        if (MaxResult() == m_settings.m_startResult)
            return false;
        return true;
    } // ResultValid

    inline bool Initialized(void) const
    {
        return m_result.size() == ResultSize();
    } // Initialized

    inline unsigned int PassMode(void) const
    {
        return m_settings.m_mode;
    } // PassMode

    inline const char* Mode(void) const
    {
        return FireStarterSettings::Mode(PassMode());
    } // Mode(void) const

    inline float EvolveWeight(void) const
    {
        return m_generation * MaxResult();
    } // EvolveWeight

    inline unsigned long long EvolutionSeed(void) const
    {
        return SEED1(m_settings.m_evolveSeed) + SEED2(m_generation) + SEED3(m_id) + SEED4(m_test);
    } // EvolutionSeed

    inline unsigned long long OptimizationSeed(unsigned long long optimization = 0) const
    {
        return SEED1(m_settings.m_optimizeSeed) + SEED2(optimization) + SEED3(m_generation) + SEED4(m_id) + SEED5(m_test);
    } // OptimizationSeed

    inline unsigned long long GenerationSeed(void) const
    {
        return SEED1(m_settings.m_evolveSeed) + SEED2(m_generation) + SEED3(m_index) + SEED4(m_test);
    } // GenerationSeed

    unsigned long long InitGenerationSeed(void)
    {
        m_seed = GenerationSeed();
        return m_seed;
    } // InitGenerationSeed

    unsigned long long RootSeed(unsigned int seed)
    {
        m_settings.m_evolveSeed = seed;
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
        Code()->RandomInstruction(m_seed, m_settings.m_instructions, m_settings.m_registers, m_settings.m_opcodes);
    } // RandomInstruction

    inline void CopyCode(const FireStarterCode* srcCode, unsigned int uniqueRegisters = 0)
    {
        FireStarterCodeGenerate* dstCode = Code();
        if (srcCode && dstCode) {
            memcpy(dstCode, srcCode, FireStarterCode::CodeSize(m_settings));
            if (!uniqueRegisters)
                uniqueRegisters = OptimizeCode();
            m_uniqueRegisters = uniqueRegisters;
        } else
            std::terminate();
    } // CopyInstructions

    inline void CopyCode(const FireStarterState& srcState)
    {
        const FireStarterCodeGenerate* srcCode = srcState.Code();
        if (srcCode && (srcState.m_settings.m_instructions == m_settings.m_instructions))
            CopyCode(srcCode, srcState.m_uniqueRegisters);
        else
            std::terminate();
    } // CopyCode

    inline void RandomCode(void)
    {
        Code()->Init(m_seed, m_settings.m_instructions, m_settings.m_registers, m_settings.m_opcodes);
    } // RandomCode

    inline unsigned int OptimizeCode(void)
    {
        m_uniqueRegisters = Code()->Optimize();
        return m_uniqueRegisters;
    } // OptimizeCode

    inline unsigned int GenerateRegisters(std::vector<FireStarterRegisterInfo>& registers) const
    {
        const FireStarterCode* code = Code();
        unsigned int numInstructions = m_settings.m_instructions;

        // Optimize the registers based on the ones in use at any point in the code.
        registers.resize(m_uniqueRegisters);
        for (unsigned int i = 0; i < m_uniqueRegisters; i++)
            registers[i] = FireStarterRegisterInfo(-1, numInstructions, numInstructions);
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int index = code->Register(i);
            FireStarterRegisterInfo& reg = registers[index];
            if (reg.instructionFirst == numInstructions)
                reg.instructionFirst = i;
            reg.instructionLast = i;
        }

        std::vector<unsigned int> freeRegisters;
        unsigned int numActiveRegisters = 0;
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int index = code->Register(i);
            FireStarterRegisterInfo& reg = registers[index];
            if (reg.instructionLast > reg.instructionFirst)
                if (reg.instructionFirst == i) {
                    if (!freeRegisters.empty()) {
                        reg.registerIndex = freeRegisters.back();
                        freeRegisters.pop_back();
                    } else
                        reg.registerIndex = numActiveRegisters;
                    numActiveRegisters++;
                } else if (reg.instructionLast == i) {
                    freeRegisters.push_back(reg.registerIndex);
                    numActiveRegisters--;
                }
        }
        return m_uniqueRegisters;
    } // GenerateRegisters

    inline void NextGeneration(void)
    {
        m_generation++;
        InitGenerationSeed();
    } // NextGeneration

    bool Packetize(FireStarterPacket& packet);
    static void SettingsText(const FireStarterSettings& settings, std::string& code, const std::string& prefix = "", const std::string& postfix = "");
    void SaveSettings(std::string& code) const;
    void SaveCode(std::string& code) const;
    void SaveStats(std::string& code) const;
    void SaveVariation(unsigned int variation, std::string& code) const;
    void SaveResults(std::string& code) const;
    void SaveState(std::string& code) const;
    float TestResults(void) const;
    float EvaluateCode(void) const;
    void InitResult(void);
    void InitCode(void);
    void InitNetwork(void);
    void InitState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0);
    void InitResult(const FireStarterSettings& settings, float result, const FireStarterCode* code, unsigned int index);
    void InitResult(const FireStarterSettings& settings, const FireStarterResult* result, const FireStarterCode* code, unsigned int variation, unsigned int index);
    void InitResult(const FireStarterSettings& settings, const FireStarterResult* result, const FireStarterCode* code, unsigned int index);
    void InitResult(const FireStarterSettings& settings, const FireStarterResult* result, unsigned int variation, unsigned int index);

    inline void InitNetwork(const FireStarterSettings& settings, const SinSimNetwork& network, unsigned int index)
    {
        m_network = network;
        m_minIndex = index;
        m_optimizeValid = true;
    } // InitNetwork

    inline FireStarterState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0) : m_code(settings), m_result(settings)
    {
        InitState(settings, generation, index, id, test);
    } // FireStarterState

    inline FireStarterState(const FireStarterSettings& settings, const FireStarterResult* results, const FireStarterCode* code, unsigned int index) : m_code(settings), m_result(settings)
    {
        InitState(settings);
        InitResult(settings, results, code, index);
    } // FireStarterState

    inline FireStarterState(const FireStarterState& other) : m_code(other.m_code), m_result(other.m_result)
    {
        m_timer = other.m_timer;
        swap(other);
    } // FireStarterState

    inline FireStarterState(void) {
        SinSimInitNetwork(m_network);
    } // FireStarterState
}; // class FireStarterState;
