#pragma once
#include "FireStarterState.h"

// Run date: 06/21/25 10:25:37 Pacific Daylight Time
// Run duration = 793.975116 seconds
// Run test = 0
// Run generation = 160
// Run evolution = 5
// Run precision  = 0.00000831
// Run max result = 0.00000087
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_SELECT
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 16
// Run population = 32768
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

    settings.m_mode = FIRESTARTER_EVOLVE_SELECT;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 16;
    settings.m_population = 32768;
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
    *(result->MaxResult()) = 0.00000079f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.31706595f;
    data->d[2] = -1.22880161f;
    data->d[3] = -3.07652593f;
    data->d[4] = -2.41541600f;
    data->d[5] = 1.64718497f;
    data->d[6] = -4.70202065f;
    data->d[7] = -0.02646403f;
    data->d[8] = 1.06001437f;
    data->d[9] = -0.36959976f;
    data->d[10] = 2.45383096f;
    data->d[11] = 0.68313634f;
    data->d[12] = 2.53170514f;
    data->d[13] = -0.11640765f;
    data->d[14] = -0.56500524f;
    data->d[15] = 0.31144184f;
    data->d[16] = -0.44258779f;
    data->d[17] = -4.75988388f;
    data->d[18] = 2.52820683f;
    data->d[19] = 1.24001956f;
    data->d[20] = -1.87982559f;
    data->d[21] = -1.95415890f;
    data->d[22] = 0.00000006f;
    data->d[23] = 0.65575796f;
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
    *(result->MaxResult()) = 0.00000016f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09065866f;
    data->d[1] = 0.78894955f;
    data->d[2] = -1.95493925f;
    data->d[3] = -0.63927931f;
    data->d[4] = 0.01728618f;
    data->d[5] = 27.23066521f;
    data->d[6] = 3.62842131f;
    data->d[7] = 5.35883427f;
    data->d[8] = -0.71974403f;
    data->d[9] = -0.00195192f;
    data->d[10] = 1.21784139f;
    data->d[11] = -0.64601755f;
    data->d[12] = -1.68223929f;
    data->d[13] = -0.28287607f;
    data->d[14] = -14.21542072f;
    data->d[15] = -2.03211474f;
    data->d[16] = 0.41194275f;
    data->d[17] = -3.72623205f;
    data->d[18] = 0.24427038f;
    data->d[19] = 1.82153118f;
    data->d[20] = 0.17691211f;
    data->d[21] = 1.29552341f;
    data->d[22] = 0.10976842f;
    data->d[23] = -1.07619131f;
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
    *(result->MaxResult()) = 0.00000087f;
    *(result->EvolveAge1()) = 4;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61799359f;
    data->d[1] = -1.03737962f;
    data->d[2] = 0.30358529f;
    data->d[3] = 0.42008930f;
    data->d[4] = -6.75274229f;
    data->d[5] = -10.09278965f;
    data->d[6] = -14.68868637f;
    data->d[7] = -0.03459821f;
    data->d[8] = 4.83364296f;
    data->d[9] = 2.00521588f;
    data->d[10] = 3.09387803f;
    data->d[11] = -0.04295600f;
    data->d[12] = 7.22295380f;
    data->d[13] = -0.04552322f;
    data->d[14] = -3.08219409f;
    data->d[15] = -1.81526458f;
    data->d[16] = -0.30878288f;
    data->d[17] = -1.14857364f;
    data->d[18] = -0.56644642f;
    data->d[19] = 0.91997987f;
    data->d[20] = -0.03274621f;
    data->d[21] = -2.17310405f;
    data->d[22] = -1.78279030f;
    data->d[23] = -0.29369625f;
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
    code->SetOperation(5, (FireStarterOpcode)0, 2);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)1, 11);
    code->SetOperation(13, (FireStarterOpcode)1, 12);
    code->SetOperation(14, (FireStarterOpcode)0, 13);
    code->SetOperation(15, (FireStarterOpcode)0, 14);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)1, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 16);
    code->SetOperation(19, (FireStarterOpcode)0, 2);
    code->SetOperation(20, (FireStarterOpcode)0, 17);
    code->SetOperation(21, (FireStarterOpcode)0, 15);
    code->SetOperation(22, (FireStarterOpcode)1, 9);
    code->SetOperation(23, (FireStarterOpcode)0, 18);
    code->SetOperation(24, (FireStarterOpcode)0, 18);
    code->SetOperation(25, (FireStarterOpcode)0, 19);
    code->SetOperation(26, (FireStarterOpcode)0, 20);
    code->SetOperation(27, (FireStarterOpcode)1, 17);
    code->SetOperation(28, (FireStarterOpcode)1, 21);
    code->SetOperation(29, (FireStarterOpcode)0, 1);
    code->SetOperation(30, (FireStarterOpcode)1, 22);
    code->SetOperation(31, (FireStarterOpcode)0, 23);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 160;
    state.m_evolution = 5;
    state.m_index = 13;
    state.m_evolveIndex = 68;
    state.m_id = 68;
    state.m_test = 0;
    state.m_seed = 14297602169113376978;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000087f;
    state.m_oldResult = 0.00000169f;
    state.m_evolveWeight = 0.000047f;
    state.m_optimizeValid = true;
} // LoadState
