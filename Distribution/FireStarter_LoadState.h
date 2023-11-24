#pragma once
#include "FireStarterState.h"

// Run date: 11/24/23 10:21:14 Pacific Standard Time
// Run duration = 2308.184120 seconds
// Run generation = 7
// Run evolution = 5
// Run result = 0.00001943
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

// Variation: 0  result = 0.00001732
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.051423f;
    data->d[1] = 0.013533f;
    data->d[2] = -0.175073f;
    data->d[3] = -0.071370f;
    data->d[4] = 0.011531f;
    data->d[5] = 0.000000f;
    data->d[6] = -10.227777f;
    data->d[7] = -0.009442f;
    data->d[8] = 1.547659f;
    data->d[9] = 0.006180f;
    data->d[10] = -0.021905f;
    data->d[11] = -0.000876f;
    data->d[12] = -328634.031250f;
    data->d[13] = -0.093709f;
    data->d[14] = -5.858778f;
    data->d[15] = -6.642765f;
    data->d[16] = -0.114005f;
    data->d[17] = -2.638415f;
    data->d[18] = -0.009352f;
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
    *(result->MinResult()) = 0.000017f;
} // LoadVariation0

// Variation: 1  result = 0.00001943
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.469007f;
    data->d[1] = 0.218863f;
    data->d[2] = -1.639434f;
    data->d[3] = -0.000410f;
    data->d[4] = 0.147935f;
    data->d[5] = 0.097785f;
    data->d[6] = 4.633837f;
    data->d[7] = -0.035185f;
    data->d[8] = 0.098274f;
    data->d[9] = 0.165061f;
    data->d[10] = 0.184296f;
    data->d[11] = -0.113981f;
    data->d[12] = 0.107976f;
    data->d[13] = 123229.929688f;
    data->d[14] = -2.393780f;
    data->d[15] = 0.326156f;
    data->d[16] = -4.092701f;
    data->d[17] = -2.096239f;
    data->d[18] = -0.174690f;
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
    *(result->MinResult()) = 0.000019f;
} // LoadVariation1

// Variation: 2  result = 0.00001800
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.191276f;
    data->d[1] = 0.252190f;
    data->d[2] = -0.237102f;
    data->d[3] = 0.257065f;
    data->d[4] = -0.004560f;
    data->d[5] = -0.076617f;
    data->d[6] = 1.285631f;
    data->d[7] = -1.120606f;
    data->d[8] = -0.097770f;
    data->d[9] = -0.224088f;
    data->d[10] = -0.751770f;
    data->d[11] = -0.002343f;
    data->d[12] = 0.073376f;
    data->d[13] = -211220.000000f;
    data->d[14] = -1.816316f;
    data->d[15] = 2.510344f;
    data->d[16] = 0.235191f;
    data->d[17] = -0.389126f;
    data->d[18] = -2.187869f;
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
    *(result->MinResult()) = 0.000018f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000019f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 1, 10);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 1, 23);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 1, 19);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 7;
    state.m_evolution = 5;
    state.m_index = 63;
    state.m_id = 9;
    state.m_copy_id = 10;
    state.m_test = 2;
    state.m_seed = 12386582297027448186;
    state.m_maxResult = 0.000019f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
