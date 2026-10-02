#pragma once
#include "FireStarterState.h"

// Run date: 03/31/25 19:24:19 Pacific Daylight Time
// Run duration = 2595.209180 seconds
// Run generation = 38
// Run evolution = 3
// Run max result = 0.00000380
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
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
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
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
    *(result->MaxResult()) = 0.00000380f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -2.09599280f;
    data->d[1] = 0.76105684f;
    data->d[2] = 0.90853602f;
    data->d[3] = -1.77177966f;
    data->d[4] = 3.38651490f;
    data->d[5] = 0.30671990f;
    data->d[6] = 1.39520895f;
    data->d[7] = 0.38254401f;
    data->d[8] = -0.01848923f;
    data->d[9] = 0.50164276f;
    data->d[10] = 6.39575481f;
    data->d[11] = -0.24917568f;
    data->d[12] = 1.10779035f;
    data->d[13] = -4.18183327f;
    data->d[14] = 2.13912845f;
    data->d[15] = 2.92423391f;
    data->d[16] = -2.58933949f;
    data->d[17] = -1.86982203f;
    data->d[18] = 0.17647798f;
    data->d[19] = 23.04196548f;
    data->d[20] = 17.81747246f;
    data->d[21] = -0.99706501f;
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
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 2);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 12);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)1, 14);
    code->SetOperation(17, (FireStarterOpcode)0, 14);
    code->SetOperation(18, (FireStarterOpcode)0, 15);
    code->SetOperation(19, (FireStarterOpcode)1, 16);
    code->SetOperation(20, (FireStarterOpcode)0, 17);
    code->SetOperation(21, (FireStarterOpcode)0, 13);
    code->SetOperation(22, (FireStarterOpcode)0, 18);
    code->SetOperation(23, (FireStarterOpcode)1, 15);
    code->SetOperation(24, (FireStarterOpcode)1, 19);
    code->SetOperation(25, (FireStarterOpcode)0, 0);
    code->SetOperation(26, (FireStarterOpcode)1, 20);
    code->SetOperation(27, (FireStarterOpcode)0, 21);
    code->SetOperation(28, (FireStarterOpcode)1, 20);
    code->SetOperation(29, (FireStarterOpcode)0, 8);
    code->SetOperation(30, (FireStarterOpcode)1, 11);
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
    state.m_generation = 38;
    state.m_evolution = 3;
    state.m_index = 8;
    state.m_evolveIndex = 15;
    state.m_id = 15;
    state.m_test = 39;
    state.m_seed = 609515810744897986;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00001016f;
    state.m_evolveWeight = 0.000376f;
    state.m_optimizeValid = true;
} // LoadState
