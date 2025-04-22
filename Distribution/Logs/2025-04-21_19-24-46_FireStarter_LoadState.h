#pragma once
#include "FireStarterState.h"

// Run date: 04/21/25 19:24:46 Pacific Daylight Time
// Run duration = 4359.222730 seconds
// Run generation = 42
// Run evolution = 3
// Run max result = 0.00006986
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
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run population = 262144
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
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
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_population = 262144;
    settings.m_generations = 0;
    settings.m_passes = 512;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000948f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 3.17593360f;
    data->d[1] = -0.21026644f;
    data->d[2] = -0.05877337f;
    data->d[3] = 2.16848898f;
    data->d[4] = -2.11701822f;
    data->d[5] = 0.65464801f;
    data->d[6] = 0.50487339f;
    data->d[7] = 3.03032637f;
    data->d[8] = 2.29447031f;
    data->d[9] = -0.80462551f;
    data->d[10] = -0.22236592f;
    data->d[11] = -0.04660501f;
    data->d[12] = 0.39772686f;
    data->d[13] = 0.23483393f;
    data->d[14] = 0.66947705f;
    data->d[15] = -0.90607172f;
    data->d[16] = 1.81398702f;
    data->d[17] = -1.77938485f;
    data->d[18] = 0.28051448f;
    data->d[19] = -2.33970571f;
    data->d[20] = 5.77802944f;
    data->d[21] = 0.06066080f;
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
    *(result->MaxResult()) = 0.00006986f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -2.25656891f;
    data->d[1] = -0.58444214f;
    data->d[2] = 0.19109344f;
    data->d[3] = 0.86361188f;
    data->d[4] = -0.76991826f;
    data->d[5] = -0.01191572f;
    data->d[6] = -18.65992928f;
    data->d[7] = -1.48005366f;
    data->d[8] = 3.26983738f;
    data->d[9] = -0.04790688f;
    data->d[10] = 1.27106631f;
    data->d[11] = -0.35555688f;
    data->d[12] = 1.28706491f;
    data->d[13] = -0.36884627f;
    data->d[14] = 0.78316230f;
    data->d[15] = -0.31438199f;
    data->d[16] = 2.19031215f;
    data->d[17] = -1.78771031f;
    data->d[18] = 0.07406900f;
    data->d[19] = -1.54497480f;
    data->d[20] = 0.37819919f;
    data->d[21] = 0.53036803f;
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
    *(result->MaxResult()) = 0.00005967f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -1.91912794f;
    data->d[1] = 0.26439559f;
    data->d[2] = -0.57646573f;
    data->d[3] = 2.41917586f;
    data->d[4] = -0.50892210f;
    data->d[5] = 1.39208686f;
    data->d[6] = 2.85660648f;
    data->d[7] = -0.13320076f;
    data->d[8] = -0.29895383f;
    data->d[9] = -6.88456488f;
    data->d[10] = 3.98723364f;
    data->d[11] = -0.12771617f;
    data->d[12] = 2.52688098f;
    data->d[13] = 0.09500174f;
    data->d[14] = -2.00518298f;
    data->d[15] = -2.88594866f;
    data->d[16] = 6.61927891f;
    data->d[17] = -0.64588624f;
    data->d[18] = -18.08307266f;
    data->d[19] = 0.80512094f;
    data->d[20] = -0.08553965f;
    data->d[21] = 0.65261692f;
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
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 2);
    code->SetOperation(4, (FireStarterOpcode)1, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 2);
    code->SetOperation(7, (FireStarterOpcode)0, 5);
    code->SetOperation(8, (FireStarterOpcode)0, 6);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 3);
    code->SetOperation(13, (FireStarterOpcode)1, 10);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)1, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 2);
    code->SetOperation(17, (FireStarterOpcode)0, 1);
    code->SetOperation(18, (FireStarterOpcode)0, 13);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)1, 15);
    code->SetOperation(21, (FireStarterOpcode)1, 16);
    code->SetOperation(22, (FireStarterOpcode)1, 11);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 10);
    code->SetOperation(25, (FireStarterOpcode)0, 1);
    code->SetOperation(26, (FireStarterOpcode)1, 12);
    code->SetOperation(27, (FireStarterOpcode)0, 17);
    code->SetOperation(28, (FireStarterOpcode)1, 18);
    code->SetOperation(29, (FireStarterOpcode)0, 19);
    code->SetOperation(30, (FireStarterOpcode)0, 20);
    code->SetOperation(31, (FireStarterOpcode)0, 21);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 42;
    state.m_evolution = 3;
    state.m_index = 15;
    state.m_evolveIndex = 26;
    state.m_id = 26;
    state.m_test = 1;
    state.m_seed = 14933496135190608453;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00010318f;
    state.m_evolveWeight = 0.004230f;
    state.m_optimizeValid = true;
} // LoadState
