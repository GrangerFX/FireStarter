#pragma once
#include "FireStarterState.h"

// Run date: 07/12/25 10:54:13 Pacific Daylight Time
// Run duration = 3271.491966 seconds
// Run test = 2
// Run generation = 0
// Run evolution = 0
// Run precision  = 0.00010682
// Run max result = 0.00007900
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
    *(result->MaxResult()) = 0.00007900f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -0.18567054f;
    data->d[1] = 0.83666891f;
    data->d[2] = 0.26097485f;
    data->d[3] = 2.66163301f;
    data->d[4] = -0.17658924f;
    data->d[5] = -0.65205610f;
    data->d[6] = 0.17558338f;
    data->d[7] = -0.26278970f;
    data->d[8] = 0.18202709f;
    data->d[9] = 2.95473671f;
    data->d[10] = 0.23522235f;
    data->d[11] = -33.24618530f;
    data->d[12] = 15.54738045f;
    data->d[13] = -0.52766877f;
    data->d[14] = 1.59884369f;
    data->d[15] = 1.79025841f;
    data->d[16] = 1.65044951f;
    data->d[17] = 0.26339650f;
    data->d[18] = -2.48914695f;
    data->d[19] = -0.56651062f;
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
    *(result->MaxResult()) = 0.00002907f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.39090198f;
    data->d[1] = -0.38116544f;
    data->d[2] = -1.17108917f;
    data->d[3] = -0.22829437f;
    data->d[4] = 0.16433643f;
    data->d[5] = -1.24054146f;
    data->d[6] = -0.40985727f;
    data->d[7] = -1.83750963f;
    data->d[8] = 0.39077899f;
    data->d[9] = -1.20240653f;
    data->d[10] = 1.08537805f;
    data->d[11] = 1.14534545f;
    data->d[12] = -1.12163520f;
    data->d[13] = -2.59518361f;
    data->d[14] = 0.47052574f;
    data->d[15] = -1.15106010f;
    data->d[16] = -0.44595042f;
    data->d[17] = -2.14066219f;
    data->d[18] = 2.41913676f;
    data->d[19] = 0.96692032f;
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
    *(result->MaxResult()) = 0.00003086f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.63836294f;
    data->d[1] = -0.42606884f;
    data->d[2] = 1.34464169f;
    data->d[3] = -0.30890429f;
    data->d[4] = 0.54015404f;
    data->d[5] = 1.25744975f;
    data->d[6] = -1.39780760f;
    data->d[7] = 0.79879469f;
    data->d[8] = -1.69356382f;
    data->d[9] = -6.61168671f;
    data->d[10] = 0.10994338f;
    data->d[11] = 2.78371835f;
    data->d[12] = -0.38564557f;
    data->d[13] = 5.30103731f;
    data->d[14] = 0.37736234f;
    data->d[15] = -0.37331188f;
    data->d[16] = 1.38401306f;
    data->d[17] = 0.11809332f;
    data->d[18] = -0.59038496f;
    data->d[19] = 0.58016199f;
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
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)1, 9);
    code->SetOperation(10, (FireStarterOpcode)0, 10);
    code->SetOperation(11, (FireStarterOpcode)0, 1);
    code->SetOperation(12, (FireStarterOpcode)0, 7);
    code->SetOperation(13, (FireStarterOpcode)0, 8);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)1, 13);
    code->SetOperation(17, (FireStarterOpcode)1, 0);
    code->SetOperation(18, (FireStarterOpcode)1, 3);
    code->SetOperation(19, (FireStarterOpcode)0, 1);
    code->SetOperation(20, (FireStarterOpcode)0, 14);
    code->SetOperation(21, (FireStarterOpcode)0, 9);
    code->SetOperation(22, (FireStarterOpcode)1, 3);
    code->SetOperation(23, (FireStarterOpcode)0, 15);
    code->SetOperation(24, (FireStarterOpcode)0, 16);
    code->SetOperation(25, (FireStarterOpcode)0, 17);
    code->SetOperation(26, (FireStarterOpcode)1, 18);
    code->SetOperation(27, (FireStarterOpcode)0, 16);
    code->SetOperation(28, (FireStarterOpcode)1, 10);
    code->SetOperation(29, (FireStarterOpcode)0, 5);
    code->SetOperation(30, (FireStarterOpcode)1, 7);
    code->SetOperation(31, (FireStarterOpcode)0, 19);
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
    state.m_evolveIndex = 0;
    state.m_id = 16;
    state.m_test = 2;
    state.m_seed = 17781087309389859058;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00007900f;
    state.m_oldResult = 0.87152576f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
