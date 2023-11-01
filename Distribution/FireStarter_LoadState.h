#pragma once
#include "FireStarterState.h"

// Run date: 10/31/23 21:14:04 Pacific Daylight Time
// Run duration = 59342.232288 seconds
// Run generation = 61
// Run evolution = 9
// Run result = 0.00001204
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000370
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.021910f;
    data->d[1] = 0.209254f;
    data->d[2] = 0.140028f;
    data->d[3] = 1.175446f;
    data->d[4] = 2.400373f;
    data->d[5] = 0.385986f;
    data->d[6] = 0.002907f;
    data->d[7] = 0.175983f;
    data->d[8] = 0.118771f;
    data->d[9] = -1.193433f;
    data->d[10] = -1.957544f;
    data->d[11] = 0.655411f;
    data->d[12] = 5.952537f;
    data->d[13] = -2.728713f;
    data->d[14] = 0.930470f;
    data->d[15] = -5.161712f;
    data->d[16] = -1.794166f;
    data->d[17] = 0.163001f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000733
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.421520f;
    data->d[1] = 0.751250f;
    data->d[2] = -0.015399f;
    data->d[3] = 0.519707f;
    data->d[4] = 0.070303f;
    data->d[5] = 2.883703f;
    data->d[6] = -1.092075f;
    data->d[7] = -0.157641f;
    data->d[8] = -0.222302f;
    data->d[9] = -1.034617f;
    data->d[10] = 1.195033f;
    data->d[11] = 0.341389f;
    data->d[12] = -8.245334f;
    data->d[13] = -9.473775f;
    data->d[14] = -0.375501f;
    data->d[15] = -1.461397f;
    data->d[16] = -4.106080f;
    data->d[17] = -0.111889f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000007f;
} // LoadVariation1

// Variation: 2  result = 0.00001204
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.063257f;
    data->d[1] = 0.355477f;
    data->d[2] = 0.054195f;
    data->d[3] = 1.820947f;
    data->d[4] = 4.987697f;
    data->d[5] = -0.151616f;
    data->d[6] = -0.953441f;
    data->d[7] = -0.602120f;
    data->d[8] = -1.986568f;
    data->d[9] = 1.721209f;
    data->d[10] = -1.419303f;
    data->d[11] = 0.584280f;
    data->d[12] = -6.499715f;
    data->d[13] = -0.037551f;
    data->d[14] = -0.794471f;
    data->d[15] = -0.480637f;
    data->d[16] = -1.686967f;
    data->d[17] = 0.096220f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000012f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000012f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 14);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 4);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 8);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 21);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 23);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 16);
    instructions->SetOperation(18, 0, 4);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 1, 19);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 0, 25);
    instructions->SetOperation(29, 1, 27);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 61;
    state.m_evolution = 9;
    state.m_age = 31;
    state.m_index = 51;
    state.m_id = 43;
    state.m_copy_id = 21;
    state.m_test = 15;
    state.m_seed = 4357480262252608635;
    state.m_maxResult = 0.000012f;
    state.m_optimizePass = false;
} // LoadState
