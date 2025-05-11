#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 15:40:28 Pacific Daylight Time
// Run duration = 80.581418 seconds
// Run test = 0
// Run generation = 122
// Run evolution = 0
// Run precision  = 0.00004229
// Run max result = 0.00011983
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
    *(result->MaxResult()) = 0.00011983f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -2.38974190f;
    data->d[1] = -0.49064010f;
    data->d[2] = -0.12864292f;
    data->d[3] = -1.71637428f;
    data->d[4] = -0.10489064f;
    data->d[5] = 0.16725640f;
    data->d[6] = -3.13623810f;
    data->d[7] = -0.11701092f;
    data->d[8] = 1.47537982f;
    data->d[9] = 1.82949042f;
    data->d[10] = -0.85218966f;
    data->d[11] = -0.72082460f;
    data->d[12] = -0.88505900f;
    data->d[13] = 0.29848382f;
    data->d[14] = 3.48392296f;
    data->d[15] = 0.70269978f;
    data->d[16] = -0.13397089f;
    data->d[17] = 0.03672586f;
    data->d[18] = 1.07860827f;
    data->d[19] = 2.17546797f;
    data->d[20] = 0.16253352f;
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
    *(result->MaxResult()) = 0.00008948f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = 0.51257211f;
    data->d[1] = -1.15274274f;
    data->d[2] = 0.74695563f;
    data->d[3] = 1.28338850f;
    data->d[4] = 2.24103141f;
    data->d[5] = -0.02913097f;
    data->d[6] = 0.11390210f;
    data->d[7] = -1.72707415f;
    data->d[8] = -0.22005717f;
    data->d[9] = 1.60362792f;
    data->d[10] = 0.54933476f;
    data->d[11] = -21.80431175f;
    data->d[12] = -0.03497979f;
    data->d[13] = 1.10000634f;
    data->d[14] = 5.67271280f;
    data->d[15] = 14.50403595f;
    data->d[16] = 1.43196619f;
    data->d[17] = -2.82920384f;
    data->d[18] = -0.16794132f;
    data->d[19] = 1.37454581f;
    data->d[20] = -1.13638055f;
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
    *(result->MaxResult()) = 0.00006849f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -2.14093781f;
    data->d[1] = -0.12302325f;
    data->d[2] = -1.14391196f;
    data->d[3] = 0.23366198f;
    data->d[4] = -0.01710570f;
    data->d[5] = 0.98875666f;
    data->d[6] = 0.01029137f;
    data->d[7] = 12.30714893f;
    data->d[8] = -1.34874284f;
    data->d[9] = 0.22697549f;
    data->d[10] = -1.63961172f;
    data->d[11] = -0.56106216f;
    data->d[12] = -0.12456448f;
    data->d[13] = -4.35412836f;
    data->d[14] = 1.87778449f;
    data->d[15] = 1.28869855f;
    data->d[16] = -3.66759038f;
    data->d[17] = 0.39231312f;
    data->d[18] = 2.40328288f;
    data->d[19] = 0.43282679f;
    data->d[20] = -0.97188050f;
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
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 3);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 3);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 2);
    code->SetOperation(13, (FireStarterOpcode)1, 10);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 8);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 2);
    code->SetOperation(20, (FireStarterOpcode)1, 10);
    code->SetOperation(21, (FireStarterOpcode)1, 15);
    code->SetOperation(22, (FireStarterOpcode)0, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 3);
    code->SetOperation(24, (FireStarterOpcode)1, 9);
    code->SetOperation(25, (FireStarterOpcode)0, 4);
    code->SetOperation(26, (FireStarterOpcode)1, 17);
    code->SetOperation(27, (FireStarterOpcode)0, 18);
    code->SetOperation(28, (FireStarterOpcode)1, 6);
    code->SetOperation(29, (FireStarterOpcode)0, 19);
    code->SetOperation(30, (FireStarterOpcode)1, 20);
    code->SetOperation(31, (FireStarterOpcode)0, 10);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 122;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 12017547602042925838;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00011983f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
