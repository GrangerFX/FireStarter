#pragma once
#include "FireStarterState.h"

// Run date: 05/10/25 14:58:18 Pacific Daylight Time
// Run duration = 62.495655 seconds
// Run test = 0
// Run generation = 77
// Run evolution = 0
// Run precision  = 0.00010094
// Run max result = 0.00018931
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
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 384
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 65536;
    settings.m_generations = 0;
    settings.m_passes = 384;
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
    *(result->MaxResult()) = 0.00018931f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = 0.24078590f;
    data->d[1] = -0.68246591f;
    data->d[2] = -2.28684306f;
    data->d[3] = -0.78963876f;
    data->d[4] = 2.23126340f;
    data->d[5] = -0.19029738f;
    data->d[6] = 0.16955319f;
    data->d[7] = 1.77138805f;
    data->d[8] = 0.62277019f;
    data->d[9] = 0.09919789f;
    data->d[10] = 0.71437943f;
    data->d[11] = -2.64752316f;
    data->d[12] = 1.93923891f;
    data->d[13] = 2.62783217f;
    data->d[14] = 3.75937009f;
    data->d[15] = -0.13079774f;
    data->d[16] = 1.16202915f;
    data->d[17] = -1.73692346f;
    data->d[18] = 0.25975272f;
    data->d[19] = -0.19544773f;
    data->d[20] = 1.19704580f;
    data->d[21] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00004695f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -0.41656381f;
    data->d[1] = 1.24083424f;
    data->d[2] = -0.07877468f;
    data->d[3] = -1.92153704f;
    data->d[4] = 0.33466911f;
    data->d[5] = 2.14148664f;
    data->d[6] = -2.03898740f;
    data->d[7] = -0.86149311f;
    data->d[8] = -0.49726796f;
    data->d[9] = 3.17404389f;
    data->d[10] = -1.39077389f;
    data->d[11] = 1.12334812f;
    data->d[12] = 2.08585048f;
    data->d[13] = 2.20920229f;
    data->d[14] = -3.61005759f;
    data->d[15] = -0.21865179f;
    data->d[16] = 6.05091572f;
    data->d[17] = 1.05070829f;
    data->d[18] = -2.77641201f;
    data->d[19] = -0.00737724f;
    data->d[20] = -0.36976439f;
    data->d[21] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00004921f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = 0.44158202f;
    data->d[1] = -2.27321672f;
    data->d[2] = -0.55133092f;
    data->d[3] = 1.01733553f;
    data->d[4] = 0.21662654f;
    data->d[5] = 0.52892792f;
    data->d[6] = 3.58863449f;
    data->d[7] = -0.83497673f;
    data->d[8] = 0.29656783f;
    data->d[9] = -9.61696339f;
    data->d[10] = -0.61112106f;
    data->d[11] = 0.49364245f;
    data->d[12] = -1.17393041f;
    data->d[13] = -1.35954678f;
    data->d[14] = -4.01572514f;
    data->d[15] = 1.38417327f;
    data->d[16] = 1.07365179f;
    data->d[17] = 3.16546488f;
    data->d[18] = -1.27599037f;
    data->d[19] = -0.51026237f;
    data->d[20] = -0.23964080f;
    data->d[21] = 0.00000000f;
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
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)1, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 5);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 3);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 5);
    code->SetOperation(14, (FireStarterOpcode)1, 11);
    code->SetOperation(15, (FireStarterOpcode)1, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 10);
    code->SetOperation(17, (FireStarterOpcode)1, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)1, 16);
    code->SetOperation(21, (FireStarterOpcode)0, 4);
    code->SetOperation(22, (FireStarterOpcode)1, 17);
    code->SetOperation(23, (FireStarterOpcode)0, 7);
    code->SetOperation(24, (FireStarterOpcode)0, 18);
    code->SetOperation(25, (FireStarterOpcode)0, 10);
    code->SetOperation(26, (FireStarterOpcode)0, 17);
    code->SetOperation(27, (FireStarterOpcode)0, 11);
    code->SetOperation(28, (FireStarterOpcode)1, 19);
    code->SetOperation(29, (FireStarterOpcode)0, 20);
    code->SetOperation(30, (FireStarterOpcode)1, 8);
    code->SetOperation(31, (FireStarterOpcode)0, 15);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 77;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 13330552788182526647;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00018931f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
