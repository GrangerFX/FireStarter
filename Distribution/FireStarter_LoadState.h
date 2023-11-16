#pragma once
#include "FireStarterState.h"

// Run date: 11/15/23 13:59:20 Pacific Standard Time
// Run duration = 12619.711282 seconds
// Run generation = 56
// Run evolution = 4
// Run result = 0.00000024
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.270184f;
    data->d[1] = -1.178120f;
    data->d[2] = -2.000000f;
    data->d[3] = 0.924975f;
    data->d[4] = 1.704223f;
    data->d[5] = -1.189359f;
    data->d[6] = -0.064311f;
    data->d[7] = 1.012810f;
    data->d[8] = -1.063337f;
    data->d[9] = -4.351298f;
    data->d[10] = -0.004982f;
    data->d[11] = -1.183298f;
    data->d[12] = 0.630525f;
    data->d[13] = -0.466514f;
    data->d[14] = -1.455730f;
    data->d[15] = -1.390134f;
    data->d[16] = 0.706044f;
    data->d[17] = -0.024444f;
    data->d[18] = 0.048888f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.647715f;
    data->d[1] = -0.499537f;
    data->d[2] = -2.000008f;
    data->d[3] = 0.634218f;
    data->d[4] = 4.871155f;
    data->d[5] = 0.718486f;
    data->d[6] = -0.038392f;
    data->d[7] = 1.023529f;
    data->d[8] = 0.097146f;
    data->d[9] = -0.017233f;
    data->d[10] = -3.136261f;
    data->d[11] = -1.552550f;
    data->d[12] = 0.483994f;
    data->d[13] = 2.682493f;
    data->d[14] = -0.080926f;
    data->d[15] = 3.320178f;
    data->d[16] = -0.123998f;
    data->d[17] = 0.058987f;
    data->d[18] = -0.236113f;
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

// Variation: 2  result = 0.00000023
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.732504f;
    data->d[1] = 0.521460f;
    data->d[2] = -1.999999f;
    data->d[3] = 0.416518f;
    data->d[4] = 0.832226f;
    data->d[5] = -0.751031f;
    data->d[6] = -0.058181f;
    data->d[7] = 1.722868f;
    data->d[8] = 0.281373f;
    data->d[9] = 0.001449f;
    data->d[10] = -1.929729f;
    data->d[11] = -0.857829f;
    data->d[12] = -2.100477f;
    data->d[13] = 2.580296f;
    data->d[14] = -1.521947f;
    data->d[15] = -0.483246f;
    data->d[16] = -0.270164f;
    data->d[17] = 0.504452f;
    data->d[18] = -0.485304f;
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
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 7);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 1, 9);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 1, 16);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 0);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 25);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 1, 23);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 56;
    state.m_evolution = 4;
    state.m_index = 8;
    state.m_id = 8;
    state.m_copy_id = 8;
    state.m_test = 2;
    state.m_seed = 15171753683403945617;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
