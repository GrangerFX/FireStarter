#pragma once
#include "FireStarterState.h"

// Run date: 09/03/23 16:16:13 Pacific Daylight Time
// Run duration = 10209.873262 seconds
// Run generation = 20
// Run evolution = 1
// Run result = 0.00000536
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
// Run tests = 16
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000155
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.425097f;
    data->d[1] = -1.356873f;
    data->d[2] = 1.812080f;
    data->d[3] = 0.195638f;
    data->d[4] = -5.045289f;
    data->d[5] = 2.475681f;
    data->d[6] = -0.066164f;
    data->d[7] = 2.744495f;
    data->d[8] = -0.295271f;
    data->d[9] = 0.874150f;
    data->d[10] = 0.004994f;
    data->d[11] = 8.363201f;
    data->d[12] = 0.073808f;
    data->d[13] = 4.959698f;
    data->d[14] = -1.857520f;
    data->d[15] = -3.506005f;
    data->d[16] = 3.449438f;
    data->d[17] = 0.000002f;
    data->d[18] = 0.957722f;
    data->d[19] = -0.366312f;
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

// Variation: 1  result = 0.00000536
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.347523f;
    data->d[1] = 0.824844f;
    data->d[2] = 0.885938f;
    data->d[3] = 1.904084f;
    data->d[4] = -16.410601f;
    data->d[5] = 1.520047f;
    data->d[6] = 0.116779f;
    data->d[7] = 0.919184f;
    data->d[8] = 1.184741f;
    data->d[9] = 0.020308f;
    data->d[10] = 1.978796f;
    data->d[11] = -1.031471f;
    data->d[12] = -0.265161f;
    data->d[13] = -0.953813f;
    data->d[14] = 2.918400f;
    data->d[15] = -0.695923f;
    data->d[16] = -1.897454f;
    data->d[17] = -0.701128f;
    data->d[18] = 0.202700f;
    data->d[19] = 0.156912f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000328
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.573372f;
    data->d[1] = -1.618210f;
    data->d[2] = 2.429061f;
    data->d[3] = 0.174324f;
    data->d[4] = -2.116266f;
    data->d[5] = 0.150481f;
    data->d[6] = 0.109366f;
    data->d[7] = -1.438667f;
    data->d[8] = 0.840638f;
    data->d[9] = -1.956365f;
    data->d[10] = 0.001649f;
    data->d[11] = -2.929564f;
    data->d[12] = 0.290332f;
    data->d[13] = 3.513502f;
    data->d[14] = -1.719306f;
    data->d[15] = -1.472737f;
    data->d[16] = 2.914981f;
    data->d[17] = 0.932885f;
    data->d[18] = 1.279249f;
    data->d[19] = -0.373902f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 1);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 6);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 1, 26);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 0, 24);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 0, 23);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 20;
    state.m_evolution = 1;
    state.m_index = 63;
    state.m_test = 15;
    state.m_seed = 17892599465444043727;
} // LoadState
