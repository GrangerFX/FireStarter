#pragma once
#include "FireStarterState.h"

// Run date: 12/10/23 10:34:52 Pacific Standard Time
// Run duration = 5364.504867 seconds
// Run generation = 67
// Run evolution = 10
// Run max result = 0.00000465
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000423
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.312085f;
    data->d[1] = 1.020887f;
    data->d[2] = 1.535163f;
    data->d[3] = -1.585188f;
    data->d[4] = 0.225852f;
    data->d[5] = -1.694661f;
    data->d[6] = -0.121309f;
    data->d[7] = 1.447201f;
    data->d[8] = -1.126177f;
    data->d[9] = 0.010294f;
    data->d[10] = 1.108156f;
    data->d[11] = -0.597816f;
    data->d[12] = -2.171270f;
    data->d[13] = 3.825451f;
    data->d[14] = -1.319212f;
    data->d[15] = 0.316445f;
    data->d[16] = 0.304179f;
    data->d[17] = -0.006498f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000465
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.813246f;
    data->d[1] = 12.537006f;
    data->d[2] = 0.088590f;
    data->d[3] = -2.156405f;
    data->d[4] = -0.274594f;
    data->d[5] = 0.594334f;
    data->d[6] = -0.007787f;
    data->d[7] = -0.409949f;
    data->d[8] = 0.992717f;
    data->d[9] = 1.773509f;
    data->d[10] = 0.123145f;
    data->d[11] = -1.245888f;
    data->d[12] = 2.829325f;
    data->d[13] = 2.279705f;
    data->d[14] = -6.888788f;
    data->d[15] = -0.007403f;
    data->d[16] = 0.111931f;
    data->d[17] = -0.092935f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000322
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.799872f;
    data->d[1] = -0.565226f;
    data->d[2] = -0.542273f;
    data->d[3] = -0.311710f;
    data->d[4] = 1.487807f;
    data->d[5] = -3.367479f;
    data->d[6] = -0.422114f;
    data->d[7] = 0.462951f;
    data->d[8] = -1.655289f;
    data->d[9] = 0.014797f;
    data->d[10] = 0.775562f;
    data->d[11] = -0.163068f;
    data->d[12] = -2.321109f;
    data->d[13] = -1.287418f;
    data->d[14] = -1.198123f;
    data->d[15] = 0.501979f;
    data->d[16] = 0.775149f;
    data->d[17] = 0.920745f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 24);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 1, 24);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 0, 2);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 1, 23);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 1, 21);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 67;
    state.m_evolution = 10;
    state.m_index = 0;
    state.m_copy_index = 3;
    state.m_id = 41;
    state.m_copy_id = 19;
    state.m_test = 15;
    state.m_seed = 4755443962174968102;
    state.m_maxResult = 0.000005f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
