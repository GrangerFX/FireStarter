#pragma once
#include "FireStarterState.h"

// Run date: 09/09/24 12:09:40 Pacific Daylight Time
// Run duration = 125.202983 seconds
// Run generation = 40
// Run evolution = 0
// Run max result = 0.00002024
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00002024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.311502f;
    data->d[1] = -0.140514f;
    data->d[2] = 0.618352f;
    data->d[3] = -5.745300f;
    data->d[4] = -1.603778f;
    data->d[5] = 0.693251f;
    data->d[6] = 0.039194f;
    data->d[7] = -3.260986f;
    data->d[8] = 0.767518f;
    data->d[9] = 1.515547f;
    data->d[10] = 2.622176f;
    data->d[11] = 0.723991f;
    data->d[12] = 0.348815f;
    data->d[13] = -2.784102f;
    data->d[14] = -0.677983f;
    data->d[15] = 1.409908f;
    data->d[16] = 0.957017f;
    data->d[17] = -1.044259f;
    data->d[18] = 0.437648f;
    data->d[19] = -0.607524f;
    data->d[20] = 7.022166f;
    data->d[21] = 9.955109f;
    data->d[22] = -1.233513f;
    data->d[23] = -4.906849f;
    data->d[24] = -0.135984f;
    data->d[25] = -2.485770f;
    data->d[26] = 0.129395f;
    data->d[27] = -0.676417f;
    data->d[28] = -3.157588f;
    data->d[29] = -0.073150f;
    *(result->MinResult()) = 0.000020f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000020f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 1, 22);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 1, 9);
    instructions->SetOperation(4, 1, 0);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 0, 2);
    instructions->SetOperation(7, 0, 19);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 1, 15);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 1, 18);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 1, 29);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 1, 22);
    instructions->SetOperation(27, 1, 29);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 24);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 40;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 17448258927230012683;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000020f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
