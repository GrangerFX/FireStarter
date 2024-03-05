#pragma once
#include "FireStarterState.h"

// Run date: 03/05/24 11:09:44 Pacific Standard Time
// Run duration = 483.529896 seconds
// Run generation = 42
// Run evolution = 11
// Run max result = 0.00000036
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
    settings.m_evolveSeed = 0;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.432034f;
    data->d[2] = -1.842194f;
    data->d[3] = 1.520300f;
    data->d[4] = 2.337596f;
    data->d[5] = 0.065186f;
    data->d[6] = -0.027788f;
    data->d[7] = 0.676463f;
    data->d[8] = 0.267637f;
    data->d[9] = 1.477558f;
    data->d[10] = -0.236478f;
    data->d[11] = -0.042194f;
    data->d[12] = 1.109548f;
    data->d[13] = -0.088107f;
    data->d[14] = -0.000002f;
    data->d[15] = 0.088107f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.214947f;
    data->d[2] = -1.230221f;
    data->d[3] = -2.331902f;
    data->d[4] = -0.302670f;
    data->d[5] = -1.832775f;
    data->d[6] = -0.079507f;
    data->d[7] = -0.155822f;
    data->d[8] = -0.037893f;
    data->d[9] = 4.884233f;
    data->d[10] = -0.962327f;
    data->d[11] = -0.140802f;
    data->d[12] = -1.243539f;
    data->d[13] = -0.827077f;
    data->d[14] = -0.192323f;
    data->d[15] = 0.768011f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.623895f;
    data->d[2] = -1.939707f;
    data->d[3] = 0.414691f;
    data->d[4] = -0.758128f;
    data->d[5] = 0.301708f;
    data->d[6] = 0.096689f;
    data->d[7] = -0.582562f;
    data->d[8] = -0.295027f;
    data->d[9] = -1.513092f;
    data->d[10] = -0.047827f;
    data->d[11] = 0.049151f;
    data->d[12] = 2.175704f;
    data->d[13] = 1.295954f;
    data->d[14] = -0.032397f;
    data->d[15] = -1.034154f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
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
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 22);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 1, 23);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 22);
    instructions->SetOperation(17, 0, 24);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 24);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 23);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 1, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 42;
    state.m_evolution = 11;
    state.m_children0 = 672;
    state.m_children1 = 15;
    state.m_index = 15;
    state.m_copy_index = 38;
    state.m_id = 6;
    state.m_test = 0;
    state.m_seed = 15266324517350454761;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000022f;
    state.m_optimizeValid = true;
} // LoadState
