#pragma once
#include "FireStarterState.h"

// Run date: 09/25/26 13:17:44 Pacific Daylight Time
// Run duration = 56.772468 seconds
// Run test = 3
// Run generation = 5
// Run evolution = 1
// Run precision  = 0.00000163
// Run max result = 0.00000007

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
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

    settings.m_mode = FIRESTARTER_EVOLVE_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
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
    *(result->MaxResult()) = 0.00000007f;
    *(result->EvolveAge()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -1.50510192f;
    data->d[1] = -2.12576723f;
    data->d[2] = 0.48927647f;
    data->d[3] = -0.26272178f;
    data->d[4] = -0.26217318f;
    data->d[5] = -0.10176794f;
    data->d[6] = -0.29154426f;
    data->d[7] = 2.33585763f;
    data->d[8] = -0.06217968f;
    data->d[9] = -2.13232374f;
    data->d[10] = -0.09197598f;
    data->d[11] = -2.21069121f;
    data->d[12] = 4.08552074f;
    data->d[13] = 3.25562882f;
    data->d[14] = -1.28790128f;
    data->d[15] = 0.30243391f;
    data->d[16] = 0.93570638f;
    data->d[17] = 0.51700020f;
    data->d[18] = -0.39814386f;
    data->d[19] = 0.71480387f;
    data->d[20] = -0.36317497f;
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

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)1, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 3);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)1, 7);
    code->SetOperation(13, (FireStarterOpcode)0, 4);
    code->SetOperation(14, (FireStarterOpcode)0, 10);
    code->SetOperation(15, (FireStarterOpcode)1, 5);
    code->SetOperation(16, (FireStarterOpcode)0, 11);
    code->SetOperation(17, (FireStarterOpcode)0, 12);
    code->SetOperation(18, (FireStarterOpcode)1, 13);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)1, 17);
    code->SetOperation(23, (FireStarterOpcode)0, 4);
    code->SetOperation(24, (FireStarterOpcode)1, 17);
    code->SetOperation(25, (FireStarterOpcode)0, 18);
    code->SetOperation(26, (FireStarterOpcode)0, 19);
    code->SetOperation(27, (FireStarterOpcode)0, 13);
    code->SetOperation(28, (FireStarterOpcode)1, 16);
    code->SetOperation(29, (FireStarterOpcode)1, 20);
    code->SetOperation(30, (FireStarterOpcode)0, 2);
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
    state.m_generation = 5;
    state.m_evolution = 1;
    state.m_index = 15;
    state.m_evolveIndex = 5;
    state.m_id = 5;
    state.m_test = 3;
    state.m_seed = 10018362013736272693;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000007f;
    state.m_oldResult = 0.00000118f;
    state.m_evolveWeight = 0.000062f;
    state.m_optimizeValid = true;
} // LoadState
