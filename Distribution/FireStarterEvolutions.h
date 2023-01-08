#pragma once
#include "FireStarterInstructions.h"
#include "FireStarterResults.h"

typedef struct FireStarterEvolution {
    size_t m_instructions;
    size_t m_registers;
    size_t m_variations;
    size_t m_instructionsSize;
    size_t m_resultsSize;
    float m_maxResult;
    unsigned char m_memory[16];

    static inline size_t EvolutionSize(size_t instructions, size_t registers, size_t variations)
    {
        return (sizeof(FireStarterEvolution) - sizeof(m_memory)) + FireStarterInstructions::InstructionsSize(instructions) + FireStarterResults::ResultsSize(registers, variations);
    } // EvolutionsSize

    inline FireStarterInstructions* Instructions(void)
    {
        return (FireStarterInstructions*)m_memory;
    } // Instructions

    inline const FireStarterInstructions* Instructions(void) const
    {
        return (const FireStarterInstructions*)m_memory;
    } // Instructions

    inline FireStarterResults* Results(void)
    {
        return (FireStarterResults*)(m_memory + m_instructionsSize);
    } // Results

    inline const FireStarterResults* Results(void) const
    {
        return (const FireStarterResults*)(m_memory + m_instructionsSize);
    } // Results

    inline FireStarterResult* Result(unsigned int variation)
    {
        return Results()->Result(variation);
    } // Result

    inline const FireStarterResult* Result(unsigned int variation) const
    {
        return Results()->Result(variation);
    } // Result

    inline void InitEvolution(unsigned int index, unsigned int instructions, unsigned int registers, unsigned int variations, float startResult)
    {
        m_instructions = instructions;
        m_registers = registers;
        m_variations = variations;
        m_instructionsSize = FireStarterInstructions::InstructionsSize(instructions);
        m_resultsSize = FireStarterResults::ResultsSize(registers, variations);
        m_maxResult = startResult;
        Instructions()->InitInstructions(instructions);
        Results()->InitResults(index, registers, variations, startResult);
    } // InitEvolution
} FireStarterEvolution;

typedef struct FireStarterEvolutions {
    size_t m_members;
    size_t m_instructions;
    size_t m_registers;
    size_t m_variations;
    size_t m_evolutionSize;
    size_t m_evolutionsSize;
    unsigned char m_memory[16];

    static inline size_t EvolutionsSize(size_t members, size_t instructions, size_t registers, size_t variations)
    {
        return (sizeof(FireStarterEvolutions) - sizeof(m_memory)) + members * FireStarterEvolution::EvolutionSize(instructions, registers, variations);
    } // EvolutionsSize

    inline FireStarterEvolution* Evolution(unsigned int member)
    {
        return (FireStarterEvolution*)(m_memory + member * m_evolutionSize);
    } // Evolution

    inline const FireStarterEvolution* Evolution(unsigned int member) const
    {
        return (const FireStarterEvolution*)(m_memory + member * m_evolutionSize);
    } // Evolution

    inline FireStarterInstructions* Instructions(unsigned int member)
    {
        return Evolution(member)->Instructions();
    } // Instructions

    inline const FireStarterInstructions* Instructions(unsigned int member) const
    {
        return Evolution(member)->Instructions();
    } // Instructions

    inline FireStarterResults* Results(unsigned int member)
    {
        return Evolution(member)->Results();
    } // Results

    inline const FireStarterResults* Results(unsigned int member) const
    {
        return Evolution(member)->Results();
    } // Results

    inline FireStarterResult* Result(unsigned int member, unsigned int variation)
    {
        return Results(member)->Result(variation);
    } // Result

    inline const FireStarterResult* Result(unsigned int member, unsigned int variation) const
    {
        return Results(member)->Result(variation);
    } // Result

    inline size_t ResultSize(void)
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

    inline float* MaxResult(unsigned int member)
    {
        return &Evolution(member)->m_maxResult;
    } // MaxResult

    inline const float MaxResult(unsigned int member) const
    {
        return Evolution(member)->m_maxResult;
    } // MaxResult

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

    inline void InitEvolutions(unsigned int members, unsigned int instructions, unsigned int registers, unsigned int variations, float startResult)
    {
        m_members = members;
        m_instructions = instructions;
        m_registers = registers;
        m_variations = variations;
        m_evolutionSize = FireStarterEvolution::EvolutionSize(instructions, registers, variations);
        m_evolutionsSize = EvolutionsSize(members, instructions, registers, variations);
        for (unsigned int m = 0; m < members; m++)
            Evolution(m)->InitEvolution(m, instructions, registers, variations, startResult);
    } // InitEvolutions
} FireStarterEvolutions;