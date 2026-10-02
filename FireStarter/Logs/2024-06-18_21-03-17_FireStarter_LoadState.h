#pragma once
#include "FireStarterState.h"

// Run date: 06/18/24 21:03:17 Pacific Daylight Time
// Run duration = 471.737698 seconds
// Run generation = 17
// Run evolution = 1
// Run max result = 0.00002551
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001836
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.830388f;
    data->d[1] = 0.750051f;
    data->d[2] = -1.200955f;
    data->d[3] = -1.207820f;
    data->d[4] = 4.384995f;
    data->d[5] = 0.628433f;
    data->d[6] = -1.499471f;
    data->d[7] = 0.119989f;
    data->d[8] = 1.005367f;
    data->d[9] = 0.067785f;
    data->d[10] = 0.594937f;
    data->d[11] = 0.021198f;
    data->d[12] = -0.623624f;
    data->d[13] = -2.963249f;
    data->d[14] = 4.290774f;
    data->d[15] = -2.379147f;
    data->d[16] = -3.982502f;
    data->d[17] = -0.620907f;
    data->d[18] = -1.555276f;
    data->d[19] = -0.254007f;
    data->d[20] = 0.014597f;
    data->d[21] = 0.314803f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000018f;
} // LoadVariation0

// Variation: 1  result = 0.00002277
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.534558f;
    data->d[1] = 0.133415f;
    data->d[2] = -0.908078f;
    data->d[3] = -0.757089f;
    data->d[4] = 1.437502f;
    data->d[5] = 0.560764f;
    data->d[6] = -0.275041f;
    data->d[7] = 0.127941f;
    data->d[8] = -9.321463f;
    data->d[9] = 0.010473f;
    data->d[10] = 1.528254f;
    data->d[11] = 0.914201f;
    data->d[12] = 0.385393f;
    data->d[13] = 2.703550f;
    data->d[14] = -2.717393f;
    data->d[15] = 6.651568f;
    data->d[16] = 6.639315f;
    data->d[17] = -0.592596f;
    data->d[18] = -0.837360f;
    data->d[19] = 2.718055f;
    data->d[20] = -0.718741f;
    data->d[21] = 0.166925f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000023f;
} // LoadVariation1

// Variation: 2  result = 0.00002551
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.858265f;
    data->d[1] = -0.569102f;
    data->d[2] = -1.445856f;
    data->d[3] = 1.476957f;
    data->d[4] = -3.550573f;
    data->d[5] = 1.150613f;
    data->d[6] = -0.267001f;
    data->d[7] = -0.276344f;
    data->d[8] = -0.592380f;
    data->d[9] = -0.909830f;
    data->d[10] = 0.086241f;
    data->d[11] = 0.245074f;
    data->d[12] = 4.142587f;
    data->d[13] = -2.979781f;
    data->d[14] = 0.567914f;
    data->d[15] = 1.463394f;
    data->d[16] = 4.121333f;
    data->d[17] = -1.641072f;
    data->d[18] = -2.151455f;
    data->d[19] = 1.336498f;
    data->d[20] = -1.947238f;
    data->d[21] = -0.267000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000026f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000026f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 1, 27);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 17;
    state.m_evolution = 1;
    state.m_index = 5;
    state.m_copy_index = 20;
    state.m_id = 20;
    state.m_test = 0;
    state.m_seed = 16800172073627579407;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000089f;
    state.m_maxResult = 0.000026f;
    state.m_evolveWeight = 0.000447f;
    state.m_optimizeValid = true;
} // LoadState
