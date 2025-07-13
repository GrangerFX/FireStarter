#pragma once
#include "FireStarterState.h"

// Run date: 07/13/25 11:39:34 Pacific Daylight Time
// Run duration = 1488.777071 seconds
// Run test = 3
// Run generation = 46
// Run evolution = 5
// Run precision  = 0.00000639
// Run max result = 0.00000203
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 262144
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 262144;
    settings.m_generations = 0;
    settings.m_passes = 512;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000048f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = -4.59228945f;
    data->d[1] = 1.45069706f;
    data->d[2] = -0.00000078f;
    data->d[3] = 0.00000100f;
    data->d[4] = -2.13161111f;
    data->d[5] = -2.41656351f;
    data->d[6] = 2.54041433f;
    data->d[7] = 0.09134289f;
    data->d[8] = -0.65040010f;
    data->d[9] = -1.45341277f;
    data->d[10] = -1.01529789f;
    data->d[11] = 0.09798722f;
    data->d[12] = 0.09648389f;
    data->d[13] = -2.38239789f;
    data->d[14] = 0.00581278f;
    data->d[15] = 32.51976776f;
    data->d[16] = -0.97067928f;
    data->d[17] = -2.66170597f;
    data->d[18] = 0.36907226f;
    data->d[19] = -0.47482273f;
    data->d[20] = 5.65672112f;
    data->d[21] = 2.18660975f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation0

// Variation: 1
inline void LoadVariation1(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000036f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = -1.40979207f;
    data->d[1] = -1.68086565f;
    data->d[2] = 0.11812901f;
    data->d[3] = -0.23625992f;
    data->d[4] = 5.53792667f;
    data->d[5] = -8.75257397f;
    data->d[6] = -0.18464082f;
    data->d[7] = 8.93733120f;
    data->d[8] = -1.04652619f;
    data->d[9] = -0.19534774f;
    data->d[10] = 2.01067019f;
    data->d[11] = 0.32787168f;
    data->d[12] = 0.15095319f;
    data->d[13] = -0.21917666f;
    data->d[14] = -21.11426163f;
    data->d[15] = 0.00374610f;
    data->d[16] = 0.92501354f;
    data->d[17] = 1.09379160f;
    data->d[18] = -0.84544343f;
    data->d[19] = -2.05454946f;
    data->d[20] = -2.11792874f;
    data->d[21] = 0.39423782f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation1

// Variation: 2
inline void LoadVariation2(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000203f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = 1.08735919f;
    data->d[1] = -3.70535302f;
    data->d[2] = -0.52359807f;
    data->d[3] = 1.04719651f;
    data->d[4] = 7.86344862f;
    data->d[5] = -1.21024716f;
    data->d[6] = 0.03974196f;
    data->d[7] = -1.17356694f;
    data->d[8] = 0.41296232f;
    data->d[9] = 1.09547484f;
    data->d[10] = 0.60917437f;
    data->d[11] = -2.31723976f;
    data->d[12] = 1.41384149f;
    data->d[13] = 5.88283730f;
    data->d[14] = -0.06496164f;
    data->d[15] = 2.24086285f;
    data->d[16] = 2.43909883f;
    data->d[17] = -0.75655609f;
    data->d[18] = 1.22381592f;
    data->d[19] = 0.44601327f;
    data->d[20] = -0.28702781f;
    data->d[21] = -0.35689023f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 2);
    code->SetOperation(5, (FireStarterOpcode)1, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 12);
    code->SetOperation(14, (FireStarterOpcode)0, 9);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 14);
    code->SetOperation(17, (FireStarterOpcode)0, 15);
    code->SetOperation(18, (FireStarterOpcode)1, 16);
    code->SetOperation(19, (FireStarterOpcode)0, 17);
    code->SetOperation(20, (FireStarterOpcode)0, 18);
    code->SetOperation(21, (FireStarterOpcode)0, 19);
    code->SetOperation(22, (FireStarterOpcode)1, 12);
    code->SetOperation(23, (FireStarterOpcode)0, 20);
    code->SetOperation(24, (FireStarterOpcode)1, 17);
    code->SetOperation(25, (FireStarterOpcode)1, 12);
    code->SetOperation(26, (FireStarterOpcode)1, 13);
    code->SetOperation(27, (FireStarterOpcode)0, 21);
    code->SetOperation(28, (FireStarterOpcode)0, 20);
    code->SetOperation(29, (FireStarterOpcode)0, 12);
    code->SetOperation(30, (FireStarterOpcode)0, 1);
    code->SetOperation(31, (FireStarterOpcode)1, 3);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 46;
    state.m_evolution = 5;
    state.m_index = 6;
    state.m_evolveIndex = 16;
    state.m_id = 16;
    state.m_test = 3;
    state.m_seed = 484715840162771447;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000203f;
    state.m_oldResult = 0.00000310f;
    state.m_evolveWeight = 0.000019f;
    state.m_optimizeValid = true;
} // LoadState
