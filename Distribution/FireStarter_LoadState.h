#pragma once
#include "FireStarterState.h"

// Run date: 11/12/23 09:22:31 Pacific Standard Time
// Run duration = 44969.849939 seconds
// Run generation = 213
// Run evolution = 15
// Run result = 0.00000608
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000584
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.736479f;
    data->d[1] = 0.198462f;
    data->d[2] = -0.292620f;
    data->d[3] = 0.577322f;
    data->d[4] = 0.527321f;
    data->d[5] = -0.475504f;
    data->d[6] = -1.201650f;
    data->d[7] = 0.056559f;
    data->d[8] = -1.125802f;
    data->d[9] = -1.276640f;
    data->d[10] = -1.621914f;
    data->d[11] = -2.507914f;
    data->d[12] = -1.091804f;
    data->d[13] = -0.042776f;
    data->d[14] = 0.412510f;
    data->d[15] = 0.463121f;
    data->d[16] = -1.024549f;
    data->d[17] = 1.850216f;
    data->d[18] = 0.192198f;
    data->d[19] = -0.089839f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation0

// Variation: 1  result = 0.00000608
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.645587f;
    data->d[1] = -0.328198f;
    data->d[2] = 0.168992f;
    data->d[3] = 0.858195f;
    data->d[4] = 0.350976f;
    data->d[5] = -0.479206f;
    data->d[6] = -0.108034f;
    data->d[7] = -5.759426f;
    data->d[8] = 0.016382f;
    data->d[9] = -5.686493f;
    data->d[10] = 0.875166f;
    data->d[11] = 4.775549f;
    data->d[12] = -0.260530f;
    data->d[13] = -3.198564f;
    data->d[14] = 0.554621f;
    data->d[15] = -0.948749f;
    data->d[16] = -1.006174f;
    data->d[17] = -1.342835f;
    data->d[18] = -3.038646f;
    data->d[19] = -0.707592f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation1

// Variation: 2  result = 0.00000308
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.673380f;
    data->d[1] = -0.442068f;
    data->d[2] = 1.252154f;
    data->d[3] = -0.129170f;
    data->d[4] = 0.156482f;
    data->d[5] = -0.269882f;
    data->d[6] = 4.221866f;
    data->d[7] = 0.163398f;
    data->d[8] = -0.302559f;
    data->d[9] = -4.347530f;
    data->d[10] = 0.491998f;
    data->d[11] = -2.688333f;
    data->d[12] = 1.400524f;
    data->d[13] = -0.178510f;
    data->d[14] = 0.085868f;
    data->d[15] = -0.253100f;
    data->d[16] = -0.379099f;
    data->d[17] = 0.713380f;
    data->d[18] = -1.790510f;
    data->d[19] = -0.736901f;
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
    state.m_maxResult = 0.000006f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 0, 3);
    instructions->SetOperation(2, 1, 11);
    instructions->SetOperation(3, 1, 13);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 1, 8);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 1, 0);
    instructions->SetOperation(15, 1, 15);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 1, 22);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 1, 28);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 23);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 0, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 213;
    state.m_evolution = 15;
    state.m_index = 15;
    state.m_id = 43;
    state.m_copy_id = 19;
    state.m_test = 11;
    state.m_seed = 16287897921964478841;
    state.m_maxResult = 0.000006f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
