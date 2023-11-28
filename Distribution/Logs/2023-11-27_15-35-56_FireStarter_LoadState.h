#pragma once
#include "FireStarterState.h"

// Run date: 11/27/23 15:35:56 Pacific Standard Time
// Run duration = 3670.416646 seconds
// Run generation = 21
// Run evolution = 11
// Run max result = 0.00000006
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.809623f;
    data->d[1] = -2.554697f;
    data->d[2] = -0.820053f;
    data->d[3] = -0.855826f;
    data->d[4] = -2.184367f;
    data->d[5] = -0.017158f;
    data->d[6] = 1.259703f;
    data->d[7] = 0.194142f;
    data->d[8] = -0.596507f;
    data->d[9] = -1.028698f;
    data->d[10] = 1.727004f;
    data->d[11] = -0.049018f;
    data->d[12] = -1.125394f;
    data->d[13] = 0.335875f;
    data->d[14] = 1.413828f;
    data->d[15] = -0.011769f;
    data->d[16] = -3.210955f;
    data->d[17] = -0.037103f;
    data->d[18] = 0.033147f;
    data->d[19] = 0.299741f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.776400f;
    data->d[1] = 0.235344f;
    data->d[2] = 0.456731f;
    data->d[3] = -0.532061f;
    data->d[4] = 0.994910f;
    data->d[5] = 1.384285f;
    data->d[6] = -0.960947f;
    data->d[7] = 1.326789f;
    data->d[8] = -0.667051f;
    data->d[9] = -1.030868f;
    data->d[10] = 0.799860f;
    data->d[11] = -1.981085f;
    data->d[12] = 0.114622f;
    data->d[13] = -0.324460f;
    data->d[14] = 1.297586f;
    data->d[15] = 0.002633f;
    data->d[16] = 16.121414f;
    data->d[17] = 0.502363f;
    data->d[18] = 0.189064f;
    data->d[19] = 1.168434f;
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

// Variation: 2  result = 0.00000006
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.867891f;
    data->d[1] = -2.549788f;
    data->d[2] = -1.922334f;
    data->d[3] = -1.085993f;
    data->d[4] = 0.098603f;
    data->d[5] = -0.481754f;
    data->d[6] = -1.213872f;
    data->d[7] = 1.096045f;
    data->d[8] = -0.779333f;
    data->d[9] = -1.048687f;
    data->d[10] = 0.604017f;
    data->d[11] = -0.762615f;
    data->d[12] = -0.510938f;
    data->d[13] = -0.627105f;
    data->d[14] = -1.824755f;
    data->d[15] = 0.015427f;
    data->d[16] = -1.844582f;
    data->d[17] = -0.213855f;
    data->d[18] = 0.559029f;
    data->d[19] = 0.215768f;
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
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 22);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 6);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 0, 12);
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
    state.m_generation = 21;
    state.m_evolution = 11;
    state.m_index = 0;
    state.m_copy_index = 5;
    state.m_id = 52;
    state.m_copy_id = 44;
    state.m_test = 0;
    state.m_seed = 6617103061482953139;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
