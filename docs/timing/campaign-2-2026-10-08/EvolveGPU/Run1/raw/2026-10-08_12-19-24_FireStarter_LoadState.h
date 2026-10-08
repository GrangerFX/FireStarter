#pragma once
#include "FireStarterState.h"

// Run date: 10/08/26 12:19:24 Pacific Daylight Time
// Run duration = 387.778984 seconds
// Run test = 255
// Run generation = 1
// Run evolution = 0
// Run precision  = 0.00002718
// Run max result = 0.00000080

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
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;

} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000080f;
    *(result->EvolveAge()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.51334298f;
    data->d[2] = 1.89835358f;
    data->d[3] = 0.00000004f;
    data->d[4] = 0.12033428f;
    data->d[5] = 1.11177182f;
    data->d[6] = 1.86959159f;
    data->d[7] = 0.00990777f;
    data->d[8] = 4.77809906f;
    data->d[9] = 3.58721471f;
    data->d[10] = 1.05625844f;
    data->d[11] = -0.26214591f;
    data->d[12] = 1.05999351f;
    data->d[13] = 0.99987358f;
    data->d[14] = 3.62760067f;
    data->d[15] = -3.08216453f;
    data->d[16] = 0.91275549f;
    data->d[17] = 2.13420415f;
    data->d[18] = -0.15496324f;
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

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 0);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 7);
    code->SetOperation(14, (FireStarterOpcode)1, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)1, 14);
    code->SetOperation(18, (FireStarterOpcode)0, 13);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)1, 9);
    code->SetOperation(21, (FireStarterOpcode)0, 7);
    code->SetOperation(22, (FireStarterOpcode)1, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 6);
    code->SetOperation(24, (FireStarterOpcode)1, 17);
    code->SetOperation(25, (FireStarterOpcode)0, 16);
    code->SetOperation(26, (FireStarterOpcode)0, 13);
    code->SetOperation(27, (FireStarterOpcode)0, 9);
    code->SetOperation(28, (FireStarterOpcode)0, 0);
    code->SetOperation(29, (FireStarterOpcode)0, 18);
    code->SetOperation(30, (FireStarterOpcode)1, 16);
    code->SetOperation(31, (FireStarterOpcode)0, 1);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 2;
    state.m_evolveIndex = 2;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 15517154794153712016;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000080f;
    state.m_oldResult = 0.00000328f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
