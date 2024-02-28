#pragma once
#include "FireStarterState.h"

// Run date: 02/27/24 16:36:41 Pacific Standard Time
// Run duration = 28033.902340 seconds
// Run generation = 61
// Run evolution = 11
// Run max result = 0.00002438
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 128;
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

// Variation: 0  result = 0.00001204
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.231297f;
    data->d[1] = -2.921682f;
    data->d[2] = -0.094651f;
    data->d[3] = 0.960671f;
    data->d[4] = 0.842785f;
    data->d[5] = -1.810693f;
    data->d[6] = -1.737669f;
    data->d[7] = 0.678045f;
    data->d[8] = 2.118917f;
    data->d[9] = 0.071604f;
    data->d[10] = 0.030865f;
    data->d[11] = 2.136287f;
    data->d[12] = -63.312157f;
    data->d[13] = -0.199889f;
    data->d[14] = -4.197720f;
    data->d[15] = 1.571458f;
    data->d[16] = -0.612478f;
    data->d[17] = -3.529829f;
    data->d[18] = -0.000501f;
    data->d[19] = 0.002185f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000012f;
} // LoadVariation0

// Variation: 1  result = 0.00002438
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -5.141269f;
    data->d[1] = 1.054877f;
    data->d[2] = -0.354286f;
    data->d[3] = 1.078943f;
    data->d[4] = -0.338271f;
    data->d[5] = -1.488114f;
    data->d[6] = -0.404192f;
    data->d[7] = 1.830577f;
    data->d[8] = 0.629498f;
    data->d[9] = -0.242805f;
    data->d[10] = 0.240009f;
    data->d[11] = 26.958929f;
    data->d[12] = -0.715316f;
    data->d[13] = 0.091204f;
    data->d[14] = 3.598882f;
    data->d[15] = 0.119787f;
    data->d[16] = 0.150954f;
    data->d[17] = 1.261188f;
    data->d[18] = -0.477005f;
    data->d[19] = -0.528641f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000024f;
} // LoadVariation1

// Variation: 2  result = 0.00002146
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.853177f;
    data->d[1] = -1.392936f;
    data->d[2] = 0.323040f;
    data->d[3] = 2.920067f;
    data->d[4] = -2.445887f;
    data->d[5] = -1.497510f;
    data->d[6] = 1212.665771f;
    data->d[7] = -0.001080f;
    data->d[8] = -0.216987f;
    data->d[9] = 0.181615f;
    data->d[10] = 5.234195f;
    data->d[11] = 2.653794f;
    data->d[12] = 0.019491f;
    data->d[13] = 14.126349f;
    data->d[14] = -1.235505f;
    data->d[15] = -1.105702f;
    data->d[16] = -0.274974f;
    data->d[17] = -0.379185f;
    data->d[18] = -1.015687f;
    data->d[19] = 0.810626f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000021f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000024f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 1, 15);
    instructions->SetOperation(4, 1, 10);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 0, 14);
    instructions->SetOperation(10, 0, 13);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 1, 27);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 0, 4);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 0, 0);
    instructions->SetOperation(26, 1, 28);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 1, 0);
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
    state.m_generation = 61;
    state.m_evolution = 11;
    state.m_children0 = 61;
    state.m_children1 = 8;
    state.m_index = 0;
    state.m_copy_index = 12;
    state.m_id = 0;
    state.m_test = 254;
    state.m_seed = 13704085100968258008;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000118f;
    state.m_maxResult = 0.000024f;
    state.m_evolveWeight = 0.000326f;
    state.m_optimizeValid = true;
} // LoadState
