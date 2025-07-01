#pragma once
#include "FireStarterState.h"

// Run date: 07/01/25 09:38:21 Pacific Daylight Time
// Run duration = 1784.771042 seconds
// Run test = 2
// Run generation = 0
// Run evolution = 0
// Run precision  = 0.00017377
// Run max result = 0.00020453
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
// Run tests = 16
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
    settings.m_tests = 16;
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
    *(result->MaxResult()) = 0.00020453f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = 0.37815472f;
    data->d[1] = 0.54543668f;
    data->d[2] = -2.17395234f;
    data->d[3] = -0.22331005f;
    data->d[4] = -1.93418396f;
    data->d[5] = 1.28459978f;
    data->d[6] = -1.77456117f;
    data->d[7] = -0.02559730f;
    data->d[8] = 1.58241153f;
    data->d[9] = -2.34624743f;
    data->d[10] = 3.43394136f;
    data->d[11] = -3.63732100f;
    data->d[12] = -3.85679650f;
    data->d[13] = -1.22829568f;
    data->d[14] = -0.40889844f;
    data->d[15] = -1.23919034f;
    data->d[16] = -1.51888156f;
    data->d[17] = -1.86643851f;
    data->d[18] = 0.47591013f;
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
    *(result->MaxResult()) = 0.00002345f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = 0.15620634f;
    data->d[1] = -2.78148437f;
    data->d[2] = -3.64173436f;
    data->d[3] = 0.18441178f;
    data->d[4] = -1.53485608f;
    data->d[5] = -0.93674505f;
    data->d[6] = 0.80875266f;
    data->d[7] = 0.34351969f;
    data->d[8] = 2.51978207f;
    data->d[9] = 2.36852503f;
    data->d[10] = -0.45154923f;
    data->d[11] = 1.05311036f;
    data->d[12] = -1.35923564f;
    data->d[13] = -0.73686439f;
    data->d[14] = 0.68458444f;
    data->d[15] = -4.92476463f;
    data->d[16] = 0.30262744f;
    data->d[17] = 0.31792009f;
    data->d[18] = -0.44470614f;
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
    *(result->MaxResult()) = 0.00007887f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.23545083f;
    data->d[1] = 0.91841924f;
    data->d[2] = -2.02386308f;
    data->d[3] = -0.39737707f;
    data->d[4] = -1.65762103f;
    data->d[5] = -0.49074507f;
    data->d[6] = 0.40919331f;
    data->d[7] = 1.67671382f;
    data->d[8] = 1.56674814f;
    data->d[9] = -0.82008880f;
    data->d[10] = -0.49497086f;
    data->d[11] = -0.49506062f;
    data->d[12] = 0.41407493f;
    data->d[13] = -0.76830620f;
    data->d[14] = -0.50386447f;
    data->d[15] = 0.47432613f;
    data->d[16] = -0.16828489f;
    data->d[17] = -1.43382251f;
    data->d[18] = 0.85448265f;
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
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 9);
    code->SetOperation(10, (FireStarterOpcode)0, 10);
    code->SetOperation(11, (FireStarterOpcode)0, 1);
    code->SetOperation(12, (FireStarterOpcode)0, 7);
    code->SetOperation(13, (FireStarterOpcode)0, 8);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)1, 13);
    code->SetOperation(17, (FireStarterOpcode)1, 0);
    code->SetOperation(18, (FireStarterOpcode)1, 3);
    code->SetOperation(19, (FireStarterOpcode)0, 1);
    code->SetOperation(20, (FireStarterOpcode)0, 2);
    code->SetOperation(21, (FireStarterOpcode)0, 9);
    code->SetOperation(22, (FireStarterOpcode)1, 3);
    code->SetOperation(23, (FireStarterOpcode)0, 14);
    code->SetOperation(24, (FireStarterOpcode)1, 15);
    code->SetOperation(25, (FireStarterOpcode)0, 15);
    code->SetOperation(26, (FireStarterOpcode)1, 16);
    code->SetOperation(27, (FireStarterOpcode)0, 17);
    code->SetOperation(28, (FireStarterOpcode)1, 10);
    code->SetOperation(29, (FireStarterOpcode)0, 5);
    code->SetOperation(30, (FireStarterOpcode)1, 7);
    code->SetOperation(31, (FireStarterOpcode)0, 18);
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
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 2;
    state.m_seed = 17781087309389859058;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00020453f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
