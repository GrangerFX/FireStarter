#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 15:54:15 Pacific Daylight Time
// Run duration = 683.563963 seconds
// Run test = 0
// Run generation = 1025
// Run evolution = 0
// Run precision  = 0.00014734
// Run max result = 0.00003672
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
    *(result->MaxResult()) = 0.00000006f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 1.55361807f;
    data->d[2] = 0.06128227f;
    data->d[3] = -0.47081831f;
    data->d[4] = 3.09143162f;
    data->d[5] = 0.44262388f;
    data->d[6] = -0.06151052f;
    data->d[7] = -0.55445451f;
    data->d[8] = -0.46027544f;
    data->d[9] = -5.54561806f;
    data->d[10] = -4.38640642f;
    data->d[11] = 4.28778887f;
    data->d[12] = 4.22080088f;
    data->d[13] = -11.01013374f;
    data->d[14] = -0.00000002f;
    data->d[15] = 3.53225994f;
    data->d[16] = -3.67959261f;
    data->d[17] = -0.47460982f;
    data->d[18] = 0.27493018f;
    data->d[19] = 0.51202995f;
    data->d[20] = -1.54441595f;
    data->d[21] = -0.28752136f;
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
    *(result->MaxResult()) = 0.00001645f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09126949f;
    data->d[1] = -0.25540552f;
    data->d[2] = 0.99921012f;
    data->d[3] = 0.11330707f;
    data->d[4] = -0.56697333f;
    data->d[5] = -1.39975667f;
    data->d[6] = -0.51045686f;
    data->d[7] = -0.44237372f;
    data->d[8] = 0.08347479f;
    data->d[9] = -2.97520089f;
    data->d[10] = 2.89447927f;
    data->d[11] = 1.85346091f;
    data->d[12] = -3.26486301f;
    data->d[13] = 5.39705658f;
    data->d[14] = -0.04309278f;
    data->d[15] = 7.01562119f;
    data->d[16] = 4.74311447f;
    data->d[17] = 4.16802263f;
    data->d[18] = -0.46257201f;
    data->d[19] = 0.52240223f;
    data->d[20] = 1.78772807f;
    data->d[21] = 0.23119156f;
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
    *(result->MaxResult()) = 0.00003672f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -2.62100482f;
    data->d[1] = 1.65265322f;
    data->d[2] = 0.09589564f;
    data->d[3] = 1.00184715f;
    data->d[4] = 0.53579032f;
    data->d[5] = 1.64845204f;
    data->d[6] = -0.12799506f;
    data->d[7] = 0.91135430f;
    data->d[8] = -2.21878505f;
    data->d[9] = -1.36994088f;
    data->d[10] = 2.24976349f;
    data->d[11] = -0.01713894f;
    data->d[12] = -0.06658515f;
    data->d[13] = -4.03413820f;
    data->d[14] = -0.13079727f;
    data->d[15] = -1.35678065f;
    data->d[16] = 0.95041943f;
    data->d[17] = -2.87711525f;
    data->d[18] = -1.32734334f;
    data->d[19] = -3.66052246f;
    data->d[20] = 1.36704946f;
    data->d[21] = 0.33471674f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 0);
    code->SetOperation(3, (FireStarterOpcode)0, 2);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 5);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 11);
    code->SetOperation(14, (FireStarterOpcode)1, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)1, 13);
    code->SetOperation(17, (FireStarterOpcode)0, 14);
    code->SetOperation(18, (FireStarterOpcode)1, 15);
    code->SetOperation(19, (FireStarterOpcode)1, 16);
    code->SetOperation(20, (FireStarterOpcode)1, 7);
    code->SetOperation(21, (FireStarterOpcode)1, 17);
    code->SetOperation(22, (FireStarterOpcode)0, 6);
    code->SetOperation(23, (FireStarterOpcode)1, 18);
    code->SetOperation(24, (FireStarterOpcode)0, 17);
    code->SetOperation(25, (FireStarterOpcode)0, 8);
    code->SetOperation(26, (FireStarterOpcode)0, 1);
    code->SetOperation(27, (FireStarterOpcode)0, 19);
    code->SetOperation(28, (FireStarterOpcode)0, 10);
    code->SetOperation(29, (FireStarterOpcode)0, 20);
    code->SetOperation(30, (FireStarterOpcode)0, 21);
    code->SetOperation(31, (FireStarterOpcode)1, 14);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 1025;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 9035786026873701651;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00003672f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
