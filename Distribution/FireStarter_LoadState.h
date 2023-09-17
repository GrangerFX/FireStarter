#pragma once
#include "FireStarterState.h"

// Run date: 09/16/23 19:51:48 Pacific Daylight Time
// Run duration = 9590.707370 seconds
// Run generation = 34
// Run evolution = 7
// Run result = 0.00001395
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

// Variation: 0  result = 0.00001395
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.976045f;
    data->d[1] = -1.543973f;
    data->d[2] = 0.742005f;
    data->d[3] = -1.365410f;
    data->d[4] = 1.282510f;
    data->d[5] = 0.447642f;
    data->d[6] = -0.574520f;
    data->d[7] = -0.994352f;
    data->d[8] = -0.378317f;
    data->d[9] = 1.252921f;
    data->d[10] = -0.546892f;
    data->d[11] = -0.946100f;
    data->d[12] = 1.200038f;
    data->d[13] = 0.703994f;
    data->d[14] = 0.827882f;
    data->d[15] = 0.093198f;
    data->d[16] = 0.745956f;
    data->d[17] = 0.465722f;
    data->d[18] = 0.040984f;
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
    *(result->MinResult()) = 0.000014f;
} // LoadVariation0

// Variation: 1  result = 0.00001156
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.446117f;
    data->d[1] = -1.376773f;
    data->d[2] = -0.883534f;
    data->d[3] = -0.265566f;
    data->d[4] = -0.345192f;
    data->d[5] = -3.364986f;
    data->d[6] = -0.508204f;
    data->d[7] = 0.841413f;
    data->d[8] = -0.367338f;
    data->d[9] = 1.687596f;
    data->d[10] = -1.000767f;
    data->d[11] = 0.624656f;
    data->d[12] = -2.994186f;
    data->d[13] = 1.577140f;
    data->d[14] = -1.826341f;
    data->d[15] = -0.173771f;
    data->d[16] = 0.104063f;
    data->d[17] = -0.036087f;
    data->d[18] = -10.764718f;
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
    *(result->MinResult()) = 0.000012f;
} // LoadVariation1

// Variation: 2  result = 0.00001134
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.879747f;
    data->d[1] = 1.731554f;
    data->d[2] = -0.941344f;
    data->d[3] = 0.924008f;
    data->d[4] = -1.986795f;
    data->d[5] = 0.628026f;
    data->d[6] = 0.637972f;
    data->d[7] = 1.839160f;
    data->d[8] = 0.417241f;
    data->d[9] = -1.221847f;
    data->d[10] = -0.234178f;
    data->d[11] = 0.482286f;
    data->d[12] = 2.227746f;
    data->d[13] = -0.622558f;
    data->d[14] = 0.506597f;
    data->d[15] = -0.420257f;
    data->d[16] = -0.246595f;
    data->d[17] = 0.650662f;
    data->d[18] = 0.844772f;
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
    *(result->MinResult()) = 0.000011f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000014f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 4);
    instructions->SetOperation(4, 1, 13);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 1, 16);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 1, 14);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 1, 8);
    instructions->SetOperation(16, 0, 22);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 0, 2);
    instructions->SetOperation(19, 1, 17);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 1, 7);
    instructions->SetOperation(24, 1, 21);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 0, 21);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 1, 8);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 34;
    state.m_evolution = 7;
    state.m_age = 15;
    state.m_index = 56;
    state.m_id = 35;
    state.m_copy_id = 14;
    state.m_test = 15;
    state.m_seed = 1669179723639287478;
    state.m_maxResult = 0.000014f;
    state.m_lastResult = 0.000014f;
    state.m_optimizePass = false;
    state.m_lastEvolved = true;
} // LoadState
