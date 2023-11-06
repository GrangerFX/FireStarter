#pragma once
#include "FireStarterState.h"

// Run date: 11/06/23 12:20:00 Pacific Standard Time
// Run duration = 705.850101 seconds
// Run generation = 22
// Run evolution = 10
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.286085f;
    data->d[1] = 2.165610f;
    data->d[2] = 0.709448f;
    data->d[3] = 0.610342f;
    data->d[4] = 2.032218f;
    data->d[5] = -1.016258f;
    data->d[6] = 0.321838f;
    data->d[7] = -0.465332f;
    data->d[8] = -0.475900f;
    data->d[9] = 3.788836f;
    data->d[10] = -0.001405f;
    data->d[11] = 0.581661f;
    data->d[12] = 9.724282f;
    data->d[13] = 0.204257f;
    data->d[14] = 2.040703f;
    data->d[15] = -0.489720f;
    data->d[16] = -2.085621f;
    data->d[17] = -1.266847f;
    data->d[18] = 0.160562f;
    data->d[19] = 0.973775f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.235398f;
    data->d[1] = -1.790628f;
    data->d[2] = 0.684357f;
    data->d[3] = 0.781686f;
    data->d[4] = 0.638049f;
    data->d[5] = -0.248486f;
    data->d[6] = -2.664130f;
    data->d[7] = 1.169257f;
    data->d[8] = 0.099595f;
    data->d[9] = -1.813344f;
    data->d[10] = 0.001251f;
    data->d[11] = 1.642704f;
    data->d[12] = -8.193475f;
    data->d[13] = 0.859873f;
    data->d[14] = -2.352128f;
    data->d[15] = 1.899139f;
    data->d[16] = -0.313550f;
    data->d[17] = 1.141423f;
    data->d[18] = -0.542354f;
    data->d[19] = 1.390352f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.171702f;
    data->d[1] = 1.590125f;
    data->d[2] = -0.658598f;
    data->d[3] = 2.440786f;
    data->d[4] = 2.750490f;
    data->d[5] = -1.079862f;
    data->d[6] = 0.207233f;
    data->d[7] = -1.145455f;
    data->d[8] = -0.468054f;
    data->d[9] = -1.198380f;
    data->d[10] = -0.027218f;
    data->d[11] = -3.026350f;
    data->d[12] = 4.309642f;
    data->d[13] = 0.348817f;
    data->d[14] = -0.799412f;
    data->d[15] = 3.467996f;
    data->d[16] = 3.478262f;
    data->d[17] = -0.063789f;
    data->d[18] = -0.895819f;
    data->d[19] = -0.063617f;
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
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 1, 22);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 22);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 22;
    state.m_evolution = 10;
    state.m_index = 0;
    state.m_id = 47;
    state.m_copy_id = 44;
    state.m_test = 4;
    state.m_seed = 12597321669312662593;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
