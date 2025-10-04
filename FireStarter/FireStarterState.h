#pragma once
#include "FireStarterCodeGenerate.h"
#include "FireStarterPacket.h"
#include "FireSinSim.h"
#include "SimpleTimer.h"
#include <vector>
#include <string>
#include <set>

#define FIRESTARTER_STATE_DEBUG 1

typedef std::vector<class FireStarterState> FireStarterStates;
typedef std::set<std::vector<unsigned char>> TestedCodes;

class FireStarterState;

class FireStarterCodeVector {
private:
    std::vector<unsigned char> m_codeVector;    // Backing data for the code.
#if FIRESTARTER_STATE_DEBUG
    FireStarterCode* m_codeDebug = nullptr;     // For debugging purposes only!
#endif

public:
    inline bool Packetize(FireStarterPacket& packet) // Note: Not used currently.
    {
        bool result = packet.Packetize(m_codeVector);
#if FIRESTARTER_STATE_DEBUG
        m_codeDebug = CodePtr();
#endif
        return result;
    } // Packetize

    inline void operator=(const FireStarterCodeVector* code)
    {
        m_codeVector = code->m_codeVector;
#if FIRESTARTER_STATE_DEBUG
        m_codeDebug = CodePtr();
#endif
    } // operator=

    inline void operator=(const FireStarterCode* code)
    {
        memcpy(m_codeVector.data(), code, m_codeVector.size());
    } // operator=

    inline FireStarterCodeInstruction& operator[](unsigned int i)
    {
        return Code()[i];
    } // operator[]

    inline FireStarterCodeInstruction operator[](unsigned int i) const
    {
        return Code()[i];
    } // operator[]

    inline size_t size(void) const
    {
        return m_codeVector.size();
    } // size

    inline unsigned char* data(void)
    {
        return m_codeVector.data();
    } // data

    inline const unsigned char* data(void) const
    {
        return m_codeVector.data();
    } // data

    inline const std::vector<unsigned char>& Vector(void) const
    {
        return m_codeVector;
    } // Vector

    inline FireStarterCodeGenerate* CodePtr(void)
    {
        return (FireStarterCodeGenerate*)m_codeVector.data();
    } // CodePtr

    inline const FireStarterCodeGenerate* CodePtr(void) const
    {
        return (const FireStarterCodeGenerate*)m_codeVector.data();
    } // CodePtr

    inline FireStarterCodeGenerate& Code(void)
    {
        return *CodePtr();
    } // Code

    inline const FireStarterCodeGenerate& Code(void) const
    {
        return *CodePtr();
    } // Code

    void InitCode(const FireStarterSettings& settings, const FireStarterCode* code = nullptr)
    {
        size_t codeSize = FireStarterCode::CodeSize(settings);
        m_codeVector.resize(codeSize);
#if FIRESTARTER_STATE_DEBUG
        m_codeDebug = CodePtr();
#endif
        if (code)
            memcpy(m_codeVector.data(), code, codeSize);
    } // InitCode

    FireStarterCodeVector(const FireStarterSettings& settings, const FireStarterCode* code = nullptr)
    {
        InitCode(settings, code);
    } // FireStarterCodeVector

    inline FireStarterCodeVector(const FireStarterCodeVector& other)
    {
        *this = other;
    } // FireStarterCodeVector

    FireStarterCodeVector(void)
    {
    } // FireStarterCodeVector
}; // class FireStarterCodeVector

class FireStarterDataVector {
private:
    std::vector<unsigned char> m_dataVector;    // Backing data for the result.
#if FIRESTARTER_STATE_DEBUG
    FireStarterData* m_dataDebug = nullptr;          // For debugging purposes only!
#endif

public:
    inline bool Packetize(FireStarterPacket& packet) // Note: Not used currently.
    {
        bool result = packet.Packetize(m_dataVector);
#if FIRESTARTER_STATE_DEBUG
        m_dataDebug = DataPtr();
#endif
        return result;
    } // Packetize

    inline void operator=(const FireStarterDataVector* other)
    {
        m_dataVector = other->m_dataVector;
#if FIRESTARTER_STATE_DEBUG
        m_dataDebug = DataPtr();
#endif
    } // operator=

    inline void operator=(const FireStarterData* data)
    {
        memcpy(m_dataVector.data(), data, m_dataVector.size());
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
        return m_dataVector.size();
    } // size

    inline unsigned char* data(void)
    {
        return m_dataVector.data();
    } // data

    inline const unsigned char* data(void) const
    {
        return m_dataVector.data();
    } // data

