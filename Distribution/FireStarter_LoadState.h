#pragma once
#include "FireStarterState.h"

// Run date: 03/06/24 20:20:17 Pacific Standard Time
// Run duration = 1261.927352 seconds
// Run generation = 95
// Run evolution = 16
// Run max result = 0.00000013
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
    settings.m_evolveSeed = 2;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.946593f;
    data->d[2] = -0.021477f;
    data->d[3] = -2.747467f;
    data->d[4] = -0.492804f;
    data->d[5] = -1.821531f;
    data->d[6] = 0.325192f;
    data->d[7] = 1.057849f;
    data->d[8] = -1.335697f;
    data->d[9] = -0.368402f;
    data->d[10] = -3.298267f;
    data->d[11] = -1.072101f;
    data->d[12] = -6.081745f;
    data->d[13] = -2.437928f;
    data->d[14] = -0.073469f;
    data->d[15] = -0.674766f;
    data->d[16] = 0.000389f;
    data->d[17] = -1.237883f;
    data->d[18] = -0.329574f;
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
    data->d[0] = -3.090658f;
    data->d[1] = 0.033092f;
    data->d[2] = -0.280560f;
    data->d[3] = -2.088821f;
    data->d[4] = 1.726671f;
    data->d[5] = -0.984456f;
    data->d[6] = -0.651960f;
    data->d[7] = -0.538461f;
    data->d[8] = -0.460347f;
    data->d[9] = 2.287828f;
    data->d[10] = 202.996582f;
    data->d[11] = 0.852711f;
    data->d[12] = -0.673371f;
    data->d[13] = 0.218985f;
    data->d[14] = 3.497771f;
    data->d[15] = -0.000451f;
    data->d[16] = -19.024019f;
    data->d[17] = -3.190119f;
    data->d[18] = 1.084527f;
    data->d[19] = -0.118132f;
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

// Variation: 2  result = 0.00000013
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.479761f;
    data->d[2] = -2.061202f;
    data->d[3] = 0.029375f;
    data->d[4] = -0.548812f;
    data->d[5] = -0.882969f;
    data->d[6] = 2.300082f;
    data->d[7] = -0.450934f;
    data->d[8] = 0.183400f;
    data->d[9] = 0.839022f;
    data->d[10] = -5.159574f;
    data->d[11] = -12.676852f;
    data->d[12] = 7.084163f;
    data->d[13] = 0.000292f;
    data->d[14] = -0.614102f;
    data->d[15] = -1.486720f;
    data->d[16] = 0.449763f;
    data->d[17] = 1.760419f;
    data->d[18] = -1.790820f;
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
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 25);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 2);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 1, 11);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 0, 26);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 0, 6);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 95;
    state.m_evolution = 16;
    state.m_children0 = 95;
    state.m_children1 = 16;
    state.m_index = 15;
    state.m_copy_index = 15;
    state.m_id = 15;
    state.m_test = 0;
    state.m_seed = 9152644705952619042;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 95.000000f;
    state.m_optimizeValid = true;
} // LoadState
