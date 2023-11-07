#pragma once
#include "FireStarterState.h"

// Run date: 11/07/23 02:55:14 Pacific Standard Time
// Run duration = 39725.412769 seconds
// Run generation = 172
// Run evolution = 18
// Run result = 0.00000048
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.377287f;
    data->d[1] = -1.764306f;
    data->d[2] = -0.806446f;
    data->d[3] = 1.408697f;
    data->d[4] = 0.237686f;
    data->d[5] = -0.343570f;
    data->d[6] = -0.751418f;
    data->d[7] = 0.949031f;
    data->d[8] = -0.731022f;
    data->d[9] = 2.177263f;
    data->d[10] = -0.552424f;
    data->d[11] = -1.517717f;
    data->d[12] = 0.116416f;
    data->d[13] = 2.046420f;
    data->d[14] = -0.005059f;
    data->d[15] = -1.315007f;
    data->d[16] = 0.015797f;
    data->d[17] = -0.000000f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.307811f;
    data->d[1] = -1.782847f;
    data->d[2] = 0.552335f;
    data->d[3] = -1.635114f;
    data->d[4] = 0.049924f;
    data->d[5] = 1.254224f;
    data->d[6] = -1.428744f;
    data->d[7] = -1.442979f;
    data->d[8] = -0.143615f;
    data->d[9] = 2.897508f;
    data->d[10] = 0.152224f;
    data->d[11] = 1.111093f;
    data->d[12] = 0.004266f;
    data->d[13] = 0.929587f;
    data->d[14] = 0.241426f;
    data->d[15] = 0.115896f;
    data->d[16] = 0.665219f;
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

// Variation: 2  result = 0.00000042
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.330836f;
    data->d[1] = -2.287158f;
    data->d[2] = -0.442075f;
    data->d[3] = -0.571463f;
    data->d[4] = 0.702957f;
    data->d[5] = -0.719063f;
    data->d[6] = -0.505662f;
    data->d[7] = 0.658711f;
    data->d[8] = 3.235253f;
    data->d[9] = -0.825089f;
    data->d[10] = -1.780940f;
    data->d[11] = 4.603003f;
    data->d[12] = -0.052005f;
    data->d[13] = 2.306468f;
    data->d[14] = 1.094012f;
    data->d[15] = -2.771570f;
    data->d[16] = -0.028216f;
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
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 12);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 0, 7);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 14);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 3);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 17);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 1, 26);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 1, 3);
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
    state.m_generation = 172;
    state.m_evolution = 18;
    state.m_index = 20;
    state.m_id = 46;
    state.m_copy_id = 15;
    state.m_test = 14;
    state.m_seed = 15539053121678780712;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
