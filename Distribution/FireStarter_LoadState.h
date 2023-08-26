#pragma once
#include "FireStarterState.h"

// Run date: 08/26/23 09:43:06 Pacific Daylight Time
// Run duration = 13.665457 seconds
// Run generation = 17
// Run evolution = 1
// Run result = 0.00388092
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_UNIT
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 69632
// Run iterations = 256
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

    settings.m_mode = FIRESTARTER_UNIT;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 0;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00081563
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.398114f;
    data->d[1] = -0.115157f;
    data->d[2] = -0.185123f;
    data->d[3] = -0.359408f;
    data->d[4] = -0.082197f;
    data->d[5] = -1.314050f;
    data->d[6] = 0.911794f;
    data->d[7] = -0.863516f;
    data->d[8] = 0.633489f;
    data->d[9] = -51.799675f;
    data->d[10] = 12.800236f;
    data->d[11] = -11.859115f;
    data->d[12] = -10.065188f;
    data->d[13] = -0.632553f;
    data->d[14] = 14.759351f;
    data->d[15] = 384.809998f;
    data->d[16] = 5.492847f;
    data->d[17] = -8.074167f;
    data->d[18] = -0.353787f;
    data->d[19] = -0.000816f;
    data->d[20] = -3.193208f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000816f;
} // LoadVariation0

// Variation: 1  result = 0.00388092
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.024079f;
    data->d[1] = 1.185038f;
    data->d[2] = -1.657755f;
    data->d[3] = -1.563135f;
    data->d[4] = -5.417448f;
    data->d[5] = 0.084755f;
    data->d[6] = -0.772342f;
    data->d[7] = -0.061285f;
    data->d[8] = -42.483006f;
    data->d[9] = 5.618357f;
    data->d[10] = -3.374776f;
    data->d[11] = -52.873001f;
    data->d[12] = -92.551315f;
    data->d[13] = -0.295135f;
    data->d[14] = 0.139224f;
    data->d[15] = 4.252276f;
    data->d[16] = -0.440423f;
    data->d[17] = -2.162585f;
    data->d[18] = 2.441339f;
    data->d[19] = 0.848393f;
    data->d[20] = 0.902812f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.003881f;
} // LoadVariation1

// Variation: 2  result = 0.00204578
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.194034f;
    data->d[1] = -0.056845f;
    data->d[2] = 0.530132f;
    data->d[3] = -0.839918f;
    data->d[4] = -0.006767f;
    data->d[5] = 0.254137f;
    data->d[6] = 20.877785f;
    data->d[7] = -0.455201f;
    data->d[8] = 2.411210f;
    data->d[9] = -7184.263672f;
    data->d[10] = 56.693275f;
    data->d[11] = -19.488693f;
    data->d[12] = 16.659573f;
    data->d[13] = -75.114227f;
    data->d[14] = 21.014175f;
    data->d[15] = 463.679321f;
    data->d[16] = 4.216392f;
    data->d[17] = 4.473566f;
    data->d[18] = 0.831091f;
    data->d[19] = -0.002046f;
    data->d[20] = 0.106493f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.002046f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.003881f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 1, 26);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 17);
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
    state.m_generation = 17;
    state.m_evolution = 1;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 7226405454687159255;
} // LoadState
