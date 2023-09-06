#pragma once
#include "FireStarterState.h"

// Run date: 09/06/23 12:25:14 Pacific Daylight Time
// Run duration = 1282.388958 seconds
// Run generation = 41
// Run evolution = 13
// Run result = 0.00002170
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
// Run generations = 500
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
    settings.m_generations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000823
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.478255f;
    data->d[1] = 1.666221f;
    data->d[2] = 0.674654f;
    data->d[3] = 1.695518f;
    data->d[4] = -0.294103f;
    data->d[5] = 1.145197f;
    data->d[6] = -0.749393f;
    data->d[7] = -0.292855f;
    data->d[8] = -1.626452f;
    data->d[9] = 0.926101f;
    data->d[10] = 0.328396f;
    data->d[11] = 6.485205f;
    data->d[12] = 0.051269f;
    data->d[13] = -1.185407f;
    data->d[14] = -1.549931f;
    data->d[15] = -0.085304f;
    data->d[16] = -13.563979f;
    data->d[17] = -35.269817f;
    data->d[18] = 3.609123f;
    data->d[19] = 0.553486f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000008f;
} // LoadVariation0

// Variation: 1  result = 0.00002170
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.527491f;
    data->d[1] = 1.596920f;
    data->d[2] = 0.259848f;
    data->d[3] = -1.759302f;
    data->d[4] = 0.514880f;
    data->d[5] = -0.747255f;
    data->d[6] = -3.285324f;
    data->d[7] = 1.290401f;
    data->d[8] = -1.221879f;
    data->d[9] = 0.163571f;
    data->d[10] = 0.071103f;
    data->d[11] = -1.180169f;
    data->d[12] = 1.574023f;
    data->d[13] = 0.291892f;
    data->d[14] = -0.425808f;
    data->d[15] = -3.210730f;
    data->d[16] = -0.046852f;
    data->d[17] = 31.041092f;
    data->d[18] = 0.812417f;
    data->d[19] = -1.996839f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000022f;
} // LoadVariation1

// Variation: 2  result = 0.00000972
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.719642f;
    data->d[1] = -2.244215f;
    data->d[2] = 1.135618f;
    data->d[3] = 0.387032f;
    data->d[4] = -0.334191f;
    data->d[5] = 1.312971f;
    data->d[6] = -0.455819f;
    data->d[7] = -0.263366f;
    data->d[8] = -0.684885f;
    data->d[9] = 0.238155f;
    data->d[10] = -0.645796f;
    data->d[11] = 2.609393f;
    data->d[12] = -0.671080f;
    data->d[13] = 27.505516f;
    data->d[14] = -0.349879f;
    data->d[15] = -0.262663f;
    data->d[16] = 0.449465f;
    data->d[17] = 3.233356f;
    data->d[18] = 1.404171f;
    data->d[19] = -0.227853f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000010f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000022f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 21);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 41;
    state.m_evolution = 13;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 40;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 4368181334344943144;
    state.m_maxResult = 0.000022f;
    state.m_lastResult = 0.000025f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
