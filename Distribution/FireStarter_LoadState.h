#pragma once
#include "FireStarterState.h"

// Run date: 09/12/23 09:55:35 Pacific Daylight Time
// Run duration = 11219.190958 seconds
// Run generation = 49
// Run evolution = 11
// Run result = 0.00000077
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
// Run tests = 16
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000039
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.487849f;
    data->d[2] = -2.210620f;
    data->d[3] = -0.861870f;
    data->d[4] = -1.718558f;
    data->d[5] = -1.564250f;
    data->d[6] = 0.111130f;
    data->d[7] = 0.030483f;
    data->d[8] = -0.628700f;
    data->d[9] = -0.048483f;
    data->d[10] = -0.333669f;
    data->d[11] = -2.368572f;
    data->d[12] = -18.928801f;
    data->d[13] = -1.776130f;
    data->d[14] = 3.701721f;
    data->d[15] = -0.144676f;
    data->d[16] = -0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -1.432903f;
    data->d[2] = -1.262701f;
    data->d[3] = 3.064806f;
    data->d[4] = 2.892242f;
    data->d[5] = 0.007248f;
    data->d[6] = 0.198129f;
    data->d[7] = -0.295172f;
    data->d[8] = -0.315250f;
    data->d[9] = 1.357131f;
    data->d[10] = -1.605879f;
    data->d[11] = -2.726139f;
    data->d[12] = -5.815936f;
    data->d[13] = 0.794665f;
    data->d[14] = 0.223875f;
    data->d[15] = -1.028181f;
    data->d[16] = -0.118132f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
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

// Variation: 2  result = 0.00000077
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.449532f;
    data->d[2] = -1.824755f;
    data->d[3] = -0.966376f;
    data->d[4] = -1.850884f;
    data->d[5] = -1.207332f;
    data->d[6] = 0.982016f;
    data->d[7] = -1.107116f;
    data->d[8] = 0.077164f;
    data->d[9] = -0.351953f;
    data->d[10] = 1.583105f;
    data->d[11] = 0.532209f;
    data->d[12] = 0.570370f;
    data->d[13] = 2.537149f;
    data->d[14] = -0.316189f;
    data->d[15] = 0.553515f;
    data->d[16] = 0.523599f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
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
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 6);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 49;
    state.m_evolution = 11;
    state.m_age = 0;
    state.m_index = 29;
    state.m_id = 62;
    state.m_copy_id = 34;
    state.m_test = 15;
    state.m_seed = 10786567806894091074;
    state.m_maxResult = 0.000001f;
    state.m_lastResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_lastEvolved = true;
} // LoadState
