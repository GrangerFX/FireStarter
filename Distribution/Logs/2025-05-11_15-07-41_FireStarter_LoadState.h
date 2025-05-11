#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 15:07:41 Pacific Daylight Time
// Run duration = 16.353523 seconds
// Run test = 0
// Run generation = 17
// Run evolution = 0
// Run precision  = 0.00036514
// Run max result = 0.00039387
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
    *(result->MaxResult()) = 0.00001299f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -2.98033834f;
    data->d[1] = -0.61399919f;
    data->d[2] = 0.16488831f;
    data->d[3] = 1.32015944f;
    data->d[4] = 0.25928739f;
    data->d[5] = -1.33613586f;
    data->d[6] = 1.25578427f;
    data->d[7] = 1.41084218f;
    data->d[8] = 1.06420434f;
    data->d[9] = -1.47958195f;
    data->d[10] = 0.30629799f;
    data->d[11] = 2.81543136f;
    data->d[12] = 0.36381790f;
    data->d[13] = -1.64172447f;
    data->d[14] = -0.31952718f;
    data->d[15] = 0.96369106f;
    data->d[16] = 1.21759593f;
    data->d[17] = -0.85851818f;
    data->d[18] = 6.32720184f;
    data->d[19] = -4.14004755f;
    data->d[20] = -0.03705725f;
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
    *(result->MaxResult()) = 0.00016224f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.75586313f;
    data->d[1] = 1.26564014f;
    data->d[2] = -0.55724853f;
    data->d[3] = 1.48728216f;
    data->d[4] = 0.91597795f;
    data->d[5] = -2.08259964f;
    data->d[6] = -1.11060405f;
    data->d[7] = 0.39362723f;
    data->d[8] = 0.00871894f;
    data->d[9] = 0.35588568f;
    data->d[10] = 0.89850193f;
    data->d[11] = 1.42673719f;
    data->d[12] = -0.59575450f;
    data->d[13] = 1.01482248f;
    data->d[14] = -2.62605000f;
    data->d[15] = 0.11864909f;
    data->d[16] = -3.10154438f;
    data->d[17] = 2.33264565f;
    data->d[18] = 3.42458463f;
    data->d[19] = -3.38631916f;
    data->d[20] = 0.78541982f;
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
    *(result->MaxResult()) = 0.00039387f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -0.63195968f;
    data->d[1] = 0.39078921f;
    data->d[2] = -2.69749904f;
    data->d[3] = -0.08902185f;
    data->d[4] = 7.65717363f;
    data->d[5] = -0.85228628f;
    data->d[6] = 0.78207695f;
    data->d[7] = 4.33700275f;
    data->d[8] = -0.80320030f;
    data->d[9] = -0.83943820f;
    data->d[10] = -0.64983165f;
    data->d[11] = 0.56905264f;
    data->d[12] = 1.46657205f;
    data->d[13] = 3.26973510f;
    data->d[14] = 0.53977990f;
    data->d[15] = 2.02623153f;
    data->d[16] = -0.15027717f;
    data->d[17] = 2.06885338f;
    data->d[18] = 2.83526683f;
    data->d[19] = -2.74935031f;
    data->d[20] = -0.21146747f;
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
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)1, 2);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 3);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 10);
    code->SetOperation(17, (FireStarterOpcode)0, 14);
    code->SetOperation(18, (FireStarterOpcode)1, 15);
    code->SetOperation(19, (FireStarterOpcode)0, 7);
    code->SetOperation(20, (FireStarterOpcode)0, 10);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)1, 17);
    code->SetOperation(23, (FireStarterOpcode)0, 12);
    code->SetOperation(24, (FireStarterOpcode)1, 18);
    code->SetOperation(25, (FireStarterOpcode)1, 10);
    code->SetOperation(26, (FireStarterOpcode)1, 19);
    code->SetOperation(27, (FireStarterOpcode)0, 0);
    code->SetOperation(28, (FireStarterOpcode)0, 20);
    code->SetOperation(29, (FireStarterOpcode)1, 17);
    code->SetOperation(30, (FireStarterOpcode)0, 9);
    code->SetOperation(31, (FireStarterOpcode)1, 15);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 17;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 8932311678465477187;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00039387f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
