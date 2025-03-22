#pragma once
#include "FireStarterState.h"

// Run date: 03/22/25 16:13:23 Pacific Daylight Time
// Run duration = 88.106631 seconds
// Run generation = 17
// Run evolution = 2
// Run max result = 0.00014544
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
// Run generations = 0
// Run population = 262144
// Run passes = 512
// Run attempts = 0
// Run optimize = 8

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
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00012665f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = 0.98808640f;
    data->d[1] = 1.16875982f;
    data->d[2] = -0.62088931f;
    data->d[3] = 0.33627081f;
    data->d[4] = -0.16858375f;
    data->d[5] = -0.74020720f;
    data->d[6] = -0.95854664f;
    data->d[7] = -2.32739043f;
    data->d[8] = 1.54186392f;
    data->d[9] = -0.54809010f;
    data->d[10] = 0.27204120f;
    data->d[11] = 0.29466313f;
    data->d[12] = -1.15745974f;
    data->d[13] = -2.40303254f;
    data->d[14] = -2.53057170f;
    data->d[15] = 2.38074422f;
    data->d[16] = 1.51009738f;
    data->d[17] = 0.05149963f;
    data->d[18] = -0.16671054f;
    data->d[19] = -1.28777266f;
    data->d[20] = 0.05928387f;
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
    *(result->MaxResult()) = 0.00006171f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -0.34151453f;
    data->d[1] = 1.11780560f;
    data->d[2] = 1.13157237f;
    data->d[3] = 0.77766407f;
    data->d[4] = -0.04602018f;
    data->d[5] = 1.93509817f;
    data->d[6] = -0.67643571f;
    data->d[7] = 0.18437180f;
    data->d[8] = -0.76017231f;
    data->d[9] = -1.50358057f;
    data->d[10] = 0.73181939f;
    data->d[11] = -0.54367709f;
    data->d[12] = -1.40776896f;
    data->d[13] = 1.47259176f;
    data->d[14] = 1.23044193f;
    data->d[15] = 0.17885315f;
    data->d[16] = 0.01891426f;
    data->d[17] = 7.05875540f;
    data->d[18] = 5.33453417f;
    data->d[19] = 0.94500041f;
    data->d[20] = 1.28737295f;
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
    *(result->MaxResult()) = 0.00014544f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -0.97156918f;
    data->d[1] = 0.63139039f;
    data->d[2] = -0.29409608f;
    data->d[3] = -1.15886462f;
    data->d[4] = 2.47137022f;
    data->d[5] = 1.26998210f;
    data->d[6] = -0.61247540f;
    data->d[7] = -1.44047558f;
    data->d[8] = -0.30161944f;
    data->d[9] = -2.17065573f;
    data->d[10] = -0.87568182f;
    data->d[11] = -0.46475273f;
    data->d[12] = -1.64348459f;
    data->d[13] = 1.23743832f;
    data->d[14] = 1.81404173f;
    data->d[15] = -6.63994312f;
    data->d[16] = 0.00087094f;
    data->d[17] = -0.22816627f;
    data->d[18] = 4.02459192f;
    data->d[19] = -0.86312592f;
    data->d[20] = -2.90957689f;
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
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)1, 3);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 5);
    code->SetOperation(9, (FireStarterOpcode)0, 2);
    code->SetOperation(10, (FireStarterOpcode)1, 7);
    code->SetOperation(11, (FireStarterOpcode)1, 8);
    code->SetOperation(12, (FireStarterOpcode)0, 3);
    code->SetOperation(13, (FireStarterOpcode)1, 9);
    code->SetOperation(14, (FireStarterOpcode)1, 10);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 7);
    code->SetOperation(17, (FireStarterOpcode)1, 12);
    code->SetOperation(18, (FireStarterOpcode)0, 13);
    code->SetOperation(19, (FireStarterOpcode)1, 6);
    code->SetOperation(20, (FireStarterOpcode)1, 14);
    code->SetOperation(21, (FireStarterOpcode)0, 15);
    code->SetOperation(22, (FireStarterOpcode)0, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 18);
    code->SetOperation(25, (FireStarterOpcode)0, 0);
    code->SetOperation(26, (FireStarterOpcode)0, 15);
    code->SetOperation(27, (FireStarterOpcode)1, 14);
    code->SetOperation(28, (FireStarterOpcode)0, 19);
    code->SetOperation(29, (FireStarterOpcode)1, 20);
    code->SetOperation(30, (FireStarterOpcode)1, 3);
    code->SetOperation(31, (FireStarterOpcode)0, 8);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 17;
    state.m_evolution = 2;
    state.m_index = 12;
    state.m_evolveIndex = 16;
    state.m_id = 16;
    state.m_test = 0;
    state.m_seed = 11303658641420472656;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00192804f;
    state.m_evolveWeight = 0.030849f;
    state.m_optimizeValid = true;
} // LoadState
