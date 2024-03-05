#pragma once
#include "FireStarterState.h"

// Run date: 03/05/24 08:06:10 Pacific Standard Time
// Run duration = 1779.086778 seconds
// Run generation = 147
// Run evolution = 21
// Run max result = 0.00000017
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
// Run evolveSeed = 1
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
    settings.m_evolveSeed = 1;
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

// Variation: 0  result = 0.00000017
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.907839f;
    data->d[1] = -1.233754f;
    data->d[2] = -0.166824f;
    data->d[3] = -0.227246f;
    data->d[4] = -2.605379f;
    data->d[5] = -1.531874f;
    data->d[6] = -1.068075f;
    data->d[7] = -0.733143f;
    data->d[8] = 3.628049f;
    data->d[9] = -0.497931f;
    data->d[10] = 2.113913f;
    data->d[11] = 2.159330f;
    data->d[12] = -0.551462f;
    data->d[13] = 0.000123f;
    data->d[14] = 338.130585f;
    data->d[15] = -4.015131f;
    data->d[16] = -0.012480f;
    data->d[17] = -0.666470f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.249551f;
    data->d[1] = -2.841108f;
    data->d[2] = -2.552614f;
    data->d[3] = -0.176733f;
    data->d[4] = -0.070531f;
    data->d[5] = -0.389807f;
    data->d[6] = -1.288045f;
    data->d[7] = 0.001799f;
    data->d[8] = -0.181205f;
    data->d[9] = -59.314598f;
    data->d[10] = -8.846062f;
    data->d[11] = 0.200500f;
    data->d[12] = -0.027213f;
    data->d[13] = 0.133582f;
    data->d[14] = 0.813030f;
    data->d[15] = -0.020556f;
    data->d[16] = 0.543315f;
    data->d[17] = -1.527459f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.450732f;
    data->d[1] = -0.167261f;
    data->d[2] = -0.289251f;
    data->d[3] = 1.587682f;
    data->d[4] = 0.315340f;
    data->d[5] = -2.005582f;
    data->d[6] = 1.866031f;
    data->d[7] = -0.014581f;
    data->d[8] = -0.386498f;
    data->d[9] = -0.500325f;
    data->d[10] = -1.048234f;
    data->d[11] = -0.649419f;
    data->d[12] = -2.185806f;
    data->d[13] = -0.029838f;
    data->d[14] = -0.724485f;
    data->d[15] = 0.320004f;
    data->d[16] = -0.592534f;
    data->d[17] = 0.380591f;
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
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 0, 1);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 1, 5);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 1, 28);
    instructions->SetOperation(25, 1, 9);
    instructions->SetOperation(26, 0, 12);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 1, 2);
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
    state.m_generation = 147;
    state.m_evolution = 21;
    state.m_children0 = 147;
    state.m_children1 = 23;
    state.m_index = 8;
    state.m_copy_index = 8;
    state.m_id = 8;
    state.m_test = 0;
    state.m_seed = 14274721325927235309;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000009f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 147.000000f;
    state.m_optimizeValid = true;
} // LoadState
