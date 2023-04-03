#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 21:42:25 Pacific Daylight Time
// Run duration = 1389.124065 seconds
// Run generation = 237
// Run result = 0.00000060
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2

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
    settings.m_registers = 30;
    settings.m_opcodes = 2;

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

// Variation: 0  result = 0.00000030
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.041534f;
    data->d[2] = 0.147332f;
    data->d[3] = -1.581661f;
    data->d[4] = 3.462875f;
    data->d[5] = -3.555919f;
    data->d[6] = 0.339252f;
    data->d[7] = -1.073225f;
    data->d[8] = 1.489085f;
    data->d[9] = -9.145890f;
    data->d[10] = -0.647674f;
    data->d[11] = -7.510565f;
    data->d[12] = -0.885498f;
    data->d[13] = -2.778325f;
    data->d[14] = 7.161849f;
    data->d[15] = -103.783249f;
    data->d[16] = 0.552117f;
    data->d[17] = -0.655085f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.039224f;
    data->d[2] = -2.336081f;
    data->d[3] = -0.183786f;
    data->d[4] = 5.410854f;
    data->d[5] = -0.274819f;
    data->d[6] = -0.407071f;
    data->d[7] = 0.045094f;
    data->d[8] = 1.930337f;
    data->d[9] = 1.188627f;
    data->d[10] = 2.189386f;
    data->d[11] = -5.350618f;
    data->d[12] = 133.952927f;
    data->d[13] = -1.687843f;
    data->d[14] = 4.283019f;
    data->d[15] = -209.660568f;
    data->d[16] = -0.025120f;
    data->d[17] = -0.060071f;
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
    data->d[30] = 0.000000f;
    data->d[31] = 0.000001f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.287789f;
    data->d[2] = 0.126787f;
    data->d[3] = -0.754824f;
    data->d[4] = -0.742583f;
    data->d[5] = -1.227271f;
    data->d[6] = -0.472028f;
    data->d[7] = 0.391334f;
    data->d[8] = -0.220495f;
    data->d[9] = 1.036673f;
    data->d[10] = -0.007105f;
    data->d[11] = 25.640471f;
    data->d[12] = 0.150813f;
    data->d[13] = 0.298521f;
    data->d[14] = -2.071810f;
    data->d[15] = -3.851024f;
    data->d[16] = -1.555929f;
    data->d[17] = 1.053221f;
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
    data->d[30] = -914053262213120.000000f;
    data->d[31] = -0.000000f;
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
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 11);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 16);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 1, 26);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 21);
    instructions->SetOperation(11, 1, 14);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 1, 24);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 8);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 237;
    state.m_index = 0;
    state.m_test = 53;
    state.m_seed = 884740100169943207;
} // LoadState
