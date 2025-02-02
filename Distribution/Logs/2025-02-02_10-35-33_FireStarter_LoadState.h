#pragma once
#include "FireStarterState.h"

// Run date: 02/02/25 10:35:33 Pacific Standard Time
// Run duration = 920.553762 seconds
// Run generation = 13
// Run evolution = 0
// Run max result = 0.00000028
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2

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
    settings.m_opcodes = 2;

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

// Variation: 0  result = 0.00000028
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.45095843f;
    data->d[2] = -1.41784918f;
    data->d[3] = -0.62400568f;
    data->d[4] = 0.42891803f;
    data->d[5] = 4.16259575f;
    data->d[6] = 5.34610558f;
    data->d[7] = 5.43641949f;
    data->d[8] = 6.48874712f;
    data->d[9] = -9.43466949f;
    data->d[10] = -1.89198923f;
    data->d[11] = 10.58981991f;
    data->d[12] = -1.77451658f;
    data->d[13] = 14.31667709f;
    data->d[14] = 6.30761671f;
    data->d[15] = 1.71024358f;
    data->d[16] = 1.17497063f;
    data->d[17] = 4.05393744f;
    data->d[18] = -0.77875084f;
    data->d[19] = -10.51811028f;
    data->d[20] = 0.00102968f;
    data->d[21] = -0.11377383f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.00000028f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000028f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 1, 17);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 1, 19);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 0, 0);
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
    state.m_generation = 13;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 9852663831034772126;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000028f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
