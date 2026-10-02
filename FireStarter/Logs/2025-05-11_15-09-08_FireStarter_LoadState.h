#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 15:09:08 Pacific Daylight Time
// Run duration = 31.251961 seconds
// Run test = 0
// Run generation = 40
// Run evolution = 0
// Run precision  = 0.00005873
// Run max result = 0.00008111
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
    *(result->MaxResult()) = 0.00001369f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = -0.31914255f;
    data->d[1] = 1.49973440f;
    data->d[2] = 0.97875017f;
    data->d[3] = 0.47306991f;
    data->d[4] = -0.51843464f;
    data->d[5] = -2.24690056f;
    data->d[6] = -1.11848187f;
    data->d[7] = 3.75115323f;
    data->d[8] = 1.02489924f;
    data->d[9] = 0.17559330f;
    data->d[10] = -4.09553909f;
    data->d[11] = -1.92803979f;
    data->d[12] = -0.16059333f;
    data->d[13] = -0.55676383f;
    data->d[14] = -0.51462573f;
    data->d[15] = 0.36683217f;
    data->d[16] = 1.89573920f;
    data->d[17] = 1.14850223f;
    data->d[18] = -1.08951807f;
    data->d[19] = -0.91784716f;
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
    *(result->MaxResult()) = 0.00008111f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = 0.59963179f;
    data->d[1] = -0.42839396f;
    data->d[2] = 0.05492599f;
    data->d[3] = 1.17822838f;
    data->d[4] = 1.47211945f;
    data->d[5] = 3.20957780f;
    data->d[6] = -1.25561917f;
    data->d[7] = 0.00093078f;
    data->d[8] = 0.23372674f;
    data->d[9] = 7.76371288f;
    data->d[10] = -25.56739426f;
    data->d[11] = 3.42818546f;
    data->d[12] = 0.07230844f;
    data->d[13] = 4.46353483f;
    data->d[14] = -0.72682226f;
    data->d[15] = -0.85018700f;
    data->d[16] = 0.87109888f;
    data->d[17] = 0.00658567f;
    data->d[18] = -0.72294605f;
    data->d[19] = 0.27465919f;
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
    *(result->MaxResult()) = 0.00003063f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = -1.88906920f;
    data->d[1] = 3.81772637f;
    data->d[2] = -0.94509667f;
    data->d[3] = -0.03285155f;
    data->d[4] = 0.47789717f;
    data->d[5] = -0.98356527f;
    data->d[6] = -1.72057867f;
    data->d[7] = 1.31594014f;
    data->d[8] = 0.50063431f;
    data->d[9] = 9.35894871f;
    data->d[10] = 0.06788534f;
    data->d[11] = 2.63384867f;
    data->d[12] = 13.62456703f;
    data->d[13] = 0.43335161f;
    data->d[14] = 1.52328467f;
    data->d[15] = 0.40892711f;
    data->d[16] = 1.49645042f;
    data->d[17] = 4.43552828f;
    data->d[18] = -2.86123919f;
    data->d[19] = -0.44586459f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)1, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 4);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 12);
    code->SetOperation(14, (FireStarterOpcode)1, 13);
    code->SetOperation(15, (FireStarterOpcode)1, 2);
    code->SetOperation(16, (FireStarterOpcode)0, 14);
    code->SetOperation(17, (FireStarterOpcode)0, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 8);
    code->SetOperation(19, (FireStarterOpcode)0, 3);
    code->SetOperation(20, (FireStarterOpcode)1, 6);
    code->SetOperation(21, (FireStarterOpcode)1, 16);
    code->SetOperation(22, (FireStarterOpcode)0, 0);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)1, 9);
    code->SetOperation(25, (FireStarterOpcode)0, 13);
    code->SetOperation(26, (FireStarterOpcode)1, 14);
    code->SetOperation(27, (FireStarterOpcode)0, 16);
    code->SetOperation(28, (FireStarterOpcode)0, 7);
    code->SetOperation(29, (FireStarterOpcode)0, 14);
    code->SetOperation(30, (FireStarterOpcode)1, 18);
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
    state.m_generation = 40;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 9081075431047883512;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00008111f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
