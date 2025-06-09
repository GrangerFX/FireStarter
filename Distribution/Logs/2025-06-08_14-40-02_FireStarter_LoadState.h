#pragma once
#include "FireStarterState.h"

// Run date: 06/08/25 14:40:02 Pacific Daylight Time
// Run duration = 7856.566614 seconds
// Run test = 9
// Run generation = 71
// Run evolution = 3
// Run precision  = 0.00003463
// Run max result = 0.00004476
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_SELECT
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run population = 32768
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

    settings.m_mode = FIRESTARTER_EVOLVE_SELECT;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_population = 32768;
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
    *(result->MaxResult()) = 0.00004476f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -1.16065276f;
    data->d[1] = -0.81729507f;
    data->d[2] = -0.44165400f;
    data->d[3] = 0.40407115f;
    data->d[4] = 1.82794058f;
    data->d[5] = -1.18476868f;
    data->d[6] = 2.34046078f;
    data->d[7] = -0.43913922f;
    data->d[8] = -0.34448969f;
    data->d[9] = 0.14174674f;
    data->d[10] = -0.66929996f;
    data->d[11] = 2.18140984f;
    data->d[12] = -0.25365582f;
    data->d[13] = -0.38471481f;
    data->d[14] = -0.61484921f;
    data->d[15] = 1.65457499f;
    data->d[16] = 9.00243855f;
    data->d[17] = -1.41758966f;
    data->d[18] = -5.17983246f;
    data->d[19] = 2.14930487f;
    data->d[20] = -0.40901786f;
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
    *(result->MaxResult()) = 0.00002021f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -3.58997965f;
    data->d[1] = 0.81563121f;
    data->d[2] = 1.79937255f;
    data->d[3] = -0.45349014f;
    data->d[4] = 0.63133848f;
    data->d[5] = 0.63107359f;
    data->d[6] = -0.07732577f;
    data->d[7] = 0.27174449f;
    data->d[8] = -0.35413319f;
    data->d[9] = 1.97477305f;
    data->d[10] = -0.27950957f;
    data->d[11] = 1.19692910f;
    data->d[12] = 0.98841131f;
    data->d[13] = 0.54813987f;
    data->d[14] = -1.41409850f;
    data->d[15] = 6.14419937f;
    data->d[16] = 23.46198654f;
    data->d[17] = 0.43160531f;
    data->d[18] = -2.09032035f;
    data->d[19] = -4.61388111f;
    data->d[20] = -0.94032085f;
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
    *(result->MaxResult()) = 0.00001788f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -2.37675977f;
    data->d[1] = -1.54778266f;
    data->d[2] = 1.03464532f;
    data->d[3] = 0.16704839f;
    data->d[4] = -1.59457505f;
    data->d[5] = 2.84381604f;
    data->d[6] = -2.27562165f;
    data->d[7] = 0.28431693f;
    data->d[8] = 4.14963436f;
    data->d[9] = 0.10808276f;
    data->d[10] = 1.09099817f;
    data->d[11] = -10.94017029f;
    data->d[12] = -0.01551201f;
    data->d[13] = -2.92679214f;
    data->d[14] = 0.74656105f;
    data->d[15] = 5.30191422f;
    data->d[16] = 0.15310600f;
    data->d[17] = -2.49119568f;
    data->d[18] = -1.05783463f;
    data->d[19] = -0.99167973f;
    data->d[20] = -0.34210628f;
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
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)1, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 3);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 4);
    code->SetOperation(12, (FireStarterOpcode)1, 1);
    code->SetOperation(13, (FireStarterOpcode)0, 10);
    code->SetOperation(14, (FireStarterOpcode)1, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)1, 14);
    code->SetOperation(18, (FireStarterOpcode)1, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 11);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)1, 1);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 4);
    code->SetOperation(25, (FireStarterOpcode)0, 18);
    code->SetOperation(26, (FireStarterOpcode)0, 14);
    code->SetOperation(27, (FireStarterOpcode)1, 19);
    code->SetOperation(28, (FireStarterOpcode)0, 13);
    code->SetOperation(29, (FireStarterOpcode)1, 12);
    code->SetOperation(30, (FireStarterOpcode)0, 20);
    code->SetOperation(31, (FireStarterOpcode)1, 12);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 71;
    state.m_evolution = 3;
    state.m_index = 11;
    state.m_evolveIndex = 31;
    state.m_id = 31;
    state.m_test = 9;
    state.m_seed = 8994550608196025477;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00004476f;
    state.m_oldResult = 0.00009161f;
    state.m_evolveWeight = 0.006413f;
    state.m_optimizeValid = true;
} // LoadState
