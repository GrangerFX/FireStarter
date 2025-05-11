#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 09:46:19 Pacific Daylight Time
// Run duration = 541.242442 seconds
// Run test = 0
// Run generation = 830
// Run evolution = 0
// Run precision  = 0.00020577
// Run max result = 0.00003731
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
    *(result->MaxResult()) = 0.00003731f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -1.34457552f;
    data->d[1] = -1.79701042f;
    data->d[2] = -1.03772271f;
    data->d[3] = 0.00000957f;
    data->d[4] = 0.01402972f;
    data->d[5] = -1.50543594f;
    data->d[6] = -2.37348628f;
    data->d[7] = 0.84000111f;
    data->d[8] = 1.25791478f;
    data->d[9] = 0.40000272f;
    data->d[10] = -1.10368669f;
    data->d[11] = -0.07316256f;
    data->d[12] = -1.11295211f;
    data->d[13] = -0.93686134f;
    data->d[14] = -2.83156347f;
    data->d[15] = 0.52707088f;
    data->d[16] = -2.04980016f;
    data->d[17] = 7.54872847f;
    data->d[18] = 2.97162580f;
    data->d[19] = -0.00000296f;
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
    *(result->MaxResult()) = 0.00000179f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = 0.02726327f;
    data->d[1] = -3.11792397f;
    data->d[2] = -1.45048356f;
    data->d[3] = -0.00000369f;
    data->d[4] = -0.01764736f;
    data->d[5] = -1.04171801f;
    data->d[6] = 0.01168240f;
    data->d[7] = -0.64866197f;
    data->d[8] = 0.88285363f;
    data->d[9] = 0.43023744f;
    data->d[10] = -0.15221211f;
    data->d[11] = -0.77889311f;
    data->d[12] = 0.65190315f;
    data->d[13] = -8.51016521f;
    data->d[14] = 2.64088130f;
    data->d[15] = 0.07793353f;
    data->d[16] = -6.53867483f;
    data->d[17] = 14.12355709f;
    data->d[18] = 0.80408233f;
    data->d[19] = -0.11813121f;
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
    *(result->MaxResult()) = 0.00002527f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -1.74713862f;
    data->d[1] = -0.87079161f;
    data->d[2] = -1.52562749f;
    data->d[3] = 0.00015109f;
    data->d[4] = -0.01678078f;
    data->d[5] = 2.70679975f;
    data->d[6] = -0.85346675f;
    data->d[7] = 1.47306776f;
    data->d[8] = -0.94424272f;
    data->d[9] = -0.01731952f;
    data->d[10] = -5.41583967f;
    data->d[11] = 1.40332282f;
    data->d[12] = -1.00663376f;
    data->d[13] = -3.34593487f;
    data->d[14] = -1.14614558f;
    data->d[15] = 2.41515255f;
    data->d[16] = 8.63844585f;
    data->d[17] = 1.96385109f;
    data->d[18] = 0.61498606f;
    data->d[19] = 0.52356917f;
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
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 4);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 3);
    code->SetOperation(11, (FireStarterOpcode)0, 1);
    code->SetOperation(12, (FireStarterOpcode)0, 8);
    code->SetOperation(13, (FireStarterOpcode)0, 9);
    code->SetOperation(14, (FireStarterOpcode)0, 10);
    code->SetOperation(15, (FireStarterOpcode)1, 11);
    code->SetOperation(16, (FireStarterOpcode)1, 12);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 13);
    code->SetOperation(20, (FireStarterOpcode)0, 9);
    code->SetOperation(21, (FireStarterOpcode)1, 7);
    code->SetOperation(22, (FireStarterOpcode)1, 15);
    code->SetOperation(23, (FireStarterOpcode)1, 16);
    code->SetOperation(24, (FireStarterOpcode)1, 17);
    code->SetOperation(25, (FireStarterOpcode)0, 18);
    code->SetOperation(26, (FireStarterOpcode)0, 5);
    code->SetOperation(27, (FireStarterOpcode)0, 16);
    code->SetOperation(28, (FireStarterOpcode)0, 10);
    code->SetOperation(29, (FireStarterOpcode)1, 3);
    code->SetOperation(30, (FireStarterOpcode)0, 13);
    code->SetOperation(31, (FireStarterOpcode)1, 19);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 830;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 8576560475575454618;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00003731f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
