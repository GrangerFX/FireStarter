#pragma once
#include "FireStarterState.h"

// Run date: 12/23/23 11:09:56 Pacific Standard Time
// Run duration = 320.089546 seconds
// Run generation = 3
// Run evolution = 3
// Run max result = 0.00002847
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

// Variation: 0  result = 0.00000793
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.337755f;
    data->d[1] = -1.173241f;
    data->d[2] = 0.725552f;
    data->d[3] = -0.204283f;
    data->d[4] = -0.819895f;
    data->d[5] = 0.745766f;
    data->d[6] = 0.330895f;
    data->d[7] = 2.707165f;
    data->d[8] = 0.099599f;
    data->d[9] = -1.626104f;
    data->d[10] = 0.320486f;
    data->d[11] = -0.746382f;
    data->d[12] = -1.116017f;
    data->d[13] = 1.657486f;
    data->d[14] = 0.516752f;
    data->d[15] = 0.030096f;
    data->d[16] = -0.386643f;
    data->d[17] = 1.784690f;
    data->d[18] = -2.251185f;
    data->d[19] = 0.114743f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000008f;
} // LoadVariation0

// Variation: 1  result = 0.00002000
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.841096f;
    data->d[1] = 0.229925f;
    data->d[2] = 3.209438f;
    data->d[3] = 0.148665f;
    data->d[4] = -0.585483f;
    data->d[5] = 0.250550f;
    data->d[6] = -0.019816f;
    data->d[7] = -3.734039f;
    data->d[8] = -2.111969f;
    data->d[9] = 0.251164f;
    data->d[10] = -2.507581f;
    data->d[11] = 0.210296f;
    data->d[12] = -2.293053f;
    data->d[13] = 1.372183f;
    data->d[14] = 0.585592f;
    data->d[15] = -1.593154f;
    data->d[16] = 1.779728f;
    data->d[17] = 0.948979f;
    data->d[18] = 0.661963f;
    data->d[19] = 0.386016f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000020f;
} // LoadVariation1

// Variation: 2  result = 0.00002847
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.216474f;
    data->d[1] = 0.260264f;
    data->d[2] = 0.428969f;
    data->d[3] = -1.315007f;
    data->d[4] = 0.815371f;
    data->d[5] = -1.193291f;
    data->d[6] = -1.073587f;
    data->d[7] = -0.075411f;
    data->d[8] = -1.878535f;
    data->d[9] = 1.246261f;
    data->d[10] = -1.480925f;
    data->d[11] = 1.048977f;
    data->d[12] = 0.819585f;
    data->d[13] = -2.063995f;
    data->d[14] = 0.494135f;
    data->d[15] = -1.699885f;
    data->d[16] = 0.816743f;
    data->d[17] = 2.117790f;
    data->d[18] = -0.290542f;
    data->d[19] = -0.443985f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000028f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000028f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 1, 7);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 13);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 27);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 1, 28);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 1, 20);
    instructions->SetOperation(22, 0, 26);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 25);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 3;
    state.m_evolution = 3;
    state.m_children = 22;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 98;
    state.m_copy_id = 60;
    state.m_test = 1;
    state.m_seed = 6254344877033528397;
    state.m_oldResult = 0.000048f;
    state.m_maxResult = 0.000028f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
