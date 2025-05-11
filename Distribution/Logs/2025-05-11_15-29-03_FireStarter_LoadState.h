#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 15:29:03 Pacific Daylight Time
// Run duration = 172.978755 seconds
// Run test = 0
// Run generation = 271
// Run evolution = 0
// Run precision  = 0.00004045
// Run max result = 0.00003430
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
    *(result->MaxResult()) = 0.00000116f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159513f;
    data->d[1] = 2.20711327f;
    data->d[2] = 1.36844885f;
    data->d[3] = 0.03654021f;
    data->d[4] = 1.24993169f;
    data->d[5] = -2.12527227f;
    data->d[6] = -0.15481125f;
    data->d[7] = 7.35492611f;
    data->d[8] = 6.27336264f;
    data->d[9] = -2.02707076f;
    data->d[10] = 1.33200097f;
    data->d[11] = -1.80072951f;
    data->d[12] = 2.67212105f;
    data->d[13] = 3.48507333f;
    data->d[14] = -0.00769936f;
    data->d[15] = -0.31442907f;
    data->d[16] = -2.94752026f;
    data->d[17] = 23.74942017f;
    data->d[18] = -0.00028456f;
    data->d[19] = 0.00000145f;
    data->d[20] = 8.79675007f;
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
    *(result->MaxResult()) = 0.00003430f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09060407f;
    data->d[1] = -1.11005282f;
    data->d[2] = -3.56709933f;
    data->d[3] = 0.00418127f;
    data->d[4] = -0.76305598f;
    data->d[5] = -1.88424015f;
    data->d[6] = 0.06219213f;
    data->d[7] = -2.33348775f;
    data->d[8] = -11.47593212f;
    data->d[9] = 8.05413914f;
    data->d[10] = 0.21683306f;
    data->d[11] = -7.07819557f;
    data->d[12] = -1.81853724f;
    data->d[13] = 0.93716115f;
    data->d[14] = -0.20483863f;
    data->d[15] = 4.67319298f;
    data->d[16] = 1.77859414f;
    data->d[17] = 10.73303795f;
    data->d[18] = -0.00215450f;
    data->d[19] = -0.03131951f;
    data->d[20] = 3.77770805f;
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
    *(result->MaxResult()) = 0.00000128f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61799312f;
    data->d[1] = -0.50542474f;
    data->d[2] = -0.08930395f;
    data->d[3] = -0.17680773f;
    data->d[4] = -1.93607330f;
    data->d[5] = -0.27941513f;
    data->d[6] = 0.32368165f;
    data->d[7] = -1.55325496f;
    data->d[8] = 24.76881599f;
    data->d[9] = 7.84638977f;
    data->d[10] = 0.03970850f;
    data->d[11] = 12.20767593f;
    data->d[12] = 3.04128885f;
    data->d[13] = -3.51611376f;
    data->d[14] = 0.07566083f;
    data->d[15] = -2.61825848f;
    data->d[16] = -0.46932837f;
    data->d[17] = 0.55283713f;
    data->d[18] = 0.00000087f;
    data->d[19] = -1.13261473f;
    data->d[20] = -0.46228895f;
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
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)1, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 3);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 12);
    code->SetOperation(15, (FireStarterOpcode)1, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 14);
    code->SetOperation(17, (FireStarterOpcode)1, 4);
    code->SetOperation(18, (FireStarterOpcode)0, 6);
    code->SetOperation(19, (FireStarterOpcode)0, 7);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)0, 7);
    code->SetOperation(23, (FireStarterOpcode)0, 4);
    code->SetOperation(24, (FireStarterOpcode)0, 6);
    code->SetOperation(25, (FireStarterOpcode)0, 17);
    code->SetOperation(26, (FireStarterOpcode)1, 12);
    code->SetOperation(27, (FireStarterOpcode)0, 2);
    code->SetOperation(28, (FireStarterOpcode)1, 18);
    code->SetOperation(29, (FireStarterOpcode)0, 6);
    code->SetOperation(30, (FireStarterOpcode)1, 19);
    code->SetOperation(31, (FireStarterOpcode)0, 20);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 271;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 12179245648176360221;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00003430f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
