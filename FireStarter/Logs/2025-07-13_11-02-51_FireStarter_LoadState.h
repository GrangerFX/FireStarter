#pragma once
#include "FireStarterState.h"

// Run date: 07/13/25 11:02:51 Pacific Daylight Time
// Run duration = 1948.591951 seconds
// Run test = 15
// Run generation = 6
// Run evolution = 2
// Run precision  = 0.00000250
// Run max result = 0.00000036
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
    *(result->MaxResult()) = 0.00000009f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.59676218f;
    data->d[2] = 1.01587343f;
    data->d[3] = 0.05743609f;
    data->d[4] = -0.80017596f;
    data->d[5] = -0.99758404f;
    data->d[6] = -0.31601810f;
    data->d[7] = 1.92996478f;
    data->d[8] = -0.55428052f;
    data->d[9] = -4.28461361f;
    data->d[10] = -0.71669990f;
    data->d[11] = -0.96517670f;
    data->d[12] = -0.22982885f;
    data->d[13] = 0.48664629f;
    data->d[14] = -0.12198595f;
    data->d[15] = -3.30757570f;
    data->d[16] = 26.66397476f;
    data->d[17] = 0.02673305f;
    data->d[18] = -1.32676947f;
    data->d[19] = -6.73761702f;
    data->d[20] = -1.48697293f;
    data->d[21] = -3.51462340f;
    data->d[22] = 0.69246817f;
    data->d[23] = 7.20210552f;
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
    *(result->MaxResult()) = 0.00000036f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09065890f;
    data->d[1] = 3.44334269f;
    data->d[2] = -0.02786873f;
    data->d[3] = 0.03761086f;
    data->d[4] = -0.14317921f;
    data->d[5] = -1.63539517f;
    data->d[6] = 6.57471085f;
    data->d[7] = 2.07970738f;
    data->d[8] = -7.65869141f;
    data->d[9] = -1.77895904f;
    data->d[10] = -2.30682969f;
    data->d[11] = 0.97289586f;
    data->d[12] = 3.38041401f;
    data->d[13] = 1.35489082f;
    data->d[14] = -4.94186497f;
    data->d[15] = 0.37516910f;
    data->d[16] = 0.43554088f;
    data->d[17] = 1.30842006f;
    data->d[18] = 2.31840229f;
    data->d[19] = 0.65136141f;
    data->d[20] = 0.17402424f;
    data->d[21] = -3.67350149f;
    data->d[22] = -2.22820807f;
    data->d[23] = 0.03667563f;
    data->d[24] = -0.11813209f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation1

// Variation: 2
inline void LoadVariation2(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000018f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61799383f;
    data->d[1] = 0.75537074f;
    data->d[2] = -0.46851858f;
    data->d[3] = -0.71447378f;
    data->d[4] = 0.06254957f;
    data->d[5] = -0.59967601f;
    data->d[6] = -0.64860511f;
    data->d[7] = -0.89291340f;
    data->d[8] = -3.19686937f;
    data->d[9] = -2.72735667f;
    data->d[10] = 0.50659734f;
    data->d[11] = -1.76103079f;
    data->d[12] = 1.95869815f;
    data->d[13] = -0.37304655f;
    data->d[14] = 0.44060874f;
    data->d[15] = 9.10329628f;
    data->d[16] = 0.33356026f;
    data->d[17] = -0.47246256f;
    data->d[18] = -3.03193879f;
    data->d[19] = -0.63827872f;
    data->d[20] = 0.29989797f;
    data->d[21] = -3.73465967f;
    data->d[22] = 2.42431450f;
    data->d[23] = -4.79695320f;
    data->d[24] = 0.52359879f;
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
    code->SetOperation(6, (FireStarterOpcode)0, 0);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 0);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)1, 12);
    code->SetOperation(15, (FireStarterOpcode)1, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 14);
    code->SetOperation(17, (FireStarterOpcode)1, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 12);
    code->SetOperation(19, (FireStarterOpcode)0, 16);
    code->SetOperation(20, (FireStarterOpcode)0, 17);
    code->SetOperation(21, (FireStarterOpcode)1, 18);
    code->SetOperation(22, (FireStarterOpcode)1, 19);
    code->SetOperation(23, (FireStarterOpcode)1, 20);
    code->SetOperation(24, (FireStarterOpcode)0, 21);
    code->SetOperation(25, (FireStarterOpcode)0, 14);
    code->SetOperation(26, (FireStarterOpcode)0, 20);
    code->SetOperation(27, (FireStarterOpcode)0, 22);
    code->SetOperation(28, (FireStarterOpcode)1, 15);
    code->SetOperation(29, (FireStarterOpcode)1, 23);
    code->SetOperation(30, (FireStarterOpcode)0, 4);
    code->SetOperation(31, (FireStarterOpcode)1, 24);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 6;
    state.m_evolution = 2;
    state.m_index = 4;
    state.m_evolveIndex = 8;
    state.m_id = 8;
    state.m_test = 15;
    state.m_seed = 17759048785553485653;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000036f;
    state.m_oldResult = 0.00013049f;
    state.m_evolveWeight = 0.000261f;
    state.m_optimizeValid = true;
} // LoadState
