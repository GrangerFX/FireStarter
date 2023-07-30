#pragma once
#include "FireStarterState.h"

// Run date: 07/29/23 17:04:40 Pacific Daylight Time
// Run duration = 319.616002 seconds
// Run generation = 33
// Run evolution = 0
// Run result = 0.00000167
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 8;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 10.00000000
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.000000f;
    data->d[1] = 0.000000f;
    data->d[2] = 0.000000f;
    data->d[3] = 0.000000f;
    data->d[4] = 0.000000f;
    data->d[5] = 0.000000f;
    data->d[6] = 0.000000f;
    data->d[7] = 0.000000f;
    data->d[8] = 0.000000f;
    data->d[9] = 0.000000f;
    data->d[10] = 0.000000f;
    data->d[11] = 0.000000f;
    data->d[12] = 0.000000f;
    data->d[13] = 0.000000f;
    data->d[14] = 0.000000f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 10.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000167
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090660f;
    data->d[1] = -0.224039f;
    data->d[2] = -2.303405f;
    data->d[3] = 1.109827f;
    data->d[4] = -1.394823f;
    data->d[5] = -0.372615f;
    data->d[6] = -0.001441f;
    data->d[7] = 1.676502f;
    data->d[8] = -2.880584f;
    data->d[9] = 1.978244f;
    data->d[10] = -2.808728f;
    data->d[11] = 0.002289f;
    data->d[12] = -0.766943f;
    data->d[13] = 0.486428f;
    data->d[14] = -0.360479f;
    data->d[15] = -2.888203f;
    data->d[16] = -0.124557f;
    data->d[17] = -0.387393f;
    data->d[18] = 0.053184f;
    data->d[19] = 0.746767f;
    data->d[20] = 2.017251f;
    data->d[21] = -1.474478f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000101
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.184059f;
    data->d[2] = 0.087432f;
    data->d[3] = -0.256253f;
    data->d[4] = 0.434599f;
    data->d[5] = -1.639076f;
    data->d[6] = -1.056969f;
    data->d[7] = 1.118711f;
    data->d[8] = 5.181017f;
    data->d[9] = -3.266191f;
    data->d[10] = 2.243980f;
    data->d[11] = 0.038732f;
    data->d[12] = -3.527117f;
    data->d[13] = -0.600195f;
    data->d[14] = -3.648276f;
    data->d[15] = -4.192842f;
    data->d[16] = -0.065350f;
    data->d[17] = 0.002110f;
    data->d[18] = 1.433408f;
    data->d[19] = -1.892058f;
    data->d[20] = 0.130255f;
    data->d[21] = -1.482178f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 14);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 1, 16);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 0, 25);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 1, 22);
    instructions->SetOperation(10, 0, 25);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 1, 17);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 1, 27);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 1, 4);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 0, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 33;
    state.m_evolution = 0;
    state.m_index = 1;
    state.m_test = 34;
    state.m_seed = 15396162101653010027;
} // LoadState
