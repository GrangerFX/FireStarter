#pragma once
#include "FireStarterState.h"

// Run date: 02/17/25 09:25:40 Pacific Standard Time
// Run duration = 36.381121 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00059932
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00059932
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.24605441f;
    data->d[1] = 0.36688647f;
    data->d[2] = 0.14366542f;
    data->d[3] = -0.23657240f;
    data->d[4] = -0.55895638f;
    data->d[5] = 0.61956209f;
    data->d[6] = -0.14617626f;
    data->d[7] = 6.37946987f;
    data->d[8] = 1.21621525f;
    data->d[9] = 1.12667429f;
    data->d[10] = -0.76324391f;
    data->d[11] = 0.62959594f;
    data->d[12] = -1.68748045f;
    data->d[13] = 0.18657863f;
    data->d[14] = -1.25890100f;
    data->d[15] = 0.72304946f;
    data->d[16] = -0.08421469f;
    data->d[17] = -2.16185665f;
    data->d[18] = -7.72396898f;
    data->d[19] = 4.09419584f;
    data->d[20] = 5.72994184f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.00059932f;
} // LoadVariation0

// Variation: 1  result = 0.00059932
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.24605441f;
    data->d[1] = 0.36688647f;
    data->d[2] = 0.14366542f;
    data->d[3] = -0.23657240f;
    data->d[4] = -0.55895638f;
    data->d[5] = 0.61956209f;
    data->d[6] = -0.14617626f;
    data->d[7] = 6.37946987f;
    data->d[8] = 1.21621525f;
    data->d[9] = 1.12667429f;
    data->d[10] = -0.76324391f;
    data->d[11] = 0.62959594f;
    data->d[12] = -1.68748045f;
    data->d[13] = 0.18657863f;
    data->d[14] = -1.25890100f;
    data->d[15] = 0.72304946f;
    data->d[16] = -0.08421469f;
    data->d[17] = -2.16185665f;
    data->d[18] = -7.72396898f;
    data->d[19] = 4.09419584f;
    data->d[20] = 5.72994184f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.00059932f;
} // LoadVariation1

// Variation: 2  result = 0.00059932
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.24605441f;
    data->d[1] = 0.36688647f;
    data->d[2] = 0.14366542f;
    data->d[3] = -0.23657240f;
    data->d[4] = -0.55895638f;
    data->d[5] = 0.61956209f;
    data->d[6] = -0.14617626f;
    data->d[7] = 6.37946987f;
    data->d[8] = 1.21621525f;
    data->d[9] = 1.12667429f;
    data->d[10] = -0.76324391f;
    data->d[11] = 0.62959594f;
    data->d[12] = -1.68748045f;
    data->d[13] = 0.18657863f;
    data->d[14] = -1.25890100f;
    data->d[15] = 0.72304946f;
    data->d[16] = -0.08421469f;
    data->d[17] = -2.16185665f;
    data->d[18] = -7.72396898f;
    data->d[19] = 4.09419584f;
    data->d[20] = 5.72994184f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.00059932f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.00059932f;
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 1);
    code->SetOperation(3, (FireStarterOpcode)0, 2);
    code->SetOperation(4, (FireStarterOpcode)1, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 3);
    code->SetOperation(6, (FireStarterOpcode)1, 4);
    code->SetOperation(7, (FireStarterOpcode)0, 5);
    code->SetOperation(8, (FireStarterOpcode)0, 6);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 3);
    code->SetOperation(13, (FireStarterOpcode)1, 10);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)1, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 0);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)1, 2);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 12);
    code->SetOperation(22, (FireStarterOpcode)0, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 10);
    code->SetOperation(24, (FireStarterOpcode)1, 17);
    code->SetOperation(25, (FireStarterOpcode)1, 18);
    code->SetOperation(26, (FireStarterOpcode)0, 10);
    code->SetOperation(27, (FireStarterOpcode)0, 5);
    code->SetOperation(28, (FireStarterOpcode)1, 19);
    code->SetOperation(29, (FireStarterOpcode)0, 16);
    code->SetOperation(30, (FireStarterOpcode)0, 20);
    code->SetOperation(31, (FireStarterOpcode)0, 17);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 4;
    state.m_copy_index = 4;
    state.m_id = 4;
    state.m_test = 0;
    state.m_seed = 13088278370124699628;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00059932f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
