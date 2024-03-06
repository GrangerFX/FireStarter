#pragma once
#include "FireStarterState.h"

// Run date: 03/05/24 21:46:33 Pacific Standard Time
// Run duration = 1390.376594 seconds
// Run generation = 121
// Run evolution = 12
// Run max result = 0.00000048
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
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.394127f;
    data->d[2] = 0.750004f;
    data->d[3] = -0.476935f;
    data->d[4] = -1.943099f;
    data->d[5] = -0.011703f;
    data->d[6] = 3.514728f;
    data->d[7] = 0.191977f;
    data->d[8] = -0.691283f;
    data->d[9] = -2.873525f;
    data->d[10] = 0.730140f;
    data->d[11] = 0.808471f;
    data->d[12] = 1.821117f;
    data->d[13] = 1.009105f;
    data->d[14] = 405.816162f;
    data->d[15] = 4.532373f;
    data->d[16] = -11.711234f;
    data->d[17] = 0.424162f;
    data->d[18] = -0.016615f;
    data->d[19] = 0.007047f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.325550f;
    data->d[2] = 0.019659f;
    data->d[3] = 0.012149f;
    data->d[4] = -1.813494f;
    data->d[5] = -8.835078f;
    data->d[6] = -2.596077f;
    data->d[7] = 1.287375f;
    data->d[8] = -0.477526f;
    data->d[9] = -0.057090f;
    data->d[10] = 2.825997f;
    data->d[11] = 0.073400f;
    data->d[12] = 1.944270f;
    data->d[13] = 1.105239f;
    data->d[14] = -2.887637f;
    data->d[15] = -89.741501f;
    data->d[16] = 515.914429f;
    data->d[17] = -4.505695f;
    data->d[18] = -0.159009f;
    data->d[19] = -0.834578f;
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

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.786319f;
    data->d[2] = -0.151176f;
    data->d[3] = 0.061621f;
    data->d[4] = 1.869382f;
    data->d[5] = -0.005768f;
    data->d[6] = 0.926581f;
    data->d[7] = 0.629431f;
    data->d[8] = -0.979786f;
    data->d[9] = 0.686168f;
    data->d[10] = 3.060389f;
    data->d[11] = 0.222582f;
    data->d[12] = -1.773255f;
    data->d[13] = -2.426029f;
    data->d[14] = 3.512413f;
    data->d[15] = 5.834019f;
    data->d[16] = -0.136397f;
    data->d[17] = -0.280844f;
    data->d[18] = 0.969090f;
    data->d[19] = 0.795762f;
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
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 0, 20);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 0, 20);
    instructions->SetOperation(4, 1, 22);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 1, 24);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 1, 20);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 0);
    instructions->SetOperation(22, 1, 4);
    instructions->SetOperation(23, 0, 21);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 121;
    state.m_evolution = 12;
    state.m_children0 = 122;
    state.m_children1 = 27;
    state.m_index = 13;
    state.m_copy_index = 14;
    state.m_id = 14;
    state.m_test = 0;
    state.m_seed = 6827059429369906928;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 148.000000f;
    state.m_optimizeValid = true;
} // LoadState
