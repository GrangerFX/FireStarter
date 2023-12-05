#pragma once
#include "FireStarterState.h"

// Run date: 12/04/23 19:20:22 Pacific Standard Time
// Run duration = 3512.942482 seconds
// Run generation = 28
// Run evolution = 6
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

// Variation: 0  result = 0.00000004
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.282848f;
    data->d[1] = 1.664664f;
    data->d[2] = -1.479207f;
    data->d[3] = -0.556770f;
    data->d[4] = 1.218243f;
    data->d[5] = 0.569677f;
    data->d[6] = 2.511583f;
    data->d[7] = -2.462006f;
    data->d[8] = 0.878633f;
    data->d[9] = 4.089973f;
    data->d[10] = 3.947820f;
    data->d[11] = -1.135251f;
    data->d[12] = -0.003211f;
    data->d[13] = -1.478083f;
    data->d[14] = -1.640566f;
    data->d[15] = -0.384074f;
    data->d[16] = 1.495152f;
    data->d[17] = 8.479511f;
    data->d[18] = -0.000010f;
    data->d[19] = 0.000242f;
    data->d[20] = 1.346535f;
    data->d[21] = -0.000326f;
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
    data->d[0] = -1.592318f;
    data->d[1] = 0.371135f;
    data->d[2] = 1.826470f;
    data->d[3] = -0.031086f;
    data->d[4] = 0.457637f;
    data->d[5] = 2.952399f;
    data->d[6] = -0.522075f;
    data->d[7] = -29.171982f;
    data->d[8] = -0.000000f;
    data->d[9] = -1.602118f;
    data->d[10] = -2.883356f;
    data->d[11] = -0.578802f;
    data->d[12] = -1.381063f;
    data->d[13] = 0.587357f;
    data->d[14] = -1.383942f;
    data->d[15] = 72.248924f;
    data->d[16] = -0.020140f;
    data->d[17] = 0.979527f;
    data->d[18] = -4.691863f;
    data->d[19] = -0.075956f;
    data->d[20] = 1.498718f;
    data->d[21] = -0.004296f;
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
    data->d[0] = -1.157756f;
    data->d[1] = 0.600652f;
    data->d[2] = 1.820576f;
    data->d[3] = 0.303855f;
    data->d[4] = -0.732250f;
    data->d[5] = -0.067033f;
    data->d[6] = 0.406314f;
    data->d[7] = 0.006480f;
    data->d[8] = 3.185539f;
    data->d[9] = 0.941347f;
    data->d[10] = -1.884442f;
    data->d[11] = 1.930509f;
    data->d[12] = -1.538141f;
    data->d[13] = -0.928152f;
    data->d[14] = 1.458392f;
    data->d[15] = 0.758088f;
    data->d[16] = -1.186445f;
    data->d[17] = -0.004199f;
    data->d[18] = -1.824133f;
    data->d[19] = 0.243489f;
    data->d[20] = 1.284332f;
    data->d[21] = 0.210878f;
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
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 20);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 1, 1);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 1, 2);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 0, 26);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 24);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 28;
    state.m_evolution = 6;
    state.m_index = 0;
    state.m_copy_index = 3;
    state.m_id = 1;
    state.m_copy_id = 47;
    state.m_test = 2;
    state.m_seed = 9488367704400841051;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
