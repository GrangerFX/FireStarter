#pragma once
#include "FireStarterState.h"

// Run date: 07/13/25 12:48:24 Pacific Daylight Time
// Run duration = 2478.734302 seconds
// Run test = 15
// Run generation = 40
// Run evolution = 4
// Run precision  = 0.00000462
// Run max result = 0.00000039
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
    *(result->MaxResult()) = 0.00000039f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 1.18867064f;
    data->d[2] = -0.03733989f;
    data->d[3] = -0.01561461f;
    data->d[4] = -2.64681435f;
    data->d[5] = -1.72580159f;
    data->d[6] = 1.20225608f;
    data->d[7] = -0.98386121f;
    data->d[8] = 3.91663194f;
    data->d[9] = 0.17381440f;
    data->d[10] = 1.89743364f;
    data->d[11] = 0.58697760f;
    data->d[12] = 0.76941895f;
    data->d[13] = 0.27545404f;
    data->d[14] = 2.28569412f;
    data->d[15] = 1.79028141f;
    data->d[16] = -0.32771906f;
    data->d[17] = -1.75412118f;
    data->d[18] = 2.52328348f;
    data->d[19] = -3.09814239f;
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
    *(result->MaxResult()) = 0.00000006f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09065866f;
    data->d[1] = 0.03517400f;
    data->d[2] = -0.36421379f;
    data->d[3] = 0.60404110f;
    data->d[4] = -4.48580313f;
    data->d[5] = 1.48460031f;
    data->d[6] = 1.91191840f;
    data->d[7] = -0.25591031f;
    data->d[8] = -0.48863041f;
    data->d[9] = -0.63363677f;
    data->d[10] = 1.71076965f;
    data->d[11] = -0.56414038f;
    data->d[12] = -0.16098419f;
    data->d[13] = 2.99248338f;
    data->d[14] = 2.79756927f;
    data->d[15] = 1.03923917f;
    data->d[16] = 0.46498314f;
    data->d[17] = 1.06926310f;
    data->d[18] = 0.14457606f;
    data->d[19] = -0.75989723f;
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
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61799359f;
    data->d[1] = -1.44705009f;
    data->d[2] = -0.30031902f;
    data->d[3] = -2.42090201f;
    data->d[4] = -1.60684896f;
    data->d[5] = 0.00672083f;
    data->d[6] = -1.71014690f;
    data->d[7] = 0.42514491f;
    data->d[8] = -4.98235893f;
    data->d[9] = 0.30398080f;
    data->d[10] = -0.33928704f;
    data->d[11] = -0.48764488f;
    data->d[12] = 1.94352889f;
    data->d[13] = 0.13385230f;
    data->d[14] = -1.46304822f;
    data->d[15] = -5.67965746f;
    data->d[16] = 0.11837478f;
    data->d[17] = -0.95087910f;
    data->d[18] = -1.18254244f;
    data->d[19] = 1.81870115f;
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
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)1, 12);
    code->SetOperation(14, (FireStarterOpcode)0, 7);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 11);
    code->SetOperation(17, (FireStarterOpcode)0, 0);
    code->SetOperation(18, (FireStarterOpcode)1, 12);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 12);
    code->SetOperation(22, (FireStarterOpcode)0, 15);
    code->SetOperation(23, (FireStarterOpcode)0, 5);
    code->SetOperation(24, (FireStarterOpcode)0, 9);
    code->SetOperation(25, (FireStarterOpcode)0, 15);
    code->SetOperation(26, (FireStarterOpcode)1, 7);
    code->SetOperation(27, (FireStarterOpcode)1, 16);
    code->SetOperation(28, (FireStarterOpcode)0, 17);
    code->SetOperation(29, (FireStarterOpcode)1, 9);
    code->SetOperation(30, (FireStarterOpcode)1, 18);
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
    state.m_generation = 40;
    state.m_evolution = 4;
    state.m_index = 11;
    state.m_evolveIndex = 6;
    state.m_id = 6;
    state.m_test = 15;
    state.m_seed = 12411299105928785224;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000039f;
    state.m_oldResult = 0.00002730f;
    state.m_evolveWeight = 0.000328f;
    state.m_optimizeValid = true;
} // LoadState
