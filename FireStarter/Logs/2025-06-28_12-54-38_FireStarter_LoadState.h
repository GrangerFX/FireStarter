#pragma once
#include "FireStarterState.h"

// Run date: 06/28/25 12:54:38 Pacific Daylight Time
// Run duration = 2785.349323 seconds
// Run test = 1
// Run generation = 42
// Run evolution = 4
// Run precision  = 0.00001201
// Run max result = 0.00000539
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
    *(result->MaxResult()) = 0.00000364f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = 0.27000308f;
    data->d[1] = -0.84824270f;
    data->d[2] = -0.37493432f;
    data->d[3] = 0.80195212f;
    data->d[4] = -0.48392177f;
    data->d[5] = 0.00000260f;
    data->d[6] = 2.73314643f;
    data->d[7] = 0.56380481f;
    data->d[8] = -1.62580621f;
    data->d[9] = 1.92346597f;
    data->d[10] = -0.03186955f;
    data->d[11] = 2.75649333f;
    data->d[12] = 3.83608103f;
    data->d[13] = -2.11231041f;
    data->d[14] = 0.07847973f;
    data->d[15] = 40.49433136f;
    data->d[16] = -2.81428337f;
    data->d[17] = 3.45526314f;
    data->d[18] = -4.96868372f;
    data->d[19] = -0.08399716f;
    data->d[20] = 1.28200173f;
    data->d[21] = -1.28201604f;
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
    *(result->MaxResult()) = 0.00000143f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -0.18176436f;
    data->d[1] = 0.56177562f;
    data->d[2] = 5.00810242f;
    data->d[3] = 2.15100670f;
    data->d[4] = 0.66235429f;
    data->d[5] = -2.19301510f;
    data->d[6] = 2.46993876f;
    data->d[7] = -0.01821784f;
    data->d[8] = 0.15920511f;
    data->d[9] = 0.11921188f;
    data->d[10] = 4.31328011f;
    data->d[11] = -0.20237140f;
    data->d[12] = -7.32720280f;
    data->d[13] = -0.35751224f;
    data->d[14] = -1.02336025f;
    data->d[15] = -6.38363409f;
    data->d[16] = -0.24428444f;
    data->d[17] = 1.06807005f;
    data->d[18] = -1.08973980f;
    data->d[19] = 0.33409694f;
    data->d[20] = 1.11102283f;
    data->d[21] = -1.22917974f;
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
    *(result->MaxResult()) = 0.00000539f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -0.68384737f;
    data->d[1] = 1.79030502f;
    data->d[2] = 0.41935769f;
    data->d[3] = 2.98859692f;
    data->d[4] = -2.23781466f;
    data->d[5] = 0.36685988f;
    data->d[6] = -0.63240105f;
    data->d[7] = -0.07934231f;
    data->d[8] = 2.58577228f;
    data->d[9] = 0.35682154f;
    data->d[10] = -4.16809654f;
    data->d[11] = -0.28903848f;
    data->d[12] = -0.19761771f;
    data->d[13] = 1.46106875f;
    data->d[14] = -6.43847084f;
    data->d[15] = 8.87683105f;
    data->d[16] = -0.15428410f;
    data->d[17] = -0.37015098f;
    data->d[18] = -0.13877296f;
    data->d[19] = 0.54795933f;
    data->d[20] = -3.05093408f;
    data->d[21] = 3.57453728f;
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
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 0);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 12);
    code->SetOperation(14, (FireStarterOpcode)0, 6);
    code->SetOperation(15, (FireStarterOpcode)1, 13);
    code->SetOperation(16, (FireStarterOpcode)1, 12);
    code->SetOperation(17, (FireStarterOpcode)1, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 10);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)1, 10);
    code->SetOperation(21, (FireStarterOpcode)1, 15);
    code->SetOperation(22, (FireStarterOpcode)0, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 12);
    code->SetOperation(25, (FireStarterOpcode)0, 18);
    code->SetOperation(26, (FireStarterOpcode)0, 2);
    code->SetOperation(27, (FireStarterOpcode)0, 19);
    code->SetOperation(28, (FireStarterOpcode)0, 14);
    code->SetOperation(29, (FireStarterOpcode)0, 5);
    code->SetOperation(30, (FireStarterOpcode)1, 20);
    code->SetOperation(31, (FireStarterOpcode)1, 21);
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
    state.m_evolution = 4;
    state.m_index = 3;
    state.m_evolveIndex = 97;
    state.m_id = 97;
    state.m_test = 1;
    state.m_seed = 12562149172235612984;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000539f;
    state.m_oldResult = 0.00000596f;
    state.m_evolveWeight = 0.000107f;
    state.m_optimizeValid = true;
} // LoadState
