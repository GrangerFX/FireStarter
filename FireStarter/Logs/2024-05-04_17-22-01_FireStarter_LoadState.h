#pragma once
#include "FireStarterState.h"

// Run date: 05/04/24 17:22:01 Pacific Daylight Time
// Run duration = 220.759442 seconds
// Run generation = 34
// Run evolution = 2
// Run max result = 0.00118578
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00108710
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.857622f;
    data->d[1] = -0.163972f;
    data->d[2] = 1.302075f;
    data->d[3] = -0.297555f;
    data->d[4] = -1.608728f;
    data->d[5] = 1.617085f;
    data->d[6] = -0.380413f;
    data->d[7] = -0.476632f;
    data->d[8] = 1.933265f;
    data->d[9] = 2.114531f;
    data->d[10] = 1.370589f;
    data->d[11] = 0.090779f;
    data->d[12] = 0.208305f;
    data->d[13] = -0.859031f;
    data->d[14] = -0.656106f;
    data->d[15] = -0.313850f;
    data->d[16] = 1.261041f;
    data->d[17] = 1.214543f;
    data->d[18] = 0.756646f;
    data->d[19] = 0.227410f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.001087f;
} // LoadVariation0

// Variation: 1  result = 0.00058097
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.478173f;
    data->d[1] = 0.161039f;
    data->d[2] = -0.215459f;
    data->d[3] = 0.724853f;
    data->d[4] = -0.784232f;
    data->d[5] = 1.251176f;
    data->d[6] = -2.271927f;
    data->d[7] = 0.123423f;
    data->d[8] = 0.055743f;
    data->d[9] = -1.877231f;
    data->d[10] = 3.333007f;
    data->d[11] = -0.394411f;
    data->d[12] = -0.106740f;
    data->d[13] = 0.639536f;
    data->d[14] = 1.604079f;
    data->d[15] = 0.256851f;
    data->d[16] = -1.076993f;
    data->d[17] = 0.997132f;
    data->d[18] = 0.571984f;
    data->d[19] = -0.522589f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000581f;
} // LoadVariation1

// Variation: 2  result = 0.00118578
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.501478f;
    data->d[1] = -1.074635f;
    data->d[2] = -3.381243f;
    data->d[3] = -1.320944f;
    data->d[4] = 0.130712f;
    data->d[5] = 0.615819f;
    data->d[6] = -1.962110f;
    data->d[7] = -0.666786f;
    data->d[8] = -0.704292f;
    data->d[9] = -2.790342f;
    data->d[10] = -1.794629f;
    data->d[11] = -0.575705f;
    data->d[12] = 1.274001f;
    data->d[13] = 0.297357f;
    data->d[14] = -1.941217f;
    data->d[15] = -0.746774f;
    data->d[16] = 0.043120f;
    data->d[17] = -3.161778f;
    data->d[18] = -1.035427f;
    data->d[19] = -0.117492f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.001186f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.001186f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 1, 29);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 1, 21);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 10);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 4);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 34;
    state.m_evolution = 2;
    state.m_index = 1;
    state.m_copy_index = 27;
    state.m_id = 27;
    state.m_test = 0;
    state.m_seed = 6202074616750703194;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.002627f;
    state.m_maxResult = 0.001186f;
    state.m_evolveWeight = 0.047285f;
    state.m_optimizeValid = true;
} // LoadState
