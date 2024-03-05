#pragma once
#include "FireStarterState.h"

// Run date: 03/05/24 09:15:37 Pacific Standard Time
// Run duration = 6051.372908 seconds
// Run generation = 597
// Run evolution = 17
// Run max result = 0.00000021
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
// Run evolveSeed = 2
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
    settings.m_evolveSeed = 2;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.184229f;
    data->d[2] = -0.770017f;
    data->d[3] = -0.733117f;
    data->d[4] = -0.466852f;
    data->d[5] = -0.306063f;
    data->d[6] = -0.097997f;
    data->d[7] = -0.927493f;
    data->d[8] = -0.951538f;
    data->d[9] = -0.006636f;
    data->d[10] = 0.002768f;
    data->d[11] = -4229.096191f;
    data->d[12] = -6.564934f;
    data->d[13] = 3.747405f;
    data->d[14] = -0.000724f;
    data->d[15] = -1.003673f;
    data->d[16] = 1.154210f;
    data->d[17] = -0.000000f;
    data->d[18] = 1.255694f;
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

// Variation: 1  result = 0.00000021
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.113979f;
    data->d[2] = 1.618852f;
    data->d[3] = -0.960693f;
    data->d[4] = -1.811239f;
    data->d[5] = 1.919060f;
    data->d[6] = -0.389377f;
    data->d[7] = -0.834673f;
    data->d[8] = 0.002611f;
    data->d[9] = 14734.184570f;
    data->d[10] = -0.000336f;
    data->d[11] = 6.720123f;
    data->d[12] = 0.038556f;
    data->d[13] = -1.904677f;
    data->d[14] = 1.594697f;
    data->d[15] = 0.408305f;
    data->d[16] = 1.061764f;
    data->d[17] = -0.289966f;
    data->d[18] = 0.407398f;
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

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.188026f;
    data->d[2] = -0.755398f;
    data->d[3] = -0.345505f;
    data->d[4] = -0.821996f;
    data->d[5] = -0.764366f;
    data->d[6] = 0.194225f;
    data->d[7] = -3.792379f;
    data->d[8] = -0.000388f;
    data->d[9] = 4.427151f;
    data->d[10] = 0.000058f;
    data->d[11] = -271751.343750f;
    data->d[12] = -0.552059f;
    data->d[13] = 0.056775f;
    data->d[14] = -1.463624f;
    data->d[15] = -1.624135f;
    data->d[16] = 0.141932f;
    data->d[17] = 1.482685f;
    data->d[18] = 0.353142f;
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
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 22);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 1, 17);
    instructions->SetOperation(7, 0, 28);
    instructions->SetOperation(8, 0, 10);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 24);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 0, 26);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 1, 21);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 0, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 597;
    state.m_evolution = 17;
    state.m_children0 = 597;
    state.m_children1 = 28;
    state.m_index = 3;
    state.m_copy_index = 3;
    state.m_id = 3;
    state.m_test = 0;
    state.m_seed = 3611969534592908894;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 597.000000f;
    state.m_optimizeValid = true;
} // LoadState
