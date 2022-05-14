#pragma once
#include "FireStarterInstructions.h"

typedef struct FireStarterResult {
    FireStarterInstructions instructions;
    FireStarterData data[PROGRAM_VARIATIONS];
    float minResult[PROGRAM_VARIATIONS];
    float maxResult;
    float padding;

    static inline size_t InstructionsSize(unsigned int instructions)
    {
        return sizeof(FireStarterInstruction) * instructions;
    } // InstructionsSize

    static inline size_t DataSize(unsigned int instructions)
    {
        return sizeof(float) * instructions;
    } // DataSize

    static inline size_t VariationsSize(unsigned int instructions, unsigned int variations)
    {
        return sizeof(float) * instructions * variations;
    } // DataSize

    static inline size_t ResultSize(unsigned int instructions, unsigned int variations)
    {
        return InstructionsSize(instructions) + VariationsSize(instructions, variations) + sizeof(float) * variations + sizeof(float) * 2;
    } // ResultSize
} FireStarterResult;

typedef struct FireStarterResults {
    size_t m_members;
    size_t m_instructions;
    size_t m_variations;
    size_t m_instructionSize;
    size_t m_dataSize;
    size_t m_variationsSize;
    size_t m_resultSize;
    size_t m_resultsSize;
    unsigned char m_memory[16];

    static inline size_t ResultsSize(unsigned int members, unsigned int instructions, unsigned int variations)
    {
        return sizeof(FireStarterResults) + FireStarterResult::ResultSize(instructions, variations) * members - 16;
    } // ResultsSize

    inline FireStarterResult* Result(unsigned int member)
    {
        return (FireStarterResult*)(m_memory + member * m_resultSize);
    } // Result

    inline FireStarterInstructions* Instructions(unsigned int member)
    {
        return &Result(member)->instructions;
    } // Instructions

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return &Result(member)->data[variation];
    } // Data

    inline float* MinResult(unsigned int member)
    {
        return Result(member)->minResult;
    } // MinResult

    inline float* MaxResult(unsigned int member)
    {
        return &Result(member)->maxResult;
    } // MaxResult

    void InitResults(unsigned int members, unsigned int instructions, unsigned int variations)
    {
        m_members = members;
        m_instructions = instructions;
        m_variations = variations;
        m_instructionSize = FireStarterResult::InstructionsSize(instructions);
        m_dataSize = FireStarterResult::DataSize(instructions);
        m_variationsSize = FireStarterResult::VariationsSize(instructions, variations);
        m_resultSize = FireStarterResult::ResultSize(instructions, variations);
        m_resultsSize = ResultsSize(members, instructions, variations);
    } // FireStarterResults
} FireStarterResults;
