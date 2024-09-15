#pragma once
#include "FireStarterState.h"

// Run date: 09/14/24 18:09:34 Pacific Daylight Time
// Run duration = 1342.259086 seconds
// Run generation = 565
// Run evolution = 0
// Run max result = 0.00001013
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

// Variation: 0  result = 0.00001013
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.262612f;
    data->d[1] = 5.435765f;
    data->d[2] = 8.341367f;
    data->d[3] = -1.028074f;
    data->d[4] = 2.012656f;
    data->d[5] = 0.749323f;
    data->d[6] = 1.694550f;
    data->d[7] = -0.260323f;
    data->d[8] = 0.968168f;
    data->d[9] = 0.349894f;
    data->d[10] = -1.313713f;
    data->d[11] = 0.542922f;
    data->d[12] = 0.892001f;
    data->d[13] = 1.423222f;
    data->d[14] = -5.220964f;
    data->d[15] = 0.601765f;
    data->d[16] = -1.706511f;
    data->d[17] = 0.006178f;
    data->d[18] = -0.171293f;
    data->d[19] = -0.821772f;
    data->d[20] = -2.255059f;
    data->d[21] = 0.813273f;
    data->d[22] = 1.871614f;
    data->d[23] = -3.395760f;
    data->d[24] = -1.316494f;
    data->d[25] = -2.850950f;
    data->d[26] = -1.335142f;
    data->d[27] = -1.688424f;
    data->d[28] = -2.325833f;
    data->d[29] = -0.886480f;
    *(result->MinResult()) = 0.000010f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000010f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 9);
    instructions->SetOperation(1, 0, 7);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 1, 18);
    instructions->SetOperation(6, 0, 24);
    instructions->SetOperation(7, 1, 29);
    instructions->SetOperation(8, 1, 24);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 0, 15);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 21);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 1, 5);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 1, 22);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 1, 22);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 0, 28);
    instructions->SetOperation(31, 0, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 565;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 17448258927230012683;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000075f;
    state.m_maxResult = 0.000010f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
