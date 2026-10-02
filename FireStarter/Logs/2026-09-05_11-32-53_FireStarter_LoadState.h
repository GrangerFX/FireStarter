#pragma once
#include "FireStarterState.h"

// Run date: 09/05/26 11:32:53 Pacific Daylight Time
// Run duration = 251.517651 seconds
// Run test = 255
// Run generation = 257
// Run evolution = 0
// Run precision  = 0.00000721
// Run max result = 0.00000072

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_NEW
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 384
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f


inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_NEW;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 65536;
    settings.m_generations = 0;
    settings.m_passes = 384;
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
    *(result->MaxResult()) = 0.00000072f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = -0.19988790f;
    data->d[1] = -1.37344897f;
    data->d[2] = -0.86247975f;
    data->d[3] = -0.06974039f;
    data->d[4] = 2.19420886f;
    data->d[5] = -1.50754309f;
    data->d[6] = -3.62149167f;
    data->d[7] = 1.86591399f;
    data->d[8] = -1.98985088f;
    data->d[9] = 0.04146350f;
    data->d[10] = 5.93048525f;
    data->d[11] = 0.05772383f;
    data->d[12] = 3.34235549f;
    data->d[13] = 1.08581340f;
    data->d[14] = -2.06332946f;
    data->d[15] = 1.12999272f;
    data->d[16] = -0.58803427f;
    data->d[17] = -0.79933012f;
    data->d[18] = -2.48671746f;
    data->d[19] = 0.60779077f;
    data->d[20] = -0.65042096f;
    data->d[21] = -2.97626781f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 3);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 12);
    code->SetOperation(14, (FireStarterOpcode)1, 13);
    code->SetOperation(15, (FireStarterOpcode)0, 14);
    code->SetOperation(16, (FireStarterOpcode)0, 9);
    code->SetOperation(17, (FireStarterOpcode)1, 15);
    code->SetOperation(18, (FireStarterOpcode)1, 16);
    code->SetOperation(19, (FireStarterOpcode)1, 17);
    code->SetOperation(20, (FireStarterOpcode)0, 18);
    code->SetOperation(21, (FireStarterOpcode)0, 19);
    code->SetOperation(22, (FireStarterOpcode)0, 13);
    code->SetOperation(23, (FireStarterOpcode)1, 13);
    code->SetOperation(24, (FireStarterOpcode)0, 20);
    code->SetOperation(25, (FireStarterOpcode)0, 14);
    code->SetOperation(26, (FireStarterOpcode)1, 8);
    code->SetOperation(27, (FireStarterOpcode)0, 12);
    code->SetOperation(28, (FireStarterOpcode)1, 13);
    code->SetOperation(29, (FireStarterOpcode)0, 2);
    code->SetOperation(30, (FireStarterOpcode)0, 21);
    code->SetOperation(31, (FireStarterOpcode)1, 5);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 257;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 15441014961411072186;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000072f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