    inline const std::vector<unsigned char>& vector(void) const
    {
        return m_dataVector;
    } // vector

    inline FireStarterData* DataPtr(void)
    {
        return (FireStarterData*)m_dataVector.data();
    } // Result

    inline const FireStarterData* DataPtr(void) const
    {
        return (const FireStarterData*)m_dataVector.data();
    } // DataPtr

    inline FireStarterData& Data(void)
    {
        return *DataPtr();
    } // Result

    inline const FireStarterData& Data(void) const
    {
        return *DataPtr();
    } // Data

    inline void InitData(const FireStarterSettings& settings)
    {
        m_dataVector.resize(FireStarterData::DataSize(settings));
#if FIRESTARTER_STATE_DEBUG
        m_dataDebug = (FireStarterData*)m_dataVector.data();
#endif
    } // InitData

    inline void InitData(unsigned int registers)
    {
        m_dataVector.resize(FireStarterData::DataSize(registers));
#if FIRESTARTER_STATE_DEBUG
        m_dataDebug = (FireStarterData*)m_dataVector.data();
#endif
    } // InitData

    inline FireStarterDataVector(const FireStarterSettings& settings)
    {
        InitData(settings);
    } // FireStarterDataVector

    inline FireStarterDataVector(unsigned int registers)
    {
        InitData(registers);
    } // FireStarterDataVector

    inline FireStarterDataVector(const FireStarterDataVector& other)
    {
        *this = other;
    } // FireStarterDataVector

    inline FireStarterDataVector(const FireStarterState* state, unsigned int variation = 0);

    inline FireStarterDataVector(const FireStarterState& state, unsigned int variation = 0);

    inline FireStarterDataVector(void)
    {
    } // FireStarterDataVector
}; // class FireStarterDataVector

class FireStarterResultVector {
private:
    std::vector<unsigned char> m_resultData;    // Backing data for the result.
    size_t m_resultSize = 0;
    unsigned int m_variations = 0;
    unsigned int m_registers = 0;
#if FIRESTARTER_STATE_DEBUG
    FireStarterResult* m_resultDebug[FIRESTARTER_VARIATIONS] = {};          // For debugging purposes only!
#endif

public:
    inline bool Packetize(FireStarterPacket& packet) // Note: Not used currently.
    {
        bool result = packet.Packetize(m_resultData);
        result = result && packet.Packetize(m_resultSize);
        result = result && packet.Packetize(m_variations);
        result = result && packet.Packetize(m_registers);
#if FIRESTARTER_STATE_DEBUG
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            m_resultDebug[v] = Result(v);
#endif
        return result;
    } // Packetize

    inline void operator=(const FireStarterResultVector* result)
    {
        m_resultData = result->m_resultData;
        m_resultSize = result->m_resultSize;;
        m_variations = result->m_variations;
        m_registers = result->m_registers;
#if FIRESTARTER_STATE_DEBUG
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            m_resultDebug[v] = Result(v);
#endif
    } // operator=

