#pragma once
#include "FireStarterState.h"

// Run date: 08/27/23 17:33:47 Pacific Daylight Time
// Run duration = 1452.130765 seconds
// Run generation = 284
// Run evolution = 3
// Run result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 8
// Run processes = 8
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 8;
    settings.m_processes = 8;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -1.542997f;
    data->d[2] = 0.931021f;
    data->d[3] = -1.243298f;
    data->d[4] = -0.356474f;
    data->d[5] = -1.729238f;
    data->d[6] = -0.008451f;
    data->d[7] = 1.690032f;
    data->d[8] = 0.772120f;
    data->d[9] = 1.181638f;
    data->d[10] = 0.340137f;
    data->d[11] = -0.246866f;
    data->d[12] = 4.662282f;
    data->d[13] = -2.207832f;
    data->d[14] = -2.201900f;
    data->d[15] = 1.018092f;
    data->d[16] = 0.953103f;
    data->d[17] = 0.352567f;
    data->d[18] = 0.374705f;
    data->d[19] = -8.813665f;
    data->d[20] = 0.154805f;
    data->d[21] = -0.154805f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.016648f;
    data->d[2] = -1.203335f;
    data->d[3] = 25.633366f;
    data->d[4] = 35.691738f;
    data->d[5] = -1.075704f;
    data->d[6] = 0.016269f;
    data->d[7] = -1.083565f;
    data->d[8] = 0.569657f;
    data->d[9] = -0.710282f;
    data->d[10] = -1.965826f;
    data->d[11] = 0.692190f;
    data->d[12] = 0.455076f;
    data->d[13] = 42.948242f;
    data->d[14] = 15.652776f;
    data->d[15] = -0.147576f;
    data->d[16] = 8.338665f;
    data->d[17] = 3.387300f;
    data->d[18] = 1.488531f;
    data->d[19] = 7.427307f;
    data->d[20] = -0.497240f;
    data->d[21] = 0.379108f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.890107f;
    data->d[2] = -0.737049f;
    data->d[3] = 0.330828f;
    data->d[4] = -3.339666f;
    data->d[5] = 4.266701f;
    data->d[6] = -0.067765f;
    data->d[7] = -1.447313f;
    data->d[8] = -1.876573f;
    data->d[9] = -0.371723f;
    data->d[10] = -0.941596f;
    data->d[11] = 0.346766f;
    data->d[12] = 1.574644f;
    data->d[13] = 12.679765f;
    data->d[14] = 3.368973f;
    data->d[15] = -0.001494f;
    data->d[16] = 0.642767f;
    data->d[17] = -0.480498f;
    data->d[18] = -1.668312f;
    data->d[19] = 3.153929f;
    data->d[20] = 0.327315f;
    data->d[21] = 0.196284f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 1, 22);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 284;
    state.m_evolution = 3;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 13534558261871376004;
} // LoadState
