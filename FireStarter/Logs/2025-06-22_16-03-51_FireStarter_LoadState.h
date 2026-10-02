#pragma once
#include "FireStarterState.h"

// Run date: 06/22/25 16:03:51 Pacific Daylight Time
// Run duration = 6564.544778 seconds
// Run test = 4
// Run generation = 220
// Run evolution = 7
// Run precision  = 0.00001356
// Run max result = 0.00000409
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
    *(result->MaxResult()) = 0.00000286f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = -0.24866121f;
    data->d[1] = -2.89292884f;
    data->d[2] = 0.00002149f;
    data->d[3] = 0.06386589f;
    data->d[4] = 5.84727430f;
    data->d[5] = -0.33301103f;
    data->d[6] = 0.00001534f;
    data->d[7] = -0.02518001f;
    data->d[8] = -5.36569309f;
    data->d[9] = 2.08707094f;
    data->d[10] = 2.18793702f;
    data->d[11] = 1.15137053f;
    data->d[12] = 2.02159166f;
    data->d[13] = -1.26908135f;
    data->d[14] = -0.13103469f;
    data->d[15] = 1.23846257f;
    data->d[16] = -9.76135349f;
    data->d[17] = -6.10469389f;
    data->d[18] = 2.60714769f;
    data->d[19] = 0.08294030f;
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
    *(result->MaxResult()) = 0.00000316f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = 1.96736836f;
    data->d[1] = -1.34666753f;
    data->d[2] = 1.77761936f;
    data->d[3] = -0.67614692f;
    data->d[4] = -2.26485562f;
    data->d[5] = 0.25746796f;
    data->d[6] = 0.00000296f;
    data->d[7] = 0.25508556f;
    data->d[8] = -1.59826040f;
    data->d[9] = -5.15464735f;
    data->d[10] = 0.97392792f;
    data->d[11] = -0.43010655f;
    data->d[12] = 0.81031603f;
    data->d[13] = -2.96168637f;
    data->d[14] = -2.56101680f;
    data->d[15] = -0.91778046f;
    data->d[16] = -0.95066750f;
    data->d[17] = 6.34613466f;
    data->d[18] = 0.02536756f;
    data->d[19] = -0.84831446f;
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
    *(result->MaxResult()) = 0.00000409f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = -1.56410682f;
    data->d[1] = -0.34927693f;
    data->d[2] = 0.43201581f;
    data->d[3] = -0.61991179f;
    data->d[4] = -7.66988611f;
    data->d[5] = 0.38180196f;
    data->d[6] = 0.00001232f;
    data->d[7] = 0.11046173f;
    data->d[8] = -1.41092730f;
    data->d[9] = 2.66904926f;
    data->d[10] = 1.47770143f;
    data->d[11] = 1.04713905f;
    data->d[12] = -1.13924217f;
    data->d[13] = -0.46093345f;
    data->d[14] = 0.84605348f;
    data->d[15] = -7.38340044f;
    data->d[16] = -0.04794944f;
    data->d[17] = 3.39032722f;
    data->d[18] = -0.60876840f;
    data->d[19] = -0.75672311f;
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
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 1);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 7);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 7);
    code->SetOperation(13, (FireStarterOpcode)0, 10);
    code->SetOperation(14, (FireStarterOpcode)1, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)1, 12);
    code->SetOperation(18, (FireStarterOpcode)0, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)0, 14);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)1, 11);
    code->SetOperation(23, (FireStarterOpcode)1, 13);
    code->SetOperation(24, (FireStarterOpcode)1, 17);
    code->SetOperation(25, (FireStarterOpcode)1, 17);
    code->SetOperation(26, (FireStarterOpcode)0, 16);
    code->SetOperation(27, (FireStarterOpcode)0, 9);
    code->SetOperation(28, (FireStarterOpcode)0, 5);
    code->SetOperation(29, (FireStarterOpcode)1, 2);
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
    state.m_generation = 220;
    state.m_evolution = 7;
    state.m_index = 9;
    state.m_evolveIndex = 56;
    state.m_id = 56;
    state.m_test = 4;
    state.m_seed = 4276251380066341633;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000409f;
    state.m_oldResult = 0.00001458f;
    state.m_evolveWeight = 0.000904f;
    state.m_optimizeValid = true;
} // LoadState
