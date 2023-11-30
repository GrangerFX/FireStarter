#pragma once
#include "FireStarterState.h"

// Run date: 11/29/23 14:47:23 Pacific Standard Time
// Run duration = 5766.828438 seconds
// Run generation = 99
// Run evolution = 12
// Run max result = 0.00000513
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000149
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.291240f;
    data->d[1] = -0.648112f;
    data->d[2] = 0.263853f;
    data->d[3] = -0.401188f;
    data->d[4] = 2.305366f;
    data->d[5] = -0.226902f;
    data->d[6] = 0.075331f;
    data->d[7] = 0.929729f;
    data->d[8] = -1.089810f;
    data->d[9] = -0.432741f;
    data->d[10] = 0.888724f;
    data->d[11] = 5.942513f;
    data->d[12] = -0.778863f;
    data->d[13] = -2.174495f;
    data->d[14] = -0.253086f;
    data->d[15] = -0.866279f;
    data->d[16] = -0.460167f;
    data->d[17] = -1.150910f;
    data->d[18] = -0.701267f;
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

// Variation: 1  result = 0.00000513
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.097895f;
    data->d[1] = 1.031611f;
    data->d[2] = -0.870156f;
    data->d[3] = 5.085388f;
    data->d[4] = -0.710476f;
    data->d[5] = 0.455145f;
    data->d[6] = 1.731993f;
    data->d[7] = -0.242112f;
    data->d[8] = -1.608773f;
    data->d[9] = -0.094419f;
    data->d[10] = 6.738622f;
    data->d[11] = -0.150826f;
    data->d[12] = -1.074009f;
    data->d[13] = -0.346661f;
    data->d[14] = 0.881865f;
    data->d[15] = -1.047934f;
    data->d[16] = -1.131104f;
    data->d[17] = 5.019400f;
    data->d[18] = 0.023954f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000209
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.451332f;
    data->d[1] = -3.141876f;
    data->d[2] = 0.537197f;
    data->d[3] = 1.614423f;
    data->d[4] = -1.595725f;
    data->d[5] = 1.323542f;
    data->d[6] = 1.443846f;
    data->d[7] = -0.174631f;
    data->d[8] = -1.897908f;
    data->d[9] = -0.117928f;
    data->d[10] = 2.145840f;
    data->d[11] = 0.900740f;
    data->d[12] = 0.183005f;
    data->d[13] = 0.781657f;
    data->d[14] = 0.039064f;
    data->d[15] = 0.720238f;
    data->d[16] = 0.638892f;
    data->d[17] = 0.832845f;
    data->d[18] = -1.484965f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 1, 24);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 1, 24);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 0, 2);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 25);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 0, 15);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 1, 23);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 1, 21);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 1, 20);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 0, 20);
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
    state.m_generation = 99;
    state.m_evolution = 12;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 23;
    state.m_copy_id = 19;
    state.m_test = 15;
    state.m_seed = 6178785344238121614;
    state.m_maxResult = 0.000005f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
