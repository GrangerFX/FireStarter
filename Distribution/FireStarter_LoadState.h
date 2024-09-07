#pragma once
#include "FireStarterState.h"

// Run date: 09/07/24 10:26:23 Pacific Daylight Time
// Run duration = 132.747168 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000069
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

// Variation: 0  result = 0.00000069
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 3.023452f;
    data->d[1] = -0.370466f;
    data->d[2] = -2.631179f;
    data->d[3] = 0.712483f;
    data->d[4] = 0.930548f;
    data->d[5] = -0.702344f;
    data->d[6] = -0.429049f;
    data->d[7] = 0.073830f;
    data->d[8] = 1.217962f;
    data->d[9] = 1.137425f;
    data->d[10] = -1.100151f;
    data->d[11] = 2.753265f;
    data->d[12] = -0.953695f;
    data->d[13] = 1.898502f;
    data->d[14] = 2.063286f;
    data->d[15] = -2.205838f;
    data->d[16] = -2.870685f;
    data->d[17] = -1.268497f;
    data->d[18] = -1.723115f;
    data->d[19] = 0.112860f;
    data->d[20] = 0.089483f;
    data->d[21] = -1.101207f;
    data->d[22] = 0.496185f;
    data->d[23] = 1.977145f;
    data->d[24] = 1.444148f;
    data->d[25] = 1.748192f;
    data->d[26] = -0.457299f;
    data->d[27] = 1.797716f;
    data->d[28] = -2.828236f;
    data->d[29] = 0.017998f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000001f;
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
    instructions->SetOperation(21, 0, 23);
    instructions->SetOperation(22, 1, 21);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 0, 2);
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
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
