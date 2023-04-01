#pragma once
#include "FireStarterState.h"

// Run date: 04/01/23 13:19:37 Pacific Daylight Time
// Run duration = 2163.589116 seconds
// Run generation = 97
// Run result = 0.00042803
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
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
    settings.m_registers = 32;
    settings.m_opcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
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

// Variation: 0  result = 0.00042803
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.237128f;
    data->d[1] = 0.374442f;
    data->d[2] = -1.875500f;
    data->d[3] = 1.550324f;
    data->d[4] = 0.914398f;
    data->d[5] = 0.647638f;
    data->d[6] = -1.550009f;
    data->d[7] = -1.252077f;
    data->d[8] = 1.188765f;
    data->d[9] = -3.078593f;
    data->d[10] = -1.294699f;
    data->d[11] = 0.606958f;
    data->d[12] = 0.487087f;
    data->d[13] = -1.615458f;
    data->d[14] = -1.089866f;
    data->d[15] = -0.733381f;
    data->d[16] = 0.436325f;
    data->d[17] = 0.371607f;
    data->d[18] = 0.000428f;
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
    *(result->MinResult()) = 0.000428f;
} // LoadVariation0

// Variation: 1  result = 0.00029886
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.083508f;
    data->d[1] = -0.329632f;
    data->d[2] = 2.091096f;
    data->d[3] = -0.083767f;
    data->d[4] = 2.286764f;
    data->d[5] = 3.509154f;
    data->d[6] = -2.121674f;
    data->d[7] = -1.955796f;
    data->d[8] = -0.067136f;
    data->d[9] = 1.513457f;
    data->d[10] = -0.257078f;
    data->d[11] = -1.564441f;
    data->d[12] = -3.771847f;
    data->d[13] = 1.780231f;
    data->d[14] = 1.509490f;
    data->d[15] = 0.338456f;
    data->d[16] = -0.924194f;
    data->d[17] = -0.740759f;
    data->d[18] = 0.852561f;
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
    *(result->MinResult()) = 0.000299f;
} // LoadVariation1

// Variation: 2  result = 0.00030767
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.128424f;
    data->d[1] = -1.041966f;
    data->d[2] = -1.291102f;
    data->d[3] = 1.074187f;
    data->d[4] = 1.642530f;
    data->d[5] = -0.641756f;
    data->d[6] = 0.427307f;
    data->d[7] = -3.477606f;
    data->d[8] = -0.920042f;
    data->d[9] = -1.496733f;
    data->d[10] = -1.278965f;
    data->d[11] = -1.160210f;
    data->d[12] = -0.548862f;
    data->d[13] = -1.827032f;
    data->d[14] = 2.627650f;
    data->d[15] = 1.851677f;
    data->d[16] = -0.333119f;
    data->d[17] = 0.905054f;
    data->d[18] = -0.000308f;
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
    *(result->MinResult()) = 0.000308f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000428f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 26);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 0, 31);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 30);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 30);
    instructions->SetOperation(23, 0, 21);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 31);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 97;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 17981579962686345423;
} // LoadState