    inline void operator=(const FireStarterResultVector& result)
    {
        m_resultData = result.m_resultData;
        m_resultSize = result.m_resultSize;;
        m_variations = result.m_variations;
        m_registers = result.m_registers;
#if FIRESTARTER_STATE_DEBUG
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            m_resultDebug[v] = Result(v);
#endif
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

    inline FireStarterResult* Result(unsigned int variation = 0)
    {
        return (FireStarterResult*)(m_resultData.data() + m_resultSize * variation);
    } // Result

    inline const FireStarterResult* Result(unsigned int variation = 0) const
    {
        return (const FireStarterResult*)(m_resultData.data() + m_resultSize * variation);
    } // Result

    inline FireStarterData* DataPtr(unsigned int variation = 0)
    {
        return Result(variation)->Data();
    } // DataPtr

    inline const FireStarterData* DataPtr(unsigned int variation = 0) const
    {
        return Result(variation)->Data();
    } // DataPtr

    inline const FireStarterData& Data(unsigned int variation = 0) const
    {
        return *DataPtr(variation);
    } // Data

    inline void DataVector(FireStarterDataVector& dataVector, unsigned int variation = 0) const
    {
        dataVector.InitData(m_registers);
        dataVector = DataPtr(variation);
    } // DataVector

    inline float MaxResult(unsigned int variation) const
    {
        const FireStarterResult* result = Result(variation);
        return result->MaxResult();
    } // MaxResult

    inline float& MaxResult(unsigned int variation)
    {
        return *Result(variation)->MaxResult();
    } // MaxResult

    inline float MaxResults(void) const
    {
        float maxResult = MaxResult(0);
        for (unsigned int v = 1; v < m_variations; v++) {
            float curResult = MaxResult(v);
            maxResult = MAX(maxResult, curResult);
        }
        return maxResult;
    } // MaxResults

    inline unsigned int MaxVariation(void) const
    {
        float maxResult = MaxResult(0);
        unsigned int maxVariation = 0;
        for (unsigned int v = 1; v < m_variations; v++) {
            float curResult = MaxResult(v);
            if (curResult > maxResult) {
                maxResult = curResult;
                maxVariation = v;
            }
        }
        return maxVariation;
    } // MaxVariation

    inline void InitResult(const FireStarterSettings& settings, unsigned int variation = 0)
    {
        Result(variation)->InitResult(settings);
    } // InitResult

    inline void InitResults(const FireStarterSettings& settings)
    {
        m_resultSize = FireStarterResult::ResultSize(settings.m_registers);
        m_variations = settings.m_variations;
        m_registers = settings.m_registers;
        m_resultData.resize(m_resultSize * m_variations, 0);
        for (unsigned int v = 0; v < m_variations; v++)
            InitResult(settings, v);
#if FIRESTARTER_STATE_DEBUG
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            m_resultDebug[v] = Result(v);
#endif
    } // InitResults

    inline FireStarterResultVector(const FireStarterSettings& settings)
    {
        InitResults(settings);
    } // FireStarterResultVector

    inline FireStarterResultVector(const FireStarterResultVector& other)
    {
        *this = other;
    } // FireStarterResultVector

    inline FireStarterResultVector(void)
    {
    } // FireStarterResultVector
}; // class FireStarterResultVector

class FireStarterBestCodes {
private:
    std::set<std::vector<unsigned char>> m_testedCodes;
    std::vector<FireStarterCodeVector> m_bestCodes;
    std::vector<float> m_bestResults;
    FireStarterSettings m_settings;
    size_t m_codeSize = 0;
    size_t m_maxCodes = 0;
    size_t m_numCodes = 0;
    float m_worstResult = 0.0f;

public:
    const FireStarterCode* GetBestCode(void);
    bool AddCode(const FireStarterCode* code, float result);
    float WorstResult(void);
    void InitBestCodes(const FireStarterSettings& settings, size_t maxCodes = FIRESTARTER_NUM_BEST);
    FireStarterBestCodes(const FireStarterSettings& settings, size_t maxCodes = FIRESTARTER_NUM_BEST);
    FireStarterBestCodes(void);
}; // FireStarterBestCodes

class FireStarterState {
public:
    FireStarterSettings m_settings;
    FireStarterResultVector m_results;
    FireStarterCodeVector m_code;
    FireStarterBestCodes m_bestCodes;
    SinSimNetwork m_network;
    SimpleTimer m_timer;
    std::string m_evaluateCode;
    std::vector<unsigned int> m_variationOrder;
    std::vector<unsigned int> m_variationCount;
    unsigned long long m_generation = 0;
    unsigned long long m_age = 0;
    unsigned long long m_evolution = 0;
    unsigned long long m_index = 0;
    unsigned long long m_evolveIndex = 0;
    unsigned long long m_id = 0;
    unsigned long long m_test = 0;
    unsigned long long m_seed = 0;
    unsigned long long m_optimize_pass = 0;
    unsigned int m_minIndex = 0;
    unsigned int m_uniqueRegisters = 0;
    float m_bestResult = -1.0f; // Set to m_settings.m_startResult when the state is initialized.
    float m_oldResult = -1.0f;  // Set to m_settings.m_startResult when the state is initialized.
    float m_evolveWeight = 0.0f;
    float m_precision = 0.0f;
    bool m_optimizeValid = false;

private:
    inline void swap(const FireStarterState& other)
    {
// Note: Commented out values are not copied intentionally.
        m_settings = other.m_settings;
        m_results = other.m_results;
        m_code = other.m_code;
//      m_bestCodes = other.m_bestCodes;
        m_bestCodes.InitBestCodes(m_settings);
        m_network = other.m_network;
//      m_timer = other.m_timer;
        m_evaluateCode = other.m_evaluateCode;
        m_variationOrder = other.m_variationOrder;
        m_variationCount = other.m_variationCount;
        m_generation = other.m_generation;
        m_age = other.m_age;
        m_evolution = other.m_evolution;
        m_index = other.m_index;
        m_evolveIndex = other.m_evolveIndex;
        m_id = other.m_id;
        m_test = other.m_test;
        m_seed = other.m_seed;
        m_optimize_pass = other.m_optimize_pass;
        m_minIndex = other.m_minIndex;
        m_uniqueRegisters = other.m_uniqueRegisters;
        m_bestResult = other.m_bestResult;
        m_oldResult = other.m_oldResult;
        m_evolveWeight = other.m_evolveWeight;
        m_precision = other.m_precision;
        m_optimizeValid = other.m_optimizeValid;
    } // swap

public:
    inline bool Packetize(FireStarterPacket& packet)
    {
        bool result = true;
        result = result && packet.Packetize(&m_settings, sizeof(m_settings));
        result = result && m_results.Packetize(packet);
        result = result && m_code.Packetize(packet);
//      result = result && m_bestCodes.Packetize(packet);
        result = result && packet.Packetize(&m_network, sizeof(m_network));
//      result = result && packet.Packetize(&m_timer, sizeof(m_timer));
        result = result && packet.Packetize(m_evaluateCode);
        result = result && packet.Packetize(m_generation);
        result = result && packet.Packetize(m_age);
        result = result && packet.Packetize(m_evolution);
        result = result && packet.Packetize(m_index);
        result = result && packet.Packetize(m_evolveIndex);
        result = result && packet.Packetize(m_id);
        result = result && packet.Packetize(m_test);
        result = result && packet.Packetize(m_seed);
        result = result && packet.Packetize(m_optimize_pass);
        result = result && packet.Packetize(m_minIndex);
        result = result && packet.Packetize(m_uniqueRegisters);
        result = result && packet.Packetize(m_bestResult);
        result = result && packet.Packetize(m_oldResult);
        result = result && packet.Packetize(m_evolveWeight);
        result = result && packet.Packetize(m_optimizeValid);
        return result;
    } // Packetize

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
        return FireStarterResult::ResultSize(m_settings.m_registers);
    } // ResultSize

