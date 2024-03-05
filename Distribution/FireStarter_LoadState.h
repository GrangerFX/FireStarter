#pragma once
#include "FireStarterState.h"

// Run date: 03/05/24 11:22:05 Pacific Standard Time
// Run duration = 3355.251789 seconds
// Run generation = 304
// Run evolution = 10
// Run max result = 0.00001426
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

// Variation: 0  result = 0.00001425
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.349208f;
    data->d[1] = 0.790240f;
    data->d[2] = 0.077183f;
    data->d[3] = -0.336839f;
    data->d[4] = -0.009675f;
    data->d[5] = -0.004540f;
    data->d[6] = -0.531514f;
    data->d[7] = -6.582896f;
    data->d[8] = 6.304242f;
    data->d[9] = -1.320193f;
    data->d[10] = -0.407148f;
    data->d[11] = 1.199725f;
    data->d[12] = -0.571854f;
    data->d[13] = 0.148333f;
    data->d[14] = 1.949529f;
    data->d[15] = -0.289222f;
    data->d[16] = 0.492603f;
    data->d[17] = 0.826165f;
    data->d[18] = -0.761611f;
    data->d[19] = 1.309152f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation0

// Variation: 1  result = 0.00001061
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.483202f;
    data->d[1] = 0.346722f;
    data->d[2] = 0.237065f;
    data->d[3] = 0.751754f;
    data->d[4] = 1.265789f;
    data->d[5] = -1.330636f;
    data->d[6] = -1.946134f;
    data->d[7] = -1.217509f;
    data->d[8] = -2.478453f;
    data->d[9] = 0.918070f;
    data->d[10] = -0.745176f;
    data->d[11] = 0.006357f;
    data->d[12] = 1.960834f;
    data->d[13] = -0.997257f;
    data->d[14] = 1.196488f;
    data->d[15] = -1.537401f;
    data->d[16] = 1.759989f;
    data->d[17] = -1.693106f;
    data->d[18] = -0.076298f;
    data->d[19] = 0.220727f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000011f;
} // LoadVariation1

// Variation: 2  result = 0.00001426
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.687606f;
    data->d[1] = 0.357588f;
    data->d[2] = -0.230551f;
    data->d[3] = 1.953818f;
    data->d[4] = -1.387007f;
    data->d[5] = 1.430721f;
    data->d[6] = 1.170789f;
    data->d[7] = -0.309747f;
    data->d[8] = -1.105448f;
    data->d[9] = -0.286103f;
    data->d[10] = -0.533738f;
    data->d[11] = -1.076020f;
    data->d[12] = 0.997018f;
    data->d[13] = -0.023000f;
    data->d[14] = -2.983646f;
    data->d[15] = 2.629513f;
    data->d[16] = -2.216792f;
    data->d[17] = 3.031765f;
    data->d[18] = -0.014307f;
    data->d[19] = 0.072761f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000014f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 13);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 1, 11);
    instructions->SetOperation(9, 0, 3);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 27);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 18);
    instructions->SetOperation(22, 1, 18);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 13);
    instructions->SetOperation(31, 0, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 304;
    state.m_evolution = 10;
    state.m_children0 = 4850;
    state.m_children1 = 0;
    state.m_index = 221;
    state.m_copy_index = 187;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 13639565791632528934;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000023f;
    state.m_maxResult = 0.000014f;
    state.m_evolveWeight = 0.002157f;
    state.m_optimizeValid = true;
} // LoadState
