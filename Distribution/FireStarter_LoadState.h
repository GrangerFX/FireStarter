#pragma once
#include "FireStarterState.h"

// Run date: 01/26/25 11:44:25 Pacific Standard Time
// Run duration = 23.190365 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000292
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

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
    settings.m_opcodes = 4;

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

// Variation: 0  result = 0.00000292
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.22133669f;
    data->d[2] = 9.31746674f;
    data->d[3] = 0.22228372f;
    data->d[4] = 0.92887974f;
    data->d[5] = -0.13249926f;
    data->d[6] = 0.76555318f;
    data->d[7] = 2.02182031f;
    data->d[8] = -4.47121525f;
    data->d[9] = 1.52061784f;
    data->d[10] = -0.97055852f;
    data->d[11] = -2.79278636f;
    data->d[12] = 0.28114372f;
    data->d[13] = -3.60905266f;
    data->d[14] = 0.11581741f;
    data->d[15] = -1.11702573f;
    data->d[16] = -14.00499344f;
    data->d[17] = -2.14871764f;
    data->d[18] = -0.42604035f;
    data->d[19] = -2.00110531f;
    data->d[20] = 1.03398466f;
    data->d[21] = 1.85754871f;
    data->d[22] = 0.75837398f;
    data->d[23] = -0.34248573f;
    data->d[24] = 1.60682154f;
    data->d[25] = -0.63566196f;
    data->d[26] = -1.48141015f;
    data->d[27] = -0.97320557f;
    data->d[28] = 0.12666619f;
    data->d[29] = -2.46283031f;
    *(result->MinResult()) = 0.00000292f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000292f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 0, 6);
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
    state.LoadCodeFromProgram();
    state.m_generation = 5;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 2;
    state.m_seed = 7387006692202374673;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000292f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
