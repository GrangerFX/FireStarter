#pragma once
#include "FireStarterState.h"

// Run date: 07/03/24 18:35:27 Pacific Daylight Time
// Run duration = 43.715838 seconds
// Run generation = 8
// Run evolution = 1
// Run max result = 0.00101393
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00101393
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.902156f;
    data->d[1] = 0.488893f;
    data->d[2] = 0.371764f;
    data->d[3] = -1.152616f;
    data->d[4] = 0.391858f;
    data->d[5] = 0.288363f;
    data->d[6] = -1.675875f;
    data->d[7] = -0.797285f;
    data->d[8] = 0.071942f;
    data->d[9] = 1.679463f;
    data->d[10] = -2.711596f;
    data->d[11] = -1.869651f;
    data->d[12] = -2.644543f;
    data->d[13] = 0.062183f;
    data->d[14] = -0.041658f;
    data->d[15] = -3.773191f;
    data->d[16] = -0.542302f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.001014f;
} // LoadVariation0

// Variation: 1  result = 0.00030690
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.170079f;
    data->d[1] = 1.623735f;
    data->d[2] = 1.990151f;
    data->d[3] = -0.677238f;
    data->d[4] = 1.720064f;
    data->d[5] = 0.734664f;
    data->d[6] = 3.996902f;
    data->d[7] = -0.301317f;
    data->d[8] = 0.826419f;
    data->d[9] = 0.207668f;
    data->d[10] = -3.120275f;
    data->d[11] = -0.486035f;
    data->d[12] = 0.387073f;
    data->d[13] = -0.214259f;
    data->d[14] = 0.095763f;
    data->d[15] = 5.443034f;
    data->d[16] = 0.595312f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000307f;
} // LoadVariation1

// Variation: 2  result = 0.00023089
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.154124f;
    data->d[1] = -1.488693f;
    data->d[2] = -1.280058f;
    data->d[3] = -0.634956f;
    data->d[4] = -1.153377f;
    data->d[5] = -1.726876f;
    data->d[6] = -1.074738f;
    data->d[7] = -1.215703f;
    data->d[8] = 1.159796f;
    data->d[9] = 1.647669f;
    data->d[10] = -0.989006f;
    data->d[11] = 0.942555f;
    data->d[12] = 0.772913f;
    data->d[13] = -1.295660f;
    data->d[14] = -1.107344f;
    data->d[15] = 0.001894f;
    data->d[16] = 0.788867f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000231f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.001014f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 20);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 10);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 0, 18);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 2);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 26);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 1, 1);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 1, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 8;
    state.m_evolution = 1;
    state.m_index = 5;
    state.m_copy_index = 4;
    state.m_id = 4;
    state.m_test = 0;
    state.m_seed = 3126105921867567742;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.013004f;
    state.m_maxResult = 0.001014f;
    state.m_evolveWeight = 0.026007f;
    state.m_optimizeValid = true;
} // LoadState
