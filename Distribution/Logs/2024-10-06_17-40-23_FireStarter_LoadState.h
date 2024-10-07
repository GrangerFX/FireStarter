#pragma once
#include "FireStarterState.h"

// Run date: 10/06/24 17:40:23 Pacific Daylight Time
// Run duration = 669.858352 seconds
// Run generation = 31
// Run evolution = 0
// Run max result = 0.00000061
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 524288;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000061
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.24617195f;
    data->d[1] = 0.51476216f;
    data->d[2] = -1.00763786f;
    data->d[3] = 0.08171137f;
    data->d[4] = -0.61071110f;
    data->d[5] = 2.00788593f;
    data->d[6] = 1.30321240f;
    data->d[7] = 2.17917776f;
    data->d[8] = -1.16016293f;
    data->d[9] = 0.68982053f;
    data->d[10] = 0.95829856f;
    data->d[11] = 1.95300710f;
    data->d[12] = -0.42288437f;
    data->d[13] = 0.91310626f;
    data->d[14] = 0.18240157f;
    data->d[15] = -1.47944856f;
    data->d[16] = 0.48230222f;
    data->d[17] = -0.09844604f;
    data->d[18] = 0.50579995f;
    data->d[19] = 0.35192552f;
    data->d[20] = -1.33380270f;
    data->d[21] = 0.46090204f;
    data->d[22] = -1.45383394f;
    data->d[23] = -1.15700185f;
    data->d[24] = 0.13845211f;
    data->d[25] = 1.53460073f;
    data->d[26] = 1.52385938f;
    data->d[27] = -0.51133519f;
    data->d[28] = 0.31352699f;
    data->d[29] = -1.74254000f;
    *(result->MinResult()) = 0.00000061f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000061f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 29);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 4);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 12);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 23);
    instructions->SetOperation(14, 0, 5);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 18);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 1, 18);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 1, 14);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 20);
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
    state.m_generation = 31;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00247806f;
    state.m_maxResult = 0.00000061f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
