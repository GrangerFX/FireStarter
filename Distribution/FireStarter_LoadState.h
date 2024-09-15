#pragma once
#include "FireStarterState.h"

// Run date: 09/14/24 17:27:15 Pacific Daylight Time
// Run duration = 115.735063 seconds
// Run generation = 44
// Run evolution = 0
// Run max result = 0.00000036
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

// Variation: 0  result = 0.00000036
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.582670f;
    data->d[1] = -0.143202f;
    data->d[2] = -2.788076f;
    data->d[3] = -1.561993f;
    data->d[4] = 0.284268f;
    data->d[5] = 0.296545f;
    data->d[6] = -0.046080f;
    data->d[7] = 1.470345f;
    data->d[8] = 1.086024f;
    data->d[9] = 2.084625f;
    data->d[10] = -0.123412f;
    data->d[11] = 1.986529f;
    data->d[12] = -0.779397f;
    data->d[13] = -3.903330f;
    data->d[14] = 1.960267f;
    data->d[15] = -13.415194f;
    data->d[16] = -3.331401f;
    data->d[17] = 0.974239f;
    data->d[18] = 0.497198f;
    data->d[19] = 4.360209f;
    data->d[20] = -0.868141f;
    data->d[21] = 3.174277f;
    data->d[22] = -7.572651f;
    data->d[23] = -6.936521f;
    data->d[24] = 2.451987f;
    data->d[25] = -2.673296f;
    data->d[26] = 1.135774f;
    data->d[27] = -0.052392f;
    data->d[28] = 1.010468f;
    data->d[29] = -12.248649f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 18);
    instructions->SetOperation(1, 1, 3);
    instructions->SetOperation(2, 0, 9);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 14);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 20);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 0, 21);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 0, 24);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 1, 2);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 44;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 17448258927230012683;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000056f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
