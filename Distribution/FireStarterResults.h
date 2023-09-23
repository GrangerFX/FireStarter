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
    unsigned int m_resultSize;  
    float m_resultMin;
    unsigned int m_resultDebug;
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

    inline unsigned int* Debug(void)
    {
        return &m_resultDebug;
    } // Debug

    inline unsigned int Debug(void) const
    {
        return m_resultDebug;
    } // Debug

    inline FireStarterData* Data(void)
    {
        return (FireStarterData*)m_data;
    } // Data

    inline const FireStarterData* Data(void) const
    {
        return (const FireStarterData*)m_data;
    } // Data

    inline size_t DataSize(void)
    {
        return FireStarterData::DataSize(m_resultSize);
    } // DataSize

    inline void Init(unsigned int index, unsigned int registers, float startResult)
    {
        m_resultSize = registers;
        FireStarterData* data = Data();
        for (unsigned int i = 0; i < registers; i++)
            data->d[i] = 0.0f;
        m_resultMin = startResult;
        m_resultIndex = index;
        m_resultDebug = 0;
    } // Init

    inline void Init(unsigned int index, unsigned int registers, const FireStarterResult* initResult)
    {
        m_resultSize = registers;
        m_resultMin = initResult->MinResult();
        m_resultIndex = index;
        m_resultDebug = 0;

        FireStarterData* data = Data();
        const FireStarterData* srcData = initResult->Data();
        for (unsigned int i = 0; i < registers; i++)
            data->d[i] = srcData->d[i];
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

    inline unsigned int* Debug(size_t variation)
    {
        return Result(variation)->Debug();
    } // Debug

    inline unsigned int Debug(size_t variation) const
    {
        return Result(variation)->Debug();
    } // Debug

    inline FireStarterData* Data(size_t variation)
    {
        return Result(variation)->Data();
    } // Data

    inline const FireStarterData* Data(size_t variation) const
    {
        return Result(variation)->Data();
    } // Data

    inline size_t DataSize(size_t variation = 0)
    {
        return Result(variation)->DataSize();
    } // DataSize

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
    size_t m_registers;
    size_t m_variations;
    size_t m_resultSize;
    size_t m_variationSize;
    size_t m_variationsSize;
    FireStarterResult m_memory[FIRESTARTER_EVOLVE_POPULATION * FIRESTARTER_VARIATIONS]; // Note: Dynamically allocated!

    static inline size_t PopulationSize(size_t members, size_t registers, size_t variations)
    {
        return (sizeof(FireStarterPopulation) - sizeof(m_memory)) + variations * members * FireStarterResult::ResultSize(registers);
    } // PopulationSize

    inline size_t MemorySize(size_t members) const
    {
        return members * FireStarterResult::ResultSize(m_registers);
    } // MemorySize

    inline size_t VariationSize(void) const
    {
        return m_variationSize;
    } // VariationSize

    inline size_t VariationsSize(void) const
    {
        return m_variationsSize;
    } // DataSize

    inline FireStarterResult* Result(unsigned int member, unsigned int variation)
    {
        return (FireStarterResult*)((unsigned char*)m_memory + variation * m_variationSize + member * m_resultSize);
    } // Result

    inline const FireStarterResult* Result(unsigned int member, unsigned int variation) const
    {
        return (const FireStarterResult*)((unsigned char*)m_memory + variation * m_variationSize + member * m_resultSize);
    } // Result

    inline size_t ResultSize(void)
    {
        return m_resultSize;
    } // ResultsSize

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Data();
    } // Data

    inline size_t DataSize(void)
    {
        return FireStarterData::DataSize(m_registers);
    } // DataSize

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

    inline unsigned int* Debug(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Debug();
    } // Debug

    inline unsigned int Debug(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Debug();
    } // Debug

    inline void InitPopulation(unsigned int members, unsigned int registers, unsigned int variations, float startResult)
    {
        m_members = members;
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(m_registers);
        m_variationSize = m_members * m_resultSize;
        m_variationsSize = m_variations * m_variationSize;
        for (unsigned int v = 0; v < variations; v++)
            for (unsigned int i = 0; i < members; i++)
                Result(i, v)->Init(i, registers, startResult);
    } // InitPopulation

    inline void InitPopulation(unsigned int members, unsigned int registers, unsigned int variations, const FireStarterResults* initResults)
    {
        m_members = members;
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers);
        m_variationSize = m_members * m_resultSize;
        m_variationsSize = m_variations * m_variationSize;
        for (unsigned int v = 0; v < variations; v++)
            for (unsigned int i = 0; i < members; i++)
                Result(i, v)->Init(i, registers, initResults->Result(v));
    } // InitPopulation
} FireStarterPopulation;
