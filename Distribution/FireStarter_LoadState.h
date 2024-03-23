#pragma once
#include "FireStarterState.h"

// Run date: 03/22/24 20:20:55 Pacific Daylight Time
// Run duration = 1035.251889 seconds
// Run generation = 137
// Run evolution = 8
// Run max result = 0.00000024
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
// Run evolveSeed = 3
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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
    settings.m_evolveSeed = 3;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.247914f;
    data->d[1] = 1.155545f;
    data->d[2] = 1.673459f;
    data->d[3] = -2.573451f;
    data->d[4] = -0.441631f;
    data->d[5] = -1.815817f;
    data->d[6] = -1.015363f;
    data->d[7] = 0.968630f;
    data->d[8] = 0.031923f;
    data->d[9] = -731.604980f;
    data->d[10] = -0.927206f;
    data->d[11] = -0.348276f;
    data->d[12] = 0.122620f;
    data->d[13] = 0.829614f;
    data->d[14] = 3.349802f;
    data->d[15] = -0.048579f;
    data->d[16] = -0.178347f;
    data->d[17] = 1.212407f;
    data->d[18] = -0.000000f;
    data->d[19] = 1.364605f;
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
    data->d[0] = -0.226477f;
    data->d[1] = -0.985627f;
    data->d[2] = 0.297658f;
    data->d[3] = -0.987560f;
    data->d[4] = -0.678678f;
    data->d[5] = -0.093991f;
    data->d[6] = 1.721769f;
    data->d[7] = -0.760881f;
    data->d[8] = -2.146492f;
    data->d[9] = 0.253548f;
    data->d[10] = -2.769939f;
    data->d[11] = 0.359001f;
    data->d[12] = -0.210326f;
    data->d[13] = 2.483699f;
    data->d[14] = 50.584702f;
    data->d[15] = -0.006836f;
    data->d[16] = -1.632173f;
    data->d[17] = 0.655675f;
    data->d[18] = 0.036452f;
    data->d[19] = -3.240783f;
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
    data->d[0] = -1.347143f;
    data->d[1] = -0.535220f;
    data->d[2] = -0.238035f;
    data->d[3] = -1.649585f;
    data->d[4] = -0.910811f;
    data->d[5] = 1.683687f;
    data->d[6] = 0.058685f;
    data->d[7] = -0.052160f;
    data->d[8] = 0.005948f;
    data->d[9] = 0.391292f;
    data->d[10] = -330727.906250f;
    data->d[11] = -0.591933f;
    data->d[12] = 0.630501f;
    data->d[13] = 0.483408f;
    data->d[14] = 1.911085f;
    data->d[15] = 2.621784f;
    data->d[16] = 0.262237f;
    data->d[17] = 1.289073f;
    data->d[18] = 0.419230f;
    data->d[19] = 1.248954f;
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
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 0, 14);
    instructions->SetOperation(2, 1, 22);
    instructions->SetOperation(3, 1, 27);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 0, 17);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 26);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 19);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 27);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 137;
    state.m_evolution = 8;
    state.m_index = 7;
    state.m_copy_index = 84;
    state.m_id = 84;
    state.m_test = 0;
    state.m_seed = 4882504775222710672;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000014f;
    state.m_optimizeValid = true;
} // LoadState
