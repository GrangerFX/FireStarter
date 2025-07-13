#pragma once
#include "FireStarterState.h"

// Run date: 07/13/25 12:08:07 Pacific Daylight Time
// Run duration = 2332.062042 seconds
// Run test = 13
// Run generation = 0
// Run evolution = 0
// Run precision  = 0.00055726
// Run max result = 0.00023322
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
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00004051f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = 0.18421194f;
    data->d[1] = -1.19855154f;
    data->d[2] = -0.00415851f;
    data->d[3] = 0.45468661f;
    data->d[4] = -0.16764140f;
    data->d[5] = -0.48868710f;
    data->d[6] = -0.63305163f;
    data->d[7] = -0.14824787f;
    data->d[8] = -1.05147934f;
    data->d[9] = 2.38287044f;
    data->d[10] = -2.49463177f;
    data->d[11] = 0.82651311f;
    data->d[12] = 0.65315026f;
    data->d[13] = 5.16140079f;
    data->d[14] = 1.63145816f;
    data->d[15] = -1.83565962f;
    data->d[16] = 5.02516985f;
    data->d[17] = 1.18806267f;
    data->d[18] = -0.74676716f;
    data->d[19] = 0.11063831f;
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
    *(result->MaxResult()) = 0.00004612f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 1.32738245f;
    data->d[1] = -0.27694562f;
    data->d[2] = -0.07881758f;
    data->d[3] = 1.07996905f;
    data->d[4] = -2.37324548f;
    data->d[5] = -0.48193917f;
    data->d[6] = -0.09937377f;
    data->d[7] = -0.19035241f;
    data->d[8] = 1.33376455f;
    data->d[9] = -0.92238659f;
    data->d[10] = -0.10736623f;
    data->d[11] = -2.22328544f;
    data->d[12] = 5.54412270f;
    data->d[13] = 0.68662590f;
    data->d[14] = 4.05879307f;
    data->d[15] = 0.14395738f;
    data->d[16] = -7.68345594f;
    data->d[17] = -0.13543439f;
    data->d[18] = 3.28141999f;
    data->d[19] = -0.00761481f;
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
    *(result->MaxResult()) = 0.00023322f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -3.73821735f;
    data->d[1] = -1.26614845f;
    data->d[2] = -2.10826492f;
    data->d[3] = -0.87641495f;
    data->d[4] = 0.09178654f;
    data->d[5] = 0.83445477f;
    data->d[6] = 3.10776353f;
    data->d[7] = -0.13701035f;
    data->d[8] = -0.40761441f;
    data->d[9] = 0.59727192f;
    data->d[10] = 0.78528923f;
    data->d[11] = -0.25456250f;
    data->d[12] = -0.48497796f;
    data->d[13] = -1.65413547f;
    data->d[14] = -3.49547362f;
    data->d[15] = -0.23594624f;
    data->d[16] = 0.73239815f;
    data->d[17] = -2.77113581f;
    data->d[18] = -1.02676272f;
    data->d[19] = -0.55673027f;
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
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)1, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 0);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)1, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 9);
    code->SetOperation(14, (FireStarterOpcode)0, 6);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)1, 7);
    code->SetOperation(18, (FireStarterOpcode)1, 2);
    code->SetOperation(19, (FireStarterOpcode)1, 6);
    code->SetOperation(20, (FireStarterOpcode)1, 10);
    code->SetOperation(21, (FireStarterOpcode)1, 5);
    code->SetOperation(22, (FireStarterOpcode)0, 12);
    code->SetOperation(23, (FireStarterOpcode)0, 14);
    code->SetOperation(24, (FireStarterOpcode)1, 4);
    code->SetOperation(25, (FireStarterOpcode)0, 9);
    code->SetOperation(26, (FireStarterOpcode)1, 15);
    code->SetOperation(27, (FireStarterOpcode)0, 16);
    code->SetOperation(28, (FireStarterOpcode)0, 17);
    code->SetOperation(29, (FireStarterOpcode)1, 14);
    code->SetOperation(30, (FireStarterOpcode)0, 18);
    code->SetOperation(31, (FireStarterOpcode)0, 19);
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
    state.m_index = 2;
    state.m_evolveIndex = 2;
    state.m_id = 2;
    state.m_test = 13;
    state.m_seed = 2217370216984347803;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00023322f;
    state.m_oldResult = 0.01167333f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
