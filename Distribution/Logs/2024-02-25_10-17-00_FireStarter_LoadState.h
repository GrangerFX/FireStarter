#pragma once
#include "FireStarterState.h"

// Run date: 02/25/24 10:17:00 Pacific Standard Time
// Run duration = 27104.961747 seconds
// Run generation = 63
// Run evolution = 11
// Run max result = 0.00004208
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 128;
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

// Variation: 0  result = 0.00002664
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.019188f;
    data->d[1] = 2.613337f;
    data->d[2] = 0.226463f;
    data->d[3] = 0.137684f;
    data->d[4] = 1.736412f;
    data->d[5] = -1.959682f;
    data->d[6] = 0.304069f;
    data->d[7] = 0.224732f;
    data->d[8] = -1.786901f;
    data->d[9] = 1.223117f;
    data->d[10] = 1.092983f;
    data->d[11] = 1.912929f;
    data->d[12] = -1.756920f;
    data->d[13] = -1.602021f;
    data->d[14] = 3.962178f;
    data->d[15] = -0.281212f;
    data->d[16] = 1.376483f;
    data->d[17] = -1.319204f;
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
    *(result->MinResult()) = 0.000027f;
} // LoadVariation0

// Variation: 1  result = 0.00000978
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.139080f;
    data->d[1] = 1.087229f;
    data->d[2] = 1.185947f;
    data->d[3] = 0.534203f;
    data->d[4] = -0.361796f;
    data->d[5] = -0.016198f;
    data->d[6] = -1.489464f;
    data->d[7] = 0.077484f;
    data->d[8] = 0.596911f;
    data->d[9] = -1.135200f;
    data->d[10] = 8.383552f;
    data->d[11] = 6.266679f;
    data->d[12] = -1.206682f;
    data->d[13] = -7.160942f;
    data->d[14] = 0.028750f;
    data->d[15] = -5.919986f;
    data->d[16] = -0.571641f;
    data->d[17] = 0.459848f;
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
    *(result->MinResult()) = 0.000010f;
} // LoadVariation1

// Variation: 2  result = 0.00004208
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.778945f;
    data->d[1] = 1.105337f;
    data->d[2] = 0.059232f;
    data->d[3] = 0.991862f;
    data->d[4] = -1.224129f;
    data->d[5] = 0.149952f;
    data->d[6] = -0.622498f;
    data->d[7] = 0.754238f;
    data->d[8] = -1.844950f;
    data->d[9] = -0.642863f;
    data->d[10] = 1.184039f;
    data->d[11] = 1.660449f;
    data->d[12] = 1.584784f;
    data->d[13] = -2.518963f;
    data->d[14] = -0.053646f;
    data->d[15] = -2.423084f;
    data->d[16] = 2.955029f;
    data->d[17] = -1.906687f;
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
    *(result->MinResult()) = 0.000042f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000042f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 13);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 5);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 24);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 0, 10);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 1, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 63;
    state.m_evolution = 11;
    state.m_children0 = 63;
    state.m_children1 = 14;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 16592322101417238615;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000050f;
    state.m_maxResult = 0.000042f;
    state.m_evolveWeight = 0.580357f;
    state.m_optimizeValid = true;
} // LoadState
