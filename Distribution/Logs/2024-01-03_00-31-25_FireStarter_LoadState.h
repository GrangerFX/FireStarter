#pragma once
#include "FireStarterState.h"

// Run date: 01/03/24 00:31:25 Pacific Standard Time
// Run duration = 3934.698732 seconds
// Run generation = 5
// Run evolution = 5
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
// Run states = 64
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
    settings.m_states = 64;
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
    data->d[0] = -3.173542f;
    data->d[1] = 0.031950f;
    data->d[2] = -0.556925f;
    data->d[3] = 0.109607f;
    data->d[4] = 3.051775f;
    data->d[5] = 0.520874f;
    data->d[6] = -0.375024f;
    data->d[7] = -0.148174f;
    data->d[8] = 161.992661f;
    data->d[9] = -0.054340f;
    data->d[10] = -0.125996f;
    data->d[11] = -2.927364f;
    data->d[12] = -4.490430f;
    data->d[13] = -0.008181f;
    data->d[14] = 1.857722f;
    data->d[15] = 0.428965f;
    data->d[16] = -2.229551f;
    data->d[17] = -2.812650f;
    data->d[18] = 0.119958f;
    data->d[19] = 1.625473f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.863572f;
    data->d[1] = -0.227086f;
    data->d[2] = 0.024988f;
    data->d[3] = -0.880522f;
    data->d[4] = 5617.937988f;
    data->d[5] = 0.101853f;
    data->d[6] = 1.684711f;
    data->d[7] = -0.623210f;
    data->d[8] = -24.734520f;
    data->d[9] = 0.036120f;
    data->d[10] = 0.773187f;
    data->d[11] = 1.031896f;
    data->d[12] = 0.847772f;
    data->d[13] = -1.662055f;
    data->d[14] = 0.210694f;
    data->d[15] = -1.000498f;
    data->d[16] = 0.141265f;
    data->d[17] = 10.249195f;
    data->d[18] = -1.760120f;
    data->d[19] = 0.661656f;
    data->d[20] = -0.118132f;
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
    data->d[0] = 0.158570f;
    data->d[1] = -2.776563f;
    data->d[2] = 0.440119f;
    data->d[3] = 0.211016f;
    data->d[4] = 6.676116f;
    data->d[5] = -1.279130f;
    data->d[6] = 0.642479f;
    data->d[7] = 0.465745f;
    data->d[8] = 0.953846f;
    data->d[9] = -0.938721f;
    data->d[10] = 1.452741f;
    data->d[11] = 0.269990f;
    data->d[12] = 0.000051f;
    data->d[13] = -25849.173828f;
    data->d[14] = -0.041283f;
    data->d[15] = 0.402325f;
    data->d[16] = -0.694819f;
    data->d[17] = 0.506429f;
    data->d[18] = -0.187534f;
    data->d[19] = -1.811270f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 1, 2);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 14);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 24);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 0, 25);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 1, 21);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 1, 20);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 0, 22);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 14);
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
    state.m_generation = 5;
    state.m_evolution = 5;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 3;
    state.m_id = 11;
    state.m_test = 4;
    state.m_seed = 15043999335161278452;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