    inline const FireStarterResult* Result(unsigned int variation = 0) const
    {
         return m_results.Result(variation);
    } // Result

    inline FireStarterResult* Result(unsigned int variation = 0)
    {
        return m_results.Result(variation);
    } // Result

    inline const FireStarterResultVector& ResultVector(void) const
    {
        return m_results;
    } // ResultVector(void)

    inline void DataVector(FireStarterDataVector& dataVector, unsigned int variation = 0) const
    {
        m_results.DataVector(dataVector, variation);
    } // ResultVector(void)

    inline const SinSimNetwork* Network(void) const
    {
        return &m_network;
    } // Network

    inline float MaxResults(void) const
    {
        if (m_settings.m_mode == FIRESTARTER_SINSIM)
            return m_network.grade;
        else
            return m_results.MaxResults();
    } // MaxResults

    inline float MaxResult(unsigned int variation) const
    {
        return m_results.MaxResult(variation);
    } // MaxResult

    inline float& MaxResult(unsigned int variation)
    {
        return m_results.MaxResult(variation);
    } // MaxResult

    inline unsigned int MaxVariation(void) const
    {
        if (m_settings.m_mode == FIRESTARTER_SINSIM)
            return 0;
        else
            return m_results.MaxVariation();
    } // MaxVariation

    inline unsigned short EvolveAge1(unsigned int variation) const
    {
        const FireStarterResult* result = Result(variation);
        return result->EvolveAge1();
    } // EvolveAge1

    inline unsigned short* EvolveAge1(unsigned int variation)
    {
        FireStarterResult* result = Result(variation);
        return result->EvolveAge1();
    } // EvolveAge1

    inline unsigned short EvolveAge2(unsigned int variation) const
    {
        const FireStarterResult* result = Result(variation);
        return result->EvolveAge2();
    } // EvolveAge2

    inline unsigned short* EvolveAge2(unsigned int variation)
    {
        FireStarterResult* result = Result(variation);
        return result->EvolveAge2();
    } // EvolveAge2

    inline size_t CodeSize(void) const
    {
        return FireStarterCode::CodeSize(m_settings);
    } // CodeSize

    inline FireStarterCodeGenerate* Code(void)
    {
        return m_code.size() == CodeSize() ? m_code.CodePtr() : nullptr;
    } // Code

    inline const FireStarterCodeGenerate* Code(void) const
    {
        return m_code.size() == CodeSize() ? m_code.CodePtr() : nullptr;
    } // Code

