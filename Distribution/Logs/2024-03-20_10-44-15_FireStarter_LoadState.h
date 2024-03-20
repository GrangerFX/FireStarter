#pragma once
#include "FireStarterState.h"

// Run date: 03/20/24 10:44:15 Pacific Daylight Time
// Run duration = 5874.219549 seconds
// Run generation = 680
// Run evolution = 20
// Run max result = 0.00000012
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
// Run evolveSeed = 3
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 8
// Run units = 1
// Run states = 1
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
    settings.m_evolveSeed = 3;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.558112f;
    data->d[1] = -1.583481f;
    data->d[2] = 0.001478f;
    data->d[3] = 2008.559570f;
    data->d[4] = 1.116587f;
    data->d[5] = -1.402603f;
    data->d[6] = -0.333606f;
    data->d[7] = 2.385435f;
    data->d[8] = 1.022299f;
    data->d[9] = 0.119016f;
    data->d[10] = -1.650106f;
    data->d[11] = 0.834496f;
    data->d[12] = 0.022485f;
    data->d[13] = -1.761124f;
    data->d[14] = 0.579795f;
    data->d[15] = -0.551586f;
    data->d[16] = -0.109997f;
    data->d[17] = -2.405023f;
    data->d[18] = 0.635081f;
    data->d[19] = 0.118005f;
    data->d[20] = 0.014603f;
    data->d[21] = -0.001723f;
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
    data->d[0] = -1.690603f;
    data->d[1] = -1.400056f;
    data->d[2] = -0.451440f;
    data->d[3] = -1.854461f;
    data->d[4] = -0.090749f;
    data->d[5] = -2.128361f;
    data->d[6] = -0.691857f;
    data->d[7] = 0.509529f;
    data->d[8] = -1.104674f;
    data->d[9] = 12.110772f;
    data->d[10] = 2.027146f;
    data->d[11] = -0.419221f;
    data->d[12] = 0.012588f;
    data->d[13] = 1.110927f;
    data->d[14] = 0.285640f;
    data->d[15] = 0.248616f;
    data->d[16] = -0.943641f;
    data->d[17] = -3.884974f;
    data->d[18] = -1.243889f;
    data->d[19] = 0.073356f;
    data->d[20] = -2.166945f;
    data->d[21] = 0.040827f;
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
    data->d[0] = -2.594016f;
    data->d[1] = -0.023978f;
    data->d[2] = 1.338027f;
    data->d[3] = 0.185196f;
    data->d[4] = -0.106887f;
    data->d[5] = -1.390762f;
    data->d[6] = 57.749153f;
    data->d[7] = -1.487958f;
    data->d[8] = -0.876110f;
    data->d[9] = 1.740609f;
    data->d[10] = 0.261456f;
    data->d[11] = 0.101736f;
    data->d[12] = 0.204934f;
    data->d[13] = 2.112907f;
    data->d[14] = 1.009946f;
    data->d[15] = -0.105047f;
    data->d[16] = 2.200226f;
    data->d[17] = -1.188239f;
    data->d[18] = -3.907374f;
    data->d[19] = -2.661684f;
    data->d[20] = 0.604088f;
    data->d[21] = 2.131490f;
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
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 1, 14);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 0, 28);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 3);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 0, 23);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 26);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 1, 5);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 13);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 1, 24);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 1, 1);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 0, 12);
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
    state.m_generation = 680;
    state.m_evolution = 20;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 8;
    state.m_seed = 14507786594737625653;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000012f;
    state.m_optimizeValid = true;
} // LoadState
