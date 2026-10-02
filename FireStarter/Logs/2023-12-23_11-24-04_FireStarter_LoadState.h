#pragma once
#include "FireStarterState.h"

// Run date: 12/23/23 11:24:04 Pacific Standard Time
// Run duration = 3552.580294 seconds
// Run generation = 84
// Run evolution = 19
// Run max result = 0.00000009
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
// Run tests = 1
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
    settings.m_tests = 1;
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
    data->d[0] = -0.331187f;
    data->d[1] = -2.207954f;
    data->d[2] = -0.841853f;
    data->d[3] = 0.276398f;
    data->d[4] = 0.230778f;
    data->d[5] = 0.449479f;
    data->d[6] = -0.461918f;
    data->d[7] = -0.301524f;
    data->d[8] = -1.423261f;
    data->d[9] = -0.405265f;
    data->d[10] = 0.371614f;
    data->d[11] = -0.015256f;
    data->d[12] = 9.041080f;
    data->d[13] = 0.852785f;
    data->d[14] = -0.835713f;
    data->d[15] = -1.585919f;
    data->d[16] = 1.321490f;
    data->d[17] = -0.619036f;
    data->d[18] = 0.101232f;
    data->d[19] = -0.101232f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.322967f;
    data->d[1] = 1.571936f;
    data->d[2] = 0.395451f;
    data->d[3] = -0.842317f;
    data->d[4] = -1.129228f;
    data->d[5] = 0.629828f;
    data->d[6] = 0.749913f;
    data->d[7] = -1.929996f;
    data->d[8] = -2.122499f;
    data->d[9] = 0.115782f;
    data->d[10] = -0.235886f;
    data->d[11] = -0.000009f;
    data->d[12] = 44.157433f;
    data->d[13] = 0.457413f;
    data->d[14] = -3.196679f;
    data->d[15] = 1.021566f;
    data->d[16] = -2.905684f;
    data->d[17] = -8.096665f;
    data->d[18] = -0.119123f;
    data->d[19] = 0.000991f;
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

// Variation: 2  result = 0.00000009
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.683180f;
    data->d[1] = -1.157424f;
    data->d[2] = 2.084736f;
    data->d[3] = 2.473854f;
    data->d[4] = -2.009770f;
    data->d[5] = -1.073653f;
    data->d[6] = -0.125962f;
    data->d[7] = -0.396118f;
    data->d[8] = -0.882851f;
    data->d[9] = -0.109134f;
    data->d[10] = -0.257404f;
    data->d[11] = 0.013486f;
    data->d[12] = 1.702346f;
    data->d[13] = -2.370756f;
    data->d[14] = 2.014912f;
    data->d[15] = 1.968394f;
    data->d[16] = -0.634310f;
    data->d[17] = 4.837093f;
    data->d[18] = 0.419598f;
    data->d[19] = 0.104001f;
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
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 1, 3);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 1, 27);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 1, 24);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 1, 20);
    instructions->SetOperation(16, 0, 24);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 1, 5);
    instructions->SetOperation(20, 1, 1);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 1, 18);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 1, 14);
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
    state.m_generation = 84;
    state.m_evolution = 19;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 274;
    state.m_copy_id = 37;
    state.m_test = 1;
    state.m_seed = 13341111740205393878;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
