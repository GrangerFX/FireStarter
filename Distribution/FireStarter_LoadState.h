#pragma once
#include "FireStarterState.h"

// Run date: 08/03/25 11:34:02 Pacific Daylight Time
// Run duration = 22.157316 seconds
// Run test = 4
// Run generation = 13
// Run evolution = 0
// Run precision  = 0.00000588
// Run max result = 0.00000026
// Run variations = 1
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
// Run population = 65536
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
    settings.m_variations = 1;
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
    settings.m_population = 65536;
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
    *(result->MaxResult()) = 0.00000026f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = -6.07412577f;
    data->d[1] = 2.93253303f;
    data->d[2] = -2.25779915f;
    data->d[3] = -0.11150601f;
    data->d[4] = 0.50796437f;
    data->d[5] = 4.87995911f;
    data->d[6] = 5.42346573f;
    data->d[7] = 0.54103714f;
    data->d[8] = -0.06572121f;
    data->d[9] = -0.15750566f;
    data->d[10] = -1.69504905f;
    data->d[11] = -4.61032343f;
    data->d[12] = 1.95953071f;
    data->d[13] = 0.52586240f;
    data->d[14] = 5.01624012f;
    data->d[15] = -0.52975726f;
    data->d[16] = 1.86608124f;
    data->d[17] = 2.88002586f;
    data->d[18] = -0.59756696f;
    data->d[19] = -2.18220139f;
    data->d[20] = -0.76813245f;
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
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 2);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 2);
    code->SetOperation(13, (FireStarterOpcode)1, 7);
    code->SetOperation(14, (FireStarterOpcode)1, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 7);
    code->SetOperation(16, (FireStarterOpcode)1, 12);
    code->SetOperation(17, (FireStarterOpcode)1, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)0, 16);
    code->SetOperation(21, (FireStarterOpcode)1, 10);
    code->SetOperation(22, (FireStarterOpcode)0, 17);
    code->SetOperation(23, (FireStarterOpcode)1, 13);
    code->SetOperation(24, (FireStarterOpcode)1, 11);
    code->SetOperation(25, (FireStarterOpcode)1, 14);
    code->SetOperation(26, (FireStarterOpcode)0, 18);
    code->SetOperation(27, (FireStarterOpcode)1, 19);
    code->SetOperation(28, (FireStarterOpcode)1, 10);
    code->SetOperation(29, (FireStarterOpcode)0, 8);
    code->SetOperation(30, (FireStarterOpcode)0, 20);
    code->SetOperation(31, (FireStarterOpcode)0, 1);
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
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 4;
    state.m_seed = 1158867384608438107;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000026f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
