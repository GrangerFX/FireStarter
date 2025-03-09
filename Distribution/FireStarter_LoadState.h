#pragma once
#include "FireStarterState.h"

// Run date: 03/09/25 10:58:43 Pacific Daylight Time
// Run duration = 14.179580 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000194
// Run variations = 1
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
    settings.m_variations = 1;
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
    *(result->MaxResult()) = 0.00000194f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -1.57079661f;
    data->d[1] = -0.09058330f;
    data->d[2] = -0.02024581f;
    data->d[3] = 1.63028860f;
    data->d[4] = -2.73998761f;
    data->d[5] = 3.57299876f;
    data->d[6] = -0.46152434f;
    data->d[7] = -2.34309530f;
    data->d[8] = 0.06579512f;
    data->d[9] = -3.97651243f;
    data->d[10] = 4.63582754f;
    data->d[11] = 0.43322989f;
    data->d[12] = 1.00115812f;
    data->d[13] = -1.90849781f;
    data->d[14] = -1.81837213f;
    data->d[15] = 0.13306300f;
    data->d[16] = -0.08311944f;
    data->d[17] = -16.64663696f;
    data->d[18] = -4.08318949f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 1);
    code->SetOperation(3, (FireStarterOpcode)1, 2);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 2);
    code->SetOperation(8, (FireStarterOpcode)1, 6);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 0);
    code->SetOperation(13, (FireStarterOpcode)0, 1);
    code->SetOperation(14, (FireStarterOpcode)1, 10);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 12);
    code->SetOperation(17, (FireStarterOpcode)1, 9);
    code->SetOperation(18, (FireStarterOpcode)1, 13);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)0, 17);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 15);
    code->SetOperation(25, (FireStarterOpcode)1, 18);
    code->SetOperation(26, (FireStarterOpcode)0, 6);
    code->SetOperation(27, (FireStarterOpcode)1, 5);
    code->SetOperation(28, (FireStarterOpcode)0, 3);
    code->SetOperation(29, (FireStarterOpcode)0, 7);
    code->SetOperation(30, (FireStarterOpcode)0, 14);
    code->SetOperation(31, (FireStarterOpcode)0, 12);
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
    state.m_index = 1;
    state.m_copy_index = 1;
    state.m_id = 1;
    state.m_test = 0;
    state.m_seed = 12495441629385950763;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
