#pragma once
#include "FireStarterState.h"

// Run date: 01/28/24 09:04:32 Pacific Standard Time
// Run duration = 6836.310582 seconds
// Run generation = 67
// Run evolution = 13
// Run max result = 0.00000036
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
// Run tests = 1
// Run streams = 4
// Run units = 4
// Run states = 64
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    settings.m_tests = 1;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 64;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.587568f;
    data->d[2] = -0.576350f;
    data->d[3] = -10.459639f;
    data->d[4] = 0.000000f;
    data->d[5] = -0.691472f;
    data->d[6] = -0.401299f;
    data->d[7] = -1.395122f;
    data->d[8] = -0.760250f;
    data->d[9] = -2.545766f;
    data->d[10] = -0.350740f;
    data->d[11] = -0.190156f;
    data->d[12] = 2.780580f;
    data->d[13] = -37.982994f;
    data->d[14] = 0.022451f;
    data->d[15] = 0.596097f;
    data->d[16] = 1.021679f;
    data->d[17] = -1.766419f;
    data->d[18] = -0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.520329f;
    data->d[2] = 0.080547f;
    data->d[3] = -7.336220f;
    data->d[4] = 0.000008f;
    data->d[5] = 0.880033f;
    data->d[6] = -1.062102f;
    data->d[7] = -1.486238f;
    data->d[8] = -1.946617f;
    data->d[9] = 1.218571f;
    data->d[10] = 2.646407f;
    data->d[11] = 0.729027f;
    data->d[12] = 1.997361f;
    data->d[13] = -1.274707f;
    data->d[14] = 1.116910f;
    data->d[15] = 1.722481f;
    data->d[16] = -0.800744f;
    data->d[17] = 0.344694f;
    data->d[18] = -0.118132f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000028
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.812483f;
    data->d[2] = 0.865628f;
    data->d[3] = 0.000000f;
    data->d[4] = -5.932529f;
    data->d[5] = -0.303881f;
    data->d[6] = -0.637414f;
    data->d[7] = 0.397743f;
    data->d[8] = -0.219381f;
    data->d[9] = -0.786315f;
    data->d[10] = -0.846639f;
    data->d[11] = -1.093983f;
    data->d[12] = -2.820337f;
    data->d[13] = 1.991517f;
    data->d[14] = -0.404115f;
    data->d[15] = 0.224105f;
    data->d[16] = -3.060414f;
    data->d[17] = -1.452654f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 5);
    instructions->SetOperation(5, 1, 19);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 28);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 1, 8);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 2);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 0, 19);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 0, 28);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 67;
    state.m_evolution = 13;
    state.m_children0 = 115;
    state.m_children1 = 20;
    state.m_index = 45;
    state.m_copy_index = 16;
    state.m_id = 16;
    state.m_test = 0;
    state.m_seed = 16154318084734554705;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 19.000000f;
    state.m_optimizeValid = true;
} // LoadState
