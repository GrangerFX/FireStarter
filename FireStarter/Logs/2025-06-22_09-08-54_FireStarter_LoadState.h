#pragma once
#include "FireStarterState.h"

// Run date: 06/22/25 09:08:54 Pacific Daylight Time
// Run duration = 2702.571698 seconds
// Run test = 3
// Run generation = 51
// Run evolution = 3
// Run precision  = 0.00002538
// Run max result = 0.00001535
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
    *(result->MaxResult()) = 0.00001535f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14124584f;
    data->d[1] = 0.15326947f;
    data->d[2] = -1.17729580f;
    data->d[3] = -6.75232506f;
    data->d[4] = -2.26542544f;
    data->d[5] = 0.03023087f;
    data->d[6] = -4.18248272f;
    data->d[7] = -0.37043959f;
    data->d[8] = -0.65232015f;
    data->d[9] = 1.19345295f;
    data->d[10] = -6.31896448f;
    data->d[11] = 0.32120076f;
    data->d[12] = -1.80479825f;
    data->d[13] = 0.44669738f;
    data->d[14] = 1.66633153f;
    data->d[15] = 0.25785792f;
    data->d[16] = 19.02032280f;
    data->d[17] = -4.26426935f;
    data->d[18] = -3.23948550f;
    data->d[19] = -0.03006184f;
    data->d[20] = -0.18093368f;
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
    *(result->MaxResult()) = 0.00000864f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09157205f;
    data->d[1] = -0.12638263f;
    data->d[2] = -0.97998852f;
    data->d[3] = 2.50018978f;
    data->d[4] = 1.83870542f;
    data->d[5] = 0.00483804f;
    data->d[6] = -0.12180495f;
    data->d[7] = -0.97797698f;
    data->d[8] = 2.99799061f;
    data->d[9] = -2.26251817f;
    data->d[10] = -6.82598352f;
    data->d[11] = -3.89671350f;
    data->d[12] = 0.65991104f;
    data->d[13] = 1.06545198f;
    data->d[14] = 22.58766174f;
    data->d[15] = -0.12379959f;
    data->d[16] = -0.86024964f;
    data->d[17] = -0.72802013f;
    data->d[18] = 0.01696926f;
    data->d[19] = -3.95034027f;
    data->d[20] = 4.81169891f;
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
    *(result->MaxResult()) = 0.00000757f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61594963f;
    data->d[1] = 0.07119202f;
    data->d[2] = -0.44947931f;
    data->d[3] = -5.86264801f;
    data->d[4] = 2.08788252f;
    data->d[5] = -1.20613134f;
    data->d[6] = -2.26510549f;
    data->d[7] = -2.22133851f;
    data->d[8] = 0.82385260f;
    data->d[9] = 3.88364530f;
    data->d[10] = -1.72920704f;
    data->d[11] = -0.10147543f;
    data->d[12] = -1.97735465f;
    data->d[13] = 2.13528013f;
    data->d[14] = -2.29281735f;
    data->d[15] = 0.85759127f;
    data->d[16] = 3.23637867f;
    data->d[17] = 0.31866679f;
    data->d[18] = 0.70295280f;
    data->d[19] = 4.93721437f;
    data->d[20] = -0.10223992f;
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
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 2);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 5);
    code->SetOperation(14, (FireStarterOpcode)1, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 7);
    code->SetOperation(17, (FireStarterOpcode)0, 1);
    code->SetOperation(18, (FireStarterOpcode)0, 4);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)1, 3);
    code->SetOperation(21, (FireStarterOpcode)1, 15);
    code->SetOperation(22, (FireStarterOpcode)0, 16);
    code->SetOperation(23, (FireStarterOpcode)1, 6);
    code->SetOperation(24, (FireStarterOpcode)0, 17);
    code->SetOperation(25, (FireStarterOpcode)1, 3);
    code->SetOperation(26, (FireStarterOpcode)0, 13);
    code->SetOperation(27, (FireStarterOpcode)1, 18);
    code->SetOperation(28, (FireStarterOpcode)1, 6);
    code->SetOperation(29, (FireStarterOpcode)0, 12);
    code->SetOperation(30, (FireStarterOpcode)0, 19);
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
    state.m_generation = 51;
    state.m_evolution = 3;
    state.m_index = 5;
    state.m_evolveIndex = 13;
    state.m_id = 13;
    state.m_test = 3;
    state.m_seed = 14488681741008439662;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00001535f;
    state.m_oldResult = 0.00001696f;
    state.m_evolveWeight = 0.000339f;
    state.m_optimizeValid = true;
} // LoadState
