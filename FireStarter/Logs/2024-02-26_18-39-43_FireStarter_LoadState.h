#pragma once
#include "FireStarterState.h"

// Run date: 02/26/24 18:39:43 Pacific Standard Time
// Run duration = 27414.454426 seconds
// Run generation = 127
// Run evolution = 18
// Run max result = 0.00001907
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 128;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000101
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.081687f;
    data->d[1] = 0.647645f;
    data->d[2] = -0.278257f;
    data->d[3] = -1.501169f;
    data->d[4] = 0.888770f;
    data->d[5] = 1.261190f;
    data->d[6] = -0.685205f;
    data->d[7] = 2.171276f;
    data->d[8] = 167.490921f;
    data->d[9] = -0.009241f;
    data->d[10] = 0.343065f;
    data->d[11] = 0.008491f;
    data->d[12] = 3.951620f;
    data->d[13] = -0.756298f;
    data->d[14] = -1.224799f;
    data->d[15] = -13.653486f;
    data->d[16] = 0.747270f;
    data->d[17] = 2.629378f;
    data->d[18] = 0.622903f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00001907
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.363266f;
    data->d[1] = 0.496774f;
    data->d[2] = 0.390997f;
    data->d[3] = -1.892869f;
    data->d[4] = 1.102943f;
    data->d[5] = 3.102908f;
    data->d[6] = -2.633001f;
    data->d[7] = 3.425582f;
    data->d[8] = 1.389487f;
    data->d[9] = 0.058307f;
    data->d[10] = 1.186845f;
    data->d[11] = 0.014151f;
    data->d[12] = -0.008089f;
    data->d[13] = 208.625793f;
    data->d[14] = -1.677699f;
    data->d[15] = -1.671307f;
    data->d[16] = 0.123142f;
    data->d[17] = 1.181866f;
    data->d[18] = -0.293799f;
    data->d[19] = -0.347723f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000019f;
} // LoadVariation1

// Variation: 2  result = 0.00000477
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.568973f;
    data->d[1] = 0.122894f;
    data->d[2] = -1.844265f;
    data->d[3] = 0.285684f;
    data->d[4] = 1.262971f;
    data->d[5] = -0.934404f;
    data->d[6] = 1.552393f;
    data->d[7] = -0.510063f;
    data->d[8] = 0.375539f;
    data->d[9] = -0.518925f;
    data->d[10] = -1.060713f;
    data->d[11] = -0.092048f;
    data->d[12] = -0.019907f;
    data->d[13] = 21.403616f;
    data->d[14] = 3.317398f;
    data->d[15] = -4.835688f;
    data->d[16] = 1.698920f;
    data->d[17] = 1.504440f;
    data->d[18] = -1.427416f;
    data->d[19] = 0.000003f;
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
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000019f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 1, 26);
    instructions->SetOperation(4, 1, 6);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 1, 15);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 0, 25);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 0, 23);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 21);
    instructions->SetOperation(24, 0, 4);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 0, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 127;
    state.m_evolution = 18;
    state.m_children0 = 127;
    state.m_children1 = 9;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 252;
    state.m_seed = 9984435049121929231;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000052f;
    state.m_maxResult = 0.000019f;
    state.m_evolveWeight = 0.227273f;
    state.m_optimizeValid = true;
} // LoadState
