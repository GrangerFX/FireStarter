#pragma once
#include "FireStarterState.h"

// Run date: 03/23/24 11:40:05 Pacific Daylight Time
// Run duration = 16744.162816 seconds
// Run generation = 530
// Run evolution = 9
// Run max result = 0.00000036
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
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
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
    data->d[0] = 0.863088f;
    data->d[1] = 0.474473f;
    data->d[2] = -1.900111f;
    data->d[3] = -1.207729f;
    data->d[4] = 0.000000f;
    data->d[5] = -0.531904f;
    data->d[6] = -1.398978f;
    data->d[7] = 1.227438f;
    data->d[8] = -0.984195f;
    data->d[9] = 0.463771f;
    data->d[10] = -0.294018f;
    data->d[11] = -1.048478f;
    data->d[12] = 4.348556f;
    data->d[13] = 0.732036f;
    data->d[14] = -0.003082f;
    data->d[15] = -4032.909912f;
    data->d[16] = -1.045401f;
    data->d[17] = -0.112801f;
    data->d[18] = 0.112801f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.057397f;
    data->d[1] = 0.227292f;
    data->d[2] = -0.462146f;
    data->d[3] = -0.048652f;
    data->d[4] = 0.000004f;
    data->d[5] = -1.034169f;
    data->d[6] = -0.499140f;
    data->d[7] = -0.761702f;
    data->d[8] = -16.702698f;
    data->d[9] = 1.381461f;
    data->d[10] = -3.565070f;
    data->d[11] = -0.962436f;
    data->d[12] = -0.956300f;
    data->d[13] = -1.593915f;
    data->d[14] = 0.770886f;
    data->d[15] = 1.072523f;
    data->d[16] = -1.824348f;
    data->d[17] = 1.264763f;
    data->d[18] = -1.382907f;
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
    data->d[0] = 0.227665f;
    data->d[1] = 1.070212f;
    data->d[2] = -3.045459f;
    data->d[3] = -0.788054f;
    data->d[4] = 0.000000f;
    data->d[5] = -1.821282f;
    data->d[6] = 1.134614f;
    data->d[7] = -0.633970f;
    data->d[8] = -0.281286f;
    data->d[9] = -1.964496f;
    data->d[10] = 0.001358f;
    data->d[11] = 1610.144531f;
    data->d[12] = 0.066987f;
    data->d[13] = -2.627956f;
    data->d[14] = -0.397707f;
    data->d[15] = -0.431289f;
    data->d[16] = -2.146774f;
    data->d[17] = -0.101290f;
    data->d[18] = 0.624889f;
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
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 1, 21);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 1, 18);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 27);
    instructions->SetOperation(14, 0, 1);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 1, 27);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 530;
    state.m_evolution = 9;
    state.m_index = 11;
    state.m_copy_index = 23;
    state.m_id = 23;
    state.m_test = 13;
    state.m_seed = 9027979439900353274;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000673f;
    state.m_optimizeValid = true;
} // LoadState
