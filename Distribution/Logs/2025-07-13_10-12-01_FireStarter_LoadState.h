#pragma once
#include "FireStarterState.h"

// Run date: 07/13/25 10:12:01 Pacific Daylight Time
// Run duration = 2012.120689 seconds
// Run test = 5
// Run generation = 13
// Run evolution = 1
// Run precision  = 0.00004625
// Run max result = 0.00000191
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
    *(result->MaxResult()) = 0.00000006f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = -1.19302881f;
    data->d[1] = -1.02244496f;
    data->d[2] = -0.92611879f;
    data->d[3] = -2.50172067f;
    data->d[4] = -2.20674539f;
    data->d[5] = -0.31466189f;
    data->d[6] = -0.01019178f;
    data->d[7] = 0.30354303f;
    data->d[8] = -0.28423423f;
    data->d[9] = -2.32375026f;
    data->d[10] = -0.10931446f;
    data->d[11] = 9.62587452f;
    data->d[12] = 9.35379696f;
    data->d[13] = 2.60486531f;
    data->d[14] = -0.00123481f;
    data->d[15] = 0.68018818f;
    data->d[16] = -1.49655354f;
    data->d[17] = 0.66273290f;
    data->d[18] = 2.41352129f;
    data->d[19] = 0.00000004f;
    data->d[20] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00000072f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = 5.45857906f;
    data->d[1] = -1.18585920f;
    data->d[2] = -7.36337900f;
    data->d[3] = -0.21598336f;
    data->d[4] = -1.90780747f;
    data->d[5] = -0.70570141f;
    data->d[6] = 0.65247864f;
    data->d[7] = -1.28875518f;
    data->d[8] = -1.71703160f;
    data->d[9] = -0.63250017f;
    data->d[10] = 0.86041415f;
    data->d[11] = -1.08956206f;
    data->d[12] = 2.42997026f;
    data->d[13] = -0.00614149f;
    data->d[14] = -12.79719067f;
    data->d[15] = -0.43334132f;
    data->d[16] = -0.61668223f;
    data->d[17] = 0.11188735f;
    data->d[18] = -5.62388754f;
    data->d[19] = -0.11813189f;
    data->d[20] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00000191f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -0.89722127f;
    data->d[1] = -1.19847894f;
    data->d[2] = -0.52229387f;
    data->d[3] = 0.17091034f;
    data->d[4] = -0.33034882f;
    data->d[5] = 2.71079659f;
    data->d[6] = -3.00159693f;
    data->d[7] = 0.35038146f;
    data->d[8] = -0.84619105f;
    data->d[9] = -0.25694889f;
    data->d[10] = 0.10990706f;
    data->d[11] = -16.19674301f;
    data->d[12] = -7.55524683f;
    data->d[13] = -0.08429299f;
    data->d[14] = 0.00135241f;
    data->d[15] = 1.58247685f;
    data->d[16] = -0.88049138f;
    data->d[17] = 3.45857358f;
    data->d[18] = -0.86729401f;
    data->d[19] = 0.52359849f;
    data->d[20] = 0.00000000f;
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
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 5);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)1, 12);
    code->SetOperation(14, (FireStarterOpcode)0, 6);
    code->SetOperation(15, (FireStarterOpcode)0, 10);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)0, 5);
    code->SetOperation(18, (FireStarterOpcode)0, 12);
    code->SetOperation(19, (FireStarterOpcode)0, 5);
    code->SetOperation(20, (FireStarterOpcode)0, 14);
    code->SetOperation(21, (FireStarterOpcode)1, 15);
    code->SetOperation(22, (FireStarterOpcode)1, 7);
    code->SetOperation(23, (FireStarterOpcode)0, 16);
    code->SetOperation(24, (FireStarterOpcode)0, 7);
    code->SetOperation(25, (FireStarterOpcode)0, 3);
    code->SetOperation(26, (FireStarterOpcode)1, 3);
    code->SetOperation(27, (FireStarterOpcode)0, 17);
    code->SetOperation(28, (FireStarterOpcode)1, 12);
    code->SetOperation(29, (FireStarterOpcode)0, 8);
    code->SetOperation(30, (FireStarterOpcode)0, 18);
    code->SetOperation(31, (FireStarterOpcode)1, 19);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 13;
    state.m_evolution = 1;
    state.m_index = 15;
    state.m_evolveIndex = 7;
    state.m_id = 7;
    state.m_test = 5;
    state.m_seed = 3790222706142336121;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000191f;
    state.m_oldResult = 0.00003171f;
    state.m_evolveWeight = 0.000381f;
    state.m_optimizeValid = true;
} // LoadState
