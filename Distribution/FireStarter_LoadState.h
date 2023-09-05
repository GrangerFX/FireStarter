#pragma once
#include "FireStarterState.h"

// Run date: 09/05/23 13:31:38 Pacific Daylight Time
// Run duration = 2860.668394 seconds
// Run generation = 8
// Run evolution = 4
// Run result = 0.00000012
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
// Run generations = 500
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
    settings.m_generations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.249170f;
    data->d[2] = 1.263277f;
    data->d[3] = -0.977887f;
    data->d[4] = -0.990225f;
    data->d[5] = -0.843463f;
    data->d[6] = -0.000119f;
    data->d[7] = 8.700299f;
    data->d[8] = 3.790512f;
    data->d[9] = -0.214681f;
    data->d[10] = 1.403396f;
    data->d[11] = 10.524498f;
    data->d[12] = -26.078438f;
    data->d[13] = 0.339470f;
    data->d[14] = -1.906255f;
    data->d[15] = -1.662487f;
    data->d[16] = 1.151571f;
    data->d[17] = -2.281667f;
    data->d[18] = -0.180148f;
    data->d[19] = -0.000000f;
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
    data->d[0] = -3.090659f;
    data->d[1] = -0.385525f;
    data->d[2] = -0.503030f;
    data->d[3] = -1.506901f;
    data->d[4] = -0.819448f;
    data->d[5] = 0.251713f;
    data->d[6] = 3.678730f;
    data->d[7] = 2.111450f;
    data->d[8] = 0.000172f;
    data->d[9] = -0.933456f;
    data->d[10] = 1.298378f;
    data->d[11] = -1.211243f;
    data->d[12] = 1.351177f;
    data->d[13] = -1.060356f;
    data->d[14] = -1.431963f;
    data->d[15] = 0.409684f;
    data->d[16] = -1.223717f;
    data->d[17] = -0.205871f;
    data->d[18] = 0.717070f;
    data->d[19] = -0.118132f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.445086f;
    data->d[2] = -1.285891f;
    data->d[3] = -1.632329f;
    data->d[4] = 0.016056f;
    data->d[5] = -0.033407f;
    data->d[6] = 1.841616f;
    data->d[7] = 0.903237f;
    data->d[8] = 0.412130f;
    data->d[9] = -0.646044f;
    data->d[10] = 1.209454f;
    data->d[11] = -10.407161f;
    data->d[12] = -6.540892f;
    data->d[13] = -0.000066f;
    data->d[14] = 0.392768f;
    data->d[15] = -1.800756f;
    data->d[16] = 1.385480f;
    data->d[17] = 1.962317f;
    data->d[18] = -0.037239f;
    data->d[19] = 0.523599f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 24);
    instructions->SetOperation(14, 1, 23);
    instructions->SetOperation(15, 0, 26);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 27);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 4);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 12);
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
    state.m_generation = 8;
    state.m_evolution = 4;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 50;
    state.m_copy_id = 7;
    state.m_test = 0;
    state.m_seed = 1172899352767337775;
    state.m_maxResult = 0.000000f;
    state.m_lastResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
