#pragma once
#include "FireStarterState.h"

// Run date: 06/16/24 23:21:28 Pacific Daylight Time
// Run duration = 5343.753046 seconds
// Run generation = 394
// Run evolution = 9
// Run max result = 0.00000040
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
    data->d[0] = 0.741075f;
    data->d[1] = -2.328155f;
    data->d[2] = -0.500000f;
    data->d[3] = 0.700766f;
    data->d[4] = 0.864003f;
    data->d[5] = -0.074766f;
    data->d[6] = 0.058840f;
    data->d[7] = 1.339090f;
    data->d[8] = -0.016279f;
    data->d[9] = -4.778575f;
    data->d[10] = 0.643737f;
    data->d[11] = 2.822731f;
    data->d[12] = -0.886578f;
    data->d[13] = 1.010122f;
    data->d[14] = 1.890314f;
    data->d[15] = 1.053143f;
    data->d[16] = -1.187923f;
    data->d[17] = 1.775436f;
    data->d[18] = -0.196866f;
    data->d[19] = -0.119863f;
    data->d[20] = -0.077399f;
    data->d[21] = -1.271257f;
    data->d[22] = -0.250772f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.761899f;
    data->d[1] = 2.354774f;
    data->d[2] = -0.500004f;
    data->d[3] = -0.575853f;
    data->d[4] = 3.297667f;
    data->d[5] = 2.977586f;
    data->d[6] = 0.556841f;
    data->d[7] = 1.961359f;
    data->d[8] = -1.236712f;
    data->d[9] = -0.003287f;
    data->d[10] = -1.644307f;
    data->d[11] = 1.022908f;
    data->d[12] = 1.415978f;
    data->d[13] = 0.873931f;
    data->d[14] = -1.013949f;
    data->d[15] = -0.473107f;
    data->d[16] = 0.074422f;
    data->d[17] = 0.525634f;
    data->d[18] = 2.052199f;
    data->d[19] = -0.835209f;
    data->d[20] = 2.687594f;
    data->d[21] = 0.580696f;
    data->d[22] = -1.193812f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000040
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.714731f;
    data->d[1] = 1.871160f;
    data->d[2] = -0.500000f;
    data->d[3] = 1.149136f;
    data->d[4] = -0.684104f;
    data->d[5] = 3.973527f;
    data->d[6] = -0.662931f;
    data->d[7] = -4.985754f;
    data->d[8] = -0.045291f;
    data->d[9] = 0.307039f;
    data->d[10] = 0.291463f;
    data->d[11] = -2.033913f;
    data->d[12] = 3.463672f;
    data->d[13] = 2.346212f;
    data->d[14] = -0.220209f;
    data->d[15] = 0.345126f;
    data->d[16] = -0.383185f;
    data->d[17] = -1.532011f;
    data->d[18] = -1.466264f;
    data->d[19] = 2.163828f;
    data->d[20] = 0.113382f;
    data->d[21] = -0.656676f;
    data->d[22] = 2.018988f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 0, 11);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 7);
    instructions->SetOperation(3, 1, 29);
    instructions->SetOperation(4, 1, 23);
    instructions->SetOperation(5, 0, 29);
    instructions->SetOperation(6, 1, 17);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 2);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 0, 29);
    instructions->SetOperation(12, 0, 28);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 1, 26);
    instructions->SetOperation(15, 1, 21);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 0, 29);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 394;
    state.m_evolution = 9;
    state.m_index = 14;
    state.m_copy_index = 8;
    state.m_id = 8;
    state.m_test = 7;
    state.m_seed = 10725203958103742058;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000653f;
    state.m_optimizeValid = true;
} // LoadState
