#pragma once
#include "FireStarterState.h"

// Run date: 03/09/24 20:59:45 Pacific Standard Time
// Run duration = 1257.004702 seconds
// Run generation = 100
// Run evolution = 12
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
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
    settings.m_tests = 1;
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
    data->d[1] = 0.113216f;
    data->d[2] = 0.488041f;
    data->d[3] = -3.390690f;
    data->d[4] = 0.337401f;
    data->d[5] = 0.413010f;
    data->d[6] = 1.539851f;
    data->d[7] = -0.441204f;
    data->d[8] = -0.015329f;
    data->d[9] = -0.880579f;
    data->d[10] = -0.019885f;
    data->d[11] = -14241.239258f;
    data->d[12] = 0.000045f;
    data->d[13] = 6.310446f;
    data->d[14] = -1.178176f;
    data->d[15] = 0.882689f;
    data->d[16] = 0.246094f;
    data->d[17] = 2.982904f;
    data->d[18] = -5.070241f;
    data->d[19] = -1.965741f;
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
    data->d[1] = -1.093722f;
    data->d[2] = -0.115334f;
    data->d[3] = 0.510668f;
    data->d[4] = -0.197638f;
    data->d[5] = -0.121248f;
    data->d[6] = -2.122954f;
    data->d[7] = -3.626930f;
    data->d[8] = 0.094319f;
    data->d[9] = 1.446188f;
    data->d[10] = -1.093418f;
    data->d[11] = 2.131882f;
    data->d[12] = 0.000280f;
    data->d[13] = 34.812340f;
    data->d[14] = 0.531430f;
    data->d[15] = 1.719812f;
    data->d[16] = -1.292865f;
    data->d[17] = -1.046867f;
    data->d[18] = -0.955636f;
    data->d[19] = 3.137791f;
    data->d[20] = -0.118132f;
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
    data->d[1] = -0.492371f;
    data->d[2] = -0.331458f;
    data->d[3] = 1.228769f;
    data->d[4] = -2.496617f;
    data->d[5] = -1.370935f;
    data->d[6] = 1.982486f;
    data->d[7] = 0.885747f;
    data->d[8] = -0.054529f;
    data->d[9] = 1.339041f;
    data->d[10] = -1.107090f;
    data->d[11] = -1.455856f;
    data->d[12] = -3.861647f;
    data->d[13] = 0.000240f;
    data->d[14] = 1.364897f;
    data->d[15] = -2.398886f;
    data->d[16] = 0.884880f;
    data->d[17] = -0.624996f;
    data->d[18] = -0.226983f;
    data->d[19] = 0.466410f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 1, 16);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 1, 22);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 1, 25);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 1, 24);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 100;
    state.m_evolution = 12;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 9;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 15257826762981179570;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 100.000000f;
    state.m_optimizeValid = true;
} // LoadState
