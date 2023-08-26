#pragma once
#include "FireStarterState.h"

// Run date: 08/26/23 11:42:05 Pacific Daylight Time
// Run duration = 1730.919351 seconds
// Run generation = 287
// Run evolution = 29
// Run result = 0.00000095
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 100
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

    settings.m_mode = FIRESTARTER_TEVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 100;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000010
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.160180f;
    data->d[2] = -0.539016f;
    data->d[3] = 1.681741f;
    data->d[4] = -1.523979f;
    data->d[5] = -1.323953f;
    data->d[6] = -1.368339f;
    data->d[7] = -0.656499f;
    data->d[8] = 2.447186f;
    data->d[9] = 0.037441f;
    data->d[10] = -6.051390f;
    data->d[11] = -0.095732f;
    data->d[12] = -2.007246f;
    data->d[13] = 0.222545f;
    data->d[14] = 1.226489f;
    data->d[15] = 2.622504f;
    data->d[16] = -0.142304f;
    data->d[17] = 0.142304f;
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

// Variation: 1  result = 0.00000095
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 1.542910f;
    data->d[2] = 0.468448f;
    data->d[3] = 0.038933f;
    data->d[4] = -1.697806f;
    data->d[5] = 1.176249f;
    data->d[6] = -0.447916f;
    data->d[7] = 1.434684f;
    data->d[8] = 0.567973f;
    data->d[9] = 0.074695f;
    data->d[10] = -2.496063f;
    data->d[11] = 8.755250f;
    data->d[12] = 0.411689f;
    data->d[13] = 0.618472f;
    data->d[14] = 3.457032f;
    data->d[15] = -1.193872f;
    data->d[16] = -0.045010f;
    data->d[17] = -0.073122f;
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

// Variation: 2  result = 0.00000072
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.106498f;
    data->d[2] = 2.073721f;
    data->d[3] = -0.252058f;
    data->d[4] = 0.870710f;
    data->d[5] = 0.454011f;
    data->d[6] = 1.607715f;
    data->d[7] = 0.619756f;
    data->d[8] = -1.258900f;
    data->d[9] = -0.070941f;
    data->d[10] = 8.500419f;
    data->d[11] = -0.551582f;
    data->d[12] = 1.878430f;
    data->d[13] = -0.793189f;
    data->d[14] = -0.692264f;
    data->d[15] = -1.197888f;
    data->d[16] = 2.327524f;
    data->d[17] = -1.803926f;
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
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 1, 28);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 23);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 28);
    instructions->SetOperation(21, 1, 7);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 22);
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
    state.m_generation = 287;
    state.m_evolution = 29;
    state.m_index = 0;
    state.m_test = 5;
    state.m_seed = 16613855446510814800;
} // LoadState
