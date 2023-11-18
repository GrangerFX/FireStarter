#pragma once
#include "FireStarterState.h"

// Run date: 11/18/23 09:41:16 Pacific Standard Time
// Run duration = 2514.520933 seconds
// Run generation = 48
// Run evolution = 4
// Run result = 0.00000051
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
// Run units = 1
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
    settings.m_units = 1;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.380470f;
    data->d[2] = -2.628331f;
    data->d[3] = 1.185805f;
    data->d[4] = 3.943360f;
    data->d[5] = -1.859994f;
    data->d[6] = -0.171893f;
    data->d[7] = -0.708294f;
    data->d[8] = -0.983591f;
    data->d[9] = -1.881420f;
    data->d[10] = 1.682072f;
    data->d[11] = -0.357544f;
    data->d[12] = 0.217938f;
    data->d[13] = 5.039228f;
    data->d[14] = -0.964169f;
    data->d[15] = 0.111143f;
    data->d[16] = -1.638992f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.000000f;
    data->d[2] = 8.436665f;
    data->d[3] = 0.993005f;
    data->d[4] = 0.110637f;
    data->d[5] = -0.612341f;
    data->d[6] = 1.041243f;
    data->d[7] = 0.307692f;
    data->d[8] = -1.034861f;
    data->d[9] = 0.184518f;
    data->d[10] = -0.498488f;
    data->d[11] = -1.311549f;
    data->d[12] = -1.115365f;
    data->d[13] = 1.560959f;
    data->d[14] = 2.329753f;
    data->d[15] = 0.207090f;
    data->d[16] = -4.032000f;
    data->d[17] = -0.118132f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000051
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 2.936046f;
    data->d[2] = 4.707219f;
    data->d[3] = -0.212440f;
    data->d[4] = 0.670567f;
    data->d[5] = -0.846121f;
    data->d[6] = -2.921494f;
    data->d[7] = -0.393947f;
    data->d[8] = -1.390469f;
    data->d[9] = 1.129522f;
    data->d[10] = 0.811101f;
    data->d[11] = -0.831141f;
    data->d[12] = 0.016609f;
    data->d[13] = 0.619537f;
    data->d[14] = 0.956666f;
    data->d[15] = 0.415354f;
    data->d[16] = -1.700501f;
    data->d[17] = 0.523599f;
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
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 1, 7);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 0, 2);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 1, 13);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 1);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 23);
    instructions->SetOperation(22, 1, 14);
    instructions->SetOperation(23, 1, 26);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 6);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 48;
    state.m_evolution = 4;
    state.m_index = 1;
    state.m_id = 1;
    state.m_copy_id = 1;
    state.m_test = 14;
    state.m_seed = 8183890140249532026;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
