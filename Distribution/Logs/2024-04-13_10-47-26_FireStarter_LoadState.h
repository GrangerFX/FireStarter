#pragma once
#include "FireStarterState.h"

// Run date: 04/13/24 10:47:26 Pacific Daylight Time
// Run duration = 506.635225 seconds
// Run generation = 96
// Run evolution = 3
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

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
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
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.141417f;
    data->d[2] = 0.896603f;
    data->d[3] = 0.698384f;
    data->d[4] = 0.629915f;
    data->d[5] = 0.119267f;
    data->d[6] = 6.544912f;
    data->d[7] = -0.082012f;
    data->d[8] = -17.714146f;
    data->d[9] = 0.004296f;
    data->d[10] = 0.045601f;
    data->d[11] = 0.413050f;
    data->d[12] = 3.557329f;
    data->d[13] = 1.814704f;
    data->d[14] = 3.708150f;
    data->d[15] = 14.208764f;
    data->d[16] = -2.815240f;
    data->d[17] = 0.084602f;
    data->d[18] = -0.228716f;
    data->d[19] = 0.228716f;
    data->d[20] = 0.156709f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 1.008476f;
    data->d[2] = 0.369243f;
    data->d[3] = -2.535507f;
    data->d[4] = -0.009148f;
    data->d[5] = 1.581465f;
    data->d[6] = 1.826040f;
    data->d[7] = 0.303553f;
    data->d[8] = 0.971932f;
    data->d[9] = -2.247895f;
    data->d[10] = -0.007457f;
    data->d[11] = 13.462908f;
    data->d[12] = 1.974756f;
    data->d[13] = -3.593663f;
    data->d[14] = 1.066516f;
    data->d[15] = 0.356373f;
    data->d[16] = -4.127316f;
    data->d[17] = -0.032623f;
    data->d[18] = -0.776321f;
    data->d[19] = 0.859958f;
    data->d[20] = -1.412425f;
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
    data->d[1] = 0.724026f;
    data->d[2] = 0.522234f;
    data->d[3] = -0.243159f;
    data->d[4] = 0.387900f;
    data->d[5] = 0.020737f;
    data->d[6] = -1.199449f;
    data->d[7] = -0.381151f;
    data->d[8] = 1.850517f;
    data->d[9] = -0.036267f;
    data->d[10] = 4.692175f;
    data->d[11] = 0.151449f;
    data->d[12] = -1.213997f;
    data->d[13] = 0.690575f;
    data->d[14] = -1.466292f;
    data->d[15] = -1.999912f;
    data->d[16] = -1.778806f;
    data->d[17] = 1.653495f;
    data->d[18] = 0.191180f;
    data->d[19] = 0.446934f;
    data->d[20] = 0.820541f;
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
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 1, 9);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 1, 8);
    instructions->SetOperation(8, 0, 17);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 22);
    instructions->SetOperation(17, 1, 3);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 18);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 0, 10);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 1, 29);
    instructions->SetOperation(31, 0, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 96;
    state.m_evolution = 3;
    state.m_index = 12;
    state.m_copy_index = 47;
    state.m_id = 47;
    state.m_test = 0;
    state.m_seed = 12570677969147401094;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000076f;
    state.m_optimizeValid = true;
} // LoadState
