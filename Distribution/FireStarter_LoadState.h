#pragma once
#include "FireStarterState.h"

// Run date: 07/26/23 08:57:32 Pacific Daylight Time
// Run duration = 61.233663 seconds
// Run generation = 3
// Run evolution = 0
// Run result = 0.00019151
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 8;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00017762
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.049633f;
    data->d[1] = 2.528497f;
    data->d[2] = 0.619949f;
    data->d[3] = 2.090068f;
    data->d[4] = -0.409778f;
    data->d[5] = 0.064530f;
    data->d[6] = 1.820198f;
    data->d[7] = 0.198904f;
    data->d[8] = 1.079961f;
    data->d[9] = 1.626956f;
    data->d[10] = -1.533757f;
    data->d[11] = -0.458636f;
    data->d[12] = 0.543058f;
    data->d[13] = -1.451851f;
    data->d[14] = 1.236801f;
    data->d[15] = -0.244607f;
    data->d[16] = 0.884264f;
    data->d[17] = 1.259797f;
    data->d[18] = -0.168823f;
    data->d[19] = 6.022429f;
    data->d[20] = -0.767839f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000178f;
} // LoadVariation0

// Variation: 1  result = 0.00016224
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.827944f;
    data->d[1] = 0.904621f;
    data->d[2] = 0.373090f;
    data->d[3] = 0.444235f;
    data->d[4] = -2.060463f;
    data->d[5] = -0.053217f;
    data->d[6] = -1.170609f;
    data->d[7] = -0.070629f;
    data->d[8] = 1.072690f;
    data->d[9] = 1.331821f;
    data->d[10] = 2.677189f;
    data->d[11] = -0.403565f;
    data->d[12] = -0.213335f;
    data->d[13] = 1.733918f;
    data->d[14] = -0.620674f;
    data->d[15] = 0.251275f;
    data->d[16] = 1.128626f;
    data->d[17] = -1.054520f;
    data->d[18] = -0.046064f;
    data->d[19] = 1.674288f;
    data->d[20] = -0.078242f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000162f;
} // LoadVariation1

// Variation: 2  result = 0.00019151
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.129835f;
    data->d[1] = -0.928325f;
    data->d[2] = 0.179763f;
    data->d[3] = 0.382790f;
    data->d[4] = -0.494019f;
    data->d[5] = 0.492707f;
    data->d[6] = 0.160996f;
    data->d[7] = -0.676012f;
    data->d[8] = -1.872542f;
    data->d[9] = -1.120865f;
    data->d[10] = 0.248173f;
    data->d[11] = 0.064757f;
    data->d[12] = 0.044344f;
    data->d[13] = -0.702867f;
    data->d[14] = -0.383683f;
    data->d[15] = -0.813498f;
    data->d[16] = 0.638020f;
    data->d[17] = 17.646595f;
    data->d[18] = 0.546570f;
    data->d[19] = 3.976058f;
    data->d[20] = 0.978908f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000192f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000192f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 1, 3);
    instructions->SetOperation(2, 0, 12);
    instructions->SetOperation(3, 1, 0);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 0, 3);
    instructions->SetOperation(7, 1, 17);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 13);
    instructions->SetOperation(10, 1, 11);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 22);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 1, 21);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 23);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 1, 4);
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
    state.m_evolution = 0;
    state.m_index = 4;
    state.m_test = 62;
    state.m_seed = 9677506665405580703;
} // LoadState
