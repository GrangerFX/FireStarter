#pragma once
#include "FireStarterState.h"

// Run date: 06/22/25 18:01:55 Pacific Daylight Time
// Run duration = 7091.117626 seconds
// Run test = 5
// Run generation = 16
// Run evolution = 3
// Run precision  = 0.00005645
// Run max result = 0.00008178
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
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00006318f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -1.56577671f;
    data->d[1] = 2.80147290f;
    data->d[2] = 0.92064679f;
    data->d[3] = -0.01917683f;
    data->d[4] = 0.43466437f;
    data->d[5] = -4.48336124f;
    data->d[6] = 1.46681917f;
    data->d[7] = -2.62570667f;
    data->d[8] = 0.38681352f;
    data->d[9] = 0.80453098f;
    data->d[10] = 1.83554637f;
    data->d[11] = 1.51232624f;
    data->d[12] = 0.61790252f;
    data->d[13] = 1.31520844f;
    data->d[14] = 5.85963011f;
    data->d[15] = -0.09542149f;
    data->d[16] = 0.35222900f;
    data->d[17] = 7.03336477f;
    data->d[18] = 7.30806112f;
    data->d[19] = 1.09307110f;
    data->d[20] = 1.88051450f;
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
    *(result->MaxResult()) = 0.00008178f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -1.35121655f;
    data->d[1] = -1.38539946f;
    data->d[2] = -0.04146024f;
    data->d[3] = -2.03495622f;
    data->d[4] = -0.77160698f;
    data->d[5] = -0.69767118f;
    data->d[6] = 0.73898888f;
    data->d[7] = -1.08014655f;
    data->d[8] = 1.97269917f;
    data->d[9] = 8.69249439f;
    data->d[10] = -2.30799985f;
    data->d[11] = 2.36497092f;
    data->d[12] = 1.77561688f;
    data->d[13] = -0.72781146f;
    data->d[14] = 2.84116173f;
    data->d[15] = 0.75580156f;
    data->d[16] = -0.25264907f;
    data->d[17] = -1.14063370f;
    data->d[18] = -4.01136065f;
    data->d[19] = 1.19233215f;
    data->d[20] = 3.22093916f;
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
    *(result->MaxResult()) = 0.00003222f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -3.92679119f;
    data->d[1] = 0.59875470f;
    data->d[2] = 0.30133426f;
    data->d[3] = 1.12527180f;
    data->d[4] = 0.99114388f;
    data->d[5] = 0.35924163f;
    data->d[6] = -1.88706291f;
    data->d[7] = 1.74377978f;
    data->d[8] = 0.10065150f;
    data->d[9] = -0.19772850f;
    data->d[10] = 0.19331963f;
    data->d[11] = 3.41206336f;
    data->d[12] = 7.23721075f;
    data->d[13] = 1.52184415f;
    data->d[14] = 2.19117904f;
    data->d[15] = 0.71561283f;
    data->d[16] = -0.99861294f;
    data->d[17] = -2.06613064f;
    data->d[18] = -0.97867966f;
    data->d[19] = -0.06323894f;
    data->d[20] = -0.64067072f;
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
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 4);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 6);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 6);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 7);
    code->SetOperation(17, (FireStarterOpcode)1, 12);
    code->SetOperation(18, (FireStarterOpcode)0, 4);
    code->SetOperation(19, (FireStarterOpcode)0, 13);
    code->SetOperation(20, (FireStarterOpcode)0, 14);
    code->SetOperation(21, (FireStarterOpcode)1, 15);
    code->SetOperation(22, (FireStarterOpcode)0, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 18);
    code->SetOperation(25, (FireStarterOpcode)0, 12);
    code->SetOperation(26, (FireStarterOpcode)1, 5);
    code->SetOperation(27, (FireStarterOpcode)0, 6);
    code->SetOperation(28, (FireStarterOpcode)1, 7);
    code->SetOperation(29, (FireStarterOpcode)0, 19);
    code->SetOperation(30, (FireStarterOpcode)1, 20);
    code->SetOperation(31, (FireStarterOpcode)1, 3);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 16;
    state.m_evolution = 3;
    state.m_index = 7;
    state.m_evolveIndex = 1;
    state.m_id = 1;
    state.m_test = 5;
    state.m_seed = 892008113515728995;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00008178f;
    state.m_oldResult = 0.00018108f;
    state.m_evolveWeight = 0.002716f;
    state.m_optimizeValid = true;
} // LoadState
