#pragma once
#include "FireStarterState.h"

// Run date: 09/17/23 12:09:26 Pacific Daylight Time
// Run duration = 854.783562 seconds
// Run generation = 73
// Run evolution = 14
// Run result = 0.00000238
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000072
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.058534f;
    data->d[2] = 3.667550f;
    data->d[3] = 1.091173f;
    data->d[4] = -4.758723f;
    data->d[5] = -1.188764f;
    data->d[6] = -0.830196f;
    data->d[7] = 0.298166f;
    data->d[8] = 0.234718f;
    data->d[9] = -0.195665f;
    data->d[10] = 0.491541f;
    data->d[11] = 4.368784f;
    data->d[12] = -0.741927f;
    data->d[13] = 0.021430f;
    data->d[14] = -3.596251f;
    data->d[15] = 24.477568f;
    data->d[16] = 1.316748f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.183019f;
    data->d[19] = -3.720531f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000143
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.085985f;
    data->d[2] = -2.041578f;
    data->d[3] = 0.267696f;
    data->d[4] = 1.773884f;
    data->d[5] = -3.926558f;
    data->d[6] = 0.172005f;
    data->d[7] = -0.688232f;
    data->d[8] = 0.581673f;
    data->d[9] = 0.118667f;
    data->d[10] = -1.498868f;
    data->d[11] = 1.264193f;
    data->d[12] = -0.743654f;
    data->d[13] = -1.283010f;
    data->d[14] = -0.573420f;
    data->d[15] = 3.615040f;
    data->d[16] = 32.500813f;
    data->d[17] = 10.161928f;
    data->d[18] = 0.008452f;
    data->d[19] = -0.038083f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000238
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617419f;
    data->d[1] = -0.262339f;
    data->d[2] = 1.231346f;
    data->d[3] = 3.910671f;
    data->d[4] = -5.141479f;
    data->d[5] = -0.682819f;
    data->d[6] = -0.059576f;
    data->d[7] = 0.484117f;
    data->d[8] = 1.215107f;
    data->d[9] = -1.222556f;
    data->d[10] = -0.004590f;
    data->d[11] = -1.667045f;
    data->d[12] = 1.600646f;
    data->d[13] = -3.484280f;
    data->d[14] = 0.225454f;
    data->d[15] = 45.086838f;
    data->d[16] = 6.766892f;
    data->d[17] = -0.177016f;
    data->d[18] = -5.212847f;
    data->d[19] = 0.010955f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 1, 4);
    instructions->SetOperation(4, 1, 14);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 1, 28);
    instructions->SetOperation(7, 1, 17);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 1, 1);
    instructions->SetOperation(16, 0, 18);
    instructions->SetOperation(17, 1, 0);
    instructions->SetOperation(18, 0, 17);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 1, 0);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 73;
    state.m_evolution = 14;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 27;
    state.m_copy_id = 37;
    state.m_test = 0;
    state.m_seed = 12226375385744748071;
    state.m_maxResult = 0.000002f;
    state.m_lastResult = 0.000003f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
