#pragma once
#include "FireStarterState.h"

// Run date: 09/07/24 13:15:21 Pacific Daylight Time
// Run duration = 18.913308 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000024
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
// Run population = 278528
// Run iterations = 64
// Run passes = 100
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 100;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 4;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.395611f;
    data->d[1] = -2.418495f;
    data->d[2] = -1.148567f;
    data->d[3] = 0.560599f;
    data->d[4] = -1.534899f;
    data->d[5] = 1.842242f;
    data->d[6] = 0.272840f;
    data->d[7] = 1.517890f;
    data->d[8] = -0.933218f;
    data->d[9] = -8.755818f;
    data->d[10] = -0.959543f;
    data->d[11] = -0.490750f;
    data->d[12] = 0.039680f;
    data->d[13] = -0.476351f;
    data->d[14] = -1.270785f;
    data->d[15] = -1.426834f;
    data->d[16] = -3.095858f;
    data->d[17] = -1.535326f;
    data->d[18] = -0.957116f;
    data->d[19] = -2.994206f;
    data->d[20] = -0.276659f;
    data->d[21] = -0.761603f;
    data->d[22] = -4.300557f;
    data->d[23] = -0.523264f;
    data->d[24] = 0.777127f;
    data->d[25] = 0.973371f;
    data->d[26] = 0.184509f;
    data->d[27] = -2.804483f;
    data->d[28] = 0.566631f;
    data->d[29] = -1.083012f;
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
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 1, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 0, 25);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 1, 21);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 1, 28);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 0, 14);
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
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =2;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
