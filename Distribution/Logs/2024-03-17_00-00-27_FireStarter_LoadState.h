#pragma once
#include "FireStarterState.h"

// Run date: 03/17/24 00:00:27 Pacific Daylight Time
// Run duration = 18139.189910 seconds
// Run generation = 703
// Run evolution = 14
// Run max result = 0.00000155
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
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
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

// Variation: 0  result = 0.00000155
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.560121f;
    data->d[1] = 0.469453f;
    data->d[2] = 0.689461f;
    data->d[3] = -0.462897f;
    data->d[4] = -0.585327f;
    data->d[5] = -0.295888f;
    data->d[6] = 3.560732f;
    data->d[7] = -1.170231f;
    data->d[8] = -0.470295f;
    data->d[9] = -0.001455f;
    data->d[10] = 33.593246f;
    data->d[11] = 0.871398f;
    data->d[12] = 0.586498f;
    data->d[13] = 3.893601f;
    data->d[14] = -0.345530f;
    data->d[15] = -1.662931f;
    data->d[16] = -1.831312f;
    data->d[17] = 0.475844f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000066
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.413179f;
    data->d[1] = -0.760278f;
    data->d[2] = 0.180210f;
    data->d[3] = 0.497036f;
    data->d[4] = -154.812881f;
    data->d[5] = -0.035488f;
    data->d[6] = 0.044683f;
    data->d[7] = 2.855914f;
    data->d[8] = -0.694102f;
    data->d[9] = -0.004277f;
    data->d[10] = 1.607188f;
    data->d[11] = -0.227150f;
    data->d[12] = 1.260574f;
    data->d[13] = 2.926432f;
    data->d[14] = -1.439363f;
    data->d[15] = -1.741832f;
    data->d[16] = -2.104013f;
    data->d[17] = 0.335564f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000131
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.965698f;
    data->d[1] = -0.122031f;
    data->d[2] = 3.566157f;
    data->d[3] = 1.424881f;
    data->d[4] = -0.001816f;
    data->d[5] = 0.123843f;
    data->d[6] = 2380.924316f;
    data->d[7] = -0.554133f;
    data->d[8] = 0.429034f;
    data->d[9] = 0.003069f;
    data->d[10] = -10.745111f;
    data->d[11] = 0.685098f;
    data->d[12] = 0.599285f;
    data->d[13] = 1.151142f;
    data->d[14] = -1.768505f;
    data->d[15] = -1.557966f;
    data->d[16] = -1.761092f;
    data->d[17] = 0.642853f;
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
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 1, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 1, 16);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 1, 26);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 23);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 23);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 1, 13);
    instructions->SetOperation(22, 1, 2);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 1, 26);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 1, 12);
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
    state.m_generation = 703;
    state.m_evolution = 14;
    state.m_index = 13;
    state.m_copy_index = 11;
    state.m_id = 11;
    state.m_test = 14;
    state.m_seed = 17160284732823110915;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000002f;
    state.m_evolveWeight = 0.000834f;
    state.m_optimizeValid = true;
} // LoadState
