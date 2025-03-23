#pragma once
#include "FireStarterState.h"

// Run date: 03/23/25 13:07:44 Pacific Daylight Time
// Run duration = 286.964189 seconds
// Run generation = 42
// Run evolution = 3
// Run max result = 0.00035022
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

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
// Run population = 278528
// Run generations = 0
// Run passes = 500
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 4;

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
    settings.m_population = 278528;
    settings.m_generations = 0;
    settings.m_passes = 500;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00035022f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -0.19950999f;
    data->d[1] = -0.89550579f;
    data->d[2] = -0.52259648f;
    data->d[3] = 1.44966531f;
    data->d[4] = -1.85997188f;
    data->d[5] = 0.63672608f;
    data->d[6] = -0.97461534f;
    data->d[7] = 1.51247954f;
    data->d[8] = 0.16098578f;
    data->d[9] = -0.90788889f;
    data->d[10] = -0.26655677f;
    data->d[11] = -0.67286867f;
    data->d[12] = -0.82503659f;
    data->d[13] = 2.97249794f;
    data->d[14] = 1.00065219f;
    data->d[15] = -0.06824362f;
    data->d[16] = -0.05352835f;
    data->d[17] = 0.58169752f;
    data->d[18] = 0.31295314f;
    data->d[19] = 0.90416205f;
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
    *(result->MaxResult()) = 0.00025833f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -0.19914150f;
    data->d[1] = 0.96295130f;
    data->d[2] = 1.51778340f;
    data->d[3] = -1.62619150f;
    data->d[4] = -1.59578824f;
    data->d[5] = 0.38007757f;
    data->d[6] = -0.54736167f;
    data->d[7] = -1.76038086f;
    data->d[8] = 2.20783424f;
    data->d[9] = 0.07346682f;
    data->d[10] = 0.86138988f;
    data->d[11] = -0.45452532f;
    data->d[12] = 0.78437513f;
    data->d[13] = -2.06685019f;
    data->d[14] = -2.11330199f;
    data->d[15] = -0.02451383f;
    data->d[16] = 0.54321140f;
    data->d[17] = 0.06202110f;
    data->d[18] = -4.43659306f;
    data->d[19] = 1.91285372f;
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
    *(result->MaxResult()) = 0.00034419f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = 0.19088247f;
    data->d[1] = -0.74820614f;
    data->d[2] = -2.89929032f;
    data->d[3] = 1.34865487f;
    data->d[4] = -1.88946450f;
    data->d[5] = 0.59610569f;
    data->d[6] = -0.95782769f;
    data->d[7] = 0.25329012f;
    data->d[8] = 0.29213622f;
    data->d[9] = 1.54776168f;
    data->d[10] = -2.53598118f;
    data->d[11] = 0.61468154f;
    data->d[12] = -1.20426834f;
    data->d[13] = -1.76756001f;
    data->d[14] = 2.29762936f;
    data->d[15] = -0.45853564f;
    data->d[16] = 0.40375260f;
    data->d[17] = 0.05055635f;
    data->d[18] = 2.71568966f;
    data->d[19] = 6.39668703f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 1);
    code->SetOperation(3, (FireStarterOpcode)0, 2);
    code->SetOperation(4, (FireStarterOpcode)1, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 1);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 11);
    code->SetOperation(14, (FireStarterOpcode)1, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 14);
    code->SetOperation(17, (FireStarterOpcode)0, 9);
    code->SetOperation(18, (FireStarterOpcode)0, 4);
    code->SetOperation(19, (FireStarterOpcode)0, 7);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)1, 2);
    code->SetOperation(22, (FireStarterOpcode)0, 4);
    code->SetOperation(23, (FireStarterOpcode)1, 16);
    code->SetOperation(24, (FireStarterOpcode)1, 0);
    code->SetOperation(25, (FireStarterOpcode)0, 17);
    code->SetOperation(26, (FireStarterOpcode)0, 13);
    code->SetOperation(27, (FireStarterOpcode)0, 11);
    code->SetOperation(28, (FireStarterOpcode)0, 17);
    code->SetOperation(29, (FireStarterOpcode)0, 18);
    code->SetOperation(30, (FireStarterOpcode)0, 19);
    code->SetOperation(31, (FireStarterOpcode)1, 0);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 42;
    state.m_evolution = 3;
    state.m_index = 8;
    state.m_evolveIndex = 23;
    state.m_id = 23;
    state.m_test = 0;
    state.m_seed = 1585209406487006335;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00052583f;
    state.m_evolveWeight = 0.021559f;
    state.m_optimizeValid = true;
} // LoadState
