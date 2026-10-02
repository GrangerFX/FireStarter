#pragma once
#include "FireStarterState.h"

// Run date: 01/14/24 20:09:10 Pacific Standard Time
// Run duration = 2992.706389 seconds
// Run generation = 12
// Run evolution = 4
// Run max result = 0.00000084
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

// Variation: 0  result = 0.00000084
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.197288f;
    data->d[1] = -1.324046f;
    data->d[2] = 1.641286f;
    data->d[3] = -0.803668f;
    data->d[4] = -2.474594f;
    data->d[5] = 3.132732f;
    data->d[6] = 1.409250f;
    data->d[7] = -0.012354f;
    data->d[8] = -0.606155f;
    data->d[9] = 0.181864f;
    data->d[10] = 0.798173f;
    data->d[11] = -0.000040f;
    data->d[12] = -0.095961f;
    data->d[13] = 0.052906f;
    data->d[14] = -1.732102f;
    data->d[15] = 1.168647f;
    data->d[16] = -0.252111f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.287195f;
    data->d[1] = 0.246065f;
    data->d[2] = 1.957822f;
    data->d[3] = -1.287865f;
    data->d[4] = 0.710756f;
    data->d[5] = 0.299252f;
    data->d[6] = 1.908240f;
    data->d[7] = 1.213689f;
    data->d[8] = -0.574045f;
    data->d[9] = -0.513200f;
    data->d[10] = 0.000000f;
    data->d[11] = 21.741440f;
    data->d[12] = 1.639902f;
    data->d[13] = 0.696528f;
    data->d[14] = -2.154090f;
    data->d[15] = -1.881880f;
    data->d[16] = 1.914831f;
    data->d[17] = 1.815708f;
    data->d[18] = -0.118151f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.361907f;
    data->d[1] = 0.786616f;
    data->d[2] = 1.490593f;
    data->d[3] = -0.859568f;
    data->d[4] = -0.843853f;
    data->d[5] = -2.152071f;
    data->d[6] = -0.656362f;
    data->d[7] = -0.219870f;
    data->d[8] = -0.743290f;
    data->d[9] = -6.271942f;
    data->d[10] = -0.000063f;
    data->d[11] = -26.001547f;
    data->d[12] = 0.264157f;
    data->d[13] = 0.000738f;
    data->d[14] = -0.688610f;
    data->d[15] = -0.811354f;
    data->d[16] = 0.754480f;
    data->d[17] = -0.130628f;
    data->d[18] = 0.523600f;
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
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 18);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 21);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 12);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 1, 22);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 0, 16);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 12;
    state.m_evolution = 4;
    state.m_children0 = 176;
    state.m_children1 = 176;
    state.m_index = 55;
    state.m_copy_index = 57;
    state.m_id = 57;
    state.m_test = 3;
    state.m_seed = 4600921964437749621;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000005f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000014f;
    state.m_optimizeValid = true;
} // LoadState
