#pragma once
#include "FireStarterState.h"

// Run date: 09/24/26 16:56:19 Pacific Daylight Time
// Run duration = 4526.237161 seconds
// Run test = 15
// Run generation = 37
// Run evolution = 5
// Run precision  = 0.00000591
// Run max result = 0.00000077

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
// Run units = 8
// Run states = 16
// Run population = 348160
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
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_population = 348160;
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
    *(result->MaxResult()) = 0.00000011f;
    *(result->EvolveAge()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.84044003f;
    data->d[2] = -0.23756808f;
    data->d[3] = 0.68224776f;
    data->d[4] = -0.18313593f;
    data->d[5] = -0.28680381f;
    data->d[6] = 0.59183300f;
    data->d[7] = -1.65105605f;
    data->d[8] = 0.52289617f;
    data->d[9] = 3.27971268f;
    data->d[10] = 0.34898508f;
    data->d[11] = -0.99188358f;
    data->d[12] = -4.22227335f;
    data->d[13] = 1.51879346f;
    data->d[14] = 3.42122173f;
    data->d[15] = 2.97092748f;
    data->d[16] = -1.81915593f;
    data->d[17] = 0.00000001f;
    data->d[18] = 3.45365810f;
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
    *(result->MaxResult()) = 0.00000077f;
    *(result->EvolveAge()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09065866f;
    data->d[1] = 0.27133259f;
    data->d[2] = 0.46390963f;
    data->d[3] = -1.30371439f;
    data->d[4] = -2.43848038f;
    data->d[5] = -0.67127091f;
    data->d[6] = -3.38942790f;
    data->d[7] = -0.08503398f;
    data->d[8] = 1.54021466f;
    data->d[9] = 0.69073933f;
    data->d[10] = -0.09668607f;
    data->d[11] = 1.94610858f;
    data->d[12] = 2.21993446f;
    data->d[13] = -2.54893756f;
    data->d[14] = 3.18345737f;
    data->d[15] = -1.84855425f;
    data->d[16] = 0.19777904f;
    data->d[17] = -0.06550631f;
    data->d[18] = 1.80336630f;
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
    *(result->MaxResult()) = 0.00000070f;
    *(result->EvolveAge()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61799383f;
    data->d[1] = 0.71683151f;
    data->d[2] = 1.28561616f;
    data->d[3] = 0.11042530f;
    data->d[4] = -0.05160673f;
    data->d[5] = 1.38366449f;
    data->d[6] = -2.30657983f;
    data->d[7] = 2.09082866f;
    data->d[8] = 3.31417179f;
    data->d[9] = -0.11525213f;
    data->d[10] = 0.19551146f;
    data->d[11] = 0.03817833f;
    data->d[12] = -2.25656486f;
    data->d[13] = 0.16125834f;
    data->d[14] = 0.26112613f;
    data->d[15] = -1.59349287f;
    data->d[16] = -3.83027506f;
    data->d[17] = 0.17899141f;
    data->d[18] = 2.92527294f;
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
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)1, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 3);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 5);
    code->SetOperation(12, (FireStarterOpcode)0, 9);
    code->SetOperation(13, (FireStarterOpcode)0, 10);
    code->SetOperation(14, (FireStarterOpcode)0, 5);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)1, 6);
    code->SetOperation(17, (FireStarterOpcode)1, 11);
    code->SetOperation(18, (FireStarterOpcode)1, 12);
    code->SetOperation(19, (FireStarterOpcode)0, 13);
    code->SetOperation(20, (FireStarterOpcode)0, 3);
    code->SetOperation(21, (FireStarterOpcode)1, 14);
    code->SetOperation(22, (FireStarterOpcode)0, 5);
    code->SetOperation(23, (FireStarterOpcode)1, 8);
    code->SetOperation(24, (FireStarterOpcode)1, 15);
    code->SetOperation(25, (FireStarterOpcode)0, 6);
    code->SetOperation(26, (FireStarterOpcode)0, 6);
    code->SetOperation(27, (FireStarterOpcode)0, 16);
    code->SetOperation(28, (FireStarterOpcode)0, 10);
    code->SetOperation(29, (FireStarterOpcode)0, 0);
    code->SetOperation(30, (FireStarterOpcode)1, 17);
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
    state.m_generation = 37;
    state.m_evolution = 5;
    state.m_index = 9;
    state.m_evolveIndex = 14;
    state.m_id = 14;
    state.m_test = 15;
    state.m_seed = 1035561846953195071;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000077f;
    state.m_oldResult = 0.00000122f;
    state.m_evolveWeight = 0.000214f;
    state.m_optimizeValid = true;
} // LoadState
