#pragma once
#include "FireStarterState.h"

// Run date: 02/17/25 09:31:52 Pacific Standard Time
// Run duration = 67.001703 seconds
// Run generation = 2
// Run evolution = 1
// Run max result = 0.00006228
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
// Run tests = 256
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
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
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00006228
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.09740233f;
    data->d[1] = -0.60027778f;
    data->d[2] = -1.32529795f;
    data->d[3] = -2.43317008f;
    data->d[4] = -0.50247568f;
    data->d[5] = -1.63397956f;
    data->d[6] = 7.70419216f;
    data->d[7] = -0.21381864f;
    data->d[8] = -1.60567772f;
    data->d[9] = -3.78691149f;
    data->d[10] = 1.71511590f;
    data->d[11] = 1.05134106f;
    data->d[12] = 0.77189326f;
    data->d[13] = -0.06356151f;
    data->d[14] = 2.22840238f;
    data->d[15] = 0.91341037f;
    data->d[16] = -2.55554008f;
    data->d[17] = 0.25039005f;
    data->d[18] = 0.00000000f;
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
    *(result->MinResult()) = 0.00006228f;
} // LoadVariation0

// Variation: 1  result = 0.00005602
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.06677687f;
    data->d[1] = -0.27067879f;
    data->d[2] = -0.55024433f;
    data->d[3] = 0.53300160f;
    data->d[4] = 1.73363054f;
    data->d[5] = -0.24538660f;
    data->d[6] = 2.66733599f;
    data->d[7] = -1.88818884f;
    data->d[8] = -0.34851322f;
    data->d[9] = 2.93270445f;
    data->d[10] = -1.67468214f;
    data->d[11] = -0.20943801f;
    data->d[12] = 0.63062179f;
    data->d[13] = -0.16200429f;
    data->d[14] = 1.83741140f;
    data->d[15] = -1.44114780f;
    data->d[16] = 0.13684767f;
    data->d[17] = 1.04004288f;
    data->d[18] = 0.00000000f;
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
    *(result->MinResult()) = 0.00005602f;
} // LoadVariation1

// Variation: 2  result = 0.00004769
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.13358194f;
    data->d[1] = 0.24408928f;
    data->d[2] = 1.04147577f;
    data->d[3] = 2.74805093f;
    data->d[4] = -0.48863134f;
    data->d[5] = 0.06214745f;
    data->d[6] = 0.35725167f;
    data->d[7] = -2.16032481f;
    data->d[8] = -0.07031519f;
    data->d[9] = -10.98138618f;
    data->d[10] = 3.28944945f;
    data->d[11] = -1.99245536f;
    data->d[12] = -0.56199670f;
    data->d[13] = 2.37929893f;
    data->d[14] = -11.23724651f;
    data->d[15] = 0.57151431f;
    data->d[16] = -4.61030436f;
    data->d[17] = 0.42810091f;
    data->d[18] = 0.00000000f;
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
    *(result->MinResult()) = 0.00004769f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.00006228f;
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)1, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)1, 8);
    code->SetOperation(9, (FireStarterOpcode)1, 4);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 4);
    code->SetOperation(12, (FireStarterOpcode)1, 1);
    code->SetOperation(13, (FireStarterOpcode)1, 10);
    code->SetOperation(14, (FireStarterOpcode)1, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 13);
    code->SetOperation(19, (FireStarterOpcode)1, 0);
    code->SetOperation(20, (FireStarterOpcode)0, 6);
    code->SetOperation(21, (FireStarterOpcode)1, 6);
    code->SetOperation(22, (FireStarterOpcode)1, 2);
    code->SetOperation(23, (FireStarterOpcode)0, 11);
    code->SetOperation(24, (FireStarterOpcode)0, 10);
    code->SetOperation(25, (FireStarterOpcode)1, 2);
    code->SetOperation(26, (FireStarterOpcode)0, 14);
    code->SetOperation(27, (FireStarterOpcode)0, 15);
    code->SetOperation(28, (FireStarterOpcode)0, 7);
    code->SetOperation(29, (FireStarterOpcode)1, 16);
    code->SetOperation(30, (FireStarterOpcode)0, 17);
    code->SetOperation(31, (FireStarterOpcode)0, 12);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 2;
    state.m_evolution = 1;
    state.m_index = 3;
    state.m_copy_index = 2;
    state.m_id = 2;
    state.m_test = 0;
    state.m_seed = 3813902123347575792;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00069373f;
    state.m_maxResult = 0.00006228f;
    state.m_evolveWeight = 0.000694f;
    state.m_optimizeValid = true;
} // LoadState
