#pragma once
#include "FireStarterState.h"

// Run date: 07/12/25 12:48:17 Pacific Daylight Time
// Run duration = 2732.714306 seconds
// Run test = 15
// Run generation = 16
// Run evolution = 2
// Run precision  = 0.00000143
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
    *(result->MaxResult()) = 0.00000012f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -2.62728214f;
    data->d[2] = 0.01311403f;
    data->d[3] = 0.76300669f;
    data->d[4] = -0.73159373f;
    data->d[5] = 2.14523053f;
    data->d[6] = 0.01563926f;
    data->d[7] = -4.77949286f;
    data->d[8] = 7.36094093f;
    data->d[9] = -1.80691803f;
    data->d[10] = 2.62590623f;
    data->d[11] = 2.60011482f;
    data->d[12] = -0.69847071f;
    data->d[13] = -0.01094619f;
    data->d[14] = 32.80104446f;
    data->d[15] = -4.87581205f;
    data->d[16] = -0.00000001f;
    data->d[17] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00000036f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09065843f;
    data->d[1] = -1.02015257f;
    data->d[2] = -1.73062909f;
    data->d[3] = -0.35736689f;
    data->d[4] = 0.63356924f;
    data->d[5] = -0.06198723f;
    data->d[6] = 1.71036959f;
    data->d[7] = -0.31533086f;
    data->d[8] = -15.64328671f;
    data->d[9] = 0.55936611f;
    data->d[10] = -0.98069006f;
    data->d[11] = 1.31812322f;
    data->d[12] = 0.45798323f;
    data->d[13] = 1.11651433f;
    data->d[14] = 1.19169104f;
    data->d[15] = 0.75134331f;
    data->d[16] = -0.11813177f;
    data->d[17] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00000024f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61799359f;
    data->d[1] = -0.24056789f;
    data->d[2] = 0.41615018f;
    data->d[3] = 0.07465087f;
    data->d[4] = 1.90777409f;
    data->d[5] = -2.10076809f;
    data->d[6] = -2.85473704f;
    data->d[7] = -1.50377083f;
    data->d[8] = -23.00645828f;
    data->d[9] = -4.41158247f;
    data->d[10] = -1.03612518f;
    data->d[11] = -0.61721295f;
    data->d[12] = -1.61254621f;
    data->d[13] = -2.80019593f;
    data->d[14] = 0.23981418f;
    data->d[15] = 3.68201327f;
    data->d[16] = 0.52359873f;
    data->d[17] = 0.00000000f;
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
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 1);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)1, 1);
    code->SetOperation(13, (FireStarterOpcode)1, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 6);
    code->SetOperation(15, (FireStarterOpcode)0, 3);
    code->SetOperation(16, (FireStarterOpcode)1, 12);
    code->SetOperation(17, (FireStarterOpcode)0, 0);
    code->SetOperation(18, (FireStarterOpcode)0, 7);
    code->SetOperation(19, (FireStarterOpcode)1, 13);
    code->SetOperation(20, (FireStarterOpcode)1, 11);
    code->SetOperation(21, (FireStarterOpcode)0, 4);
    code->SetOperation(22, (FireStarterOpcode)1, 0);
    code->SetOperation(23, (FireStarterOpcode)0, 5);
    code->SetOperation(24, (FireStarterOpcode)0, 13);
    code->SetOperation(25, (FireStarterOpcode)0, 14);
    code->SetOperation(26, (FireStarterOpcode)1, 15);
    code->SetOperation(27, (FireStarterOpcode)1, 11);
    code->SetOperation(28, (FireStarterOpcode)0, 12);
    code->SetOperation(29, (FireStarterOpcode)0, 4);
    code->SetOperation(30, (FireStarterOpcode)0, 12);
    code->SetOperation(31, (FireStarterOpcode)1, 16);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 16;
    state.m_evolution = 2;
    state.m_index = 11;
    state.m_evolveIndex = 6;
    state.m_id = 6;
    state.m_test = 15;
    state.m_seed = 10652002662041965440;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000036f;
    state.m_oldResult = 0.00001031f;
    state.m_evolveWeight = 0.000103f;
    state.m_optimizeValid = true;
} // LoadState
