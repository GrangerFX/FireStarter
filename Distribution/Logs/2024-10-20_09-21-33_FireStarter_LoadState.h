#pragma once
#include "FireStarterState.h"

// Run date: 10/20/24 09:21:33 Pacific Daylight Time
// Run duration = 449.688217 seconds
// Run generation = 34
// Run evolution = 0
// Run max result = 0.00000005
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

// Variation: 0  result = 0.00000005
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.17121914f;
    data->d[1] = 1.81898022f;
    data->d[2] = -1.21520507f;
    data->d[3] = 0.23677418f;
    data->d[4] = -0.50488257f;
    data->d[5] = -0.25890508f;
    data->d[6] = 6.29692411f;
    data->d[7] = 1.92657328f;
    data->d[8] = 5.06796551f;
    data->d[9] = -4.54481459f;
    data->d[10] = -0.00917032f;
    data->d[11] = -0.68009770f;
    data->d[12] = 0.02945521f;
    data->d[13] = 3.27742863f;
    data->d[14] = 8.27347565f;
    data->d[15] = 4.66060162f;
    data->d[16] = 0.02689915f;
    data->d[17] = -4.35942030f;
    data->d[18] = 2.24470520f;
    data->d[19] = -0.01631019f;
    data->d[20] = 0.93417674f;
    data->d[21] = -0.23083410f;
    data->d[22] = 0.23521343f;
    data->d[23] = 0.36637825f;
    data->d[24] = 1.63327360f;
    data->d[25] = 1.66156292f;
    data->d[26] = -1.49995160f;
    data->d[27] = -1.06409562f;
    data->d[28] = -1.46183097f;
    data->d[29] = 1.78902364f;
    *(result->MinResult()) = 0.00000005f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 0, 19);
    instructions->SetOperation(2, 1, 8);
    instructions->SetOperation(3, 1, 5);
    instructions->SetOperation(4, 1, 19);
    instructions->SetOperation(5, 1, 23);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 24);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 0, 24);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 1, 15);
    instructions->SetOperation(27, 1, 11);
    instructions->SetOperation(28, 0, 25);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 0, 5);
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
    state.m_generation = 34;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00219452f;
    state.m_maxResult = 0.00000005f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
