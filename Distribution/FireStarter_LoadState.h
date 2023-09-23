#pragma once
#include "FireStarterState.h"

// Run date: 09/19/23 15:51:28 Pacific Daylight Time
// Run duration = 1018.058145 seconds
// Run generation = 23
// Run evolution = 13
// Run result = 0.00002205
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
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
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
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000924
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.667468f;
    data->d[1] = -1.879681f;
    data->d[2] = 1.318861f;
    data->d[3] = -1.193547f;
    data->d[4] = 0.421616f;
    data->d[5] = 0.475859f;
    data->d[6] = -0.107474f;
    data->d[7] = 0.035648f;
    data->d[8] = 0.055876f;
    data->d[9] = 0.023193f;
    data->d[10] = -0.000486f;
    data->d[11] = 0.372637f;
    data->d[12] = 22.070013f;
    data->d[13] = -38.478218f;
    data->d[14] = 0.332625f;
    data->d[15] = -100.304909f;
    data->d[16] = -4.720510f;
    data->d[17] = -0.198127f;
    data->d[18] = 255.075302f;
    data->d[19] = 63.409397f;
    data->d[20] = 1.148194f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000009f;
} // LoadVariation0

// Variation: 1  result = 0.00001001
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.637497f;
    data->d[1] = 1.715927f;
    data->d[2] = 0.239689f;
    data->d[3] = -0.095429f;
    data->d[4] = -11.397797f;
    data->d[5] = -1.435894f;
    data->d[6] = 1.117692f;
    data->d[7] = 1.659028f;
    data->d[8] = -0.004915f;
    data->d[9] = 1.959515f;
    data->d[10] = 3.070515f;
    data->d[11] = 1.451303f;
    data->d[12] = -0.134868f;
    data->d[13] = 0.726523f;
    data->d[14] = -0.887358f;
    data->d[15] = 2.773418f;
    data->d[16] = -5.713953f;
    data->d[17] = 1.106066f;
    data->d[18] = -0.776078f;
    data->d[19] = -0.483049f;
    data->d[20] = 0.290452f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000010f;
} // LoadVariation1

// Variation: 2  result = 0.00002205
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.294262f;
    data->d[1] = 0.927630f;
    data->d[2] = -1.870063f;
    data->d[3] = 0.219805f;
    data->d[4] = -1.403136f;
    data->d[5] = 0.182340f;
    data->d[6] = 0.054313f;
    data->d[7] = -3.239274f;
    data->d[8] = 0.073842f;
    data->d[9] = 0.319183f;
    data->d[10] = 7.927945f;
    data->d[11] = -0.188672f;
    data->d[12] = 1.774196f;
    data->d[13] = -0.823988f;
    data->d[14] = 0.588391f;
    data->d[15] = -1.003324f;
    data->d[16] = 0.007148f;
    data->d[17] = -20.946522f;
    data->d[18] = -0.841613f;
    data->d[19] = 0.778011f;
    data->d[20] = -0.736359f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000022f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000022f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 28);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 1, 21);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 16);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 23;
    state.m_evolution = 13;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 58;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 14117577682249160057;
    state.m_maxResult = 0.000022f;
    state.m_optimizePass = true;
} // LoadState
