#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 08:48:44 Pacific Daylight Time
// Run duration = 9.262711 seconds
// Run test = 0
// Run generation = 4
// Run evolution = 0
// Run precision  = 0.00014181
// Run max result = 0.00021033
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
    *(result->MaxResult()) = 0.00013235f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -4.13102436f;
    data->d[1] = 2.03493834f;
    data->d[2] = 0.70259249f;
    data->d[3] = -0.95523375f;
    data->d[4] = 0.70159423f;
    data->d[5] = -2.10839415f;
    data->d[6] = 1.61443496f;
    data->d[7] = 0.57957023f;
    data->d[8] = -0.75336438f;
    data->d[9] = -2.60491753f;
    data->d[10] = -0.10115018f;
    data->d[11] = -1.42626369f;
    data->d[12] = -0.69261366f;
    data->d[13] = -0.81167173f;
    data->d[14] = 6.01439524f;
    data->d[15] = -0.51214623f;
    data->d[16] = -0.14538892f;
    data->d[17] = 0.93079215f;
    data->d[18] = 2.63214421f;
    data->d[19] = -2.46124434f;
    data->d[20] = 0.65606397f;
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
    *(result->MaxResult()) = 0.00004517f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = 1.54931903f;
    data->d[1] = -4.24722433f;
    data->d[2] = -0.52304512f;
    data->d[3] = -0.60670447f;
    data->d[4] = -2.17229152f;
    data->d[5] = -1.06890976f;
    data->d[6] = -2.23349667f;
    data->d[7] = -0.07675941f;
    data->d[8] = 1.61656320f;
    data->d[9] = 1.56369543f;
    data->d[10] = -0.24057864f;
    data->d[11] = -2.92298698f;
    data->d[12] = -0.02129802f;
    data->d[13] = -1.25090957f;
    data->d[14] = -1.90551436f;
    data->d[15] = -1.05664361f;
    data->d[16] = 1.60957837f;
    data->d[17] = -4.83838654f;
    data->d[18] = -30.89088821f;
    data->d[19] = 0.25420147f;
    data->d[20] = -1.71275890f;
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
    *(result->MaxResult()) = 0.00021033f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -1.03048027f;
    data->d[1] = -1.15084982f;
    data->d[2] = 1.56745553f;
    data->d[3] = -1.22730088f;
    data->d[4] = 1.95224035f;
    data->d[5] = 2.22981143f;
    data->d[6] = 1.08744812f;
    data->d[7] = -0.09274253f;
    data->d[8] = -1.79943371f;
    data->d[9] = -1.50113535f;
    data->d[10] = 1.81686628f;
    data->d[11] = 0.43452570f;
    data->d[12] = -0.28704268f;
    data->d[13] = -2.37294292f;
    data->d[14] = -2.12547517f;
    data->d[15] = -1.54366982f;
    data->d[16] = -0.01599001f;
    data->d[17] = 0.17287970f;
    data->d[18] = -1.65662467f;
    data->d[19] = 0.49273908f;
    data->d[20] = -3.69329500f;
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
    code->SetOperation(5, (FireStarterOpcode)1, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)1, 2);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 7);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 6);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)0, 8);
    code->SetOperation(18, (FireStarterOpcode)1, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)1, 3);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)1, 6);
    code->SetOperation(23, (FireStarterOpcode)0, 16);
    code->SetOperation(24, (FireStarterOpcode)1, 17);
    code->SetOperation(25, (FireStarterOpcode)0, 8);
    code->SetOperation(26, (FireStarterOpcode)0, 18);
    code->SetOperation(27, (FireStarterOpcode)0, 14);
    code->SetOperation(28, (FireStarterOpcode)0, 19);
    code->SetOperation(29, (FireStarterOpcode)0, 10);
    code->SetOperation(30, (FireStarterOpcode)0, 20);
    code->SetOperation(31, (FireStarterOpcode)0, 4);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 4;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 6442130765217653836;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00021033f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
