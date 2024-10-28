#pragma once
#include "FireStarterState.h"

// Run date: 10/28/24 10:24:46 Pacific Daylight Time
// Run duration = 164.826527 seconds
// Run generation = 46
// Run evolution = 0
// Run max result = 0.00000093
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 32768
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 32768;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000093
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.61287284f;
    data->d[2] = 0.15624450f;
    data->d[3] = 0.35416567f;
    data->d[4] = -0.02337870f;
    data->d[5] = 0.10067486f;
    data->d[6] = 0.03255146f;
    data->d[7] = -0.71436083f;
    data->d[8] = -1.76303005f;
    data->d[9] = 0.16939774f;
    data->d[10] = -2.09671855f;
    data->d[11] = -8.03011322f;
    data->d[12] = -0.36334881f;
    data->d[13] = -2.04902744f;
    data->d[14] = 5.51410389f;
    data->d[15] = 1.19785738f;
    data->d[16] = 0.51171988f;
    data->d[17] = 0.19038458f;
    data->d[18] = -1.31066072f;
    data->d[19] = -1.67329192f;
    data->d[20] = -1.41142178f;
    data->d[21] = -0.69891024f;
    data->d[22] = -0.20764792f;
    data->d[23] = 1.57821906f;
    data->d[24] = -0.92605400f;
    data->d[25] = 1.40716708f;
    data->d[26] = -1.62582755f;
    data->d[27] = -0.27276474f;
    data->d[28] = 0.55598861f;
    data->d[29] = -1.53412163f;
    *(result->MinResult()) = 0.00000093f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000093f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 0, 21);
    instructions->SetOperation(2, 0, 25);
    instructions->SetOperation(3, 1, 25);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 1, 24);
    instructions->SetOperation(8, 0, 10);
    instructions->SetOperation(9, 1, 0);
    instructions->SetOperation(10, 1, 24);
    instructions->SetOperation(11, 1, 22);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 1, 15);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 1, 20);
    instructions->SetOperation(24, 0, 10);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 0, 25);
    instructions->SetOperation(31, 0, 21);
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
    state.m_generation = 46;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 9604275995862780325;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000093f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
