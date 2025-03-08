#pragma once
#include "FireStarterState.h"

// Run date: 03/08/25 09:51:21 Pacific Standard Time
// Run duration = 24.400877 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00484959
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
// Run units = 1
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
    settings.m_units = 1;
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

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00089837f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -1.63087630f;
    data->d[1] = 2.22208476f;
    data->d[2] = 1.30987155f;
    data->d[3] = 0.03711772f;
    data->d[4] = -1.36638653f;
    data->d[5] = 0.31120846f;
    data->d[6] = 1.87805259f;
    data->d[7] = 1.26080525f;
    data->d[8] = -2.40903449f;
    data->d[9] = -0.03309384f;
    data->d[10] = 1.97330308f;
    data->d[11] = 3.71491408f;
    data->d[12] = -0.73210579f;
    data->d[13] = -2.62879682f;
    data->d[14] = -1.82539248f;
    data->d[15] = -0.30024970f;
    data->d[16] = -0.54629320f;
    data->d[17] = 1.18351638f;
    data->d[18] = -0.54437762f;
    data->d[19] = 4.09959173f;
    data->d[20] = 0.36822882f;
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
    *(result->MaxResult()) = 0.00449325f;
    *(result->EvolveAge1()) = 0;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -2.39063096f;
    data->d[1] = -1.02676868f;
    data->d[2] = 2.36096025f;
    data->d[3] = -2.86960793f;
    data->d[4] = -10.63254070f;
    data->d[5] = -0.07077775f;
    data->d[6] = -3.33436894f;
    data->d[7] = 0.12501879f;
    data->d[8] = 1.91431844f;
    data->d[9] = -2.36722016f;
    data->d[10] = -1.36447525f;
    data->d[11] = -0.10254585f;
    data->d[12] = 2.10729265f;
    data->d[13] = -0.91702831f;
    data->d[14] = 0.81029510f;
    data->d[15] = 0.07948556f;
    data->d[16] = -0.15199916f;
    data->d[17] = 4.73258829f;
    data->d[18] = 1.25074649f;
    data->d[19] = -0.76561135f;
    data->d[20] = 0.50648010f;
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
    *(result->MaxResult()) = 0.00484959f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.69312036f;
    data->d[1] = -2.53497052f;
    data->d[2] = -1.09279931f;
    data->d[3] = -4.68872118f;
    data->d[4] = -0.14260280f;
    data->d[5] = 0.24810767f;
    data->d[6] = 0.64120179f;
    data->d[7] = 1.02483499f;
    data->d[8] = -1.04127157f;
    data->d[9] = 0.99498165f;
    data->d[10] = -0.08331795f;
    data->d[11] = -1.82768953f;
    data->d[12] = 1.23739803f;
    data->d[13] = -0.98909825f;
    data->d[14] = -1.13088214f;
    data->d[15] = -0.41524035f;
    data->d[16] = 6.35349894f;
    data->d[17] = 0.37614763f;
    data->d[18] = -3.91522837f;
    data->d[19] = -0.97067022f;
    data->d[20] = -0.90963256f;
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
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)1, 8);
    code->SetOperation(9, (FireStarterOpcode)1, 9);
    code->SetOperation(10, (FireStarterOpcode)0, 10);
    code->SetOperation(11, (FireStarterOpcode)0, 11);
    code->SetOperation(12, (FireStarterOpcode)0, 12);
    code->SetOperation(13, (FireStarterOpcode)1, 13);
    code->SetOperation(14, (FireStarterOpcode)0, 14);
    code->SetOperation(15, (FireStarterOpcode)0, 9);
    code->SetOperation(16, (FireStarterOpcode)0, 15);
    code->SetOperation(17, (FireStarterOpcode)1, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 16);
    code->SetOperation(19, (FireStarterOpcode)0, 2);
    code->SetOperation(20, (FireStarterOpcode)0, 17);
    code->SetOperation(21, (FireStarterOpcode)0, 15);
    code->SetOperation(22, (FireStarterOpcode)1, 18);
    code->SetOperation(23, (FireStarterOpcode)0, 19);
    code->SetOperation(24, (FireStarterOpcode)0, 20);
    code->SetOperation(25, (FireStarterOpcode)1, 11);
    code->SetOperation(26, (FireStarterOpcode)1, 9);
    code->SetOperation(27, (FireStarterOpcode)1, 17);
    code->SetOperation(28, (FireStarterOpcode)0, 13);
    code->SetOperation(29, (FireStarterOpcode)0, 8);
    code->SetOperation(30, (FireStarterOpcode)1, 12);
    code->SetOperation(31, (FireStarterOpcode)0, 14);
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
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 64;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
