#pragma once
#include "FireStarterState.h"

// Run date: 11/06/23 12:37:45 Pacific Standard Time
// Run duration = 12595.553807 seconds
// Run generation = 10
// Run evolution = 5
// Run result = 0.00000161
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000036
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.794577f;
    data->d[1] = 2.496238f;
    data->d[2] = -1.158627f;
    data->d[3] = 0.427685f;
    data->d[4] = -1.474573f;
    data->d[5] = 0.407749f;
    data->d[6] = 0.129316f;
    data->d[7] = -0.240078f;
    data->d[8] = -1.534114f;
    data->d[9] = 1.205982f;
    data->d[10] = 2.290161f;
    data->d[11] = -0.361662f;
    data->d[12] = 1.899299f;
    data->d[13] = 1.264714f;
    data->d[14] = 0.885521f;
    data->d[15] = -0.662047f;
    data->d[16] = -0.341591f;
    data->d[17] = 0.010076f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000119
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.735539f;
    data->d[1] = -2.273300f;
    data->d[2] = 0.401047f;
    data->d[3] = -0.229558f;
    data->d[4] = -2.288854f;
    data->d[5] = 1.005115f;
    data->d[6] = 0.194995f;
    data->d[7] = -1.454808f;
    data->d[8] = 0.625060f;
    data->d[9] = 0.004828f;
    data->d[10] = 0.398887f;
    data->d[11] = -1.578207f;
    data->d[12] = 1.059597f;
    data->d[13] = 1.754378f;
    data->d[14] = 0.861250f;
    data->d[15] = -0.354320f;
    data->d[16] = 3.453798f;
    data->d[17] = 0.021121f;
    data->d[18] = -0.118131f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000161
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.478350f;
    data->d[1] = -1.252316f;
    data->d[2] = -1.719179f;
    data->d[3] = 0.246472f;
    data->d[4] = -1.505979f;
    data->d[5] = 0.240289f;
    data->d[6] = -1.079352f;
    data->d[7] = 0.188716f;
    data->d[8] = 0.461877f;
    data->d[9] = 0.113911f;
    data->d[10] = -0.322790f;
    data->d[11] = -1.569228f;
    data->d[12] = 1.090118f;
    data->d[13] = -2.109985f;
    data->d[14] = -1.103599f;
    data->d[15] = -3.055155f;
    data->d[16] = -0.926865f;
    data->d[17] = -0.011697f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 28);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 17);
    instructions->SetOperation(10, 1, 21);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 0, 16);
    instructions->SetOperation(13, 0, 27);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 0);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 5);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 1, 7);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 6);
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
    state.m_generation = 10;
    state.m_evolution = 5;
    state.m_index = 23;
    state.m_id = 29;
    state.m_copy_id = 53;
    state.m_test = 11;
    state.m_seed = 15621861249192794921;
    state.m_maxResult = 0.000002f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
