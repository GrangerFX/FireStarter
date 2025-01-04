#pragma once
#include "FireStarterState.h"

// Run date: 01/04/25 14:19:01 Pacific Standard Time
// Run duration = 40.822722 seconds
// Run generation = 12
// Run evolution = 0
// Run max result = 0.00000009
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.28444529f;
    data->d[1] = 1.94107974f;
    data->d[2] = -0.98090595f;
    data->d[3] = -0.75366467f;
    data->d[4] = 0.58766133f;
    data->d[5] = 0.26888537f;
    data->d[6] = -2.10415173f;
    data->d[7] = -0.70325518f;
    data->d[8] = -2.63363481f;
    data->d[9] = 0.45008788f;
    data->d[10] = -0.06166511f;
    data->d[11] = -1.07602096f;
    data->d[12] = 0.50047058f;
    data->d[13] = 1.08052313f;
    data->d[14] = -1.30024171f;
    data->d[15] = -1.53575158f;
    data->d[16] = 0.24675409f;
    data->d[17] = 12.30806446f;
    data->d[18] = -0.09833197f;
    data->d[19] = 0.14474928f;
    data->d[20] = -16.85173416f;
    data->d[21] = 0.91992629f;
    data->d[22] = 1.01423430f;
    data->d[23] = -1.60792089f;
    data->d[24] = 0.35745499f;
    data->d[25] = 1.48307419f;
    data->d[26] = -0.99878752f;
    data->d[27] = -2.26856756f;
    data->d[28] = -1.60268688f;
    data->d[29] = 1.20921040f;
    *(result->MinResult()) = 0.00000009f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000009f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 19);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 0, 21);
    instructions->SetOperation(31, 1, 19);
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
    state.m_generation = 12;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 11;
    state.m_seed = 15665280091894652087;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000009f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
