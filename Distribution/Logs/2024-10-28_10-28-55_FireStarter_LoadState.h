#pragma once
#include "FireStarterState.h"

// Run date: 10/28/24 10:28:55 Pacific Daylight Time
// Run duration = 171.169945 seconds
// Run generation = 16
// Run evolution = 0
// Run max result = 0.00000066
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 32768
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 32768;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000066
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.77941132f;
    data->d[1] = 0.34031227f;
    data->d[2] = -1.66980398f;
    data->d[3] = -0.17488579f;
    data->d[4] = -2.41578293f;
    data->d[5] = 1.59529853f;
    data->d[6] = -2.01923728f;
    data->d[7] = 0.07298952f;
    data->d[8] = 0.10390435f;
    data->d[9] = 0.28763458f;
    data->d[10] = 2.02980351f;
    data->d[11] = 0.76626414f;
    data->d[12] = 1.53263545f;
    data->d[13] = 1.96286070f;
    data->d[14] = 6.73193264f;
    data->d[15] = 3.45738530f;
    data->d[16] = 8.09259033f;
    data->d[17] = -0.20468803f;
    data->d[18] = -0.88217223f;
    data->d[19] = 0.37681556f;
    data->d[20] = 0.60238940f;
    data->d[21] = 0.15972926f;
    data->d[22] = 0.05985622f;
    data->d[23] = 1.79936802f;
    data->d[24] = -1.48443770f;
    data->d[25] = 1.68554020f;
    data->d[26] = -1.99824321f;
    data->d[27] = 1.33047771f;
    data->d[28] = -0.45768002f;
    data->d[29] = 1.79530144f;
    *(result->MinResult()) = 0.00000066f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000066f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 1, 14);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 18);
    instructions->SetOperation(5, 0, 22);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 1, 4);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 0, 26);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 26);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 1, 16);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 0, 1);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 0, 29);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 1, 2);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 1, 17);
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
    state.m_generation = 16;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 761807918016009034;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000066f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
