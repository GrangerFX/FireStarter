#pragma once
#include "FireStarterState.h"

// Run date: 10/16/26 14:51:37 Pacific Daylight Time
// Run duration = 3166.323697 seconds
// Run test = 63
// Run generation = 31
// Run evolution = 4
// Run precision  = 0.00000060
// Run max result = 0.00000022

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
// Run usePrecision = 1
// Run precisionSamples = 256
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
    *(result->MaxResult()) = 0.00000022f;
    *(result->EvolveAge()) = 0;
    FireStarterData *data = result->Data();
    data->d[0] = -1.55914402f;
    data->d[1] = -1.58244872f;
    data->d[2] = 9.28090191f;
    data->d[3] = 0.00000001f;
    data->d[4] = -0.00000000f;
    data->d[5] = -0.29110983f;
    data->d[6] = 0.21455033f;
    data->d[7] = 0.55256081f;
    data->d[8] = 0.01883791f;
    data->d[9] = -1.82191956f;
    data->d[10] = 2.56808686f;
    data->d[11] = -2.30181146f;
    data->d[12] = -0.37908968f;
    data->d[13] = -1.43289697f;
    data->d[14] = -2.29376817f;
    data->d[15] = -1.57534516f;
    data->d[16] = 0.00001442f;
    data->d[17] = -1.27550590f;
    data->d[18] = 0.00000000f;
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
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 1);
    code->SetOperation(5, (FireStarterOpcode)1, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 1);
    code->SetOperation(8, (FireStarterOpcode)1, 6);
    code->SetOperation(9, (FireStarterOpcode)1, 7);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)1, 12);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 7);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 10);
    code->SetOperation(21, (FireStarterOpcode)0, 11);
    code->SetOperation(22, (FireStarterOpcode)1, 3);
    code->SetOperation(23, (FireStarterOpcode)1, 15);
    code->SetOperation(24, (FireStarterOpcode)0, 16);
    code->SetOperation(25, (FireStarterOpcode)0, 7);
    code->SetOperation(26, (FireStarterOpcode)0, 17);
    code->SetOperation(27, (FireStarterOpcode)1, 12);
    code->SetOperation(28, (FireStarterOpcode)0, 12);
    code->SetOperation(29, (FireStarterOpcode)1, 8);
    code->SetOperation(30, (FireStarterOpcode)0, 5);
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
    state.m_generation = 31;
    state.m_evolution = 4;
    state.m_index = 10;
    state.m_evolveIndex = 10;
    state.m_id = 10;
    state.m_test = 63;
    state.m_seed = 6338789058549593704;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000022f;
    state.m_oldResult = 0.00000099f;
    state.m_evolveWeight = 0.000031f;
    state.m_precision = 5.960464478e-07f;
    state.m_precisionValid = true;
    state.m_optimizeValid = true;
} // LoadState
