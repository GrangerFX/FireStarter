#pragma once
#include "FireStarterState.h"

// Run date: 06/21/25 15:36:42 Pacific Daylight Time
// Run duration = 21302.092465 seconds
// Run test = 14
// Run generation = 21
// Run evolution = 2
// Run precision  = 0.00030297
// Run max result = 0.00005172
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
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00005172f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 9;
    FireStarterData *data = result->Data();
    data->d[0] = 0.23563656f;
    data->d[1] = -1.66093218f;
    data->d[2] = 0.68374693f;
    data->d[3] = 0.54202414f;
    data->d[4] = -0.39885232f;
    data->d[5] = -2.08559012f;
    data->d[6] = 1.82129264f;
    data->d[7] = -0.00097387f;
    data->d[8] = 7.48309231f;
    data->d[9] = 7.29462624f;
    data->d[10] = 1.94495177f;
    data->d[11] = -0.61347282f;
    data->d[12] = 0.15405154f;
    data->d[13] = 0.84219807f;
    data->d[14] = 0.48767751f;
    data->d[15] = 1.94990420f;
    data->d[16] = -2.29162455f;
    data->d[17] = 0.01473557f;
    data->d[18] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00002565f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -0.45637554f;
    data->d[1] = -0.37003082f;
    data->d[2] = -0.94858944f;
    data->d[3] = 0.58789164f;
    data->d[4] = -0.50343907f;
    data->d[5] = 0.21232234f;
    data->d[6] = -0.26521355f;
    data->d[7] = -0.46497580f;
    data->d[8] = -5.32441282f;
    data->d[9] = -7.57043743f;
    data->d[10] = -4.26458549f;
    data->d[11] = 0.42302045f;
    data->d[12] = -0.02556090f;
    data->d[13] = -4.44895458f;
    data->d[14] = 1.68265724f;
    data->d[15] = 0.17014812f;
    data->d[16] = 18.45838737f;
    data->d[17] = 1.37995088f;
    data->d[18] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00003493f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = 0.04003824f;
    data->d[1] = -1.36545491f;
    data->d[2] = -0.23430608f;
    data->d[3] = 1.46375751f;
    data->d[4] = -2.57170439f;
    data->d[5] = 1.99834788f;
    data->d[6] = 1.36526310f;
    data->d[7] = 0.17081539f;
    data->d[8] = -15.28132439f;
    data->d[9] = -1.37338531f;
    data->d[10] = -0.05968515f;
    data->d[11] = 4.12650871f;
    data->d[12] = 2.33532739f;
    data->d[13] = -0.39288130f;
    data->d[14] = -1.24393368f;
    data->d[15] = 2.24371290f;
    data->d[16] = 1.47112656f;
    data->d[17] = 0.48961148f;
    data->d[18] = 0.00000000f;
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
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)1, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 5);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 7);
    code->SetOperation(12, (FireStarterOpcode)1, 3);
    code->SetOperation(13, (FireStarterOpcode)0, 10);
    code->SetOperation(14, (FireStarterOpcode)1, 0);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 2);
    code->SetOperation(17, (FireStarterOpcode)0, 12);
    code->SetOperation(18, (FireStarterOpcode)0, 13);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 2);
    code->SetOperation(22, (FireStarterOpcode)1, 15);
    code->SetOperation(23, (FireStarterOpcode)1, 16);
    code->SetOperation(24, (FireStarterOpcode)0, 2);
    code->SetOperation(25, (FireStarterOpcode)0, 12);
    code->SetOperation(26, (FireStarterOpcode)0, 4);
    code->SetOperation(27, (FireStarterOpcode)1, 10);
    code->SetOperation(28, (FireStarterOpcode)1, 17);
    code->SetOperation(29, (FireStarterOpcode)1, 10);
    code->SetOperation(30, (FireStarterOpcode)0, 14);
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
    state.m_generation = 21;
    state.m_evolution = 2;
    state.m_index = 6;
    state.m_evolveIndex = 28;
    state.m_id = 28;
    state.m_test = 14;
    state.m_seed = 11900518574922780405;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00005172f;
    state.m_oldResult = 0.00006533f;
    state.m_evolveWeight = 0.000392f;
    state.m_optimizeValid = true;
} // LoadState
