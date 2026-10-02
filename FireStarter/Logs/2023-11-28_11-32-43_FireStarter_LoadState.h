#pragma once
#include "FireStarterState.h"

// Run date: 11/28/23 11:32:43 Pacific Standard Time
// Run duration = 2534.219206 seconds
// Run generation = 11
// Run evolution = 9
// Run max result = 0.00000015
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
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
    data->d[0] = -3.141593f;
    data->d[1] = 0.198281f;
    data->d[2] = 0.000000f;
    data->d[3] = -0.812938f;
    data->d[4] = -0.080846f;
    data->d[5] = 3.454632f;
    data->d[6] = -0.150459f;
    data->d[7] = -8.841909f;
    data->d[8] = 16.444620f;
    data->d[9] = 2.917310f;
    data->d[10] = -1.224087f;
    data->d[11] = 0.000437f;
    data->d[12] = -0.799181f;
    data->d[13] = -2.199400f;
    data->d[14] = 0.519669f;
    data->d[15] = -0.816137f;
    data->d[16] = 2.422990f;
    data->d[17] = -0.859894f;
    data->d[18] = 2.505337f;
    data->d[19] = -0.000002f;
    data->d[20] = -0.031130f;
    data->d[21] = -1.347718f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000007
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090661f;
    data->d[1] = -0.149287f;
    data->d[2] = -0.000001f;
    data->d[3] = -0.022766f;
    data->d[4] = 3.654546f;
    data->d[5] = 3.737938f;
    data->d[6] = -0.130398f;
    data->d[7] = -3.711813f;
    data->d[8] = -23.542662f;
    data->d[9] = 0.777674f;
    data->d[10] = 0.000298f;
    data->d[11] = 0.825846f;
    data->d[12] = -0.410619f;
    data->d[13] = -2.554233f;
    data->d[14] = -0.287888f;
    data->d[15] = 1.380921f;
    data->d[16] = 1.538525f;
    data->d[17] = -2.958539f;
    data->d[18] = 0.064718f;
    data->d[19] = 0.075814f;
    data->d[20] = 1.194509f;
    data->d[21] = -1.304468f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.684285f;
    data->d[2] = -0.000000f;
    data->d[3] = 0.786028f;
    data->d[4] = -0.045536f;
    data->d[5] = -7.897776f;
    data->d[6] = 1.814942f;
    data->d[7] = -1.674346f;
    data->d[8] = -9.777208f;
    data->d[9] = 0.061214f;
    data->d[10] = -9.181893f;
    data->d[11] = -0.000013f;
    data->d[12] = -2.664242f;
    data->d[13] = -0.391939f;
    data->d[14] = -0.367773f;
    data->d[15] = -0.085263f;
    data->d[16] = -1.518051f;
    data->d[17] = 0.576849f;
    data->d[18] = 1.174963f;
    data->d[19] = -0.343034f;
    data->d[20] = 1.782116f;
    data->d[21] = -0.856496f;
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
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 1, 28);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 1, 21);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 1, 20);
    instructions->SetOperation(15, 1, 15);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 28);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 12);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 1, 13);
    instructions->SetOperation(31, 0, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 11;
    state.m_evolution = 9;
    state.m_index = 0;
    state.m_copy_index = 1;
    state.m_id = 33;
    state.m_copy_id = 25;
    state.m_test = 1;
    state.m_seed = 18223912523113294451;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
