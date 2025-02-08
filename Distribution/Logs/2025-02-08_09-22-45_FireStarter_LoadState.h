#pragma once
#include "FireStarterState.h"

// Run date: 02/08/25 09:22:45 Pacific Standard Time
// Run duration = 1463.965547 seconds
// Run generation = 32
// Run evolution = 5
// Run max result = 0.00000122
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
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
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000122
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.43928057f;
    data->d[1] = -1.38003564f;
    data->d[2] = -6.24473476f;
    data->d[3] = -0.06258687f;
    data->d[4] = 0.63101691f;
    data->d[5] = 0.65632850f;
    data->d[6] = -1.41620886f;
    data->d[7] = 1.58048379f;
    data->d[8] = 0.00010876f;
    data->d[9] = -1.00010133f;
    data->d[10] = -0.32411906f;
    data->d[11] = -0.18885194f;
    data->d[12] = 1.57173073f;
    data->d[13] = -0.16160065f;
    data->d[14] = 3.11947322f;
    data->d[15] = 3.44772124f;
    data->d[16] = 0.16036509f;
    data->d[17] = 1.59890163f;
    data->d[18] = 2.89877939f;
    data->d[19] = -3.78279185f;
    data->d[20] = 8.40186501f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.00000122f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000122f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 4);
    instructions->SetOperation(1, 1, 19);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 0, 3);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 1, 10);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 1, 29);
    instructions->SetOperation(16, 1, 18);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 1, 18);
    instructions->SetOperation(21, 0, 11);
    instructions->SetOperation(22, 1, 4);
    instructions->SetOperation(23, 0, 4);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 0, 28);
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
    state.m_generation = 32;
    state.m_evolution = 5;
    state.m_index = 2;
    state.m_copy_index = 6;
    state.m_id = 6;
    state.m_test = 29;
    state.m_seed = 11535674076748934225;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00000292f;
    state.m_maxResult = 0.00000122f;
    state.m_evolveWeight = 0.000091f;
    state.m_optimizeValid = true;
} // LoadState
