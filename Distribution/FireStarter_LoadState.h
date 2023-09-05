#pragma once
#include "FireStarterState.h"

// Run date: 09/05/23 15:23:43 Pacific Daylight Time
// Run duration = 1467.113562 seconds
// Run generation = 83
// Run evolution = 14
// Run result = 0.00000060
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
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 200
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
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 200;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000002
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.209430f;
    data->d[2] = 1.051210f;
    data->d[3] = -1.699494f;
    data->d[4] = -3.178378f;
    data->d[5] = -1.290374f;
    data->d[6] = -1.068164f;
    data->d[7] = -0.967601f;
    data->d[8] = 1.848426f;
    data->d[9] = -0.624498f;
    data->d[10] = -0.115667f;
    data->d[11] = 1.673842f;
    data->d[12] = 0.020690f;
    data->d[13] = -2.698964f;
    data->d[14] = 1.849446f;
    data->d[15] = 2.573379f;
    data->d[16] = 0.000000f;
    data->d[17] = -0.062453f;
    data->d[18] = 0.049033f;
    data->d[19] = 0.013420f;
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
    data->d[0] = -3.090637f;
    data->d[1] = 0.067245f;
    data->d[2] = -1.335640f;
    data->d[3] = -0.461212f;
    data->d[4] = -1.591838f;
    data->d[5] = 0.770268f;
    data->d[6] = 1.244582f;
    data->d[7] = -0.463499f;
    data->d[8] = -1.079490f;
    data->d[9] = 3.869360f;
    data->d[10] = 2.603140f;
    data->d[11] = -0.122095f;
    data->d[12] = 0.229007f;
    data->d[13] = 1.117777f;
    data->d[14] = 3.602636f;
    data->d[15] = -0.367815f;
    data->d[16] = 0.000004f;
    data->d[17] = 1.247605f;
    data->d[18] = -5.941660f;
    data->d[19] = 4.575905f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.328643f;
    data->d[2] = -1.790249f;
    data->d[3] = -33.313374f;
    data->d[4] = 0.445587f;
    data->d[5] = -0.070115f;
    data->d[6] = -2.062642f;
    data->d[7] = 0.625382f;
    data->d[8] = 0.667853f;
    data->d[9] = 0.275837f;
    data->d[10] = 1.349558f;
    data->d[11] = 2.473072f;
    data->d[12] = 0.137606f;
    data->d[13] = 0.963666f;
    data->d[14] = -0.512177f;
    data->d[15] = -2.220000f;
    data->d[16] = -0.000000f;
    data->d[17] = -0.255626f;
    data->d[18] = 0.122453f;
    data->d[19] = 0.656771f;
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
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 21);
    instructions->SetOperation(5, 1, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 1, 3);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 83;
    state.m_evolution = 14;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 3;
    state.m_copy_id = 7;
    state.m_test = 0;
    state.m_seed = 12659223649241119151;
    state.m_maxResult = 0.000001f;
    state.m_lastResult = 0.000007f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
