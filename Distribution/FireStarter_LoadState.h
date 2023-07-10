#pragma once
#include "FireStarterState.h"

// Run date: 07/10/23 10:26:34 Pacific Daylight Time
// Run duration = 782.253781 seconds
// Run generation = 93
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

// Variation: 0  result = 0.00000069
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -1.584242f;
    data->d[2] = 0.086218f;
    data->d[3] = 0.269392f;
    data->d[4] = -0.941882f;
    data->d[5] = -2.139817f;
    data->d[6] = -2.958844f;
    data->d[7] = 3.421346f;
    data->d[8] = 0.073799f;
    data->d[9] = 1.111109f;
    data->d[10] = -0.021509f;
    data->d[11] = -1.958721f;
    data->d[12] = -0.904489f;
    data->d[13] = -1.788320f;
    data->d[14] = 0.249999f;
    data->d[15] = -0.000000f;
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
    data->d[1] = -0.167309f;
    data->d[2] = -0.363232f;
    data->d[3] = 0.871168f;
    data->d[4] = -3.717988f;
    data->d[5] = 6.445570f;
    data->d[6] = 9.770361f;
    data->d[7] = -3.413171f;
    data->d[8] = 0.424271f;
    data->d[9] = -6.341104f;
    data->d[10] = 0.065778f;
    data->d[11] = 0.002416f;
    data->d[12] = 0.470951f;
    data->d[13] = 0.881782f;
    data->d[14] = -1.888538f;
    data->d[15] = -0.118132f;
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

// Variation: 2  result = 0.00000083
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.081760f;
    data->d[2] = -0.758062f;
    data->d[3] = -0.360581f;
    data->d[4] = 4.166349f;
    data->d[5] = 15.382221f;
    data->d[6] = 1.995702f;
    data->d[7] = -1.631819f;
    data->d[8] = -1.882429f;
    data->d[9] = 1.341968f;
    data->d[10] = 0.091299f;
    data->d[11] = 3.573218f;
    data->d[12] = -0.509290f;
    data->d[13] = -1.654302f;
    data->d[14] = 0.153007f;
    data->d[15] = 0.523599f;
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
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 4);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 1, 21);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 93;
    state.m_evolution = 0;
    state.m_index = 45;
    state.m_test = 49;
    state.m_seed = 9404712441413650007;
} // LoadState
