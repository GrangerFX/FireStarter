#pragma once
#include "FireStarterState.h"

// Run date: 11/30/24 09:29:34 Pacific Standard Time
// Run duration = 107.352339 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000034
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

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
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

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

// Variation: 0  result = 0.00000034
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.01355433f;
    data->d[1] = -1.12803829f;
    data->d[2] = -0.14573033f;
    data->d[3] = 0.33255804f;
    data->d[4] = -0.27568355f;
    data->d[5] = -0.94612312f;
    data->d[6] = 0.52792752f;
    data->d[7] = -4.71133137f;
    data->d[8] = 1.46542895f;
    data->d[9] = -1.78063774f;
    data->d[10] = 0.57006788f;
    data->d[11] = -0.72184402f;
    data->d[12] = 8.90700722f;
    data->d[13] = 1.27097940f;
    data->d[14] = 0.46850502f;
    data->d[15] = -5.15215206f;
    data->d[16] = -0.00446816f;
    data->d[17] = 0.07050665f;
    data->d[18] = 2.60072756f;
    data->d[19] = 6.10387802f;
    data->d[20] = 1.80223668f;
    data->d[21] = 0.64633346f;
    data->d[22] = 1.05809402f;
    data->d[23] = 0.99596947f;
    data->d[24] = 1.03633165f;
    data->d[25] = 0.68351120f;
    data->d[26] = 2.06437969f;
    data->d[27] = -0.17843582f;
    data->d[28] = -0.57370836f;
    data->d[29] = 1.09109008f;
    *(result->MinResult()) = 0.00000034f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000034f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 7);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 1, 1);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 1, 20);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 0, 2);
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
    state.m_generation = 8;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 23;
    state.m_seed = 5229208740758842519;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000034f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
