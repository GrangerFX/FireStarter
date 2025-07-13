#pragma once
#include "FireStarterState.h"

// Run date: 07/13/25 09:43:59 Pacific Daylight Time
// Run duration = 721.922268 seconds
// Run test = 2
// Run generation = 33
// Run evolution = 4
// Run precision  = 0.00001103
// Run max result = 0.00001840
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
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 262144
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 262144;
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
    *(result->MaxResult()) = 0.00001840f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -3.13372493f;
    data->d[1] = -0.12790526f;
    data->d[2] = 0.00125482f;
    data->d[3] = 0.65640008f;
    data->d[4] = 4.04590368f;
    data->d[5] = -2.18143106f;
    data->d[6] = -0.44824132f;
    data->d[7] = -1.05865645f;
    data->d[8] = 0.19202343f;
    data->d[9] = 0.30292636f;
    data->d[10] = 0.12912910f;
    data->d[11] = 4.88071156f;
    data->d[12] = -7.18161631f;
    data->d[13] = 3.73286271f;
    data->d[14] = -2.36568999f;
    data->d[15] = -0.09681413f;
    data->d[16] = -0.65957493f;
    data->d[17] = 1.79866517f;
    data->d[18] = 1.00737345f;
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
    *(result->MaxResult()) = 0.00001093f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -3.06649375f;
    data->d[1] = -0.07199790f;
    data->d[2] = 0.00203763f;
    data->d[3] = -1.58817470f;
    data->d[4] = -0.93856221f;
    data->d[5] = 1.04968154f;
    data->d[6] = 1.01429415f;
    data->d[7] = 0.48336676f;
    data->d[8] = -0.06932787f;
    data->d[9] = -24.81985092f;
    data->d[10] = -0.86184394f;
    data->d[11] = 1.85193014f;
    data->d[12] = 12.91224957f;
    data->d[13] = 0.47386771f;
    data->d[14] = 0.89510959f;
    data->d[15] = 0.21283628f;
    data->d[16] = -6.33622408f;
    data->d[17] = 0.11823599f;
    data->d[18] = -2.43677950f;
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
    *(result->MaxResult()) = 0.00000527f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = -2.68914461f;
    data->d[1] = -0.18462473f;
    data->d[2] = -0.01539818f;
    data->d[3] = 0.30747125f;
    data->d[4] = -2.65869498f;
    data->d[5] = 0.48355842f;
    data->d[6] = 1.64998019f;
    data->d[7] = -0.94802964f;
    data->d[8] = -0.65723026f;
    data->d[9] = 1.60598540f;
    data->d[10] = 2.87176776f;
    data->d[11] = -2.61226034f;
    data->d[12] = -0.44024119f;
    data->d[13] = 4.21013546f;
    data->d[14] = 0.93914694f;
    data->d[15] = 0.88279289f;
    data->d[16] = -1.31385207f;
    data->d[17] = 0.81814730f;
    data->d[18] = 0.36641449f;
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
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 3);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 8);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 7);
    code->SetOperation(14, (FireStarterOpcode)0, 3);
    code->SetOperation(15, (FireStarterOpcode)0, 5);
    code->SetOperation(16, (FireStarterOpcode)0, 11);
    code->SetOperation(17, (FireStarterOpcode)0, 0);
    code->SetOperation(18, (FireStarterOpcode)1, 4);
    code->SetOperation(19, (FireStarterOpcode)0, 12);
    code->SetOperation(20, (FireStarterOpcode)0, 13);
    code->SetOperation(21, (FireStarterOpcode)0, 14);
    code->SetOperation(22, (FireStarterOpcode)0, 10);
    code->SetOperation(23, (FireStarterOpcode)0, 6);
    code->SetOperation(24, (FireStarterOpcode)1, 15);
    code->SetOperation(25, (FireStarterOpcode)0, 16);
    code->SetOperation(26, (FireStarterOpcode)1, 9);
    code->SetOperation(27, (FireStarterOpcode)0, 17);
    code->SetOperation(28, (FireStarterOpcode)1, 2);
    code->SetOperation(29, (FireStarterOpcode)0, 18);
    code->SetOperation(30, (FireStarterOpcode)1, 18);
    code->SetOperation(31, (FireStarterOpcode)0, 7);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 33;
    state.m_evolution = 4;
    state.m_index = 10;
    state.m_evolveIndex = 4;
    state.m_id = 4;
    state.m_test = 2;
    state.m_seed = 11415641679199493971;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00001840f;
    state.m_oldResult = 0.00003188f;
    state.m_evolveWeight = 0.000319f;
    state.m_optimizeValid = true;
} // LoadState
