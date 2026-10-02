#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 15:04:20 Pacific Daylight Time
// Run duration = 16.916829 seconds
// Run test = 0
// Run generation = 18
// Run evolution = 0
// Run precision  = 0.00051702
// Run max result = 0.00028148
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
    *(result->MaxResult()) = 0.00024472f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = 0.61971617f;
    data->d[1] = -2.29495883f;
    data->d[2] = -2.43390608f;
    data->d[3] = -0.39626107f;
    data->d[4] = -0.00426705f;
    data->d[5] = 12.95528126f;
    data->d[6] = 4.91134167f;
    data->d[7] = 2.34895277f;
    data->d[8] = -1.62253428f;
    data->d[9] = -1.72892261f;
    data->d[10] = -1.92356908f;
    data->d[11] = -0.42742500f;
    data->d[12] = 1.53225434f;
    data->d[13] = -0.24971746f;
    data->d[14] = 3.06024241f;
    data->d[15] = -0.16553833f;
    data->d[16] = 2.87543774f;
    data->d[17] = -1.68118393f;
    data->d[18] = -2.61916900f;
    data->d[19] = 0.89526832f;
    data->d[20] = -0.53624147f;
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
    *(result->MaxResult()) = 0.00028148f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.54712206f;
    data->d[1] = -1.11533856f;
    data->d[2] = 0.51155800f;
    data->d[3] = -0.52389270f;
    data->d[4] = -0.31508324f;
    data->d[5] = 1.27762663f;
    data->d[6] = 0.37714645f;
    data->d[7] = 2.03018332f;
    data->d[8] = 3.25919414f;
    data->d[9] = -2.09192443f;
    data->d[10] = 0.07778062f;
    data->d[11] = 0.11594358f;
    data->d[12] = -1.35663640f;
    data->d[13] = 0.06062787f;
    data->d[14] = -0.36526310f;
    data->d[15] = -4.06579208f;
    data->d[16] = -0.84890050f;
    data->d[17] = 0.24999326f;
    data->d[18] = 9.88883972f;
    data->d[19] = -2.86988926f;
    data->d[20] = 3.15338397f;
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
    *(result->MaxResult()) = 0.00028122f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 9;
    FireStarterData *data = result->Data();
    data->d[0] = -0.36138242f;
    data->d[1] = -1.24905300f;
    data->d[2] = -0.19829899f;
    data->d[3] = 1.02857363f;
    data->d[4] = -0.93420923f;
    data->d[5] = -1.79524505f;
    data->d[6] = -1.21165526f;
    data->d[7] = 2.28954315f;
    data->d[8] = -2.65115976f;
    data->d[9] = 1.46750176f;
    data->d[10] = 0.15199348f;
    data->d[11] = -0.24346672f;
    data->d[12] = 2.60654235f;
    data->d[13] = 0.45815533f;
    data->d[14] = -0.52978933f;
    data->d[15] = 0.86915183f;
    data->d[16] = 3.72837806f;
    data->d[17] = 1.40302002f;
    data->d[18] = 0.36030549f;
    data->d[19] = 1.54793918f;
    data->d[20] = -2.11170602f;
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
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)1, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 9);
    code->SetOperation(10, (FireStarterOpcode)1, 1);
    code->SetOperation(11, (FireStarterOpcode)0, 0);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 4);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 1);
    code->SetOperation(16, (FireStarterOpcode)1, 12);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 12);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)1, 3);
    code->SetOperation(22, (FireStarterOpcode)1, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 15);
    code->SetOperation(24, (FireStarterOpcode)1, 16);
    code->SetOperation(25, (FireStarterOpcode)1, 17);
    code->SetOperation(26, (FireStarterOpcode)0, 12);
    code->SetOperation(27, (FireStarterOpcode)0, 18);
    code->SetOperation(28, (FireStarterOpcode)0, 19);
    code->SetOperation(29, (FireStarterOpcode)1, 6);
    code->SetOperation(30, (FireStarterOpcode)0, 3);
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
    state.m_generation = 18;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 10542844369769890646;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00028148f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
