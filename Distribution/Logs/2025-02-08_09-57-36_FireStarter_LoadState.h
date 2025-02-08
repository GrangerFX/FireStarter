#pragma once
#include "FireStarterState.h"

// Run date: 02/08/25 09:57:36 Pacific Standard Time
// Run duration = 109.980130 seconds
// Run generation = 14
// Run evolution = 0
// Run max result = 0.00000218
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

// Variation: 0  result = 0.00000218
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.44254625f;
    data->d[1] = -1.39030015f;
    data->d[2] = -0.04607485f;
    data->d[3] = 1.71026993f;
    data->d[4] = -2.32660747f;
    data->d[5] = 0.57069194f;
    data->d[6] = -0.35958651f;
    data->d[7] = -1.01221085f;
    data->d[8] = -0.39316291f;
    data->d[9] = 6.26001167f;
    data->d[10] = -1.97163916f;
    data->d[11] = -6.45287609f;
    data->d[12] = 0.50896502f;
    data->d[13] = 0.60547954f;
    data->d[14] = -1.66367936f;
    data->d[15] = -4.99592876f;
    data->d[16] = 2.75526261f;
    data->d[17] = 4.44568300f;
    data->d[18] = -0.00000014f;
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
    *(result->MinResult()) = 0.00000218f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000218f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 7);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 1, 7);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 2);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 13);
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
    state.m_test = 31;
    state.m_seed = 12229777831306552785;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000218f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
