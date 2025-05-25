#pragma once
#include "FireStarterState.h"

// Run date: 05/25/25 09:23:56 Pacific Daylight Time
// Run duration = 35.709150 seconds
// Run test = 14
// Run generation = 2
// Run evolution = 0
// Run precision  = 0.00001048
// Run max result = 0.00000104
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
    *(result->MaxResult()) = 0.00000104f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = -1.24846852f;
    data->d[1] = 1.53092885f;
    data->d[2] = -0.24604848f;
    data->d[3] = -2.65219021f;
    data->d[4] = 0.28338736f;
    data->d[5] = -1.56583929f;
    data->d[6] = -0.06966656f;
    data->d[7] = -2.83669996f;
    data->d[8] = 0.15520164f;
    data->d[9] = -1.17455256f;
    data->d[10] = -1.68560708f;
    data->d[11] = 0.03383668f;
    data->d[12] = -10.48071480f;
    data->d[13] = 9.08069706f;
    data->d[14] = -0.01112811f;
    data->d[15] = 8.59953594f;
    data->d[16] = 1.36743319f;
    data->d[17] = -3.85123396f;
    data->d[18] = 3.85123396f;
    data->d[19] = 0.00000000f;
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
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 3);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 9);
    code->SetOperation(13, (FireStarterOpcode)0, 8);
    code->SetOperation(14, (FireStarterOpcode)0, 7);
    code->SetOperation(15, (FireStarterOpcode)1, 9);
    code->SetOperation(16, (FireStarterOpcode)0, 11);
    code->SetOperation(17, (FireStarterOpcode)0, 12);
    code->SetOperation(18, (FireStarterOpcode)0, 13);
    code->SetOperation(19, (FireStarterOpcode)1, 7);
    code->SetOperation(20, (FireStarterOpcode)0, 14);
    code->SetOperation(21, (FireStarterOpcode)1, 10);
    code->SetOperation(22, (FireStarterOpcode)0, 14);
    code->SetOperation(23, (FireStarterOpcode)0, 15);
    code->SetOperation(24, (FireStarterOpcode)1, 10);
    code->SetOperation(25, (FireStarterOpcode)0, 4);
    code->SetOperation(26, (FireStarterOpcode)0, 16);
    code->SetOperation(27, (FireStarterOpcode)0, 9);
    code->SetOperation(28, (FireStarterOpcode)1, 9);
    code->SetOperation(29, (FireStarterOpcode)1, 17);
    code->SetOperation(30, (FireStarterOpcode)1, 16);
    code->SetOperation(31, (FireStarterOpcode)1, 18);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 2;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 14;
    state.m_seed = 17008212106080530180;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000104f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
