#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 15:37:24 Pacific Daylight Time
// Run duration = 3707.440742 seconds
// Run generation = 89
// Run result = 0.00123882
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 32;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00028074
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141428f;
    data->d[1] = 0.206724f;
    data->d[2] = 1.586758f;
    data->d[3] = -0.399745f;
    data->d[4] = 0.291722f;
    data->d[5] = 1.019157f;
    data->d[6] = -0.313168f;
    data->d[7] = -1.577010f;
    data->d[8] = 3.847301f;
    data->d[9] = -3.591783f;
    data->d[10] = 0.933870f;
    data->d[11] = 1.388780f;
    data->d[12] = -65.820267f;
    data->d[13] = 0.676671f;
    data->d[14] = -0.114490f;
    data->d[15] = -0.124263f;
    data->d[16] = 1.060686f;
    data->d[17] = -0.948332f;
    data->d[18] = -1.109618f;
    data->d[19] = -0.179095f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000281f;
} // LoadVariation0

// Variation: 1  result = 0.00041366
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.983413f;
    data->d[1] = -0.108277f;
    data->d[2] = -1.195796f;
    data->d[3] = 0.537374f;
    data->d[4] = -2.432657f;
    data->d[5] = 0.267671f;
    data->d[6] = 0.779206f;
    data->d[7] = 0.161410f;
    data->d[8] = 0.429850f;
    data->d[9] = 3.665196f;
    data->d[10] = 2.999921f;
    data->d[11] = -3.105814f;
    data->d[12] = 49.051025f;
    data->d[13] = -1.661509f;
    data->d[14] = -0.214149f;
    data->d[15] = 0.000430f;
    data->d[16] = -4.148397f;
    data->d[17] = 0.580164f;
    data->d[18] = 1.516925f;
    data->d[19] = 0.461713f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000414f;
} // LoadVariation1

// Variation: 2  result = 0.00123882
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.000836f;
    data->d[1] = -0.695467f;
    data->d[2] = -0.079301f;
    data->d[3] = -0.747494f;
    data->d[4] = 0.078067f;
    data->d[5] = -1.172311f;
    data->d[6] = -1.825737f;
    data->d[7] = -2.609645f;
    data->d[8] = -0.740094f;
    data->d[9] = -2.230951f;
    data->d[10] = 0.917959f;
    data->d[11] = 1.032585f;
    data->d[12] = -0.461992f;
    data->d[13] = 1.810430f;
    data->d[14] = 2.197317f;
    data->d[15] = 0.351656f;
    data->d[16] = 0.415471f;
    data->d[17] = 1.075482f;
    data->d[18] = -3.221779f;
    data->d[19] = 1.729504f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.001239f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.001239f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 0, 21);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 40);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 0, 40);
    instructions->SetOperation(11, 0, 26);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 42);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 28);
    instructions->SetOperation(17, 1, 30);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 79);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 0, 36);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 33);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 89;
    state.m_index = 0;
    state.m_test = 61;
    state.m_seed = 5872414554400598202;
} // LoadState
