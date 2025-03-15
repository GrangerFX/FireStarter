#pragma once
#include "FireStarterState.h"

// Run date: 03/15/25 10:46:03 Pacific Daylight Time
// Run duration = 7.199089 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.01336002
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
    *(result->MaxResult()) = 0.00637490f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = 0.06842244f;
    data->d[1] = 0.20991148f;
    data->d[2] = 4.58273029f;
    data->d[3] = 3.14887571f;
    data->d[4] = -2.96338010f;
    data->d[5] = 0.43210080f;
    data->d[6] = 4.18820620f;
    data->d[7] = -0.39743537f;
    data->d[8] = -0.54387128f;
    data->d[9] = -2.25967288f;
    data->d[10] = -0.23246333f;
    data->d[11] = 1.33804035f;
    data->d[12] = 0.49109641f;
    data->d[13] = 0.77014452f;
    data->d[14] = 0.35064015f;
    data->d[15] = 1.96560037f;
    data->d[16] = 0.32263899f;
    data->d[17] = 0.80534363f;
    data->d[18] = -0.22430585f;
    data->d[19] = 1.08276618f;
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
    *(result->MaxResult()) = 0.00041556f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = 0.69209832f;
    data->d[1] = -0.32111928f;
    data->d[2] = -0.10280018f;
    data->d[3] = -0.44787064f;
    data->d[4] = 0.67160088f;
    data->d[5] = 1.07626390f;
    data->d[6] = 2.87834191f;
    data->d[7] = -2.40685964f;
    data->d[8] = -0.09686992f;
    data->d[9] = 0.69550771f;
    data->d[10] = 2.61332822f;
    data->d[11] = -1.35339653f;
    data->d[12] = 1.98369682f;
    data->d[13] = 0.28475112f;
    data->d[14] = -0.60262406f;
    data->d[15] = 6.25212717f;
    data->d[16] = -0.17069139f;
    data->d[17] = 0.62865829f;
    data->d[18] = 0.46258742f;
    data->d[19] = 3.59847665f;
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
    *(result->MaxResult()) = 0.01336002f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = 1.23276842f;
    data->d[1] = -0.80273253f;
    data->d[2] = -0.11669912f;
    data->d[3] = 0.76632249f;
    data->d[4] = -1.54778171f;
    data->d[5] = 0.35158950f;
    data->d[6] = -0.29245958f;
    data->d[7] = 0.61919028f;
    data->d[8] = -4.06254148f;
    data->d[9] = 2.74746799f;
    data->d[10] = 4.71914101f;
    data->d[11] = 1.99796832f;
    data->d[12] = -0.13869750f;
    data->d[13] = -1.37947261f;
    data->d[14] = 0.29442346f;
    data->d[15] = 2.74023628f;
    data->d[16] = 0.27271011f;
    data->d[17] = 1.61538911f;
    data->d[18] = 0.40011489f;
    data->d[19] = 2.70632124f;
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
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 9);
    code->SetOperation(10, (FireStarterOpcode)1, 10);
    code->SetOperation(11, (FireStarterOpcode)0, 11);
    code->SetOperation(12, (FireStarterOpcode)0, 12);
    code->SetOperation(13, (FireStarterOpcode)1, 2);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 14);
    code->SetOperation(17, (FireStarterOpcode)0, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 3);
    code->SetOperation(19, (FireStarterOpcode)1, 3);
    code->SetOperation(20, (FireStarterOpcode)0, 16);
    code->SetOperation(21, (FireStarterOpcode)0, 2);
    code->SetOperation(22, (FireStarterOpcode)0, 17);
    code->SetOperation(23, (FireStarterOpcode)0, 16);
    code->SetOperation(24, (FireStarterOpcode)1, 18);
    code->SetOperation(25, (FireStarterOpcode)1, 17);
    code->SetOperation(26, (FireStarterOpcode)0, 16);
    code->SetOperation(27, (FireStarterOpcode)1, 19);
    code->SetOperation(28, (FireStarterOpcode)0, 8);
    code->SetOperation(29, (FireStarterOpcode)0, 19);
    code->SetOperation(30, (FireStarterOpcode)1, 3);
    code->SetOperation(31, (FireStarterOpcode)1, 14);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 5;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 8052663456522067295;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
