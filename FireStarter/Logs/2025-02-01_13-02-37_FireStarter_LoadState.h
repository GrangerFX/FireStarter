#pragma once
#include "FireStarterState.h"

// Run date: 02/01/25 13:02:37 Pacific Standard Time
// Run duration = 5473.179373 seconds
// Run generation = 317
// Run evolution = 0
// Run max result = 0.00000124
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

// Variation: 0  result = 0.00000124
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.79844189f;
    data->d[1] = -0.27387011f;
    data->d[2] = 1.96180165f;
    data->d[3] = 11.35546589f;
    data->d[4] = -2.31557798f;
    data->d[5] = 10.23891449f;
    data->d[6] = -0.24560411f;
    data->d[7] = 0.02179924f;
    data->d[8] = 2.35374618f;
    data->d[9] = -0.74145854f;
    data->d[10] = -0.10622724f;
    data->d[11] = 0.49520251f;
    data->d[12] = -0.73733401f;
    data->d[13] = -2.05626583f;
    data->d[14] = -1.65026557f;
    data->d[15] = 2.66177535f;
    data->d[16] = 3.94753766f;
    data->d[17] = 0.64766794f;
    data->d[18] = 0.00000000f;
    data->d[19] = 0.00000000f;
    data->d[20] = 0.00000000f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.00000124f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000124f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 5, 0);
    instructions->SetOperation(1, 3, 1);
    instructions->SetOperation(2, 3, 1);
    instructions->SetOperation(3, 3, 2);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 3, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 5, 6);
    instructions->SetOperation(8, 5, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 3, 8);
    instructions->SetOperation(11, 5, 9);
    instructions->SetOperation(12, 3, 0);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 3, 10);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 3, 11);
    instructions->SetOperation(17, 5, 12);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 5, 14);
    instructions->SetOperation(20, 3, 4);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 3, 13);
    instructions->SetOperation(23, 3, 13);
    instructions->SetOperation(24, 5, 16);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 3, 3);
    instructions->SetOperation(27, 3, 13);
    instructions->SetOperation(28, 5, 7);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 5, 17);
    instructions->SetOperation(31, 3, 8);
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
    state.m_generation = 317;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 1;
    state.m_seed = 12143944771181326560;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000124f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
