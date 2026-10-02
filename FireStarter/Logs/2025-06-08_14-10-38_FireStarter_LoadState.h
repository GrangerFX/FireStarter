#pragma once
#include "FireStarterState.h"

// Run date: 06/08/25 14:10:38 Pacific Daylight Time
// Run duration = 134.016692 seconds
// Run test = 0
// Run generation = 249
// Run evolution = 10
// Run precision  = 0.00000286
// Run max result = 0.00000072
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
// Run units = 8
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
    settings.m_units = 8;
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
    *(result->MaxResult()) = 0.00000037f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159346f;
    data->d[1] = -0.71610749f;
    data->d[2] = -0.00000057f;
    data->d[3] = -0.11216486f;
    data->d[4] = 2.86619425f;
    data->d[5] = -0.23929913f;
    data->d[6] = -0.09513588f;
    data->d[7] = -0.06259549f;
    data->d[8] = 1.98654330f;
    data->d[9] = -0.40141678f;
    data->d[10] = -0.24162665f;
    data->d[11] = -2.59039140f;
    data->d[12] = 3.10919738f;
    data->d[13] = -14.84168530f;
    data->d[14] = -10.60088348f;
    data->d[15] = 2.18944860f;
    data->d[16] = -1.21938992f;
    data->d[17] = -0.83548921f;
    data->d[18] = -0.18122759f;
    data->d[19] = -3.50248456f;
    data->d[20] = 4.01976919f;
    data->d[21] = 0.32953981f;
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
    *(result->MaxResult()) = 0.00000022f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = 2.55727839f;
    data->d[1] = 0.07542273f;
    data->d[2] = -0.42598283f;
    data->d[3] = 2.36484432f;
    data->d[4] = 0.70858127f;
    data->d[5] = 1.50335288f;
    data->d[6] = -1.45699954f;
    data->d[7] = 1.10729957f;
    data->d[8] = -3.76335478f;
    data->d[9] = 1.44208920f;
    data->d[10] = 5.86596966f;
    data->d[11] = -0.25837979f;
    data->d[12] = 14.32670879f;
    data->d[13] = 0.00630210f;
    data->d[14] = 0.41162971f;
    data->d[15] = 4.40784502f;
    data->d[16] = 1.89822102f;
    data->d[17] = -0.56080109f;
    data->d[18] = -0.11741345f;
    data->d[19] = -0.43463060f;
    data->d[20] = 0.19157176f;
    data->d[21] = -0.27731538f;
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
    *(result->MaxResult()) = 0.00000072f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = 0.98328549f;
    data->d[1] = 0.37920010f;
    data->d[2] = -1.36560535f;
    data->d[3] = 0.07295705f;
    data->d[4] = 4.63806820f;
    data->d[5] = -2.93975973f;
    data->d[6] = 1.29975426f;
    data->d[7] = 0.27805698f;
    data->d[8] = 5.68805313f;
    data->d[9] = 0.66149092f;
    data->d[10] = 3.91807103f;
    data->d[11] = 0.00070585f;
    data->d[12] = -5.35217142f;
    data->d[13] = 1.52522123f;
    data->d[14] = -0.38524029f;
    data->d[15] = -3.33692598f;
    data->d[16] = 0.26120961f;
    data->d[17] = 1.14269960f;
    data->d[18] = -0.37531838f;
    data->d[19] = -0.38821918f;
    data->d[20] = 2.46510220f;
    data->d[21] = 0.38341874f;
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
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 4);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 12);
    code->SetOperation(14, (FireStarterOpcode)0, 13);
    code->SetOperation(15, (FireStarterOpcode)1, 14);
    code->SetOperation(16, (FireStarterOpcode)0, 7);
    code->SetOperation(17, (FireStarterOpcode)1, 15);
    code->SetOperation(18, (FireStarterOpcode)1, 11);
    code->SetOperation(19, (FireStarterOpcode)1, 16);
    code->SetOperation(20, (FireStarterOpcode)1, 17);
    code->SetOperation(21, (FireStarterOpcode)0, 18);
    code->SetOperation(22, (FireStarterOpcode)0, 19);
    code->SetOperation(23, (FireStarterOpcode)0, 8);
    code->SetOperation(24, (FireStarterOpcode)0, 17);
    code->SetOperation(25, (FireStarterOpcode)1, 20);
    code->SetOperation(26, (FireStarterOpcode)0, 15);
    code->SetOperation(27, (FireStarterOpcode)0, 19);
    code->SetOperation(28, (FireStarterOpcode)0, 9);
    code->SetOperation(29, (FireStarterOpcode)0, 5);
    code->SetOperation(30, (FireStarterOpcode)1, 1);
    code->SetOperation(31, (FireStarterOpcode)0, 21);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 249;
    state.m_evolution = 10;
    state.m_index = 8;
    state.m_evolveIndex = 3;
    state.m_id = 3;
    state.m_test = 0;
    state.m_seed = 2924083179728663257;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000072f;
    state.m_oldResult = 0.00000264f;
    state.m_evolveWeight = 0.000655f;
    state.m_optimizeValid = true;
} // LoadState
