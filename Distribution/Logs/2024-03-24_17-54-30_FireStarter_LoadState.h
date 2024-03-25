#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 17:54:30 Pacific Daylight Time
// Run duration = 2454.709417 seconds
// Run generation = 1947
// Run evolution = 18
// Run max result = 0.00000027
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
    settings.m_registers = 29;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.210397f;
    data->d[1] = 0.466356f;
    data->d[2] = 1.173017f;
    data->d[3] = 1.320343f;
    data->d[4] = -0.119673f;
    data->d[5] = -1.201514f;
    data->d[6] = 1.750217f;
    data->d[7] = 0.109891f;
    data->d[8] = 1.825704f;
    data->d[9] = 0.022132f;
    data->d[10] = 0.683457f;
    data->d[11] = 2.380912f;
    data->d[12] = 4.376548f;
    data->d[13] = 0.103523f;
    data->d[14] = -5.333994f;
    data->d[15] = 1.514295f;
    data->d[16] = 2.406024f;
    data->d[17] = 0.059998f;
    data->d[18] = 0.262980f;
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
    data->d[0] = 0.237163f;
    data->d[1] = 1.878140f;
    data->d[2] = -0.834411f;
    data->d[3] = -1.251357f;
    data->d[4] = 0.166862f;
    data->d[5] = -0.553611f;
    data->d[6] = 0.716230f;
    data->d[7] = -0.335265f;
    data->d[8] = -1.977932f;
    data->d[9] = -0.094499f;
    data->d[10] = -1.490355f;
    data->d[11] = 0.654336f;
    data->d[12] = -0.560534f;
    data->d[13] = -83.661560f;
    data->d[14] = 5.817589f;
    data->d[15] = -0.004893f;
    data->d[16] = -1.908852f;
    data->d[17] = -1.088057f;
    data->d[18] = -1.364274f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000027
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.556359f;
    data->d[1] = -1.689499f;
    data->d[2] = 1.684706f;
    data->d[3] = 0.506916f;
    data->d[4] = 1.045332f;
    data->d[5] = -0.329058f;
    data->d[6] = 1.618478f;
    data->d[7] = 0.272406f;
    data->d[8] = 1.845657f;
    data->d[9] = -0.102811f;
    data->d[10] = -1.161953f;
    data->d[11] = -2.431453f;
    data->d[12] = 2.198159f;
    data->d[13] = 3.863834f;
    data->d[14] = -103.475082f;
    data->d[15] = 0.006926f;
    data->d[16] = -1.037225f;
    data->d[17] = 0.216617f;
    data->d[18] = -0.686557f;
    data->d[19] = 0.523599f;
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
    instructions->SetOperation(0, 0, 4);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 0, 7);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 0, 16);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 1, 22);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 0);
    instructions->SetOperation(17, 0, 22);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 1, 2);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1947;
    state.m_evolution = 18;
    state.m_index = 3;
    state.m_copy_index = 78;
    state.m_id = 78;
    state.m_test = 7;
    state.m_seed = 16470439578398606266;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.001214f;
    state.m_optimizeValid = true;
} // LoadState
