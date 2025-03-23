#pragma once
#include "FireStarterState.h"

// Run date: 03/23/25 13:18:30 Pacific Daylight Time
// Run duration = 3104.373969 seconds
// Run generation = 336
// Run evolution = 5
// Run max result = 0.00004518
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

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
// Run population = 278528
// Run generations = 0
// Run passes = 500
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 4;

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
    settings.m_population = 278528;
    settings.m_generations = 0;
    settings.m_passes = 500;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00003290f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14252186f;
    data->d[1] = 1.26633048f;
    data->d[2] = 0.61809975f;
    data->d[3] = 2.06796551f;
    data->d[4] = 2.22095108f;
    data->d[5] = -0.22023296f;
    data->d[6] = 0.14806712f;
    data->d[7] = 2.49686146f;
    data->d[8] = -0.38814723f;
    data->d[9] = 3.54824805f;
    data->d[10] = 2.36068368f;
    data->d[11] = 2.41158152f;
    data->d[12] = 0.11844972f;
    data->d[13] = 0.82908154f;
    data->d[14] = 0.34747732f;
    data->d[15] = -6.38589478f;
    data->d[16] = -0.09779018f;
    data->d[17] = 10.97996616f;
    data->d[18] = 5.93409681f;
    data->d[19] = -0.00092915f;
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
    *(result->MaxResult()) = 0.00001144f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09224296f;
    data->d[1] = 1.30280292f;
    data->d[2] = 0.78396016f;
    data->d[3] = -0.88204741f;
    data->d[4] = 0.47953397f;
    data->d[5] = 2.35868859f;
    data->d[6] = 0.15458393f;
    data->d[7] = -2.54397774f;
    data->d[8] = 1.29524446f;
    data->d[9] = 6.22701788f;
    data->d[10] = -0.92116100f;
    data->d[11] = 2.04281998f;
    data->d[12] = 2.43795991f;
    data->d[13] = -0.10369671f;
    data->d[14] = -0.02790649f;
    data->d[15] = -1.41533291f;
    data->d[16] = -1.72420824f;
    data->d[17] = -4.41617584f;
    data->d[18] = -7.15978813f;
    data->d[19] = -0.11987427f;
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
    *(result->MaxResult()) = 0.00004518f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -2.68514132f;
    data->d[1] = -0.56840837f;
    data->d[2] = -2.17483687f;
    data->d[3] = 1.22151005f;
    data->d[4] = -0.84154195f;
    data->d[5] = 0.99949545f;
    data->d[6] = 1.99345720f;
    data->d[7] = 1.01068902f;
    data->d[8] = 0.82618761f;
    data->d[9] = -2.00568628f;
    data->d[10] = 0.11077490f;
    data->d[11] = 1.33994436f;
    data->d[12] = 2.19485497f;
    data->d[13] = 1.86376572f;
    data->d[14] = 1.74746418f;
    data->d[15] = 1.75381780f;
    data->d[16] = -0.64993215f;
    data->d[17] = 6.41278267f;
    data->d[18] = -0.04193369f;
    data->d[19] = 0.45655972f;
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
    code->SetOperation(6, (FireStarterOpcode)1, 2);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 1);
    code->SetOperation(12, (FireStarterOpcode)0, 2);
    code->SetOperation(13, (FireStarterOpcode)1, 10);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 7);
    code->SetOperation(16, (FireStarterOpcode)0, 12);
    code->SetOperation(17, (FireStarterOpcode)1, 8);
    code->SetOperation(18, (FireStarterOpcode)1, 13);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)1, 2);
    code->SetOperation(23, (FireStarterOpcode)0, 13);
    code->SetOperation(24, (FireStarterOpcode)0, 9);
    code->SetOperation(25, (FireStarterOpcode)0, 17);
    code->SetOperation(26, (FireStarterOpcode)0, 6);
    code->SetOperation(27, (FireStarterOpcode)0, 11);
    code->SetOperation(28, (FireStarterOpcode)0, 13);
    code->SetOperation(29, (FireStarterOpcode)1, 11);
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
    state.m_generation = 336;
    state.m_evolution = 5;
    state.m_index = 2;
    state.m_evolveIndex = 141;
    state.m_id = 141;
    state.m_test = 0;
    state.m_seed = 12727545325768275148;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00012261f;
    state.m_evolveWeight = 0.041073f;
    state.m_optimizeValid = true;
} // LoadState
