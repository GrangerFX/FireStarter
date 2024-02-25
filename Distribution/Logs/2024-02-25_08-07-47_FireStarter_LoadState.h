#pragma once
#include "FireStarterState.h"

// Run date: 02/25/24 08:07:47 Pacific Standard Time
// Run duration = 1020.327829 seconds
// Run generation = 42
// Run evolution = 6
// Run max result = 0.00001658
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 128;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000044
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.570796f;
    data->d[1] = -0.765007f;
    data->d[2] = 1.424580f;
    data->d[3] = -1.794899f;
    data->d[4] = -1.026182f;
    data->d[5] = 0.698467f;
    data->d[6] = -0.382018f;
    data->d[7] = 3.880344f;
    data->d[8] = -0.401404f;
    data->d[9] = 0.453840f;
    data->d[10] = 0.686089f;
    data->d[11] = 1.340830f;
    data->d[12] = -2.007593f;
    data->d[13] = 2.641468f;
    data->d[14] = 0.260028f;
    data->d[15] = 0.696155f;
    data->d[16] = 0.008752f;
    data->d[17] = -2.690604f;
    data->d[18] = -4.409878f;
    data->d[19] = 0.193983f;
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

// Variation: 1  result = 0.00001407
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.002317f;
    data->d[1] = -0.087823f;
    data->d[2] = 1.481155f;
    data->d[3] = 2.020623f;
    data->d[4] = -1.440129f;
    data->d[5] = -0.723788f;
    data->d[6] = -0.024439f;
    data->d[7] = -2.240549f;
    data->d[8] = -0.022231f;
    data->d[9] = -0.593699f;
    data->d[10] = 40.098194f;
    data->d[11] = -1.695936f;
    data->d[12] = 0.251772f;
    data->d[13] = 1.071505f;
    data->d[14] = 0.629764f;
    data->d[15] = -1.163851f;
    data->d[16] = -0.308373f;
    data->d[17] = -2.910771f;
    data->d[18] = 2.389210f;
    data->d[19] = 1.907668f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation1

// Variation: 2  result = 0.00001658
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.397387f;
    data->d[1] = -1.403346f;
    data->d[2] = -1.490475f;
    data->d[3] = 0.007681f;
    data->d[4] = -0.400440f;
    data->d[5] = 0.115824f;
    data->d[6] = 0.866665f;
    data->d[7] = 1.575882f;
    data->d[8] = 0.915238f;
    data->d[9] = -13.203352f;
    data->d[10] = 0.290151f;
    data->d[11] = -1.658085f;
    data->d[12] = -0.080857f;
    data->d[13] = -1.965693f;
    data->d[14] = -0.537778f;
    data->d[15] = 0.457456f;
    data->d[16] = -0.053118f;
    data->d[17] = -0.154663f;
    data->d[18] = -379.442230f;
    data->d[19] = 5.840437f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000017f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000017f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 1, 5);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 1, 23);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 25);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 0, 25);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 42;
    state.m_evolution = 6;
    state.m_children0 = 42;
    state.m_children1 = 4;
    state.m_index = 0;
    state.m_copy_index = 7;
    state.m_id = 0;
    state.m_test = 5;
    state.m_seed = 10637998902857478878;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000035f;
    state.m_maxResult = 0.000017f;
    state.m_evolveWeight = 0.000072f;
    state.m_optimizeValid = true;
} // LoadState
