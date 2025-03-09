#pragma once
#include "FireStarterState.h"

// Run date: 03/09/25 15:32:01 Pacific Daylight Time
// Run duration = 37.312065 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00259799
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
// Run units = 1
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
    settings.m_units = 1;
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
    *(result->MaxResult()) = 0.00012623f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.62200129f;
    data->d[1] = -1.36931682f;
    data->d[2] = -0.70084608f;
    data->d[3] = -3.11247182f;
    data->d[4] = 5.98489809f;
    data->d[5] = -0.13301821f;
    data->d[6] = -0.06288866f;
    data->d[7] = 0.70978302f;
    data->d[8] = -0.73225904f;
    data->d[9] = -2.06965566f;
    data->d[10] = 0.32277724f;
    data->d[11] = 0.51853794f;
    data->d[12] = -0.72893786f;
    data->d[13] = 0.47745299f;
    data->d[14] = -3.34539866f;
    data->d[15] = -0.31728339f;
    data->d[16] = -0.03566193f;
    data->d[17] = 8.97355461f;
    data->d[18] = -8.79709721f;
    data->d[19] = -0.37930590f;
    data->d[20] = -4.31267309f;
    data->d[21] = 1.52560699f;
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
    *(result->MaxResult()) = 0.00006977f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = 0.13921243f;
    data->d[1] = 0.15719804f;
    data->d[2] = -2.35975337f;
    data->d[3] = 0.75606042f;
    data->d[4] = -3.76446342f;
    data->d[5] = 4.14405346f;
    data->d[6] = 0.02897068f;
    data->d[7] = 4.97163200f;
    data->d[8] = -0.21997088f;
    data->d[9] = -0.10192806f;
    data->d[10] = -1.05530477f;
    data->d[11] = -2.74381804f;
    data->d[12] = -1.09613824f;
    data->d[13] = 0.11145608f;
    data->d[14] = 3.28941679f;
    data->d[15] = -1.80070651f;
    data->d[16] = 2.84788656f;
    data->d[17] = 1.28600669f;
    data->d[18] = 0.29884690f;
    data->d[19] = -0.27735168f;
    data->d[20] = -0.96211785f;
    data->d[21] = -0.51553828f;
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
    *(result->MaxResult()) = 0.00259799f;
    *(result->EvolveAge1()) = 0;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -1.73503435f;
    data->d[1] = -1.41424847f;
    data->d[2] = 0.08701285f;
    data->d[3] = -0.93093508f;
    data->d[4] = 8.77251434f;
    data->d[5] = 0.04145610f;
    data->d[6] = 1.18144381f;
    data->d[7] = 1.08440506f;
    data->d[8] = -1.43235850f;
    data->d[9] = -1.07391846f;
    data->d[10] = -1.21166348f;
    data->d[11] = -1.81533134f;
    data->d[12] = 0.69385445f;
    data->d[13] = -0.06535094f;
    data->d[14] = 4.38998604f;
    data->d[15] = -2.26287150f;
    data->d[16] = 1.59672010f;
    data->d[17] = -0.76491761f;
    data->d[18] = 0.39403102f;
    data->d[19] = 0.16074350f;
    data->d[20] = 0.75731087f;
    data->d[21] = -0.20360945f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)1, 3);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 2);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 11);
    code->SetOperation(14, (FireStarterOpcode)1, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 8);
    code->SetOperation(17, (FireStarterOpcode)1, 10);
    code->SetOperation(18, (FireStarterOpcode)0, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 8);
    code->SetOperation(20, (FireStarterOpcode)1, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)0, 17);
    code->SetOperation(23, (FireStarterOpcode)0, 18);
    code->SetOperation(24, (FireStarterOpcode)0, 19);
    code->SetOperation(25, (FireStarterOpcode)0, 0);
    code->SetOperation(26, (FireStarterOpcode)0, 16);
    code->SetOperation(27, (FireStarterOpcode)1, 15);
    code->SetOperation(28, (FireStarterOpcode)0, 20);
    code->SetOperation(29, (FireStarterOpcode)1, 21);
    code->SetOperation(30, (FireStarterOpcode)0, 11);
    code->SetOperation(31, (FireStarterOpcode)0, 9);
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
    state.m_id = 16;
    state.m_test = 0;
    state.m_seed = 128;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
