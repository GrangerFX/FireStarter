#pragma once
#include "FireStarterResults.h"
#include "Checksum.h"

typedef struct FireStarterPopulation : public FireStarterResult
{
    static inline FireStarterResult* PopulationResult(FireStarterResult* population, size_t index, unsigned int variation = 0)
    {
        return (FireStarterResult*)((char*)population + ResultSize() * (index * FIRESTARTER_VARIATIONS + variation));
    } // PopulationResult

    static inline const FireStarterResult* PopulationResult(const FireStarterResult* population, size_t index, unsigned int variation = 0)
    {
        return (FireStarterResult*)((char*)population + ResultSize() * (index * FIRESTARTER_VARIATIONS + variation));
    } // Result

    static inline FireStarterResult* PopulationResult(FireStarterResult* population, const FireStarterSettings& settings, size_t index, unsigned int variation = 0)
    {
        return (FireStarterResult*)((char*)population + ResultSize(settings.m_registers) * (index * settings.m_variations + variation));
    } // PopulationResult

    static inline const FireStarterResult* PopulationResult(const FireStarterResult* population, const FireStarterSettings& settings, size_t index, unsigned int variation = 0)
    {
        return (FireStarterResult*)((char*)population + ResultSize(settings.m_registers) * (index * settings.m_variations + variation));
    } // PopulationResult

    static inline float PopulationMaxResult(const FireStarterResult* population, const FireStarterSettings& settings, size_t index, unsigned int variation = 0)
    {
        return PopulationResult(population, settings, index, variation)->MaxResult();
    } // PopulationMaxResult

    static inline float PopulationMaxResults(const FireStarterResult* population, const FireStarterSettings& settings, size_t index)
    {
        float maxResult = PopulationMaxResult(population, settings, index, 0);
        for (unsigned int v = 1; v < settings.m_variations; v++) {
            float result = PopulationMaxResult(population, settings, index, v);
            maxResult = MAX(maxResult, result);
        }
        return maxResult;
    } // PopulationMaxResults

    static inline size_t PopulationSize(const FireStarterSettings& settings)
    {
        return ResultSize(settings.m_registers) * ((size_t)settings.m_variations * (size_t)settings.m_population);
    } // PopulationSize

    static inline uint64_t PopulationResultChecksum(const FireStarterResult* population, const FireStarterSettings& settings, size_t index, unsigned int variation = 0)
    {
        const FireStarterResult* member = PopulationResult(population, settings, index, variation);
        return Checksum(member, FireStarterResult::ResultSize(settings));
    } // PopulationResultChecksum

    static inline uint64_t PopulationVariationChecksum(const FireStarterResult* population, const FireStarterSettings& settings, unsigned int variation)
    {
        uint64_t checksum = 0;
        for (unsigned int i = 0; i < settings.m_population; i++)
            checksum ^= PopulationResultChecksum(population, settings, i, variation);
        return checksum;
    } // PopulationVariationChecksum

    static inline uint64_t PopulationChecksum(const FireStarterResult* population, const FireStarterSettings& settings)
    {
        uint64_t checksum = 0;
        for (unsigned int v = 0; v < settings.m_variations; v++)
            checksum ^= PopulationVariationChecksum(population, settings, v);
        return checksum;
    } // PopulationChecksum
} FireStarterPopulation;