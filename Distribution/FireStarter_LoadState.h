#pragma once
#include "FireStarterState.h"

// Run date: 04/20/25 21:16:47 Pacific Daylight Time
// Run duration = 163.916792 seconds
// Run generation = 80
// Run evolution = 2
// Run max result = 0.00010360
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
// Run streams = 1
// Run units = 8
// Run states = 16
// Run population = 262144
// Run generations = 0
// Run passes = 512
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

    settings.m_mode = FIRESTARTER_EVOLVE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_population = 262144;
    settings.m_generations = 0;
    settings.m_passes = 512;
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
    *(result->MaxResult()) = 0.00008440f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -0.60805148f;
    data->d[1] = -2.23316336f;
    data->d[2] = 0.02357932f;
    data->d[3] = -2.62111568f;
    data->d[4] = 0.77750856f;
    data->d[5] = 0.94826782f;
    data->d[6] = 0.36627492f;
    data->d[7] = 11.64259434f;
    data->d[8] = 0.03482763f;
    data->d[9] = -1.02176738f;
    data->d[10] = -0.45690903f;
    data->d[11] = 3.60871124f;
    data->d[12] = 0.93082291f;
    data->d[13] = -4.98390198f;
    data->d[14] = -0.78581762f;
    data->d[15] = 0.54389220f;
    data->d[16] = 0.55542189f;
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
    *(result->MaxResult()) = 0.00010038f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -0.14427255f;
    data->d[1] = -2.27563930f;
    data->d[2] = -0.11655586f;
    data->d[3] = 0.09062876f;
    data->d[4] = 0.14014116f;
    data->d[5] = 0.22168706f;
    data->d[6] = 1.95099187f;
    data->d[7] = -9.55129051f;
    data->d[8] = 0.23892833f;
    data->d[9] = 9.76409817f;
    data->d[10] = 0.71908158f;
    data->d[11] = 2.18260574f;
    data->d[12] = -0.98243445f;
    data->d[13] = 2.85089111f;
    data->d[14] = -1.58688641f;
    data->d[15] = 0.76395446f;
    data->d[16] = 16.62835312f;
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
    *(result->MaxResult()) = 0.00010360f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -0.84162086f;
    data->d[1] = -1.93489289f;
    data->d[2] = -0.03380788f;
    data->d[3] = 7.48498440f;
    data->d[4] = 2.41390157f;
    data->d[5] = -1.38386285f;
    data->d[6] = 0.20049824f;
    data->d[7] = 44.31885529f;
    data->d[8] = -0.01138005f;
    data->d[9] = -0.04842193f;
    data->d[10] = 0.97954881f;
    data->d[11] = -1.10179937f;
    data->d[12] = 1.41035497f;
    data->d[13] = 0.62309414f;
    data->d[14] = 2.92504144f;
    data->d[15] = 0.60508364f;
    data->d[16] = -3.48138165f;
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
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 2);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 4);
    code->SetOperation(11, (FireStarterOpcode)0, 4);
    code->SetOperation(12, (FireStarterOpcode)0, 9);
    code->SetOperation(13, (FireStarterOpcode)0, 8);
    code->SetOperation(14, (FireStarterOpcode)1, 10);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 0);
    code->SetOperation(17, (FireStarterOpcode)0, 12);
    code->SetOperation(18, (FireStarterOpcode)1, 8);
    code->SetOperation(19, (FireStarterOpcode)1, 1);
    code->SetOperation(20, (FireStarterOpcode)0, 13);
    code->SetOperation(21, (FireStarterOpcode)0, 2);
    code->SetOperation(22, (FireStarterOpcode)0, 14);
    code->SetOperation(23, (FireStarterOpcode)1, 15);
    code->SetOperation(24, (FireStarterOpcode)1, 3);
    code->SetOperation(25, (FireStarterOpcode)0, 16);
    code->SetOperation(26, (FireStarterOpcode)0, 5);
    code->SetOperation(27, (FireStarterOpcode)0, 0);
    code->SetOperation(28, (FireStarterOpcode)0, 13);
    code->SetOperation(29, (FireStarterOpcode)0, 2);
    code->SetOperation(30, (FireStarterOpcode)1, 3);
    code->SetOperation(31, (FireStarterOpcode)0, 15);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 80;
    state.m_evolution = 2;
    state.m_index = 9;
    state.m_evolveIndex = 5;
    state.m_id = 5;
    state.m_test = 0;
    state.m_seed = 1493917010602462009;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00047410f;
    state.m_evolveWeight = 0.037454f;
    state.m_optimizeValid = true;
} // LoadState
