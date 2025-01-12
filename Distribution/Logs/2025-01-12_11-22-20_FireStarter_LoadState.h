#pragma once
#include "FireStarterState.h"

// Run date: 01/12/25 11:22:20 Pacific Standard Time
// Run duration = 7.440379 seconds
// Run generation = 81
// Run evolution = 0
// Run max result = 0.66651011
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2

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
// Run generations = 100
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
    settings.m_opcodes = 2;

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
    settings.m_generations = 100;
    settings.m_population = 65536;
    settings.m_passes = 1;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.66651011
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.39941508f;
    data->d[1] = -0.78385615f;
    data->d[2] = -0.59400553f;
    data->d[3] = 2.01016760f;
    data->d[4] = -0.00283498f;
    data->d[5] = 0.47528553f;
    data->d[6] = -0.33645853f;
    data->d[7] = 0.19189678f;
    data->d[8] = 2.09523106f;
    data->d[9] = -1.64881170f;
    data->d[10] = -0.08006830f;
    data->d[11] = 1.50303471f;
    data->d[12] = -0.21809189f;
    data->d[13] = -1.94199860f;
    data->d[14] = 0.12110150f;
    data->d[15] = -0.21684965f;
    data->d[16] = -0.10824589f;
    data->d[17] = -2.19856143f;
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
    *(result->MinResult()) = 0.66651011f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.66651011f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 5, 0);
    instructions->SetOperation(1, 3, 1);
    instructions->SetOperation(2, 5, 2);
    instructions->SetOperation(3, 3, 3);
    instructions->SetOperation(4, 5, 4);
    instructions->SetOperation(5, 3, 5);
    instructions->SetOperation(6, 5, 0);
    instructions->SetOperation(7, 3, 6);
    instructions->SetOperation(8, 5, 3);
    instructions->SetOperation(9, 3, 7);
    instructions->SetOperation(10, 5, 8);
    instructions->SetOperation(11, 3, 4);
    instructions->SetOperation(12, 5, 9);
    instructions->SetOperation(13, 3, 10);
    instructions->SetOperation(14, 5, 3);
    instructions->SetOperation(15, 3, 4);
    instructions->SetOperation(16, 5, 11);
    instructions->SetOperation(17, 3, 7);
    instructions->SetOperation(18, 5, 12);
    instructions->SetOperation(19, 3, 0);
    instructions->SetOperation(20, 5, 13);
    instructions->SetOperation(21, 3, 3);
    instructions->SetOperation(22, 5, 1);
    instructions->SetOperation(23, 3, 14);
    instructions->SetOperation(24, 5, 15);
    instructions->SetOperation(25, 3, 16);
    instructions->SetOperation(26, 5, 9);
    instructions->SetOperation(27, 3, 6);
    instructions->SetOperation(28, 5, 4);
    instructions->SetOperation(29, 3, 4);
    instructions->SetOperation(30, 5, 17);
    instructions->SetOperation(31, 3, 4);
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
    state.m_generation = 81;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.67720383f;
    state.m_maxResult = 0.66651011f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
