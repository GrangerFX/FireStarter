#pragma once
#include "FireStarterState.h"

// Run date: 11/07/23 18:14:14 Pacific Standard Time
// Run duration = 2164.807810 seconds
// Run generation = 60
// Run evolution = 11
// Run result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_seeds = 64;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.912986f;
    data->d[2] = -0.071561f;
    data->d[3] = 0.588713f;
    data->d[4] = -0.437563f;
    data->d[5] = 4.595263f;
    data->d[6] = -1.379938f;
    data->d[7] = 0.001508f;
    data->d[8] = -0.169964f;
    data->d[9] = -1.160843f;
    data->d[10] = 5.008990f;
    data->d[11] = -2.233492f;
    data->d[12] = 0.000051f;
    data->d[13] = -1.701919f;
    data->d[14] = -1.508712f;
    data->d[15] = 0.802792f;
    data->d[16] = -0.803429f;
    data->d[17] = -0.000000f;
    data->d[18] = -0.776194f;
    data->d[19] = 0.910061f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 1.151301f;
    data->d[2] = 0.032111f;
    data->d[3] = -1.838939f;
    data->d[4] = 0.647415f;
    data->d[5] = 0.092948f;
    data->d[6] = 0.063454f;
    data->d[7] = -0.000035f;
    data->d[8] = -2.941180f;
    data->d[9] = -1.551878f;
    data->d[10] = 3.547978f;
    data->d[11] = 21.601254f;
    data->d[12] = -0.000087f;
    data->d[13] = -1.767110f;
    data->d[14] = 3.771161f;
    data->d[15] = -0.577762f;
    data->d[16] = 2.668633f;
    data->d[17] = -0.030027f;
    data->d[18] = -2.896164f;
    data->d[19] = -1.358405f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.340081f;
    data->d[2] = -0.354696f;
    data->d[3] = 0.204425f;
    data->d[4] = 0.277587f;
    data->d[5] = 1.276376f;
    data->d[6] = 1.915260f;
    data->d[7] = 0.004122f;
    data->d[8] = 0.209764f;
    data->d[9] = 0.444180f;
    data->d[10] = -0.376799f;
    data->d[11] = 0.746794f;
    data->d[12] = -0.115727f;
    data->d[13] = -2.377001f;
    data->d[14] = 2.399994f;
    data->d[15] = 1.844436f;
    data->d[16] = -1.174987f;
    data->d[17] = 0.353496f;
    data->d[18] = 0.872776f;
    data->d[19] = 1.697113f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 2);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 1, 28);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 1, 25);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 0, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 60;
    state.m_evolution = 11;
    state.m_index = 0;
    state.m_id = 22;
    state.m_copy_id = 60;
    state.m_test = 2;
    state.m_seed = 17650926325573560334;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
