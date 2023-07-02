#pragma once
#include "FireStarterState.h"

// Run date: 07/02/23 14:15:19 Pacific Daylight Time
// Run duration = 2124.555514 seconds
// Run generation = 162
// Run evolution = 0
// Run result = 0.00000143
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000143
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.233738f;
    data->d[1] = -1.744610f;
    data->d[2] = 1.010300f;
    data->d[3] = -1.660431f;
    data->d[4] = -0.680564f;
    data->d[5] = -0.041065f;
    data->d[6] = -3.209357f;
    data->d[7] = 1.323146f;
    data->d[8] = 0.311418f;
    data->d[9] = 1.384165f;
    data->d[10] = 0.891513f;
    data->d[11] = -1.747208f;
    data->d[12] = -0.354174f;
    data->d[13] = -0.452511f;
    data->d[14] = -0.226892f;
    data->d[15] = -3.261908f;
    data->d[16] = 1.462223f;
    data->d[17] = 1.575228f;
    data->d[18] = -0.000000f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000125
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.532500f;
    data->d[1] = 0.555406f;
    data->d[2] = 1.090370f;
    data->d[3] = -0.164841f;
    data->d[4] = 1.375588f;
    data->d[5] = 0.172839f;
    data->d[6] = 0.569270f;
    data->d[7] = 1.610784f;
    data->d[8] = 0.175340f;
    data->d[9] = -4.647478f;
    data->d[10] = 1.914984f;
    data->d[11] = -0.535865f;
    data->d[12] = -0.950127f;
    data->d[13] = -0.448027f;
    data->d[14] = -1.629427f;
    data->d[15] = 2.695272f;
    data->d[16] = -1.621193f;
    data->d[17] = -3.037762f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000113
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.337982f;
    data->d[1] = 0.106107f;
    data->d[2] = 0.778728f;
    data->d[3] = 1.610889f;
    data->d[4] = -0.341782f;
    data->d[5] = -0.270456f;
    data->d[6] = 0.601910f;
    data->d[7] = -0.636785f;
    data->d[8] = -0.226740f;
    data->d[9] = -6.836707f;
    data->d[10] = -1.105822f;
    data->d[11] = 0.134923f;
    data->d[12] = 0.958023f;
    data->d[13] = -1.235203f;
    data->d[14] = 1.821804f;
    data->d[15] = -1.988831f;
    data->d[16] = -0.202970f;
    data->d[17] = -1.492096f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 0, 20);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 13);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 1);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 162;
    state.m_evolution = 0;
    state.m_index = 38;
    state.m_test = 28;
    state.m_seed = 289796150427173619;
} // LoadState
