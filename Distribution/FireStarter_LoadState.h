#pragma once
#include "FireStarterState.h"

// Run date: 09/02/23 14:03:29 Pacific Daylight Time
// Run duration = 3228.269240 seconds
// Run generation = 5
// Run evolution = 1
// Run result = 0.00000072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 4
// Run units = 2
// Run processes = 2
// Run population = 278528
// Run iterations = 64
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 4;
    settings.m_units = 2;
    settings.m_processes = 2;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000045
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.217421f;
    data->d[2] = 2.147001f;
    data->d[3] = 0.125899f;
    data->d[4] = -3.387204f;
    data->d[5] = -0.599885f;
    data->d[6] = -0.004071f;
    data->d[7] = 2.282729f;
    data->d[8] = -0.035720f;
    data->d[9] = 4.503209f;
    data->d[10] = 0.909705f;
    data->d[11] = 1.472177f;
    data->d[12] = 0.257668f;
    data->d[13] = -0.873286f;
    data->d[14] = 0.695379f;
    data->d[15] = -3.492831f;
    data->d[16] = 0.876788f;
    data->d[17] = 3.797453f;
    data->d[18] = -0.000000f;
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

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.056296f;
    data->d[2] = 0.860493f;
    data->d[3] = -1.123530f;
    data->d[4] = 0.202366f;
    data->d[5] = -3.317337f;
    data->d[6] = -1.175024f;
    data->d[7] = -1.445748f;
    data->d[8] = -0.428754f;
    data->d[9] = -0.326382f;
    data->d[10] = -0.632804f;
    data->d[11] = 0.545804f;
    data->d[12] = -0.738023f;
    data->d[13] = -3.166660f;
    data->d[14] = -3.163994f;
    data->d[15] = 0.017210f;
    data->d[16] = 0.274635f;
    data->d[17] = 1.904062f;
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

// Variation: 2  result = 0.00000051
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617993f;
    data->d[1] = -0.082130f;
    data->d[2] = 0.618388f;
    data->d[3] = -1.866959f;
    data->d[4] = -1.593832f;
    data->d[5] = 0.595562f;
    data->d[6] = 0.027421f;
    data->d[7] = 19.300472f;
    data->d[8] = -6.296134f;
    data->d[9] = -0.000318f;
    data->d[10] = 0.950187f;
    data->d[11] = 2.324946f;
    data->d[12] = -0.471121f;
    data->d[13] = 2.870062f;
    data->d[14] = -0.794931f;
    data->d[15] = 0.577375f;
    data->d[16] = -0.047388f;
    data->d[17] = -2.744308f;
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
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 21);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 3);
    instructions->SetOperation(12, 1, 27);
    instructions->SetOperation(13, 0, 27);
    instructions->SetOperation(14, 1, 3);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 1, 26);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 1, 26);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 1, 5);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 5;
    state.m_evolution = 1;
    state.m_index = 37;
    state.m_test = 3;
    state.m_seed = 1279467972757120858;
} // LoadState
