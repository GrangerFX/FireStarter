#pragma once
#include "FireStarterState.h"

// Run date: 11/07/23 19:13:58 Pacific Standard Time
// Run duration = 25658.012083 seconds
// Run generation = 13
// Run evolution = 6
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

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.797175f;
    data->d[1] = 2.504398f;
    data->d[2] = 1.870839f;
    data->d[3] = 0.764378f;
    data->d[4] = 1.439061f;
    data->d[5] = -0.113358f;
    data->d[6] = -0.058841f;
    data->d[7] = 1.263330f;
    data->d[8] = -1.304750f;
    data->d[9] = 7.622099f;
    data->d[10] = 9.228621f;
    data->d[11] = -0.191450f;
    data->d[12] = -1.577491f;
    data->d[13] = -0.522827f;
    data->d[14] = -1.199477f;
    data->d[15] = 0.891642f;
    data->d[16] = 1.030053f;
    data->d[17] = -0.010969f;
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

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.606057f;
    data->d[1] = 1.873115f;
    data->d[2] = -0.429019f;
    data->d[3] = 0.380645f;
    data->d[4] = -0.853272f;
    data->d[5] = 1.287078f;
    data->d[6] = -0.986199f;
    data->d[7] = 1.682210f;
    data->d[8] = 0.549001f;
    data->d[9] = 0.007969f;
    data->d[10] = -3.290407f;
    data->d[11] = 1.325545f;
    data->d[12] = -1.662544f;
    data->d[13] = -1.069406f;
    data->d[14] = -0.432778f;
    data->d[15] = -1.649414f;
    data->d[16] = 1.044228f;
    data->d[17] = 0.048127f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000025
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.088058f;
    data->d[1] = -2.848530f;
    data->d[2] = -3.612044f;
    data->d[3] = -0.209522f;
    data->d[4] = 0.372614f;
    data->d[5] = -1.043352f;
    data->d[6] = 0.051036f;
    data->d[7] = 1.695783f;
    data->d[8] = 0.176083f;
    data->d[9] = -1.438537f;
    data->d[10] = 0.726705f;
    data->d[11] = -2.252299f;
    data->d[12] = -2.092747f;
    data->d[13] = -0.183708f;
    data->d[14] = 0.348473f;
    data->d[15] = -1.572093f;
    data->d[16] = 0.331457f;
    data->d[17] = -0.359321f;
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
    *(result->MinResult()) = 0.000000f;
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
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 28);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 26);
    instructions->SetOperation(9, 1, 17);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 0, 16);
    instructions->SetOperation(13, 0, 27);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 5);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 18);
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
    state.m_generation = 13;
    state.m_evolution = 6;
    state.m_index = 2;
    state.m_id = 13;
    state.m_copy_id = 0;
    state.m_test = 11;
    state.m_seed = 11375638897893686511;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
