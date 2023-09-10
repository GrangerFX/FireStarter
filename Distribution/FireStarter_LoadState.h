#pragma once
#include "FireStarterState.h"

// Run date: 09/09/23 21:22:02 Pacific Daylight Time
// Run duration = 19067.438741 seconds
// Run generation = 57
// Run evolution = 14
// Run result = 0.00000811
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 300
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 300;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000349
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.481091f;
    data->d[1] = -0.247843f;
    data->d[2] = -3.899188f;
    data->d[3] = -1.655060f;
    data->d[4] = 1.261767f;
    data->d[5] = 0.490654f;
    data->d[6] = -0.000658f;
    data->d[7] = -0.853145f;
    data->d[8] = -7.277182f;
    data->d[9] = 1.129858f;
    data->d[10] = -0.094032f;
    data->d[11] = -3.778476f;
    data->d[12] = -2.732711f;
    data->d[13] = 1.238729f;
    data->d[14] = -0.013563f;
    data->d[15] = 0.585453f;
    data->d[16] = 1.639763f;
    data->d[17] = 0.670567f;
    data->d[18] = -0.757900f;
    data->d[19] = 1.099514f;
    data->d[20] = 0.084998f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

// Variation: 1  result = 0.00000203
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.407234f;
    data->d[1] = 1.205777f;
    data->d[2] = 0.988735f;
    data->d[3] = -1.770407f;
    data->d[4] = 2.357820f;
    data->d[5] = 1.570541f;
    data->d[6] = -0.311600f;
    data->d[7] = 5.865771f;
    data->d[8] = 2.007816f;
    data->d[9] = 0.000362f;
    data->d[10] = -0.125207f;
    data->d[11] = -0.314748f;
    data->d[12] = -3.217801f;
    data->d[13] = -1.132811f;
    data->d[14] = 0.068862f;
    data->d[15] = -15.914241f;
    data->d[16] = 0.141202f;
    data->d[17] = -0.903441f;
    data->d[18] = -0.214181f;
    data->d[19] = 0.542791f;
    data->d[20] = -1.025294f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000811
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.472901f;
    data->d[1] = -0.873836f;
    data->d[2] = -2.612336f;
    data->d[3] = -0.395901f;
    data->d[4] = -1.782076f;
    data->d[5] = 5.632046f;
    data->d[6] = -1.816887f;
    data->d[7] = -0.005842f;
    data->d[8] = 0.021037f;
    data->d[9] = -2.939898f;
    data->d[10] = -2.241755f;
    data->d[11] = 0.069141f;
    data->d[12] = 0.454775f;
    data->d[13] = 0.956829f;
    data->d[14] = 0.022074f;
    data->d[15] = -1.925010f;
    data->d[16] = -0.237869f;
    data->d[17] = -0.700139f;
    data->d[18] = 0.310977f;
    data->d[19] = 1.128720f;
    data->d[20] = -0.147798f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000008f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000008f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 1, 22);
    instructions->SetOperation(2, 1, 4);
    instructions->SetOperation(3, 1, 26);
    instructions->SetOperation(4, 1, 17);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 0, 20);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 1, 16);
    instructions->SetOperation(15, 0, 28);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 1, 22);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 1, 22);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 21);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 1, 2);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 0, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 57;
    state.m_evolution = 14;
    state.m_age = 6;
    state.m_index = 0;
    state.m_id = 60;
    state.m_copy_id = 24;
    state.m_test = 15;
    state.m_seed = 15319793671460959496;
    state.m_maxResult = 0.000008f;
    state.m_lastResult = 0.000008f;
    state.m_optimizePass = false;
    state.m_lastEvolved = true;
} // LoadState
