#pragma once
#include "FireStarterState.h"

// Run date: 07/01/25 10:09:56 Pacific Daylight Time
// Run duration = 918.902457 seconds
// Run test = 0
// Run generation = 131
// Run evolution = 8
// Run precision  = 0.00000060
// Run max result = 0.00000054
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
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run population = 262144
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
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_population = 262144;
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
    *(result->MaxResult()) = 0.00000030f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159632f;
    data->d[1] = 0.00000497f;
    data->d[2] = 0.16984653f;
    data->d[3] = -6.39342499f;
    data->d[4] = -0.00766861f;
    data->d[5] = -3.39190006f;
    data->d[6] = 0.82123750f;
    data->d[7] = -0.01315898f;
    data->d[8] = 0.32577309f;
    data->d[9] = -0.52932721f;
    data->d[10] = -2.50032115f;
    data->d[11] = -1.96593165f;
    data->d[12] = 6.38503838f;
    data->d[13] = -0.06658097f;
    data->d[14] = 1.84598863f;
    data->d[15] = -3.01103044f;
    data->d[16] = 0.78467083f;
    data->d[17] = 0.00000071f;
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

// Variation: 1
inline void LoadVariation1(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000012f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09065294f;
    data->d[1] = -0.00000790f;
    data->d[2] = -2.73640728f;
    data->d[3] = 0.51998657f;
    data->d[4] = 0.00020243f;
    data->d[5] = 0.32199588f;
    data->d[6] = -2.56662059f;
    data->d[7] = -0.02738768f;
    data->d[8] = 0.24291660f;
    data->d[9] = -0.63359040f;
    data->d[10] = -2.56429410f;
    data->d[11] = 0.28767204f;
    data->d[12] = -11.95842648f;
    data->d[13] = 0.02052377f;
    data->d[14] = -3.59887409f;
    data->d[15] = -4.82795048f;
    data->d[16] = 0.11564460f;
    data->d[17] = -0.05906715f;
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
} // LoadVariation1

// Variation: 2
inline void LoadVariation2(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000054f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61799383f;
    data->d[1] = 0.00000014f;
    data->d[2] = 0.79703236f;
    data->d[3] = -0.68080151f;
    data->d[4] = -0.01779458f;
    data->d[5] = -3.38822675f;
    data->d[6] = 0.33171877f;
    data->d[7] = 0.10879505f;
    data->d[8] = -0.83405459f;
    data->d[9] = -0.65760970f;
    data->d[10] = 5.25021410f;
    data->d[11] = -0.61541045f;
    data->d[12] = -4.01293945f;
    data->d[13] = 8.08570671f;
    data->d[14] = 0.03697379f;
    data->d[15] = 0.09421959f;
    data->d[16] = 0.73120308f;
    data->d[17] = 0.26179934f;
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
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 0);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 0);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 5);
    code->SetOperation(14, (FireStarterOpcode)0, 10);
    code->SetOperation(15, (FireStarterOpcode)1, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 8);
    code->SetOperation(17, (FireStarterOpcode)1, 6);
    code->SetOperation(18, (FireStarterOpcode)0, 12);
    code->SetOperation(19, (FireStarterOpcode)0, 13);
    code->SetOperation(20, (FireStarterOpcode)1, 5);
    code->SetOperation(21, (FireStarterOpcode)0, 14);
    code->SetOperation(22, (FireStarterOpcode)0, 9);
    code->SetOperation(23, (FireStarterOpcode)0, 11);
    code->SetOperation(24, (FireStarterOpcode)0, 7);
    code->SetOperation(25, (FireStarterOpcode)0, 15);
    code->SetOperation(26, (FireStarterOpcode)0, 2);
    code->SetOperation(27, (FireStarterOpcode)0, 16);
    code->SetOperation(28, (FireStarterOpcode)1, 17);
    code->SetOperation(29, (FireStarterOpcode)1, 3);
    code->SetOperation(30, (FireStarterOpcode)1, 1);
    code->SetOperation(31, (FireStarterOpcode)1, 17);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 131;
    state.m_evolution = 8;
    state.m_index = 6;
    state.m_evolveIndex = 66;
    state.m_id = 66;
    state.m_test = 0;
    state.m_seed = 9251271231550593089;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000054f;
    state.m_oldResult = 0.00000113f;
    state.m_evolveWeight = 0.000147f;
    state.m_optimizeValid = true;
} // LoadState
