#pragma once
#include "FireStarterState.h"

// Run date: 03/08/25 11:23:25 Pacific Standard Time
// Run duration = 158.216963 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00157505
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
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
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
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00012088f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = -0.07099289f;
    data->d[1] = 0.49855208f;
    data->d[2] = -1.55649722f;
    data->d[3] = -4.42684889f;
    data->d[4] = -0.39269403f;
    data->d[5] = 2.98923850f;
    data->d[6] = 1.17262268f;
    data->d[7] = 0.22930963f;
    data->d[8] = 0.36063179f;
    data->d[9] = 5.00178862f;
    data->d[10] = -0.25682697f;
    data->d[11] = -5.98434973f;
    data->d[12] = 2.26494503f;
    data->d[13] = -2.31043625f;
    data->d[14] = 4.38178635f;
    data->d[15] = 0.53924584f;
    data->d[16] = 4.67037392f;
    data->d[17] = -0.07155391f;
    data->d[18] = -7.69657660f;
    data->d[19] = 0.00011944f;
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
    *(result->MaxResult()) = 0.00096947f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = -0.01671066f;
    data->d[1] = -1.56906557f;
    data->d[2] = 1.57687354f;
    data->d[3] = -1.43689406f;
    data->d[4] = -3.20727992f;
    data->d[5] = -2.19992924f;
    data->d[6] = 2.37406659f;
    data->d[7] = 1.02646935f;
    data->d[8] = -0.69532216f;
    data->d[9] = 1.96332526f;
    data->d[10] = -0.72192675f;
    data->d[11] = -1.09919250f;
    data->d[12] = -0.40499282f;
    data->d[13] = -1.31607664f;
    data->d[14] = 0.68538803f;
    data->d[15] = 3.53457046f;
    data->d[16] = -0.79851693f;
    data->d[17] = 12.71297264f;
    data->d[18] = 0.11001217f;
    data->d[19] = 0.85130471f;
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
    *(result->MaxResult()) = 0.00157505f;
    *(result->EvolveAge1()) = 3;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -0.38923779f;
    data->d[1] = -0.24317116f;
    data->d[2] = 0.41078946f;
    data->d[3] = 0.89646029f;
    data->d[4] = -1.09659719f;
    data->d[5] = -7.47192049f;
    data->d[6] = -2.04287839f;
    data->d[7] = -0.83406061f;
    data->d[8] = 0.84672761f;
    data->d[9] = 0.65878356f;
    data->d[10] = 0.84110349f;
    data->d[11] = 0.71582311f;
    data->d[12] = 0.16455509f;
    data->d[13] = -12.14405060f;
    data->d[14] = 2.79565787f;
    data->d[15] = -2.65737510f;
    data->d[16] = 1.42127955f;
    data->d[17] = -5.45950937f;
    data->d[18] = 0.25705725f;
    data->d[19] = 0.00078055f;
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
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 1);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 1);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)1, 0);
    code->SetOperation(11, (FireStarterOpcode)1, 8);
    code->SetOperation(12, (FireStarterOpcode)0, 9);
    code->SetOperation(13, (FireStarterOpcode)0, 10);
    code->SetOperation(14, (FireStarterOpcode)1, 1);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 7);
    code->SetOperation(17, (FireStarterOpcode)0, 12);
    code->SetOperation(18, (FireStarterOpcode)0, 13);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 11);
    code->SetOperation(21, (FireStarterOpcode)0, 15);
    code->SetOperation(22, (FireStarterOpcode)0, 0);
    code->SetOperation(23, (FireStarterOpcode)0, 10);
    code->SetOperation(24, (FireStarterOpcode)0, 16);
    code->SetOperation(25, (FireStarterOpcode)0, 4);
    code->SetOperation(26, (FireStarterOpcode)0, 17);
    code->SetOperation(27, (FireStarterOpcode)0, 18);
    code->SetOperation(28, (FireStarterOpcode)0, 2);
    code->SetOperation(29, (FireStarterOpcode)1, 4);
    code->SetOperation(30, (FireStarterOpcode)0, 6);
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
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 28;
    state.m_test = 0;
    state.m_seed = 896;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
