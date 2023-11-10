#pragma once
#include "FireStarterState.h"

// Run date: 11/10/23 12:50:16 Pacific Standard Time
// Run duration = 3727.373782 seconds
// Run generation = 68
// Run evolution = 13
// Run result = 0.00000060
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
// Run optimizations = 500
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
    settings.m_optimizations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000042
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.057631f;
    data->d[2] = 0.042002f;
    data->d[3] = 93818.132812f;
    data->d[4] = -0.088898f;
    data->d[5] = 0.138620f;
    data->d[6] = 0.053809f;
    data->d[7] = -0.024104f;
    data->d[8] = -0.852919f;
    data->d[9] = -0.032726f;
    data->d[10] = 0.142294f;
    data->d[11] = -4.637549f;
    data->d[12] = -0.432772f;
    data->d[13] = 0.068264f;
    data->d[14] = 4.197260f;
    data->d[15] = 0.141073f;
    data->d[16] = 0.261801f;
    data->d[17] = -0.147728f;
    data->d[18] = 0.111435f;
    data->d[19] = -0.000000f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.083154f;
    data->d[2] = 0.588941f;
    data->d[3] = -186034.000000f;
    data->d[4] = 0.281115f;
    data->d[5] = -0.033469f;
    data->d[6] = 0.000816f;
    data->d[7] = 1.323273f;
    data->d[8] = -3.881910f;
    data->d[9] = -1.201084f;
    data->d[10] = -0.021487f;
    data->d[11] = -0.358997f;
    data->d[12] = 0.016179f;
    data->d[13] = 0.025355f;
    data->d[14] = -0.268582f;
    data->d[15] = 0.258098f;
    data->d[16] = -2.449773f;
    data->d[17] = 0.150076f;
    data->d[18] = -1.290573f;
    data->d[19] = -0.118133f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617993f;
    data->d[1] = 0.042710f;
    data->d[2] = 0.128867f;
    data->d[3] = -29708.353516f;
    data->d[4] = -1.176536f;
    data->d[5] = 0.172712f;
    data->d[6] = 0.077901f;
    data->d[7] = 0.289665f;
    data->d[8] = -28.992943f;
    data->d[9] = 0.015748f;
    data->d[10] = 0.070552f;
    data->d[11] = 0.319987f;
    data->d[12] = -0.259462f;
    data->d[13] = 0.102358f;
    data->d[14] = 1.599412f;
    data->d[15] = -0.114270f;
    data->d[16] = 0.250033f;
    data->d[17] = 0.052941f;
    data->d[18] = -1.215087f;
    data->d[19] = 0.523599f;
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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 1, 24);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 28);
    instructions->SetOperation(8, 0, 13);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 1, 21);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 1, 27);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 68;
    state.m_evolution = 13;
    state.m_index = 18;
    state.m_id = 30;
    state.m_copy_id = 44;
    state.m_test = 13;
    state.m_seed = 4960551046435237135;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
