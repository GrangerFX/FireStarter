#pragma once
#include "FireStarterState.h"

// Run date: 01/05/24 19:19:28 Pacific Standard Time
// Run duration = 4596.906746 seconds
// Run generation = 8
// Run evolution = 5
// Run max result = 0.00000167
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

// Variation: 0  result = 0.00000030
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.721195f;
    data->d[1] = -1.252611f;
    data->d[2] = -0.386297f;
    data->d[3] = 0.782707f;
    data->d[4] = -0.362923f;
    data->d[5] = -1.388804f;
    data->d[6] = -0.888648f;
    data->d[7] = 0.142814f;
    data->d[8] = 0.436908f;
    data->d[9] = -0.184057f;
    data->d[10] = 1.383571f;
    data->d[11] = 2.476722f;
    data->d[12] = 1.725765f;
    data->d[13] = -2.537484f;
    data->d[14] = -0.362682f;
    data->d[15] = -1.674830f;
    data->d[16] = 0.575017f;
    data->d[17] = -0.566703f;
    data->d[18] = 1.530598f;
    data->d[19] = -3.467875f;
    data->d[20] = -0.619069f;
    data->d[21] = 0.782707f;
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
    data->d[0] = 0.690118f;
    data->d[1] = -0.291214f;
    data->d[2] = -0.234793f;
    data->d[3] = 0.864840f;
    data->d[4] = 0.713866f;
    data->d[5] = -0.629995f;
    data->d[6] = -1.386549f;
    data->d[7] = 0.281332f;
    data->d[8] = 0.551647f;
    data->d[9] = -0.186937f;
    data->d[10] = -97.577003f;
    data->d[11] = -1.621970f;
    data->d[12] = 1.736111f;
    data->d[13] = 1.681566f;
    data->d[14] = 1.327716f;
    data->d[15] = -1.425648f;
    data->d[16] = -1.460618f;
    data->d[17] = -1.355798f;
    data->d[18] = -0.821493f;
    data->d[19] = 1.752178f;
    data->d[20] = -0.660717f;
    data->d[21] = 0.746709f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000167
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.986807f;
    data->d[1] = 0.490258f;
    data->d[2] = 0.097727f;
    data->d[3] = -0.600772f;
    data->d[4] = 0.945176f;
    data->d[5] = 1.029106f;
    data->d[6] = 0.624612f;
    data->d[7] = -0.812458f;
    data->d[8] = 0.716551f;
    data->d[9] = -0.229209f;
    data->d[10] = -3.598013f;
    data->d[11] = -2.502983f;
    data->d[12] = 1.621797f;
    data->d[13] = 2.064204f;
    data->d[14] = -1.313690f;
    data->d[15] = 2.067887f;
    data->d[16] = 1.385142f;
    data->d[17] = 2.535456f;
    data->d[18] = 0.561359f;
    data->d[19] = -1.450246f;
    data->d[20] = -0.932206f;
    data->d[21] = -0.077173f;
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
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 4);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 1, 28);
    instructions->SetOperation(4, 1, 14);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 1, 26);
    instructions->SetOperation(9, 0, 24);
    instructions->SetOperation(10, 1, 3);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 24);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 1, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 8;
    state.m_evolution = 5;
    state.m_children = 4294967295;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 45;
    state.m_test = 3;
    state.m_seed = 2331583421327450113;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000012f;
    state.m_maxResult = 0.000002f;
    state.m_optimizeValid = true;
} // LoadState
