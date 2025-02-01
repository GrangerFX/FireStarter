#pragma once
#include "FireStarterState.h"

// Run date: 02/01/25 11:27:11 Pacific Standard Time
// Run duration = 4.556491 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00222636
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00222636
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.43394327f;
    data->d[1] = 0.33777088f;
    data->d[2] = 1.61874521f;
    data->d[3] = 4.52646875f;
    data->d[4] = -7.44605255f;
    data->d[5] = -0.14578271f;
    data->d[6] = 1.99132776f;
    data->d[7] = -3.92081952f;
    data->d[8] = -4.14714479f;
    data->d[9] = -4.38490915f;
    data->d[10] = 1.65377963f;
    data->d[11] = -6.38964987f;
    data->d[12] = 1.33281231f;
    data->d[13] = -5.48170090f;
    data->d[14] = -0.00344309f;
    data->d[15] = 0.82723057f;
    data->d[16] = -5.92470074f;
    data->d[17] = -2.02828026f;
    data->d[18] = 2.21115208f;
    data->d[19] = -2.05956984f;
    data->d[20] = 0.74002254f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.00222636f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00222636f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 5, 0);
    instructions->SetOperation(1, 3, 1);
    instructions->SetOperation(2, 5, 2);
    instructions->SetOperation(3, 5, 3);
    instructions->SetOperation(4, 5, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 3, 1);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 3, 7);
    instructions->SetOperation(9, 3, 1);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 5, 10);
    instructions->SetOperation(14, 5, 11);
    instructions->SetOperation(15, 3, 12);
    instructions->SetOperation(16, 5, 9);
    instructions->SetOperation(17, 3, 6);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 5, 14);
    instructions->SetOperation(20, 3, 8);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 5, 7);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 3, 15);
    instructions->SetOperation(26, 5, 8);
    instructions->SetOperation(27, 5, 18);
    instructions->SetOperation(28, 3, 17);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 3, 8);
    instructions->SetOperation(31, 3, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.LoadCodeFromProgram();
    state.m_generation = 5;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 8052663456522067295;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00222636f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
