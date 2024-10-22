#pragma once
#include "FireStarterState.h"

// Run date: 10/21/24 19:39:07 Pacific Daylight Time
// Run duration = 4.249261 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000033
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
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 131072
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
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 131072;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000033
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.03751755f;
    data->d[2] = 1.71074903f;
    data->d[3] = -0.22239067f;
    data->d[4] = -0.96855229f;
    data->d[5] = 2.36889911f;
    data->d[6] = 0.99477506f;
    data->d[7] = -1.58727443f;
    data->d[8] = 0.08192263f;
    data->d[9] = -0.92053384f;
    data->d[10] = 1.45604110f;
    data->d[11] = -0.38765693f;
    data->d[12] = 1.83879960f;
    data->d[13] = -0.17209674f;
    data->d[14] = -4.98888588f;
    data->d[15] = 0.05861318f;
    data->d[16] = -2.78291726f;
    data->d[17] = 1.77616549f;
    data->d[18] = 1.81915498f;
    data->d[19] = 4.03757906f;
    data->d[20] = 4.56652737f;
    data->d[21] = 0.41981998f;
    data->d[22] = 0.01368517f;
    data->d[23] = -1.17906535f;
    data->d[24] = 0.36299700f;
    data->d[25] = -0.06095899f;
    data->d[26] = 1.65155911f;
    data->d[27] = -1.83060515f;
    data->d[28] = -1.17636812f;
    data->d[29] = 0.35605353f;
    *(result->MinResult()) = 0.00000033f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000033f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 29);
    instructions->SetOperation(4, 1, 11);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 0, 17);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 20);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 1, 19);
    instructions->SetOperation(24, 1, 28);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 1, 3);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 0, 18);
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
    state.m_generation = 3;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00478420f;
    state.m_maxResult = 0.00000033f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
