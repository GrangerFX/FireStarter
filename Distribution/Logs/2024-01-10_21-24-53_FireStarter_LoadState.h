#pragma once
#include "FireStarterState.h"

// Run date: 01/10/24 21:24:53 Pacific Standard Time
// Run duration = 8465.982044 seconds
// Run generation = 90
// Run evolution = 12
// Run max result = 0.00000051
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
// Run tests = 4
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    settings.m_tests = 4;
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000051
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.079854f;
    data->d[1] = -0.250868f;
    data->d[2] = -1.197389f;
    data->d[3] = -1.784433f;
    data->d[4] = -1.984411f;
    data->d[5] = 1.775843f;
    data->d[6] = -0.268594f;
    data->d[7] = -0.495053f;
    data->d[8] = 0.401180f;
    data->d[9] = -2.306388f;
    data->d[10] = -1.830563f;
    data->d[11] = -3.302417f;
    data->d[12] = 0.678501f;
    data->d[13] = 2.784261f;
    data->d[14] = -3.650863f;
    data->d[15] = 0.484979f;
    data->d[16] = -1.327671f;
    data->d[17] = -1.932312f;
    data->d[18] = 2.431917f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.154700f;
    data->d[1] = -0.478124f;
    data->d[2] = -0.434231f;
    data->d[3] = -0.607347f;
    data->d[4] = -1.924618f;
    data->d[5] = 0.348164f;
    data->d[6] = 0.094377f;
    data->d[7] = -2.787874f;
    data->d[8] = -0.340034f;
    data->d[9] = -18.847410f;
    data->d[10] = 0.328613f;
    data->d[11] = -2.381419f;
    data->d[12] = 0.346098f;
    data->d[13] = 4.480348f;
    data->d[14] = -3.043409f;
    data->d[15] = -11.754118f;
    data->d[16] = -1.058791f;
    data->d[17] = 1.092198f;
    data->d[18] = -0.391914f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.056981f;
    data->d[1] = 0.149176f;
    data->d[2] = -1.358464f;
    data->d[3] = -1.930060f;
    data->d[4] = 0.080131f;
    data->d[5] = 0.882303f;
    data->d[6] = 0.832148f;
    data->d[7] = -1.745667f;
    data->d[8] = -0.521090f;
    data->d[9] = -1.914508f;
    data->d[10] = -1.768245f;
    data->d[11] = -2.611410f;
    data->d[12] = 4.248760f;
    data->d[13] = 2.302882f;
    data->d[14] = -0.857278f;
    data->d[15] = -1.389335f;
    data->d[16] = -0.194379f;
    data->d[17] = -1.418366f;
    data->d[18] = 1.636670f;
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
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 1);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 1, 19);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 0, 13);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 28);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 24);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 1, 27);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 1, 20);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 90;
    state.m_evolution = 12;
    state.m_children = 125;
    state.m_index = 23;
    state.m_copy_index = 610;
    state.m_id = 117;
    state.m_test = 1;
    state.m_seed = 1715050060662606205;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveResult = 0.000075f;
    state.m_optimizeValid = true;
} // LoadState
