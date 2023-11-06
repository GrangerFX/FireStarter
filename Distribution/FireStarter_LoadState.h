#pragma once
#include "FireStarterState.h"

// Run date: 11/05/23 14:41:43 Pacific Standard Time
// Run duration = 10205.106948 seconds
// Run generation = 6
// Run evolution = 3
// Run result = 0.00006831
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

// Variation: 0  result = 0.00002044
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.275084f;
    data->d[1] = -1.446244f;
    data->d[2] = -1.239570f;
    data->d[3] = -1.260132f;
    data->d[4] = 1.302499f;
    data->d[5] = 1.134598f;
    data->d[6] = 1.358335f;
    data->d[7] = 0.372632f;
    data->d[8] = -1.792086f;
    data->d[9] = 0.223849f;
    data->d[10] = -0.773115f;
    data->d[11] = 1.970577f;
    data->d[12] = -0.000369f;
    data->d[13] = -4.626105f;
    data->d[14] = 1.792131f;
    data->d[15] = -0.184275f;
    data->d[16] = -1.481113f;
    data->d[17] = 3.471627f;
    data->d[18] = 1.276489f;
    data->d[19] = -0.404974f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000020f;
} // LoadVariation0

// Variation: 1  result = 0.00006831
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.586635f;
    data->d[1] = 0.909560f;
    data->d[2] = -1.900176f;
    data->d[3] = 0.308444f;
    data->d[4] = -0.470449f;
    data->d[5] = 0.191374f;
    data->d[6] = -0.762375f;
    data->d[7] = 0.196072f;
    data->d[8] = 1.108128f;
    data->d[9] = -1.814186f;
    data->d[10] = 1.903222f;
    data->d[11] = 3.589894f;
    data->d[12] = -0.042669f;
    data->d[13] = -0.291397f;
    data->d[14] = 2.093771f;
    data->d[15] = 0.350997f;
    data->d[16] = -0.709572f;
    data->d[17] = 1.913938f;
    data->d[18] = 0.249026f;
    data->d[19] = -0.002152f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000068f;
} // LoadVariation1

// Variation: 2  result = 0.00006321
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.344502f;
    data->d[1] = 1.847194f;
    data->d[2] = -0.398636f;
    data->d[3] = 0.398665f;
    data->d[4] = -0.283091f;
    data->d[5] = -0.156545f;
    data->d[6] = 1.561487f;
    data->d[7] = -1.321618f;
    data->d[8] = -1.893036f;
    data->d[9] = 0.331189f;
    data->d[10] = 0.205649f;
    data->d[11] = 0.961242f;
    data->d[12] = 0.023012f;
    data->d[13] = -135.467987f;
    data->d[14] = 1.369235f;
    data->d[15] = 1.426729f;
    data->d[16] = 0.487713f;
    data->d[17] = -1.760424f;
    data->d[18] = -1.039688f;
    data->d[19] = 0.311597f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000063f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000068f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 1, 11);
    instructions->SetOperation(4, 1, 17);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 21);
    instructions->SetOperation(15, 1, 8);
    instructions->SetOperation(16, 0, 22);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 23);
    instructions->SetOperation(22, 1, 4);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 1, 20);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 0, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 6;
    state.m_evolution = 3;
    state.m_index = 37;
    state.m_id = 59;
    state.m_copy_id = 4;
    state.m_test = 9;
    state.m_seed = 7915834099532332824;
    state.m_maxResult = 0.000068f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
