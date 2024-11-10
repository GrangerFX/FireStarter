#pragma once
#include "FireStarterState.h"

// Run date: 11/09/24 14:52:49 Pacific Standard Time
// Run duration = 257.532983 seconds
// Run generation = 228
// Run evolution = 0
// Run max result = 0.00000013
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000013
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.51098639f;
    data->d[2] = -0.92655063f;
    data->d[3] = 0.36395931f;
    data->d[4] = -12.91909695f;
    data->d[5] = -1.39812326f;
    data->d[6] = 0.00464850f;
    data->d[7] = -1.50526929f;
    data->d[8] = -4.98454952f;
    data->d[9] = 0.05195864f;
    data->d[10] = 0.67873299f;
    data->d[11] = 0.36314401f;
    data->d[12] = 0.50134593f;
    data->d[13] = -0.60978204f;
    data->d[14] = 4.57815790f;
    data->d[15] = 0.01878111f;
    data->d[16] = -2.50220537f;
    data->d[17] = 0.89410621f;
    data->d[18] = -5.32638645f;
    data->d[19] = -0.45231816f;
    data->d[20] = 0.17605156f;
    data->d[21] = -1.04451442f;
    data->d[22] = -0.69978279f;
    data->d[23] = 1.12209165f;
    data->d[24] = -1.81643903f;
    data->d[25] = -1.82524049f;
    data->d[26] = 1.99978912f;
    data->d[27] = 1.54574287f;
    data->d[28] = -1.79975283f;
    data->d[29] = -1.08135855f;
    *(result->MinResult()) = 0.00000013f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000013f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 0, 15);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 1, 22);
    instructions->SetOperation(6, 0, 13);
    instructions->SetOperation(7, 0, 28);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 1, 28);
    instructions->SetOperation(14, 1, 20);
    instructions->SetOperation(15, 1, 15);
    instructions->SetOperation(16, 0, 5);
    instructions->SetOperation(17, 1, 2);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 1);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 1, 21);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 0, 6);
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
    state.m_generation = 228;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 1;
    state.m_seed = 14769955143460528178;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000013f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
