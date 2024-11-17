#pragma once
#include "FireStarterState.h"

// Run date: 11/17/24 13:05:57 Pacific Standard Time
// Run duration = 38.065283 seconds
// Run generation = 14
// Run evolution = 0
// Run max result = 0.00000078
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
// Run passes = 512
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
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000078
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.35536647f;
    data->d[1] = -0.78622615f;
    data->d[2] = 2.45510745f;
    data->d[3] = -1.70510197f;
    data->d[4] = -0.05786414f;
    data->d[5] = 0.73680478f;
    data->d[6] = -0.71705765f;
    data->d[7] = 7.49756002f;
    data->d[8] = 0.01076737f;
    data->d[9] = 0.63678724f;
    data->d[10] = -1.00266111f;
    data->d[11] = 1.30043960f;
    data->d[12] = -1.47811413f;
    data->d[13] = 3.34623456f;
    data->d[14] = -0.35223877f;
    data->d[15] = -3.76956439f;
    data->d[16] = 0.20454879f;
    data->d[17] = -0.17859077f;
    data->d[18] = 0.59249270f;
    data->d[19] = 0.36720288f;
    data->d[20] = 1.69024467f;
    data->d[21] = -1.33352649f;
    data->d[22] = 1.84909570f;
    data->d[23] = -0.89857692f;
    data->d[24] = -1.03789604f;
    data->d[25] = 1.97715211f;
    data->d[26] = -1.41514599f;
    data->d[27] = -0.20323473f;
    data->d[28] = 0.74712229f;
    data->d[29] = 0.38091111f;
    *(result->MinResult()) = 0.00000078f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000078f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 1, 9);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 1, 18);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 19);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 11);
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
    state.m_generation = 14;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 17555031945864093761;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000078f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
