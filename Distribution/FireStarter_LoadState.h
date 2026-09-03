#pragma once
#include "FireStarterState.h"

// Run date: 09/03/26 11:37:31 Pacific Daylight Time
// Run duration = 15.376167 seconds
// Run test = 0
// Run generation = 1
// Run evolution = 0
// Run precision  = 0.99886066
// Run max result = 0.00112040

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000000f

// Run mode = FIRESTARTER_SPEED_TEST
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 348160
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 5

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f


inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000000f;

    settings.m_mode = FIRESTARTER_SPEED_TEST;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 348160;
    settings.m_generations = 0;
    settings.m_passes = 512;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_optimize = 5;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;

} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00112040f;
    *(result->EvolveAge1()) = 0;
    *(result->EvolveAge2()) = 0;
    FireStarterData *data = result->Data();
    data->d[0] = -1.54806089f;
    data->d[1] = 3.86757946f;
    data->d[2] = -1.40107679f;
    data->d[3] = -0.25862819f;
    data->d[4] = -0.68089312f;
    data->d[5] = 1.05407155f;
    data->d[6] = -0.43349040f;
    data->d[7] = 0.21206056f;
    data->d[8] = 4.42582798f;
    data->d[9] = -0.53328472f;
    data->d[10] = 0.26624119f;
    data->d[11] = -1.33766770f;
    data->d[12] = 1.53032649f;
    data->d[13] = -0.36350846f;
    data->d[14] = 0.41820440f;
    data->d[15] = 0.17951705f;
    data->d[16] = -1.54464221f;
    data->d[17] = -1.25107336f;
    data->d[18] = -1.04578185f;
    data->d[19] = 0.94014472f;
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

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 0);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)1, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 12);
    code->SetOperation(14, (FireStarterOpcode)1, 13);
    code->SetOperation(15, (FireStarterOpcode)1, 14);
    code->SetOperation(16, (FireStarterOpcode)0, 15);
    code->SetOperation(17, (FireStarterOpcode)1, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 4);
    code->SetOperation(19, (FireStarterOpcode)0, 16);
    code->SetOperation(20, (FireStarterOpcode)0, 17);
    code->SetOperation(21, (FireStarterOpcode)0, 18);
    code->SetOperation(22, (FireStarterOpcode)0, 14);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)1, 16);
    code->SetOperation(25, (FireStarterOpcode)0, 8);
    code->SetOperation(26, (FireStarterOpcode)1, 16);
    code->SetOperation(27, (FireStarterOpcode)0, 12);
    code->SetOperation(28, (FireStarterOpcode)1, 6);
    code->SetOperation(29, (FireStarterOpcode)0, 19);
    code->SetOperation(30, (FireStarterOpcode)0, 20);
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
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00112040f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
