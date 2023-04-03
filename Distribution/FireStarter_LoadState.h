#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 23:35:49 Pacific Daylight Time
// Run duration = 284.019228 seconds
// Run generation = 561
// Run result = 0.00000322
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
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
    settings.m_opcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 1;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_OPTIMIZE;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.433695f;
    data->d[2] = 1.503502f;
    data->d[3] = 0.178785f;
    data->d[4] = 0.496469f;
    data->d[5] = 3.091935f;
    data->d[6] = 1.552260f;
    data->d[7] = -0.178143f;
    data->d[8] = -0.880467f;
    data->d[9] = -0.000427f;
    data->d[10] = -5.277432f;
    data->d[11] = -9.565006f;
    data->d[12] = -10.967731f;
    data->d[13] = 0.161478f;
    data->d[14] = -0.138306f;
    data->d[15] = -0.159247f;
    data->d[16] = 1.402035f;
    data->d[17] = -1.557800f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000131
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090660f;
    data->d[1] = 0.138182f;
    data->d[2] = -0.842670f;
    data->d[3] = 0.062253f;
    data->d[4] = -0.149355f;
    data->d[5] = -0.101156f;
    data->d[6] = 0.594610f;
    data->d[7] = 2.090998f;
    data->d[8] = -0.925542f;
    data->d[9] = 0.057141f;
    data->d[10] = -0.095630f;
    data->d[11] = 1.939769f;
    data->d[12] = -0.126121f;
    data->d[13] = 1.409120f;
    data->d[14] = 4.323243f;
    data->d[15] = 3.648539f;
    data->d[16] = -2.225235f;
    data->d[17] = 16.146055f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000003f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000322
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.132964f;
    data->d[2] = 1.356794f;
    data->d[3] = 0.491817f;
    data->d[4] = -0.341422f;
    data->d[5] = 4.173056f;
    data->d[6] = 0.037687f;
    data->d[7] = 0.589352f;
    data->d[8] = 0.462231f;
    data->d[9] = -0.776139f;
    data->d[10] = 24.902809f;
    data->d[11] = -0.144063f;
    data->d[12] = 67.372414f;
    data->d[13] = 1.740564f;
    data->d[14] = 0.030657f;
    data->d[15] = -4.570387f;
    data->d[16] = -2.462947f;
    data->d[17] = 27.312738f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000003f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 11);
    instructions->SetOperation(2, 0, 31);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 1, 21);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 24);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 9);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 561;
    state.m_index = 0;
    state.m_test = 1;
    state.m_seed = 10475779055152925864;
} // LoadState
