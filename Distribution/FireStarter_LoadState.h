#pragma once
#include "FireStarterState.h"

// Run date: 04/16/23 15:32:06 Pacific Daylight Time
// Run duration = 814.336442 seconds
// Run generation = 322
// Run result = 0.00000077
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 1;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000077
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.032601f;
    data->d[2] = 0.951980f;
    data->d[3] = 1.608736f;
    data->d[4] = -2.631018f;
    data->d[5] = -3.130260f;
    data->d[6] = 0.001322f;
    data->d[7] = 2.593707f;
    data->d[8] = -0.914170f;
    data->d[9] = -0.777714f;
    data->d[10] = 4.346710f;
    data->d[11] = -6.428894f;
    data->d[12] = 1.741010f;
    data->d[13] = 1.300000f;
    data->d[14] = 1.539680f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000001f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000077
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.386689f;
    data->d[2] = 0.634681f;
    data->d[3] = -0.175345f;
    data->d[4] = -1.972427f;
    data->d[5] = 0.128549f;
    data->d[6] = 0.290693f;
    data->d[7] = -5.244819f;
    data->d[8] = -1.602871f;
    data->d[9] = -1.705700f;
    data->d[10] = 0.381652f;
    data->d[11] = 3.560057f;
    data->d[12] = 1.707117f;
    data->d[13] = 2.096516f;
    data->d[14] = -1.904059f;
    data->d[15] = -0.118132f;
    data->d[16] = 0.000000f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.253373f;
    data->d[2] = -0.138906f;
    data->d[3] = -0.150321f;
    data->d[4] = -1.561287f;
    data->d[5] = -1.365208f;
    data->d[6] = 0.214454f;
    data->d[7] = 2.275090f;
    data->d[8] = -1.686365f;
    data->d[9] = 0.936582f;
    data->d[10] = -0.000037f;
    data->d[11] = 4.840719f;
    data->d[12] = -2.291269f;
    data->d[13] = 0.581877f;
    data->d[14] = -0.320855f;
    data->d[15] = 0.523599f;
    data->d[16] = 0.000000f;
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
    data->d[29] = 0.000000f;
    data->d[30] = -0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
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
    instructions->SetOperation(0, 1, 12);
    instructions->SetOperation(1, 0, 11);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 13);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 1, 16);
    instructions->SetOperation(14, 0, 29);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 1, 4);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 322;
    state.m_index = 0;
    state.m_test = 28;
    state.m_seed = 13831837079663696667;
} // LoadState
