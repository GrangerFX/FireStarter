#pragma once
#include "FireStarterState.h"

// Run date: 05/24/25 11:34:58 Pacific Daylight Time
// Run duration = 61.584541 seconds
// Run test = 0
// Run generation = 89
// Run evolution = 0
// Run precision  = 0.00007634
// Run max result = 0.00008750
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
    *(result->MaxResult()) = 0.00001460f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -3.22961402f;
    data->d[1] = 0.78554451f;
    data->d[2] = -1.10016179f;
    data->d[3] = 0.36734995f;
    data->d[4] = 1.45554578f;
    data->d[5] = -0.31891426f;
    data->d[6] = 0.34013921f;
    data->d[7] = -1.84556365f;
    data->d[8] = 1.58457267f;
    data->d[9] = -2.14693785f;
    data->d[10] = -4.39813519f;
    data->d[11] = -0.75699741f;
    data->d[12] = 0.34536201f;
    data->d[13] = 1.51034188f;
    data->d[14] = 0.19835137f;
    data->d[15] = -1.19838238f;
    data->d[16] = -1.01696634f;
    data->d[17] = 3.74840713f;
    data->d[18] = -0.92383713f;
    data->d[19] = 0.13425985f;
    data->d[20] = 0.31470329f;
    data->d[21] = -0.66915309f;
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
    *(result->MaxResult()) = 0.00005364f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.79523385f;
    data->d[1] = -1.19116521f;
    data->d[2] = 1.00642395f;
    data->d[3] = 0.69777727f;
    data->d[4] = 0.61356002f;
    data->d[5] = 0.84919196f;
    data->d[6] = 0.85756165f;
    data->d[7] = -1.29406250f;
    data->d[8] = -1.51075673f;
    data->d[9] = -1.74339330f;
    data->d[10] = -0.95011210f;
    data->d[11] = 0.00980631f;
    data->d[12] = 10.77996159f;
    data->d[13] = 0.82869613f;
    data->d[14] = -1.66060162f;
    data->d[15] = -15.53862572f;
    data->d[16] = 9.10692120f;
    data->d[17] = 1.56673038f;
    data->d[18] = 5.24353743f;
    data->d[19] = 0.82551455f;
    data->d[20] = -0.94103938f;
    data->d[21] = 1.24220574f;
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
    *(result->MaxResult()) = 0.00008750f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -0.82278961f;
    data->d[1] = 1.55169797f;
    data->d[2] = -0.02790952f;
    data->d[3] = -1.29663539f;
    data->d[4] = 0.09068785f;
    data->d[5] = 0.75614190f;
    data->d[6] = -0.18586148f;
    data->d[7] = 0.67754990f;
    data->d[8] = 4.34587526f;
    data->d[9] = 1.93249476f;
    data->d[10] = -1.84849405f;
    data->d[11] = -1.21364474f;
    data->d[12] = 0.40555838f;
    data->d[13] = -3.33640885f;
    data->d[14] = 0.44394493f;
    data->d[15] = 1.36469567f;
    data->d[16] = 3.38857365f;
    data->d[17] = -0.75046009f;
    data->d[18] = 0.78486669f;
    data->d[19] = -1.95855224f;
    data->d[20] = 4.02391338f;
    data->d[21] = -3.28801870f;
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
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 0);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 4);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 5);
    code->SetOperation(17, (FireStarterOpcode)0, 14);
    code->SetOperation(18, (FireStarterOpcode)0, 13);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)1, 16);
    code->SetOperation(21, (FireStarterOpcode)0, 17);
    code->SetOperation(22, (FireStarterOpcode)1, 18);
    code->SetOperation(23, (FireStarterOpcode)0, 16);
    code->SetOperation(24, (FireStarterOpcode)0, 13);
    code->SetOperation(25, (FireStarterOpcode)0, 1);
    code->SetOperation(26, (FireStarterOpcode)1, 6);
    code->SetOperation(27, (FireStarterOpcode)0, 10);
    code->SetOperation(28, (FireStarterOpcode)1, 19);
    code->SetOperation(29, (FireStarterOpcode)0, 7);
    code->SetOperation(30, (FireStarterOpcode)1, 20);
    code->SetOperation(31, (FireStarterOpcode)1, 21);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 89;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 14210201010125936539;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00008750f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
