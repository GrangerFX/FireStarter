#pragma once
#include "FireStarterState.h"

// Run date: 11/30/23 12:45:31 Pacific Standard Time
// Run duration = 11030.038857 seconds
// Run generation = 22
// Run evolution = 8
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.035809f;
    data->d[1] = -1.105784f;
    data->d[2] = -0.807590f;
    data->d[3] = 0.000000f;
    data->d[4] = 0.741281f;
    data->d[5] = -2.507600f;
    data->d[6] = 1.106149f;
    data->d[7] = -0.273534f;
    data->d[8] = 0.001045f;
    data->d[9] = 0.476912f;
    data->d[10] = -0.025360f;
    data->d[11] = 1.425287f;
    data->d[12] = -1.661135f;
    data->d[13] = -5.959878f;
    data->d[14] = 0.536897f;
    data->d[15] = -3.684614f;
    data->d[16] = -1.314163f;
    data->d[17] = 1.460428f;
    data->d[18] = -2.908168f;
    data->d[19] = 0.061913f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000009
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.299222f;
    data->d[1] = -1.508492f;
    data->d[2] = -1.046410f;
    data->d[3] = 0.296076f;
    data->d[4] = 0.434177f;
    data->d[5] = -1.585701f;
    data->d[6] = 0.540261f;
    data->d[7] = 0.431208f;
    data->d[8] = 0.003350f;
    data->d[9] = 1.033083f;
    data->d[10] = -0.064049f;
    data->d[11] = 2.018359f;
    data->d[12] = -2.068320f;
    data->d[13] = -4.442802f;
    data->d[14] = 1.550853f;
    data->d[15] = 1.525962f;
    data->d[16] = 0.396779f;
    data->d[17] = 0.455768f;
    data->d[18] = 1.127854f;
    data->d[19] = -0.370180f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.989134f;
    data->d[1] = -1.245969f;
    data->d[2] = 1.590841f;
    data->d[3] = -3.756229f;
    data->d[4] = 0.222326f;
    data->d[5] = -0.889349f;
    data->d[6] = 0.610072f;
    data->d[7] = -13.154764f;
    data->d[8] = 0.531491f;
    data->d[9] = -0.000127f;
    data->d[10] = -4.732217f;
    data->d[11] = 1.929878f;
    data->d[12] = -1.002045f;
    data->d[13] = 4.171380f;
    data->d[14] = -0.876936f;
    data->d[15] = -0.296191f;
    data->d[16] = -0.310892f;
    data->d[17] = 1.722969f;
    data->d[18] = -0.330244f;
    data->d[19] = -0.671488f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 1, 4);
    instructions->SetOperation(2, 0, 9);
    instructions->SetOperation(3, 1, 11);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 0, 26);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 0, 25);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 21);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 11);
    instructions->SetOperation(29, 1, 4);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 0, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 22;
    state.m_evolution = 8;
    state.m_index = 0;
    state.m_copy_index = 8;
    state.m_id = 6;
    state.m_copy_id = 57;
    state.m_test = 5;
    state.m_seed = 5232777866534916444;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
