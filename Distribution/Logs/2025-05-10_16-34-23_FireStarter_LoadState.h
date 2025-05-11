#pragma once
#include "FireStarterState.h"

// Run date: 05/10/25 16:34:23 Pacific Daylight Time
// Run duration = 79.827404 seconds
// Run test = 0
// Run generation = 96
// Run evolution = 0
// Run precision  = 0.00001276
// Run max result = 0.00000513
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
    *(result->MaxResult()) = 0.00000458f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -1.57253361f;
    data->d[1] = 4.94029093f;
    data->d[2] = -0.28397909f;
    data->d[3] = 0.00001721f;
    data->d[4] = -1.96821439f;
    data->d[5] = 0.63243574f;
    data->d[6] = 0.93436712f;
    data->d[7] = -1.35307550f;
    data->d[8] = 0.64855069f;
    data->d[9] = 0.02304448f;
    data->d[10] = -0.47997287f;
    data->d[11] = -5.32710934f;
    data->d[12] = 31.83570290f;
    data->d[13] = 2.67344928f;
    data->d[14] = 18.99567223f;
    data->d[15] = 0.07475974f;
    data->d[16] = 0.43201795f;
    data->d[17] = 32.18033600f;
    data->d[18] = -0.08722384f;
    data->d[19] = -0.00002303f;
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
    *(result->MaxResult()) = 0.00000513f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -0.34144726f;
    data->d[1] = 1.05530488f;
    data->d[2] = 0.16625381f;
    data->d[3] = -0.00000225f;
    data->d[4] = 0.86927736f;
    data->d[5] = -1.33200157f;
    data->d[6] = 1.11655867f;
    data->d[7] = 1.42527270f;
    data->d[8] = -2.33821869f;
    data->d[9] = 0.68483013f;
    data->d[10] = 0.41979337f;
    data->d[11] = 1.97263956f;
    data->d[12] = 2.91024137f;
    data->d[13] = 0.20524333f;
    data->d[14] = -13.65671539f;
    data->d[15] = -0.88231438f;
    data->d[16] = 9.14148045f;
    data->d[17] = 0.05925151f;
    data->d[18] = 0.80292219f;
    data->d[19] = -0.11815809f;
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
    *(result->MaxResult()) = 0.00000143f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = 0.64795625f;
    data->d[1] = -1.69634640f;
    data->d[2] = 0.67741030f;
    data->d[3] = 0.00000132f;
    data->d[4] = -0.96007913f;
    data->d[5] = 0.81223965f;
    data->d[6] = -0.82269651f;
    data->d[7] = -1.40016091f;
    data->d[8] = -0.85063720f;
    data->d[9] = 0.00827594f;
    data->d[10] = 1.03936100f;
    data->d[11] = 6.89972639f;
    data->d[12] = 5.85071659f;
    data->d[13] = 1.75853312f;
    data->d[14] = -1.56980860f;
    data->d[15] = -2.18738246f;
    data->d[16] = 1.50355232f;
    data->d[17] = -2.05785370f;
    data->d[18] = -3.47620344f;
    data->d[19] = 0.52359700f;
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
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)1, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 4);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 6);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 10);
    code->SetOperation(17, (FireStarterOpcode)1, 13);
    code->SetOperation(18, (FireStarterOpcode)1, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)1, 16);
    code->SetOperation(21, (FireStarterOpcode)0, 13);
    code->SetOperation(22, (FireStarterOpcode)0, 4);
    code->SetOperation(23, (FireStarterOpcode)0, 8);
    code->SetOperation(24, (FireStarterOpcode)1, 10);
    code->SetOperation(25, (FireStarterOpcode)1, 17);
    code->SetOperation(26, (FireStarterOpcode)0, 2);
    code->SetOperation(27, (FireStarterOpcode)0, 10);
    code->SetOperation(28, (FireStarterOpcode)0, 5);
    code->SetOperation(29, (FireStarterOpcode)0, 11);
    code->SetOperation(30, (FireStarterOpcode)0, 18);
    code->SetOperation(31, (FireStarterOpcode)1, 19);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 96;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 7037185775547279136;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000513f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
