#pragma once
#include "FireStarterState.h"

// Run date: 10/01/23 11:34:30 Pacific Daylight Time
// Run duration = 5126.562574 seconds
// Run generation = 42
// Run evolution = 5
// Run result = 0.00000095
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
// Run tests = 8
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
    settings.m_tests = 8;
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

// Variation: 0  result = 0.00000054
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.909408f;
    data->d[2] = -0.000000f;
    data->d[3] = -0.939242f;
    data->d[4] = 0.531652f;
    data->d[5] = 0.273542f;
    data->d[6] = -0.052494f;
    data->d[7] = 1.211635f;
    data->d[8] = 0.599537f;
    data->d[9] = -0.320927f;
    data->d[10] = -1.199495f;
    data->d[11] = 1.148804f;
    data->d[12] = -0.508253f;
    data->d[13] = 0.374032f;
    data->d[14] = 2.748640f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.087565f;
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

// Variation: 1  result = 0.00000095
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.610477f;
    data->d[2] = 0.000000f;
    data->d[3] = 0.063192f;
    data->d[4] = -0.326146f;
    data->d[5] = -1.380535f;
    data->d[6] = -0.429097f;
    data->d[7] = -3.829635f;
    data->d[8] = 0.423611f;
    data->d[9] = 0.799182f;
    data->d[10] = -1.720775f;
    data->d[11] = -1.435263f;
    data->d[12] = -0.964260f;
    data->d[13] = -1.931025f;
    data->d[14] = 0.004964f;
    data->d[15] = -4.169963f;
    data->d[16] = 0.028329f;
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
    data->d[1] = -0.203078f;
    data->d[2] = -0.000001f;
    data->d[3] = -1.811733f;
    data->d[4] = 0.709417f;
    data->d[5] = -0.987755f;
    data->d[6] = -0.443445f;
    data->d[7] = -0.238390f;
    data->d[8] = 0.216927f;
    data->d[9] = 2.403495f;
    data->d[10] = -6.108372f;
    data->d[11] = -0.055913f;
    data->d[12] = 2.685473f;
    data->d[13] = -1.074163f;
    data->d[14] = 0.251836f;
    data->d[15] = -17.348637f;
    data->d[16] = -0.030181f;
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
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 1, 15);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 0, 13);
    instructions->SetOperation(7, 0, 25);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 21);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 13);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 22);
    instructions->SetOperation(30, 0, 24);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 42;
    state.m_evolution = 5;
    state.m_age = 6;
    state.m_index = 29;
    state.m_id = 59;
    state.m_copy_id = 37;
    state.m_test = 6;
    state.m_seed = 15183038774605936216;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
} // LoadState
