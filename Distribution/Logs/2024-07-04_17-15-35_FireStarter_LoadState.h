#pragma once
#include "FireStarterState.h"

// Run date: 07/04/24 17:15:35 Pacific Daylight Time
// Run duration = 7940.826876 seconds
// Run generation = 975
// Run evolution = 10
// Run max result = 0.00000060
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.372998f;
    data->d[2] = -1.031626f;
    data->d[3] = 2.063253f;
    data->d[4] = 0.569107f;
    data->d[5] = 0.393997f;
    data->d[6] = 10.070064f;
    data->d[7] = 0.241462f;
    data->d[8] = -0.000556f;
    data->d[9] = 0.414077f;
    data->d[10] = -3.005651f;
    data->d[11] = 1.616690f;
    data->d[12] = 3.464288f;
    data->d[13] = -1.163477f;
    data->d[14] = -3.592459f;
    data->d[15] = -6.468559f;
    data->d[16] = -1.739030f;
    data->d[17] = 0.783595f;
    data->d[18] = -0.503879f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000018
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090660f;
    data->d[1] = -0.743773f;
    data->d[2] = 0.549305f;
    data->d[3] = -1.098613f;
    data->d[4] = -2.866760f;
    data->d[5] = -0.064474f;
    data->d[6] = -1.412856f;
    data->d[7] = -0.000084f;
    data->d[8] = 3.743976f;
    data->d[9] = -1.574245f;
    data->d[10] = -0.805975f;
    data->d[11] = -1.818960f;
    data->d[12] = 0.671036f;
    data->d[13] = 0.448856f;
    data->d[14] = -2.735247f;
    data->d[15] = -0.720609f;
    data->d[16] = -0.531707f;
    data->d[17] = 2.422269f;
    data->d[18] = -0.548795f;
    data->d[19] = -0.118133f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.593661f;
    data->d[2] = -1.841471f;
    data->d[3] = 3.682940f;
    data->d[4] = 1.124608f;
    data->d[5] = -0.620296f;
    data->d[6] = 2.219435f;
    data->d[7] = -0.000320f;
    data->d[8] = -3.009895f;
    data->d[9] = -0.928930f;
    data->d[10] = -0.416538f;
    data->d[11] = -1.168547f;
    data->d[12] = -3.045918f;
    data->d[13] = -4.808509f;
    data->d[14] = -1.635169f;
    data->d[15] = -0.017454f;
    data->d[16] = -1.789773f;
    data->d[17] = 1.866725f;
    data->d[18] = 0.161211f;
    data->d[19] = 0.523598f;
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
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 0, 29);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 1, 28);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 1, 27);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 0, 25);
    instructions->SetOperation(21, 0, 19);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 1);
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
    state.m_generation = 975;
    state.m_evolution = 10;
    state.m_index = 15;
    state.m_copy_index = 10;
    state.m_id = 10;
    state.m_test = 6;
    state.m_seed = 3263341167225901633;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000885f;
    state.m_optimizeValid = true;
} // LoadState
