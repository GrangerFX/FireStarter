#pragma once
#include "FireStarterState.h"

// Run date: 01/11/24 20:11:36 Pacific Standard Time
// Run duration = 4425.724985 seconds
// Run generation = 104
// Run evolution = 5
// Run max result = 0.00000024
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.475955f;
    data->d[2] = 7.736328f;
    data->d[3] = -0.048628f;
    data->d[4] = 2.331867f;
    data->d[5] = 2.020270f;
    data->d[6] = 1.343510f;
    data->d[7] = -0.214207f;
    data->d[8] = 0.765107f;
    data->d[9] = -0.476542f;
    data->d[10] = 0.811541f;
    data->d[11] = 0.371289f;
    data->d[12] = -5.179185f;
    data->d[13] = -1.080541f;
    data->d[14] = -0.014462f;
    data->d[15] = -0.039116f;
    data->d[16] = -0.000000f;
    data->d[17] = -2.142466f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.114997f;
    data->d[2] = 2.835998f;
    data->d[3] = -1.336394f;
    data->d[4] = -1.040315f;
    data->d[5] = -1.033995f;
    data->d[6] = -0.150855f;
    data->d[7] = 1.321271f;
    data->d[8] = -0.535989f;
    data->d[9] = 2.733537f;
    data->d[10] = 0.377576f;
    data->d[11] = -0.392675f;
    data->d[12] = 4.438172f;
    data->d[13] = -12.718613f;
    data->d[14] = -0.012296f;
    data->d[15] = -1.140184f;
    data->d[16] = 0.052938f;
    data->d[17] = -2.231492f;
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

// Variation: 2  result = 0.00000022
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.240311f;
    data->d[2] = 0.339876f;
    data->d[3] = 0.083377f;
    data->d[4] = 1.033054f;
    data->d[5] = 1.776698f;
    data->d[6] = 0.463715f;
    data->d[7] = -0.737450f;
    data->d[8] = 0.365911f;
    data->d[9] = 2.087116f;
    data->d[10] = -11.098135f;
    data->d[11] = -2.289270f;
    data->d[12] = -134.901138f;
    data->d[13] = -89.669151f;
    data->d[14] = 0.001893f;
    data->d[15] = 1.366853f;
    data->d[16] = -0.711291f;
    data->d[17] = -0.736125f;
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
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 0, 12);
    instructions->SetOperation(5, 1, 8);
    instructions->SetOperation(6, 0, 13);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 17);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 1, 18);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 1, 11);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 1, 23);
    instructions->SetOperation(23, 1, 28);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 1, 25);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 104;
    state.m_evolution = 5;
    state.m_children = 10;
    state.m_index = 18;
    state.m_copy_index = 489;
    state.m_id = 456;
    state.m_test = 10;
    state.m_seed = 1703439855107065275;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000003f;
    state.m_optimizeValid = true;
} // LoadState