    const std::vector<unsigned char>& CodeVector(void) const
    {
        return m_code.Vector();
    } // CodeVector

    inline bool ResultValid(void) const
    {
        if (MaxResults() == m_settings.m_startResult)
            return false;
        return true;
    } // ResultValid

    inline bool Initialized(void) const
    {
        return m_results.size() == ResultSize();
    } // Initialized

    inline bool Complete(void) const
    {
        return MaxResults() < m_settings.m_target;
    } // Complete

    inline unsigned int PassMode(void) const
    {
        return m_settings.m_mode;
    } // PassMode

    inline const char* Mode(void) const
    {
        return FireStarterSettings::Mode(PassMode());
    } // Mode(void) const

    inline float SelectWeight(void) const
    {
#if 1
        return MaxResults() * m_age;
#else
        return MaxResults() * m_generation;
#endif
    } // EvolveWeight

    inline float EvolveWeight(void) const
    {
        return MaxResults() * m_generation;
    } // EvolveWeight

    inline unsigned long long EvolutionSeed(void) const
    {
        return SEED1(m_settings.m_evolveSeed) + SEED2(m_generation) + SEED3(m_id) + SEED4(m_test);
    } // EvolutionSeed

    inline unsigned long long OptimizationSeed(unsigned long long optimizationPass = 0) const
    {
        return SEED1(m_settings.m_optimizeSeed) + SEED2(optimizationPass) + SEED3(m_generation) + SEED4(m_id) + SEED5(m_test);
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
        Code()->InitCode(m_seed, m_settings.m_instructions, m_settings.m_registers, m_settings.m_opcodes);
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

    static void SettingsText(const FireStarterSettings& settings, std::string& code, const std::string& prefix = "", const std::string& postfix = "");
    void SaveSettings(std::string& code) const;
    void SaveCode(std::string& code) const;
    void SaveStats(std::string& code) const;
    void SaveVariation(unsigned int variation, std::string& code) const;
    void SaveResults(std::string& code) const;
    void SaveState(std::string& code) const;
    float TestResults(void) const;
    float EvaluateCode(void) const;

    inline void InitResult(unsigned int variation = 0)
    {
        m_results.InitResult(m_settings, variation);
    } // InitResults

    inline void InitResults(void)
    {
        m_results.InitResults(m_settings);
    } // InitResults

    inline void InitCode(void)
    {
        m_code.InitCode(m_settings);
    } // InitCode

    inline void InitBestCodes(void)
    {
        m_bestCodes.InitBestCodes(m_settings);
    } // InitBestCodes

    inline void InitNetwork(void)
    {
        m_network.SinSimInitNetwork();
    } // InitCode

    inline void InitNetwork(const FireStarterSettings& settings, const SinSimNetwork& network, unsigned int index)
    {
        m_settings = settings;
        m_network = network;
        m_oldResult = m_bestResult;
        m_bestResult = MaxResults();
        m_minIndex = index;
        m_optimizeValid = true;
    } // InitNetwork

    void InitState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0);
    void InitCode(const FireStarterSettings& settings, const FireStarterCode* codes, float result, unsigned int index);
    void InitResult(const FireStarterSettings& settings, const FireStarterCode* codes, const FireStarterResult* population, unsigned int index, unsigned int variation = 0);
    void InitResult(const FireStarterSettings& settings, const FireStarterResult* population, unsigned int index, unsigned int variation = 0);
    void InitResults(const FireStarterSettings& settings, const FireStarterCode* codes, const FireStarterResult* population, unsigned int index);
    void InitResults(const FireStarterSettings& settings, const FireStarterResult* population, unsigned int index);

    inline FireStarterState(const FireStarterSettings& settings, unsigned long long generation = 0, unsigned long long index = 0, unsigned long long id = 0, unsigned long long test = 0)
    {
        InitState(settings, generation, index, id, test);
    } // FireStarterState

    inline FireStarterState(const FireStarterState& other) : m_code(other.m_code), m_results(other.m_results), m_bestCodes(other.m_bestCodes)
    {
        m_timer = other.m_timer;
        swap(other);
    } // FireStarterState

    inline FireStarterState(void) 
    {
    } // FireStarterState
}; // class FireStarterState;

inline FireStarterDataVector::FireStarterDataVector(const FireStarterState* state, unsigned int variation)
{
    state->DataVector(*this, variation);
} // FireStarterDataVector

inline FireStarterDataVector::FireStarterDataVector(const FireStarterState& state, unsigned int variation)
{
    state.DataVector(*this, variation);
} // FireStarterDataVector
