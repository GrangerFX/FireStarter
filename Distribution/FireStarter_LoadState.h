#pragma once
#include "FireStarterState.h"

// Run date: 11/07/23 17:26:16 Pacific Standard Time
// Run duration = 2379.260438 seconds
// Run generation = 37
// Run evolution = 12
// Run result = 0.00000036
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
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000013
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.246224f;
    data->d[2] = 0.591319f;
    data->d[3] = -0.353818f;
    data->d[4] = 1.138717f;
    data->d[5] = -1.147194f;
    data->d[6] = -0.000580f;
    data->d[7] = -0.002732f;
    data->d[8] = 7.968934f;
    data->d[9] = -3.777151f;
    data->d[10] = 0.267762f;
    data->d[11] = 1.394876f;
    data->d[12] = 0.822535f;
    data->d[13] = -6.032163f;
    data->d[14] = -4.585883f;
    data->d[15] = 7.261034f;
    data->d[16] = -4.496094f;
    data->d[17] = 1.311094f;
    data->d[18] = 1.766255f;
    data->d[19] = 0.516290f;
    data->d[20] = -0.516289f;
    data->d[21] = 0.085839f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.126132f;
    data->d[2] = 0.709853f;
    data->d[3] = -0.498653f;
    data->d[4] = -1.747831f;
    data->d[5] = -0.384322f;
    data->d[6] = -0.783534f;
    data->d[7] = 2.565608f;
    data->d[8] = 0.013841f;
    data->d[9] = 0.707373f;
    data->d[10] = 0.549413f;
    data->d[11] = 3.485725f;
    data->d[12] = -2.273953f;
    data->d[13] = -0.392712f;
    data->d[14] = -0.973102f;
    data->d[15] = 21.273199f;
    data->d[16] = -2.119143f;
    data->d[17] = -1.705985f;
    data->d[18] = -0.724261f;
    data->d[19] = 0.998117f;
    data->d[20] = -1.067067f;
    data->d[21] = 1.713304f;
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
    data->d[0] = -2.617994f;
    data->d[1] = 0.451009f;
    data->d[2] = 0.121134f;
    data->d[3] = -0.122786f;
    data->d[4] = -0.109513f;
    data->d[5] = 1.405058f;
    data->d[6] = 2.028060f;
    data->d[7] = -1.700074f;
    data->d[8] = -3.134505f;
    data->d[9] = 1.260476f;
    data->d[10] = 1.459103f;
    data->d[11] = -3.515080f;
    data->d[12] = -1.268971f;
    data->d[13] = -2.175063f;
    data->d[14] = -0.240335f;
    data->d[15] = 2.434927f;
    data->d[16] = -0.196943f;
    data->d[17] = -1.509841f;
    data->d[18] = -0.427102f;
    data->d[19] = -0.734626f;
    data->d[20] = 0.232735f;
    data->d[21] = -1.043250f;
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
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 1, 1);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 1, 28);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 27);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 1, 25);
    instructions->SetOperation(30, 1, 4);
    instructions->SetOperation(31, 0, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 37;
    state.m_evolution = 12;
    state.m_index = 0;
    state.m_id = 17;
    state.m_copy_id = 50;
    state.m_test = 2;
    state.m_seed = 18250885909216492167;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
