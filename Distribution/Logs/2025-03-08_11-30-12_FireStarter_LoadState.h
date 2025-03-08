#pragma once
#include "FireStarterState.h"

// Run date: 03/08/25 11:30:12 Pacific Standard Time
// Run duration = 644.506831 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00024131
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
// Run tests = 256
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
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
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000492f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -0.32805187f;
    data->d[1] = -2.25519681f;
    data->d[2] = -0.57997411f;
    data->d[3] = 0.25462571f;
    data->d[4] = -2.00018716f;
    data->d[5] = -0.95464003f;
    data->d[6] = 0.51857638f;
    data->d[7] = -0.36869845f;
    data->d[8] = -1.52876079f;
    data->d[9] = -2.64149427f;
    data->d[10] = 1.52980161f;
    data->d[11] = -3.92175245f;
    data->d[12] = -0.12370945f;
    data->d[13] = -2.48985386f;
    data->d[14] = -0.00007880f;
    data->d[15] = -8.87032700f;
    data->d[16] = 0.47339979f;
    data->d[17] = -2.93862009f;
    data->d[18] = 3.21987247f;
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
    *(result->MaxResult()) = 0.00024131f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -0.69053441f;
    data->d[1] = -0.54042441f;
    data->d[2] = 1.44054294f;
    data->d[3] = -0.42562440f;
    data->d[4] = 2.57818604f;
    data->d[5] = 0.08053848f;
    data->d[6] = -0.77350444f;
    data->d[7] = 2.98907471f;
    data->d[8] = 1.44489062f;
    data->d[9] = 0.35363099f;
    data->d[10] = 2.79120827f;
    data->d[11] = -3.33927631f;
    data->d[12] = 0.78558034f;
    data->d[13] = 0.29423541f;
    data->d[14] = -2.05197906f;
    data->d[15] = -0.00370686f;
    data->d[16] = 0.85271066f;
    data->d[17] = 1.13981891f;
    data->d[18] = -2.58890319f;
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
    *(result->MaxResult()) = 0.00005126f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -1.28009796f;
    data->d[1] = 0.17831743f;
    data->d[2] = 0.83745295f;
    data->d[3] = 0.70385540f;
    data->d[4] = 0.94055974f;
    data->d[5] = 2.50464511f;
    data->d[6] = -0.77221054f;
    data->d[7] = -0.06612430f;
    data->d[8] = -0.78067976f;
    data->d[9] = -0.49910709f;
    data->d[10] = -0.97484452f;
    data->d[11] = 1.20278466f;
    data->d[12] = 2.75732207f;
    data->d[13] = 0.36050719f;
    data->d[14] = -0.40411940f;
    data->d[15] = 0.02739806f;
    data->d[16] = -0.68938315f;
    data->d[17] = -4.28385162f;
    data->d[18] = 4.76390696f;
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
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 4);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 0);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 7);
    code->SetOperation(16, (FireStarterOpcode)1, 5);
    code->SetOperation(17, (FireStarterOpcode)1, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)1, 16);
    code->SetOperation(21, (FireStarterOpcode)0, 8);
    code->SetOperation(22, (FireStarterOpcode)0, 8);
    code->SetOperation(23, (FireStarterOpcode)1, 3);
    code->SetOperation(24, (FireStarterOpcode)0, 11);
    code->SetOperation(25, (FireStarterOpcode)0, 6);
    code->SetOperation(26, (FireStarterOpcode)0, 5);
    code->SetOperation(27, (FireStarterOpcode)0, 9);
    code->SetOperation(28, (FireStarterOpcode)1, 13);
    code->SetOperation(29, (FireStarterOpcode)0, 8);
    code->SetOperation(30, (FireStarterOpcode)1, 17);
    code->SetOperation(31, (FireStarterOpcode)1, 18);
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
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 81;
    state.m_test = 0;
    state.m_seed = 4288;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
