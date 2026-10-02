#pragma once
#include "FireStarterState.h"

// Run date: 10/01/26 12:32:40 Pacific Daylight Time
// Run duration = 8.118890 seconds
// Run test = 0
// Run generation = 0
// Run evolution = 0
// Run precision  = 0.00023638
// Run max result = 0.00026629

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
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;

} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00021863f;
    *(result->EvolveAge()) = 0;
    FireStarterData *data = result->Data();
    data->d[0] = -1.90457511f;
    data->d[1] = -5.81716251f;
    data->d[2] = 0.12911642f;
    data->d[3] = -2.06349516f;
    data->d[4] = 0.03920108f;
    data->d[5] = -1.00522721f;
    data->d[6] = 4.83806372f;
    data->d[7] = 2.67963958f;
    data->d[8] = -0.92602062f;
    data->d[9] = -2.24954939f;
    data->d[10] = -3.96810603f;
    data->d[11] = -1.30575418f;
    data->d[12] = -0.20408981f;
    data->d[13] = -4.19403458f;
    data->d[14] = 3.27407980f;
    data->d[15] = -1.21163774f;
    data->d[16] = 1.63565671f;
    data->d[17] = -1.07588196f;
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
} // LoadVariation0

// Variation: 1
inline void LoadVariation1(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00002494f;
    *(result->EvolveAge()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = 2.15661693f;
    data->d[1] = -7.24161053f;
    data->d[2] = -0.07427651f;
    data->d[3] = -0.63000315f;
    data->d[4] = 1.02309275f;
    data->d[5] = 2.04511762f;
    data->d[6] = -0.49049360f;
    data->d[7] = -0.76254082f;
    data->d[8] = -6.72238016f;
    data->d[9] = -1.73601043f;
    data->d[10] = -0.53580189f;
    data->d[11] = -0.43914825f;
    data->d[12] = 0.56824833f;
    data->d[13] = 0.85453939f;
    data->d[14] = -1.82938886f;
    data->d[15] = 1.67976093f;
    data->d[16] = 1.60644889f;
    data->d[17] = 1.53045750f;
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
} // LoadVariation1

// Variation: 2
inline void LoadVariation2(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00026629f;
    *(result->EvolveAge()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -0.32405460f;
    data->d[1] = -8.37019444f;
    data->d[2] = 0.06184743f;
    data->d[3] = -2.58082271f;
    data->d[4] = 0.72161311f;
    data->d[5] = -0.41288602f;
    data->d[6] = -0.30069047f;
    data->d[7] = -2.90444446f;
    data->d[8] = -3.11251545f;
    data->d[9] = 1.65130651f;
    data->d[10] = 0.81724602f;
    data->d[11] = 0.91594410f;
    data->d[12] = 0.40224847f;
    data->d[13] = -1.10041606f;
    data->d[14] = 2.42851830f;
    data->d[15] = -1.24581277f;
    data->d[16] = 1.11404181f;
    data->d[17] = 0.83791643f;
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
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 2);
    code->SetOperation(4, (FireStarterOpcode)1, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 2);
    code->SetOperation(8, (FireStarterOpcode)0, 6);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)1, 3);
    code->SetOperation(11, (FireStarterOpcode)0, 3);
    code->SetOperation(12, (FireStarterOpcode)0, 8);
    code->SetOperation(13, (FireStarterOpcode)0, 7);
    code->SetOperation(14, (FireStarterOpcode)1, 9);
    code->SetOperation(15, (FireStarterOpcode)0, 10);
    code->SetOperation(16, (FireStarterOpcode)0, 0);
    code->SetOperation(17, (FireStarterOpcode)0, 11);
    code->SetOperation(18, (FireStarterOpcode)1, 7);
    code->SetOperation(19, (FireStarterOpcode)1, 1);
    code->SetOperation(20, (FireStarterOpcode)1, 6);
    code->SetOperation(21, (FireStarterOpcode)0, 2);
    code->SetOperation(22, (FireStarterOpcode)0, 12);
    code->SetOperation(23, (FireStarterOpcode)1, 13);
    code->SetOperation(24, (FireStarterOpcode)1, 14);
    code->SetOperation(25, (FireStarterOpcode)0, 15);
    code->SetOperation(26, (FireStarterOpcode)0, 4);
    code->SetOperation(27, (FireStarterOpcode)0, 0);
    code->SetOperation(28, (FireStarterOpcode)0, 16);
    code->SetOperation(29, (FireStarterOpcode)0, 2);
    code->SetOperation(30, (FireStarterOpcode)1, 14);
    code->SetOperation(31, (FireStarterOpcode)0, 17);
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
    state.m_index = 5;
    state.m_evolveIndex = 5;
    state.m_id = 5;
    state.m_test = 0;
    state.m_seed = 7136975925801098711;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00026629f;
    state.m_oldResult = 0.00049582f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
