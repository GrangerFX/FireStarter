#pragma once
#include "FireStarterSettings.h"
#include "HashRandom.h"

typedef struct FireStarterData {
    float d[FIRESTARTER_REGISTERS]; // Note: Dynamically allocated!

    inline float& operator[](unsigned int i)
    {
        return d[i];
    } // operator[]

    inline float operator[](unsigned int i) const
    {
        return d[i];
    } // operator[]

    static inline size_t DataSize(size_t registers)
    {
        return sizeof(float) * registers;
    } // DataSize

    inline void Copy(const FireStarterData& data, size_t registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = data.d[i];
    } // Copy

    inline void Copy(const FireStarterData* data, size_t registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = data->d[i];
    } // Copy

    inline void Init(size_t registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = 0.0f;
    } // Init

    inline void Init(unsigned long long& seed, size_t registers, size_t maxRegisters, float startScale)
    {
        for (size_t i = 0; i < registers; i++)
            d[i] = RANDOMFACTOR(seed) * startScale; // Randomize the active registers.
        for (size_t i = registers; i < maxRegisters; i++)
            d[i] = 0.0f;                            // Clear the unused registers.
    } // Init
} FireStarterData;

typedef struct FireStarterResult {
    float m_resultMin;
    unsigned int m_resultAge;
    FireStarterData m_data; // Note: Dynamically allocated!

    static inline size_t ResultSize(size_t registers)
    {
        return (sizeof(FireStarterResult) - sizeof(m_data)) + (registers) * sizeof(float);
    } // ResultSize

    inline float* MinResult(void)
    {
        return &m_resultMin;
    } // MinResult

    inline float MinResult(void) const
    {
        return m_resultMin;
    } // MinResult

    inline unsigned int* Age(void)
    {
        return &m_resultAge;
    } // Age

    inline unsigned int Age(void) const
    {
        return m_resultAge;
    } // Age

    inline FireStarterData* Data(void)
    {
        return &m_data;
    } // Data

    inline const FireStarterData* Data(void) const
    {
        return &m_data;
    } // Data

    inline void Init(const FireStarterSettings& settings, unsigned int age = 0)
    {
        FireStarterData* resultData = Data();
        resultData->Init(settings.m_registers);
        m_resultMin = settings.m_startResult;
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned long long& seed, size_t registers, unsigned int age = 0)
    {
        FireStarterData* resultData = Data();
        resultData->Init(seed, registers, settings.m_registers, settings.m_startScale);
        m_resultMin = settings.m_startResult;
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterSettings& settings, float resultMin, const FireStarterData& data, unsigned int age = 0)
    {
        FireStarterData* resultData = Data();
        for (size_t i = 0; i < settings.m_registers; i++)
            resultData->d[i] = data.d[i];
        m_resultMin = resultMin;
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterSettings& settings, float resultMin, const FireStarterData* data, unsigned int age = 0)
    {
        FireStarterData* resultData = Data();
        resultData->Copy(data, settings.m_registers);
        m_resultMin = resultMin;
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterSettings& settings, const FireStarterResult* initResult, unsigned int age = 0)
    {
        FireStarterData* resultData = Data();
        resultData->Copy(initResult->Data(), settings.m_registers);
        m_resultMin = initResult->MinResult();
        m_resultAge = age;
    } // Init
} FireStarterResult;

typedef struct FireStarterResults {
    size_t m_registers;
    size_t m_variations;
    size_t m_resultSize;
    size_t m_resultsSize;
    FireStarterResult m_memory[FIRESTARTER_VARIATIONS]; // Note: Dynamically allocated!

    static inline size_t ResultsSize(size_t registers, size_t variations)
    {
        return (sizeof(FireStarterResults) - sizeof(m_memory)) + FireStarterResult::ResultSize(registers) * variations;
    } // ResultSize

    inline FireStarterResult* Result(size_t variation)
    {
        return (FireStarterResult*)((unsigned char*)m_memory + variation * m_resultSize);
    } // Result

    inline const FireStarterResult* Result(size_t variation) const
    {
        return (const FireStarterResult*)((unsigned char*)m_memory + variation * m_resultSize);
    } // Result

    inline float* MinResult(size_t variation)
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline float MinResult(size_t variation) const
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline unsigned int* Age(size_t variation)
    {
        return Result(variation)->Age();
    } // Age

    inline unsigned int Age(size_t variation) const
    {
        return Result(variation)->Age();
    } // Age

    inline FireStarterData* Data(size_t variation)
    {
        return Result(variation)->Data();
    } // Data

    inline const FireStarterData* Data(size_t variation) const
    {
        return Result(variation)->Data();
    } // Data

    inline void InitResults(const FireStarterSettings& settings, const FireStarterResults* initResults = nullptr)
    {
        m_registers = settings.m_registers;
        m_variations = settings.m_variations;
        m_resultSize = FireStarterResult::ResultSize(m_registers);
        m_resultsSize = FireStarterResults::ResultsSize(m_registers, m_variations);
        if (initResults && (m_registers == initResults->m_registers) && (m_variations == initResults->m_variations))
            for (unsigned int v = 0; v < m_variations; v++)
                Result(v)->Init(settings, initResults->Result(v));
        else
            for (unsigned int v = 0; v < m_variations; v++)
                Result(v)->Init(settings);
    } // Init
} FireStarterResults;

typedef struct FireStarterPopulation {
    FireStarterResult m_memory[64]; // Note: Dynamically allocated.

    static inline size_t DataSize(const FireStarterSettings& settings)
    {
        return FireStarterData::DataSize(settings.m_registers);
    } // DataSize

    static inline size_t ResultSize(const FireStarterSettings& settings)
    {
        return FireStarterResult::ResultSize(settings.m_registers);
    } // ResultsSize

    static inline size_t VariationSize(const FireStarterSettings& settings)
    {
        return settings.m_population * ResultSize(settings);
    } // VariationSize

    static inline size_t PopulationSize(const FireStarterSettings& settings)
    {
        return settings.m_variations * VariationSize(settings);
    } // PopulationSize

    inline FireStarterResult* Result(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return (FireStarterResult*)((unsigned char*)m_memory + variation * VariationSize(settings) + member * ResultSize(settings));
    } // Result

    inline const FireStarterResult* Result(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return (FireStarterResult*)((unsigned char*)m_memory + variation * VariationSize(settings) + member * ResultSize(settings));
    } // Result

    inline FireStarterData* Data(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->Data();
    } // Data

    inline float* MinResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->MinResult();
    } // MinResult

    inline float MinResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->MinResult();
    } // MinResult

    inline unsigned int* Age(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->Age();
    } // Age

    inline unsigned int Age(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->Age();
    } // Age

    inline void InitMemberResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation, unsigned int age, float resultMin, const FireStarterData& data)
    {
        Result(settings, member, variation)->Init(settings, resultMin, data, age);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation, unsigned int age, float resultMin, const FireStarterData* data)
    {
        Result(settings, member, variation)->Init(settings, resultMin, data, age);
    } // InitMemberResult
} FireStarterPopulation;
