#pragma once
#include "FireStarterState.h"

// Run date: 01/05/25 11:27:20 Pacific Standard Time
// Run duration = 0.767722 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 10.00000000
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 8

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_NEW
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 1000
// Run population = 65536
// Run passes = 1
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
    settings.m_opcodes = 8;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_NEW;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 1000;
    settings.m_population = 65536;
    settings.m_passes = 1;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 10.00000000
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.93975163f;
    data->d[1] = 2.30578470f;
    data->d[2] = -2.02439070f;
    data->d[3] = -2.21182346f;
    data->d[4] = -0.83396304f;
    data->d[5] = -1.78248775f;
    data->d[6] = -1.50324392f;
    data->d[7] = -1.28444147f;
    data->d[8] = -1.09857345f;
    data->d[9] = 2.06470323f;
    data->d[10] = -1.51932764f;
    data->d[11] = -0.37763658f;
    data->d[12] = 1.86047029f;
    data->d[13] = -1.95489049f;
    data->d[14] = -0.20801054f;
    data->d[15] = -2.23665833f;
    data->d[16] = 2.28407431f;
    data->d[17] = -0.36611918f;
    data->d[18] = -0.98366255f;
    data->d[19] = 2.08502579f;
    data->d[20] = -1.68825126f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 10.00000000f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 10.00000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 8, 0);
    instructions->SetOperation(1, 3, 1);
    instructions->SetOperation(2, 5, 2);
    instructions->SetOperation(3, 6, 3);
    instructions->SetOperation(4, 4, 4);
    instructions->SetOperation(5, 4, 5);
    instructions->SetOperation(6, 7, 6);
    instructions->SetOperation(7, 4, 7);
    instructions->SetOperation(8, 6, 8);
    instructions->SetOperation(9, 8, 9);
    instructions->SetOperation(10, 2, 10);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 2, 12);
    instructions->SetOperation(13, 7, 13);
    instructions->SetOperation(14, 3, 14);
    instructions->SetOperation(15, 5, 9);
    instructions->SetOperation(16, 3, 15);
    instructions->SetOperation(17, 6, 15);
    instructions->SetOperation(18, 6, 16);
    instructions->SetOperation(19, 4, 2);
    instructions->SetOperation(20, 3, 17);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 7, 18);
    instructions->SetOperation(23, 4, 19);
    instructions->SetOperation(24, 5, 20);
    instructions->SetOperation(25, 7, 11);
    instructions->SetOperation(26, 8, 9);
    instructions->SetOperation(27, 7, 17);
    instructions->SetOperation(28, 3, 13);
    instructions->SetOperation(29, 3, 8);
    instructions->SetOperation(30, 8, 12);
    instructions->SetOperation(31, 4, 14);
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
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
