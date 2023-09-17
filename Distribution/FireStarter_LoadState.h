#pragma once
#include "FireStarterState.h"

// Run date: 09/16/23 16:22:09 Pacific Daylight Time
// Run duration = 9581.939446 seconds
// Run generation = 25
// Run evolution = 12
// Run result = 0.00003135
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

// Variation: 0  result = 0.00001740
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.212643f;
    data->d[1] = 0.901785f;
    data->d[2] = -0.598713f;
    data->d[3] = 0.594994f;
    data->d[4] = 0.906771f;
    data->d[5] = -0.783359f;
    data->d[6] = -0.001238f;
    data->d[7] = -1.322371f;
    data->d[8] = 1.083502f;
    data->d[9] = -1.322841f;
    data->d[10] = -1.339563f;
    data->d[11] = 2.677874f;
    data->d[12] = -0.673288f;
    data->d[13] = 2.389460f;
    data->d[14] = 0.470206f;
    data->d[15] = -0.153745f;
    data->d[16] = 0.480832f;
    data->d[17] = -3.286180f;
    data->d[18] = 0.562156f;
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
    *(result->MinResult()) = 0.000017f;
} // LoadVariation0

// Variation: 1  result = 0.00002050
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.066272f;
    data->d[1] = 1.805823f;
    data->d[2] = 0.238351f;
    data->d[3] = 0.397821f;
    data->d[4] = -0.042728f;
    data->d[5] = 1.617607f;
    data->d[6] = -0.168286f;
    data->d[7] = -0.042743f;
    data->d[8] = -1.431916f;
    data->d[9] = 0.991687f;
    data->d[10] = 2.164168f;
    data->d[11] = -3.691857f;
    data->d[12] = -1.774593f;
    data->d[13] = -0.147918f;
    data->d[14] = 2.122532f;
    data->d[15] = -0.789833f;
    data->d[16] = -0.496835f;
    data->d[17] = -1.926887f;
    data->d[18] = 0.357323f;
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
    *(result->MinResult()) = 0.000021f;
} // LoadVariation1

// Variation: 2  result = 0.00003135
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.157322f;
    data->d[1] = 0.074581f;
    data->d[2] = -0.080898f;
    data->d[3] = 0.230494f;
    data->d[4] = 0.323779f;
    data->d[5] = -5.900487f;
    data->d[6] = 0.487212f;
    data->d[7] = -1.191026f;
    data->d[8] = -0.009903f;
    data->d[9] = -0.254818f;
    data->d[10] = -2.659652f;
    data->d[11] = 2.190070f;
    data->d[12] = -0.231031f;
    data->d[13] = 1.227087f;
    data->d[14] = -1.166660f;
    data->d[15] = 1.813520f;
    data->d[16] = -0.247634f;
    data->d[17] = -0.967745f;
    data->d[18] = 0.788420f;
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
    *(result->MinResult()) = 0.000031f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000031f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 1, 18);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 1);
    instructions->SetOperation(12, 1, 23);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 24);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 23);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 25;
    state.m_evolution = 12;
    state.m_age = 0;
    state.m_index = 1;
    state.m_id = 5;
    state.m_copy_id = 34;
    state.m_test = 15;
    state.m_seed = 11320112812046841898;
    state.m_maxResult = 0.000031f;
    state.m_lastResult = 0.000031f;
    state.m_optimizePass = false;
    state.m_lastEvolved = true;
} // LoadState
