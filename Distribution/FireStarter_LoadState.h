#pragma once
#include "FireStarterState.h"

// Run date: 07/03/23 09:57:37 Pacific Daylight Time
// Run duration = 965.704352 seconds
// Run generation = 72
// Run evolution = 0
// Run result = 0.00000095
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_seed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 0;
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
    data->d[0] = 0.277981f;
    data->d[1] = -0.873303f;
    data->d[2] = -2.226659f;
    data->d[3] = -0.530140f;
    data->d[4] = 2.004601f;
    data->d[5] = -1.586718f;
    data->d[6] = -0.045139f;
    data->d[7] = 0.041708f;
    data->d[8] = 1.464033f;
    data->d[9] = 0.193280f;
    data->d[10] = -0.066852f;
    data->d[11] = -3.842937f;
    data->d[12] = 0.255610f;
    data->d[13] = -0.100816f;
    data->d[14] = 0.300928f;
    data->d[15] = -1.615201f;
    data->d[16] = -0.961873f;
    data->d[17] = 1.963110f;
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

// Variation: 1  result = 0.00000083
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.381724f;
    data->d[1] = -1.179779f;
    data->d[2] = -0.738489f;
    data->d[3] = 0.366551f;
    data->d[4] = -1.154301f;
    data->d[5] = 0.990869f;
    data->d[6] = -1.050903f;
    data->d[7] = 1.592315f;
    data->d[8] = -4.646540f;
    data->d[9] = 3.274739f;
    data->d[10] = -0.859110f;
    data->d[11] = 3.121357f;
    data->d[12] = -0.000379f;
    data->d[13] = 0.731223f;
    data->d[14] = 0.298922f;
    data->d[15] = 1.140004f;
    data->d[16] = 0.348742f;
    data->d[17] = -0.880023f;
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

// Variation: 2  result = 0.00000095
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.402459f;
    data->d[1] = -1.053635f;
    data->d[2] = -1.747265f;
    data->d[3] = -0.202669f;
    data->d[4] = 0.499415f;
    data->d[5] = 0.649586f;
    data->d[6] = -0.079714f;
    data->d[7] = -0.439302f;
    data->d[8] = 0.376709f;
    data->d[9] = 1.454370f;
    data->d[10] = 0.520774f;
    data->d[11] = 3.067728f;
    data->d[12] = 0.103878f;
    data->d[13] = 1.043443f;
    data->d[14] = 0.558030f;
    data->d[15] = -1.292188f;
    data->d[16] = -0.012726f;
    data->d[17] = 0.287956f;
    data->d[18] = 0.523598f;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 1, 27);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 21);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 1, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 72;
    state.m_evolution = 0;
    state.m_index = 5;
    state.m_test = 48;
    state.m_seed = 859827195181190911;
} // LoadState
