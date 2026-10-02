#pragma once
#include "FireStarterState.h"

// Run date: 01/09/24 16:49:06 Pacific Standard Time
// Run duration = 4907.810074 seconds
// Run generation = 30
// Run evolution = 6
// Run max result = 0.00000024
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
// Run tests = 4
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
    settings.m_tests = 4;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.195461f;
    data->d[1] = -0.614060f;
    data->d[2] = 6.031035f;
    data->d[3] = 0.124481f;
    data->d[4] = 0.669770f;
    data->d[5] = -1.913836f;
    data->d[6] = -0.905198f;
    data->d[7] = -2.658651f;
    data->d[8] = 1.380788f;
    data->d[9] = -1.310940f;
    data->d[10] = 0.496304f;
    data->d[11] = 3.946775f;
    data->d[12] = -0.732133f;
    data->d[13] = -0.022614f;
    data->d[14] = -6265.397461f;
    data->d[15] = 3.810980f;
    data->d[16] = -0.047915f;
    data->d[17] = 1.828685f;
    data->d[18] = -0.000000f;
    data->d[19] = -0.580371f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.438947f;
    data->d[1] = -1.356636f;
    data->d[2] = 2.013391f;
    data->d[3] = 0.170598f;
    data->d[4] = -1.562268f;
    data->d[5] = 0.914796f;
    data->d[6] = 1.970000f;
    data->d[7] = -0.254236f;
    data->d[8] = -0.675021f;
    data->d[9] = 0.129558f;
    data->d[10] = 0.082506f;
    data->d[11] = -1.658098f;
    data->d[12] = -0.666179f;
    data->d[13] = -4.328751f;
    data->d[14] = -7667.820312f;
    data->d[15] = 5.206684f;
    data->d[16] = -0.000605f;
    data->d[17] = 0.140048f;
    data->d[18] = -0.106076f;
    data->d[19] = 1.113654f;
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

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.183739f;
    data->d[1] = -0.481028f;
    data->d[2] = 1.495935f;
    data->d[3] = 1.203660f;
    data->d[4] = 2.776928f;
    data->d[5] = -1.808529f;
    data->d[6] = 0.325108f;
    data->d[7] = 0.004520f;
    data->d[8] = -0.267821f;
    data->d[9] = 0.209254f;
    data->d[10] = 1.808211f;
    data->d[11] = 0.766444f;
    data->d[12] = 0.323264f;
    data->d[13] = -0.000008f;
    data->d[14] = -3278.899658f;
    data->d[15] = -3.233023f;
    data->d[16] = 0.958334f;
    data->d[17] = -7.925913f;
    data->d[18] = -0.259716f;
    data->d[19] = -2.016047f;
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
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 23);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 1, 17);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 1, 17);
    instructions->SetOperation(9, 0, 24);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 0, 18);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 1, 22);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 0);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 26);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 1, 3);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 0, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 30;
    state.m_evolution = 6;
    state.m_children = 42;
    state.m_index = 11;
    state.m_copy_index = 293;
    state.m_id = 152;
    state.m_test = 2;
    state.m_seed = 10049323901974297743;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveResult = 0.000009f;
    state.m_optimizeValid = true;
} // LoadState
