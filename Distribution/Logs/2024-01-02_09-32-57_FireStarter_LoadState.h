#pragma once
#include "FireStarterState.h"

// Run date: 01/02/24 09:32:57 Pacific Standard Time
// Run duration = 6994.403592 seconds
// Run generation = 13
// Run evolution = 10
// Run max result = 0.00000012
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.806191f;
    data->d[1] = -2.335401f;
    data->d[2] = 1.288430f;
    data->d[3] = -0.079987f;
    data->d[4] = 1.830403f;
    data->d[5] = -1.830402f;
    data->d[6] = 0.832459f;
    data->d[7] = -1.054950f;
    data->d[8] = -0.283172f;
    data->d[9] = -0.011542f;
    data->d[10] = 1.955817f;
    data->d[11] = 1.425863f;
    data->d[12] = -1.517915f;
    data->d[13] = 0.340781f;
    data->d[14] = -3.276080f;
    data->d[15] = 0.808918f;
    data->d[16] = -0.191716f;
    data->d[17] = 0.150071f;
    data->d[18] = -2.564556f;
    data->d[19] = -0.086093f;
    data->d[20] = 0.012308f;
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
    data->d[0] = -0.668818f;
    data->d[1] = -2.421843f;
    data->d[2] = 0.076944f;
    data->d[3] = -0.607285f;
    data->d[4] = 1.358954f;
    data->d[5] = -1.358954f;
    data->d[6] = 2.885902f;
    data->d[7] = -1.056725f;
    data->d[8] = -1.010850f;
    data->d[9] = -1.122501f;
    data->d[10] = 0.406414f;
    data->d[11] = 2.044553f;
    data->d[12] = -1.271239f;
    data->d[13] = 0.794652f;
    data->d[14] = 3.191431f;
    data->d[15] = -1.126678f;
    data->d[16] = 3.169182f;
    data->d[17] = 0.250970f;
    data->d[18] = -0.209024f;
    data->d[19] = 0.446869f;
    data->d[20] = -0.398752f;
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
    data->d[0] = 0.168275f;
    data->d[1] = -2.786268f;
    data->d[2] = -0.256713f;
    data->d[3] = 0.980345f;
    data->d[4] = 1.657634f;
    data->d[5] = -1.657634f;
    data->d[6] = -0.173278f;
    data->d[7] = -1.132511f;
    data->d[8] = 1.927010f;
    data->d[9] = 1.531520f;
    data->d[10] = 3.734098f;
    data->d[11] = -5.339600f;
    data->d[12] = -0.000233f;
    data->d[13] = 1.488546f;
    data->d[14] = 0.663022f;
    data->d[15] = -0.815812f;
    data->d[16] = 0.145664f;
    data->d[17] = 0.870236f;
    data->d[18] = -1.480019f;
    data->d[19] = 0.185206f;
    data->d[20] = 0.526004f;
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
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 1, 9);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 17);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 21);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 23);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 1, 0);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 1, 15);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 5);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 1, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 13;
    state.m_evolution = 10;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 2;
    state.m_id = 77;
    state.m_test = 5;
    state.m_seed = 3744352632270111611;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
