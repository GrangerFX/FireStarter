#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 08:25:39 Pacific Daylight Time
// Run duration = 12.655748 seconds
// Run test = 0
// Run generation = 6
// Run evolution = 0
// Run precision  = 0.00031182
// Run max result = 0.00058830
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
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 384
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 65536;
    settings.m_generations = 0;
    settings.m_passes = 384;
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
    *(result->MaxResult()) = 0.00038964f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 9;
    FireStarterData *data = result->Data();
    data->d[0] = -0.81647426f;
    data->d[1] = -0.34945911f;
    data->d[2] = -1.12976980f;
    data->d[3] = -1.89065063f;
    data->d[4] = -0.88432121f;
    data->d[5] = 0.28835568f;
    data->d[6] = -0.05301913f;
    data->d[7] = -1.43269622f;
    data->d[8] = -0.39982346f;
    data->d[9] = 0.92125797f;
    data->d[10] = 0.79200983f;
    data->d[11] = -1.24295676f;
    data->d[12] = 0.14617322f;
    data->d[13] = 1.11583674f;
    data->d[14] = 0.43427297f;
    data->d[15] = 3.81304288f;
    data->d[16] = 4.48586512f;
    data->d[17] = 3.48059487f;
    data->d[18] = 1.50420058f;
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
    *(result->MaxResult()) = 0.00058830f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = 0.33322892f;
    data->d[1] = -0.26384321f;
    data->d[2] = 0.72603375f;
    data->d[3] = -3.72291565f;
    data->d[4] = 0.07258207f;
    data->d[5] = -1.27189803f;
    data->d[6] = -1.32010520f;
    data->d[7] = -0.11579633f;
    data->d[8] = -0.53225201f;
    data->d[9] = 1.50028312f;
    data->d[10] = -2.34802485f;
    data->d[11] = 1.55950272f;
    data->d[12] = -2.16315794f;
    data->d[13] = 1.95657265f;
    data->d[14] = 1.20005858f;
    data->d[15] = 0.05101713f;
    data->d[16] = 3.18047047f;
    data->d[17] = -1.77107382f;
    data->d[18] = 0.01670287f;
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
    *(result->MaxResult()) = 0.00057721f;
    *(result->EvolveAge1()) = 0;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = 0.55745059f;
    data->d[1] = 0.31705070f;
    data->d[2] = 3.32982612f;
    data->d[3] = -0.06550069f;
    data->d[4] = -4.73052692f;
    data->d[5] = -0.13279137f;
    data->d[6] = 1.98912621f;
    data->d[7] = -1.65510607f;
    data->d[8] = -1.18390000f;
    data->d[9] = -1.21190023f;
    data->d[10] = 0.84802353f;
    data->d[11] = 0.08410944f;
    data->d[12] = 2.10689068f;
    data->d[13] = 0.73710150f;
    data->d[14] = 0.16509092f;
    data->d[15] = 4.00356436f;
    data->d[16] = -8.98698521f;
    data->d[17] = -0.38188505f;
    data->d[18] = -0.93140441f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 3);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 1);
    code->SetOperation(10, (FireStarterOpcode)0, 2);
    code->SetOperation(11, (FireStarterOpcode)1, 8);
    code->SetOperation(12, (FireStarterOpcode)1, 9);
    code->SetOperation(13, (FireStarterOpcode)0, 7);
    code->SetOperation(14, (FireStarterOpcode)1, 2);
    code->SetOperation(15, (FireStarterOpcode)0, 10);
    code->SetOperation(16, (FireStarterOpcode)0, 1);
    code->SetOperation(17, (FireStarterOpcode)0, 11);
    code->SetOperation(18, (FireStarterOpcode)0, 12);
    code->SetOperation(19, (FireStarterOpcode)1, 13);
    code->SetOperation(20, (FireStarterOpcode)0, 14);
    code->SetOperation(21, (FireStarterOpcode)0, 8);
    code->SetOperation(22, (FireStarterOpcode)0, 1);
    code->SetOperation(23, (FireStarterOpcode)0, 14);
    code->SetOperation(24, (FireStarterOpcode)0, 15);
    code->SetOperation(25, (FireStarterOpcode)1, 16);
    code->SetOperation(26, (FireStarterOpcode)0, 16);
    code->SetOperation(27, (FireStarterOpcode)1, 17);
    code->SetOperation(28, (FireStarterOpcode)0, 14);
    code->SetOperation(29, (FireStarterOpcode)1, 15);
    code->SetOperation(30, (FireStarterOpcode)1, 4);
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
    state.m_generation = 6;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 9663196147826480754;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00058830f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
