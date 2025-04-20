#pragma once
#include "FireStarterState.h"

// Run date: 04/20/25 15:12:15 Pacific Daylight Time
// Run duration = 2514.625825 seconds
// Run generation = 910
// Run evolution = 7
// Run max result = 0.00000872
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
    *(result->MaxResult()) = 0.00000010f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.88789922f;
    data->d[2] = 0.26107287f;
    data->d[3] = 0.19525245f;
    data->d[4] = 2.44969225f;
    data->d[5] = -4.04117680f;
    data->d[6] = -1.66824400f;
    data->d[7] = -0.95839787f;
    data->d[8] = -1.38251138f;
    data->d[9] = 5.08992815f;
    data->d[10] = -0.94399238f;
    data->d[11] = -0.22876546f;
    data->d[12] = -0.60462624f;
    data->d[13] = -1.09828734f;
    data->d[14] = -0.29065102f;
    data->d[15] = 14.06520271f;
    data->d[16] = 2.04189706f;
    data->d[17] = 0.00000000f;
    data->d[18] = -5.06222248f;
    data->d[19] = -1.36347079f;
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
    *(result->MaxResult()) = 0.00000471f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09065509f;
    data->d[1] = -0.84881067f;
    data->d[2] = -1.33685470f;
    data->d[3] = -0.03800767f;
    data->d[4] = -2.35962796f;
    data->d[5] = 2.31618786f;
    data->d[6] = 0.14485221f;
    data->d[7] = 2.62370491f;
    data->d[8] = -20.10730362f;
    data->d[9] = -0.54372603f;
    data->d[10] = -3.64473224f;
    data->d[11] = -0.18187594f;
    data->d[12] = -2.60829496f;
    data->d[13] = -1.07296765f;
    data->d[14] = 1.58442628f;
    data->d[15] = 4.45135164f;
    data->d[16] = -0.51817465f;
    data->d[17] = -0.03961236f;
    data->d[18] = -1.39503777f;
    data->d[19] = 4.12545490f;
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
    *(result->MaxResult()) = 0.00000872f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61799312f;
    data->d[1] = 0.37940642f;
    data->d[2] = -0.41306263f;
    data->d[3] = -0.20439517f;
    data->d[4] = -0.32983026f;
    data->d[5] = 1.57007635f;
    data->d[6] = -2.42934132f;
    data->d[7] = -0.67369425f;
    data->d[8] = 0.83883011f;
    data->d[9] = -2.23761415f;
    data->d[10] = -2.93180466f;
    data->d[11] = -0.32960343f;
    data->d[12] = 4.05907536f;
    data->d[13] = 1.67955530f;
    data->d[14] = 2.24344635f;
    data->d[15] = 0.74236995f;
    data->d[16] = -0.32108960f;
    data->d[17] = 1.39633477f;
    data->d[18] = 1.07031798f;
    data->d[19] = -1.09111392f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)1, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 5);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 5);
    code->SetOperation(14, (FireStarterOpcode)0, 2);
    code->SetOperation(15, (FireStarterOpcode)0, 9);
    code->SetOperation(16, (FireStarterOpcode)0, 11);
    code->SetOperation(17, (FireStarterOpcode)0, 12);
    code->SetOperation(18, (FireStarterOpcode)0, 13);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 6);
    code->SetOperation(21, (FireStarterOpcode)0, 15);
    code->SetOperation(22, (FireStarterOpcode)0, 10);
    code->SetOperation(23, (FireStarterOpcode)1, 1);
    code->SetOperation(24, (FireStarterOpcode)0, 6);
    code->SetOperation(25, (FireStarterOpcode)0, 1);
    code->SetOperation(26, (FireStarterOpcode)1, 10);
    code->SetOperation(27, (FireStarterOpcode)1, 16);
    code->SetOperation(28, (FireStarterOpcode)0, 17);
    code->SetOperation(29, (FireStarterOpcode)0, 18);
    code->SetOperation(30, (FireStarterOpcode)1, 10);
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
    state.m_generation = 910;
    state.m_evolution = 7;
    state.m_index = 12;
    state.m_evolveIndex = 91;
    state.m_id = 91;
    state.m_test = 0;
    state.m_seed = 10663314226916665492;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00001560f;
    state.m_evolveWeight = 0.014185f;
    state.m_optimizeValid = true;
} // LoadState
