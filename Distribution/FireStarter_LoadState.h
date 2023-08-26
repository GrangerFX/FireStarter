#pragma once
#include "FireStarterState.h"

// Run date: 08/26/23 10:00:41 Pacific Daylight Time
// Run duration = 582.855959 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000936
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 1874
// Run optimizeSeed = 0
// Run seeds = 11000
// Run tests = 0
// Run units = 8
// Run processes = 16
// Run population = 278528
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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_evolveSeed = 1874;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 11000;
    settings.m_tests = 0;
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_population = 278528;
    settings.m_iterations = 256;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000376
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.927899f;
    data->d[1] = 2.915082f;
    data->d[2] = 0.888453f;
    data->d[3] = -0.000003f;
    data->d[4] = -1.114444f;
    data->d[5] = 0.023177f;
    data->d[6] = 0.173257f;
    data->d[7] = -2.466618f;
    data->d[8] = -1.964936f;
    data->d[9] = -0.733203f;
    data->d[10] = 2.587921f;
    data->d[11] = -1.033833f;
    data->d[12] = 0.016914f;
    data->d[13] = 1.293343f;
    data->d[14] = -0.911931f;
    data->d[15] = 0.913313f;
    data->d[16] = 0.896025f;
    data->d[17] = 1.084206f;
    data->d[18] = 0.192414f;
    data->d[19] = -0.481991f;
    data->d[20] = 1.554120f;
    data->d[21] = -0.000003f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000799
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.599177f;
    data->d[1] = 1.851836f;
    data->d[2] = -0.093730f;
    data->d[3] = -0.000002f;
    data->d[4] = 3.697182f;
    data->d[5] = -1.606121f;
    data->d[6] = 0.544805f;
    data->d[7] = 1.692807f;
    data->d[8] = -0.577558f;
    data->d[9] = -0.598380f;
    data->d[10] = 1.060830f;
    data->d[11] = -0.423003f;
    data->d[12] = 0.855313f;
    data->d[13] = 1.938060f;
    data->d[14] = 0.170481f;
    data->d[15] = 1.092492f;
    data->d[16] = 1.802227f;
    data->d[17] = -3.260905f;
    data->d[18] = -0.182901f;
    data->d[19] = 0.254482f;
    data->d[20] = 0.692429f;
    data->d[21] = -0.118103f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000008f;
} // LoadVariation1

// Variation: 2  result = 0.00000936
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.596212f;
    data->d[1] = -1.560885f;
    data->d[2] = -1.799314f;
    data->d[3] = -0.000016f;
    data->d[4] = 0.980860f;
    data->d[5] = 0.357564f;
    data->d[6] = -2.011361f;
    data->d[7] = 0.128039f;
    data->d[8] = 0.717600f;
    data->d[9] = -0.226836f;
    data->d[10] = -2.735838f;
    data->d[11] = 0.211463f;
    data->d[12] = 0.012033f;
    data->d[13] = -1.002095f;
    data->d[14] = -1.246417f;
    data->d[15] = -1.637352f;
    data->d[16] = -1.553569f;
    data->d[17] = -1.228277f;
    data->d[18] = 0.490468f;
    data->d[19] = -1.735493f;
    data->d[20] = -0.533291f;
    data->d[21] = 0.523589f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000009f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000009f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 2);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 1, 24);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 1, 28);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 1, 17);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 1, 26);
    instructions->SetOperation(27, 0, 23);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 17799379997841935595;
} // LoadState
