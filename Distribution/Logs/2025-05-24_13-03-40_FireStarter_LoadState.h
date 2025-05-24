#pragma once
#include "FireStarterState.h"

// Run date: 05/24/25 13:03:40 Pacific Daylight Time
// Run duration = 6022.518776 seconds
// Run test = 0
// Run generation = 6203
// Run evolution = 0
// Run precision  = 0.00004101
// Run max result = 0.00000215
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
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
    settings.m_variations = 3;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
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
    *(result->MaxResult()) = 0.00000077f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -0.41255245f;
    data->d[1] = 1.29607177f;
    data->d[2] = -2.23724914f;
    data->d[3] = 0.17412475f;
    data->d[4] = 1.79587817f;
    data->d[5] = -0.59359950f;
    data->d[6] = 0.02408245f;
    data->d[7] = -0.25789675f;
    data->d[8] = -1.85095823f;
    data->d[9] = 0.23769532f;
    data->d[10] = -1.48060930f;
    data->d[11] = 0.40555698f;
    data->d[12] = 1.91823339f;
    data->d[13] = -1.11933625f;
    data->d[14] = 0.38051686f;
    data->d[15] = 0.21680006f;
    data->d[16] = 4.35445166f;
    data->d[17] = 0.79902023f;
    data->d[18] = -0.88999623f;
    data->d[19] = -0.78849161f;
    data->d[20] = -0.00000002f;
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
    *(result->MaxResult()) = 0.00000095f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.19520789f;
    data->d[1] = -0.60332090f;
    data->d[2] = -3.37834430f;
    data->d[3] = -1.11195683f;
    data->d[4] = 0.87293100f;
    data->d[5] = 1.58106494f;
    data->d[6] = -2.75016022f;
    data->d[7] = 0.44643050f;
    data->d[8] = -0.01067547f;
    data->d[9] = 1.96895051f;
    data->d[10] = -0.29922009f;
    data->d[11] = -0.06641313f;
    data->d[12] = -8.23501110f;
    data->d[13] = -4.32256269f;
    data->d[14] = 2.18121552f;
    data->d[15] = -0.16008189f;
    data->d[16] = -6.57542896f;
    data->d[17] = 0.55923277f;
    data->d[18] = -1.64143097f;
    data->d[19] = 0.22155991f;
    data->d[20] = -0.11813154f;
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
    *(result->MaxResult()) = 0.00000215f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -0.47159263f;
    data->d[1] = 1.23462665f;
    data->d[2] = -0.31306031f;
    data->d[3] = 2.26043296f;
    data->d[4] = 5.77866125f;
    data->d[5] = -2.42463112f;
    data->d[6] = 2.04671574f;
    data->d[7] = 1.10223591f;
    data->d[8] = 1.07451582f;
    data->d[9] = 2.69227028f;
    data->d[10] = -1.74298131f;
    data->d[11] = 2.93501210f;
    data->d[12] = 0.26936138f;
    data->d[13] = 0.14574938f;
    data->d[14] = 2.55856276f;
    data->d[15] = 4.82053041f;
    data->d[16] = 8.46682453f;
    data->d[17] = 1.45173466f;
    data->d[18] = -0.40166464f;
    data->d[19] = 0.01177724f;
    data->d[20] = 0.52359855f;
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
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 2);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)1, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 12);
    code->SetOperation(14, (FireStarterOpcode)1, 13);
    code->SetOperation(15, (FireStarterOpcode)1, 4);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)1, 8);
    code->SetOperation(18, (FireStarterOpcode)1, 12);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)1, 2);
    code->SetOperation(21, (FireStarterOpcode)0, 15);
    code->SetOperation(22, (FireStarterOpcode)1, 16);
    code->SetOperation(23, (FireStarterOpcode)1, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 1);
    code->SetOperation(25, (FireStarterOpcode)0, 18);
    code->SetOperation(26, (FireStarterOpcode)1, 1);
    code->SetOperation(27, (FireStarterOpcode)0, 11);
    code->SetOperation(28, (FireStarterOpcode)0, 14);
    code->SetOperation(29, (FireStarterOpcode)1, 3);
    code->SetOperation(30, (FireStarterOpcode)0, 19);
    code->SetOperation(31, (FireStarterOpcode)1, 20);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 6203;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 10445740284409261921;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000215f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
