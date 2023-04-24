#pragma once
#include "FireStarterState.h"

// Run date: 04/23/23 20:14:17 Pacific Daylight Time
// Run duration = 1408.134875 seconds
// Run generation = 239
// Run result = 0.00000095
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.033309f;
    data->d[1] = -3.174901f;
    data->d[2] = 0.252875f;
    data->d[3] = 0.000001f;
    data->d[4] = -2.302186f;
    data->d[5] = -0.772444f;
    data->d[6] = -1.420587f;
    data->d[7] = 0.844514f;
    data->d[8] = 3.978534f;
    data->d[9] = -0.008181f;
    data->d[10] = 1.207275f;
    data->d[11] = -0.892617f;
    data->d[12] = 0.212873f;
    data->d[13] = 5.057324f;
    data->d[14] = 0.102482f;
    data->d[15] = -13.793386f;
    data->d[16] = -9.160216f;
    data->d[17] = -0.003055f;
    data->d[18] = 0.313784f;
    data->d[19] = -0.127707f;
    data->d[20] = -0.000000f;
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
    data->d[0] = -1.390983f;
    data->d[1] = -1.699677f;
    data->d[2] = 0.294961f;
    data->d[3] = 0.000005f;
    data->d[4] = -2.845458f;
    data->d[5] = 1.346252f;
    data->d[6] = 0.140326f;
    data->d[7] = -1.746681f;
    data->d[8] = 0.355886f;
    data->d[9] = 0.091140f;
    data->d[10] = -0.274894f;
    data->d[11] = 2.098949f;
    data->d[12] = -0.358847f;
    data->d[13] = 0.301435f;
    data->d[14] = 3.603224f;
    data->d[15] = -0.777978f;
    data->d[16] = 0.655874f;
    data->d[17] = -0.003583f;
    data->d[18] = -7.763571f;
    data->d[19] = -0.333478f;
    data->d[20] = -0.118133f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000095
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.992373f;
    data->d[1] = -0.625620f;
    data->d[2] = -0.216558f;
    data->d[3] = -0.000002f;
    data->d[4] = 0.800668f;
    data->d[5] = -1.883864f;
    data->d[6] = 1.461026f;
    data->d[7] = -2.509260f;
    data->d[8] = -0.473090f;
    data->d[9] = 0.202851f;
    data->d[10] = 3.340764f;
    data->d[11] = 0.561327f;
    data->d[12] = -0.528561f;
    data->d[13] = 1.841220f;
    data->d[14] = 0.074820f;
    data->d[15] = -6.072485f;
    data->d[16] = -1.500954f;
    data->d[17] = -0.000337f;
    data->d[18] = -6.593905f;
    data->d[19] = -0.044149f;
    data->d[20] = 0.523600f;
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
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 1, 12);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 1, 20);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 1, 1);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 239;
    state.m_index = 0;
    state.m_test = 47;
    state.m_seed = 17986900259872641990;
} // LoadState
