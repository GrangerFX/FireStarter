#pragma once
#include "FireStarterState.h"

// Run date: 07/26/23 11:16:28 Pacific Daylight Time
// Run duration = 664.049943 seconds
// Run generation = 82
// Run evolution = 0
// Run result = 0.00000083
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

// Variation: 0  result = 0.00000072
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.083182f;
    data->d[2] = -1.036329f;
    data->d[3] = 1.640051f;
    data->d[4] = 0.933897f;
    data->d[5] = -0.037869f;
    data->d[6] = 3.602757f;
    data->d[7] = 1.858830f;
    data->d[8] = -1.036989f;
    data->d[9] = 1.559934f;
    data->d[10] = 1.791926f;
    data->d[11] = -1.712177f;
    data->d[12] = -0.158576f;
    data->d[13] = -0.532079f;
    data->d[14] = 0.795033f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000083
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.189555f;
    data->d[2] = 0.262961f;
    data->d[3] = -2.823345f;
    data->d[4] = 0.126224f;
    data->d[5] = -4.254316f;
    data->d[6] = 0.959124f;
    data->d[7] = 2.908919f;
    data->d[8] = 4.925683f;
    data->d[9] = 2.040441f;
    data->d[10] = 1.013590f;
    data->d[11] = 1.455623f;
    data->d[12] = -0.846672f;
    data->d[13] = 1.800065f;
    data->d[14] = -0.284743f;
    data->d[15] = -0.059066f;
    data->d[16] = 0.000000f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000070
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.087480f;
    data->d[2] = -0.875291f;
    data->d[3] = -3.488559f;
    data->d[4] = -0.206823f;
    data->d[5] = 0.183055f;
    data->d[6] = -3.303183f;
    data->d[7] = 3.296403f;
    data->d[8] = 2.306298f;
    data->d[9] = -0.535162f;
    data->d[10] = -1.477903f;
    data->d[11] = 0.190623f;
    data->d[12] = 1.437627f;
    data->d[13] = 1.441285f;
    data->d[14] = -1.862402f;
    data->d[15] = 0.261799f;
    data->d[16] = 0.000000f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 0, 28);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 1, 2);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 1, 0);
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
    state.m_generation = 82;
    state.m_evolution = 0;
    state.m_index = 47;
    state.m_test = 18;
    state.m_seed = 17860175376941150153;
} // LoadState
