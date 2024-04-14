#pragma once
#include "FireStarterSettings.h"

typedef struct FireStarterData {
    float d[FIRESTARTER_REGISTERS]; // Note: Dynamically allocated!

    static inline size_t DataSize(size_t registers)
    {
        return sizeof(float) * registers;
    } // DataSize
} FireStarterData;

typedef struct FireStarterResult {
    float m_resultMin;
    unsigned int m_resultIndex;
    float m_data[FIRESTARTER_REGISTERS]; // Note: Dynamically allocated!

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

    inline unsigned int* Index(void)
    {
        return &m_resultIndex;
    } // Index

    inline unsigned int Index(void) const
    {
        return m_resultIndex;
    } // Index

    inline FireStarterData* Data(void)
    {
        return (FireStarterData*)m_data;
    } // Data

    inline const FireStarterData* Data(void) const
    {
        return (const FireStarterData*)m_data;
    } // Data

    inline void Init(unsigned int index, unsigned int registers, float startResult)
    {
        FireStarterData* resultData = Data();
        for (unsigned int i = 0; i < registers; i++)
            resultData->d[i] = 0.0f;
        m_resultMin = startResult;
        m_resultIndex = index;
    } // Init

    inline void Init(unsigned int index, unsigned int registers, float resultMin, const FireStarterData& data)
    {
        FireStarterData* resultData = Data();
        for (unsigned int i = 0; i < registers; i++)
            resultData->d[i] = data.d[i];
        m_resultMin = resultMin;
        m_resultIndex = index;
    } // Init

    inline void Init(unsigned int index, unsigned int registers, float resultMin, const FireStarterData* data)
    {
        FireStarterData* resultData = Data();
        for (unsigned int i = 0; i < registers; i++)
            resultData->d[i] = data->d[i];
        m_resultMin = resultMin;
        m_resultIndex = index;
    } // Init

    inline void Init(unsigned int index, unsigned int registers, const FireStarterResult* initResult)
    {
        m_resultMin = initResult->MinResult();
        m_resultIndex = index;

        FireStarterData* resultData = Data();
        const FireStarterData* srcData = initResult->Data();
        for (unsigned int i = 0; i < registers; i++)
            resultData->d[i] = srcData->d[i];
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

    inline unsigned int* Index(size_t variation)
    {
        return Result(variation)->Index();
    } // Index

    inline unsigned int Index(size_t variation) const
    {
        return Result(variation)->Index();
    } // Index

    inline FireStarterData* Data(size_t variation)
    {
        return Result(variation)->Data();
    } // Data

    inline const FireStarterData* Data(size_t variation) const
    {
        return Result(variation)->Data();
    } // Data

    inline void InitResult(unsigned int index, unsigned int registers, unsigned int variations, unsigned int variation, float resultMin, FireStarterData& data)
    {
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers);
        m_resultsSize = FireStarterResults::ResultsSize(registers, variations);
        Result(variation)->Init(index, registers, resultMin, data);
    } // InitResult

    inline void InitResults(unsigned int index, unsigned int registers, unsigned int variations)
    {
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers);
        m_resultsSize = FireStarterResults::ResultsSize(registers, variations);
    } // Init

    inline void InitResults(unsigned int index, unsigned int registers, unsigned int variations, float startResult)
    {
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers);
        m_resultsSize = FireStarterResults::ResultsSize(registers, variations);
        for (unsigned int v = 0; v < m_variations; v++)
            Result(v)->Init(index, registers, startResult);
    } // Init

    inline void InitResults(unsigned int index, unsigned int registers, unsigned int variations, const FireStarterResults* initResults)
    {
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers);
        m_resultsSize = FireStarterResults::ResultsSize(registers, variations);
        if ((registers == initResults->m_registers) && (variations == initResults->m_variations))
            for (unsigned int v = 0; v < m_variations; v++)
                Result(v)->Init(index, registers, initResults->Result(v));
        else // Note: This is a bug!
            for (unsigned int v = 0; v < m_variations; v++)
                Result(v)->Init(index, registers, 10.0f);
    } // Init
} FireStarterResults;

typedef struct FireStarterPopulation {
    size_t m_members;
    unsigned int m_registers;
    unsigned int m_variations;
    FireStarterResult m_memory[8]; // Note: Dynamically allocated (8 forces 64 bit alignment)!

    static inline size_t PopulationSize(size_t members, size_t registers, size_t variations)
    {
        return (sizeof(FireStarterPopulation) - sizeof(m_memory)) + variations * members * FireStarterResult::ResultSize(registers);
    } // PopulationSize

    inline size_t MemorySize(size_t members) const
    {
        return members * FireStarterResult::ResultSize(m_registers);
    } // MemorySize

    inline size_t VariationSize(size_t members) const
    {
        return members * ResultSize();
    } // VariationSize

    inline size_t VariationSize(void) const
    {
        return VariationSize(m_members);
    } // VariationSize

    inline size_t VariationsSize(unsigned int variations) const
    {
        return VariationSize(variations);
    } // DataSize

    inline size_t VariationsSize(void) const
    {
        return m_variations * VariationSize();
    } // DataSize

    inline size_t DataSize(unsigned int registers)
    {
        return FireStarterData::DataSize(registers);
    } // DataSize

    inline size_t DataSize(void)
    {
        return DataSize(m_registers);
    } // DataSize

    inline FireStarterResult* Result(unsigned int member, unsigned int variation)
    {
        return (FireStarterResult*)((unsigned char*)m_memory + variation * VariationSize() + member * ResultSize());
    } // Result

    inline const FireStarterResult* Result(unsigned int member, unsigned int variation) const
    {
        return (const FireStarterResult*)((unsigned char*)m_memory + variation * VariationSize() + member * ResultSize());
    } // Result

    inline size_t ResultSize(void) const
    {
        return FireStarterResult::ResultSize(m_registers);
    } // ResultsSize

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Data();
    } // Data

    inline float* MinResult(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->MinResult();
    } // MinResult

    inline float MinResult(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->MinResult();
    } // MinResult

    inline unsigned int* Index(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Index();
    } // SourceMember

    inline unsigned int Index(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Index();
    } // SourceMember

    inline void InitResult(unsigned int member, unsigned int variation, unsigned int index, unsigned int registers, float resultMin, const FireStarterData& data)
    {
        Result(member, variation)->Init(index, registers, resultMin, data);
    } // InitResult

    inline void InitResult(unsigned int member, unsigned int variation, unsigned int index, unsigned int registers, float resultMin, const FireStarterData* data)
    {
        Result(member, variation)->Init(index, registers, resultMin, data);
    } // InitResult

    inline void Init(size_t population, unsigned int registers, unsigned int variations)
    {
        m_members = population;
        m_registers = registers;
        m_variations = variations;
    } // Init

    inline void Init(const FireStarterSettings& settings)
    {
        Init(settings.m_population, settings.m_registers, settings.m_variations);
    } // Init

    inline void InitPopulation(const FireStarterSettings& settings)
    {
        Init(settings);
        for (unsigned int v = 0; v < m_variations; v++)
            for (unsigned int i = 0; i < m_members; i++) {
                Result(i, v)->Init(i, m_registers, settings.m_startResult);
                Result(i, v)->m_resultIndex = 0;
            }
    } // InitPopulation

    inline void InitPopulation(const FireStarterSettings& settings, const FireStarterResults* initResults)
    {
        Init(settings);
        for (unsigned int v = 0; v < m_variations; v++)
            for (unsigned int i = 0; i < m_members; i++)
                Result(i, v)->Init(i, m_registers, initResults->Result(v));
    } // InitPopulation
} FireStarterPopulation;
