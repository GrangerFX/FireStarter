#pragma once
#include "FireStarterState.h"

// Run date: 10/09/26 10:09:19 Pacific Daylight Time
// Run duration = 1797.595244 seconds
// Run test = 63
// Run generation = 48
// Run evolution = 4
// Run precision  = 0.00001857
// Run max result = 0.00000083

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
// Run tests = 64
// Run units = 16
// Run states = 16
// Run population = 348160
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
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
    settings.m_tests = 64;
    settings.m_units = 16;
    settings.m_states = 16;
    settings.m_population = 348160;
    settings.m_generations = 0;
    settings.m_passes = 512;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;

} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000083f;
    *(result->EvolveAge()) = 0;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159250f;
    data->d[1] = -0.10864697f;
    data->d[2] = 2.11190891f;
    data->d[3] = 0.47849891f;
    data->d[4] = 1.49749279f;
    data->d[5] = -4.48554516f;
    data->d[6] = -0.90312022f;
    data->d[7] = 0.00000025f;
    data->d[8] = 3.27083325f;
    data->d[9] = -0.00000031f;
    data->d[10] = -0.16995950f;
    data->d[11] = 1.73517096f;
    data->d[12] = 0.97960663f;
    data->d[13] = -0.44592994f;
    data->d[14] = 0.29791552f;
    data->d[15] = 2.76407099f;
    data->d[16] = 5.67316389f;
    data->d[17] = 3.64735365f;
    data->d[18] = 8.38212109f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 1);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 6);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)1, 2);
    code->SetOperation(12, (FireStarterOpcode)1, 9);
    code->SetOperation(13, (FireStarterOpcode)0, 10);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)1, 6);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 6);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 3);
    code->SetOperation(21, (FireStarterOpcode)0, 10);
    code->SetOperation(22, (FireStarterOpcode)0, 0);
    code->SetOperation(23, (FireStarterOpcode)1, 12);
    code->SetOperation(24, (FireStarterOpcode)0, 15);
    code->SetOperation(25, (FireStarterOpcode)0, 6);
    code->SetOperation(26, (FireStarterOpcode)0, 16);
    code->SetOperation(27, (FireStarterOpcode)1, 11);
    code->SetOperation(28, (FireStarterOpcode)0, 1);
    code->SetOperation(29, (FireStarterOpcode)1, 17);
    code->SetOperation(30, (FireStarterOpcode)0, 18);
    code->SetOperation(31, (FireStarterOpcode)0, 3);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 48;
    state.m_evolution = 4;
    state.m_index = 11;
    state.m_evolveIndex = 10;
    state.m_id = 10;
    state.m_test = 63;
    state.m_seed = 9319798292691469974;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000083f;
    state.m_oldResult = 0.00000136f;
    state.m_evolveWeight = 0.000064f;
    state.m_optimizeValid = true;
} // LoadState
