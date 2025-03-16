#pragma once
#include "FireStarterState.h"

// Run date: 03/16/25 12:22:15 Pacific Daylight Time
// Run duration = 6.071681 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000618
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
// Run generations = 0
// Run population = 65536
// Run passes = 384
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
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000618f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = -4.71236181f;
    data->d[1] = -0.02218571f;
    data->d[2] = -0.41425896f;
    data->d[3] = -0.20408982f;
    data->d[4] = -1.80296087f;
    data->d[5] = -0.05613384f;
    data->d[6] = 3.59310603f;
    data->d[7] = 0.53911215f;
    data->d[8] = 0.70385474f;
    data->d[9] = 0.70900923f;
    data->d[10] = -0.22543323f;
    data->d[11] = 1.23085964f;
    data->d[12] = -0.60977948f;
    data->d[13] = -6.62331152f;
    data->d[14] = -0.14300144f;
    data->d[15] = -0.13946922f;
    data->d[16] = 6.06353903f;
    data->d[17] = 0.02346885f;
    data->d[18] = 0.31651279f;
    data->d[19] = 7.28835773f;
    data->d[20] = 3.18126440f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 0);
    code->SetOperation(3, (FireStarterOpcode)0, 2);
    code->SetOperation(4, (FireStarterOpcode)1, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)1, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 4);
    code->SetOperation(14, (FireStarterOpcode)1, 3);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 9);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 12);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 8);
    code->SetOperation(22, (FireStarterOpcode)0, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 1);
    code->SetOperation(25, (FireStarterOpcode)1, 7);
    code->SetOperation(26, (FireStarterOpcode)0, 16);
    code->SetOperation(27, (FireStarterOpcode)1, 3);
    code->SetOperation(28, (FireStarterOpcode)1, 12);
    code->SetOperation(29, (FireStarterOpcode)0, 18);
    code->SetOperation(30, (FireStarterOpcode)0, 19);
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
    state.m_generation = 3;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 1;
    state.m_seed = 4498769691753394066;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
