#pragma once
#include "FireStarterState.h"

// Run date: 07/08/23 15:03:20 Pacific Daylight Time
// Run duration = 568.904735 seconds
// Run generation = 62
// Run evolution = 0
// Run result = 0.00000155
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
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
    settings.m_seed = 1;
    settings.m_optimizeSeed = 1;
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

// Variation: 0  result = 0.00000057
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.160513f;
    data->d[1] = 0.504265f;
    data->d[2] = -0.779995f;
    data->d[3] = 1.248869f;
    data->d[4] = -1.322239f;
    data->d[5] = -1.280754f;
    data->d[6] = 2.302608f;
    data->d[7] = -0.887677f;
    data->d[8] = 0.062842f;
    data->d[9] = -0.510181f;
    data->d[10] = -0.000825f;
    data->d[11] = -0.894862f;
    data->d[12] = -1.190890f;
    data->d[13] = 0.289419f;
    data->d[14] = 0.644672f;
    data->d[15] = -0.794902f;
    data->d[16] = -1.244644f;
    data->d[17] = 2.714388f;
    data->d[18] = 2.729408f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000155
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.663296f;
    data->d[1] = -2.050023f;
    data->d[2] = 0.155109f;
    data->d[3] = -0.634466f;
    data->d[4] = 1.119413f;
    data->d[5] = 2.143759f;
    data->d[6] = -0.455645f;
    data->d[7] = -1.554660f;
    data->d[8] = -0.893894f;
    data->d[9] = 0.526522f;
    data->d[10] = -1.429145f;
    data->d[11] = 0.632217f;
    data->d[12] = 1.146489f;
    data->d[13] = -0.711663f;
    data->d[14] = -3.157580f;
    data->d[15] = -2.024734f;
    data->d[16] = 1.856213f;
    data->d[17] = 0.660142f;
    data->d[18] = -0.764334f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000083
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.252907f;
    data->d[1] = -0.662109f;
    data->d[2] = -1.517973f;
    data->d[3] = 0.221369f;
    data->d[4] = 3.278886f;
    data->d[5] = -1.813404f;
    data->d[6] = -0.318984f;
    data->d[7] = 0.192852f;
    data->d[8] = -0.042873f;
    data->d[9] = -1.236595f;
    data->d[10] = 0.001198f;
    data->d[11] = 1.194498f;
    data->d[12] = 0.658848f;
    data->d[13] = 0.003542f;
    data->d[14] = 1.310081f;
    data->d[15] = 0.657045f;
    data->d[16] = -1.476194f;
    data->d[17] = 0.855180f;
    data->d[18] = 2.089831f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 4);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 1, 8);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 18);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 21);
    instructions->SetOperation(15, 1, 14);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 0, 6);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 1, 2);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 1, 7);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 62;
    state.m_evolution = 0;
    state.m_index = 39;
    state.m_test = 21;
    state.m_seed = 817503903091435420;
} // LoadState
