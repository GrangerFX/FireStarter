#pragma once
#include "FireStarterState.h"

// Run date: 03/30/25 20:13:25 Pacific Daylight Time
// Run duration = 66.974060 seconds
// Run generation = 8
// Run evolution = 1
// Run max result = 0.00750786
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
    *(result->MaxResult()) = 0.00008305f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -1.57078719f;
    data->d[1] = -0.17060947f;
    data->d[2] = -0.07182055f;
    data->d[3] = 1.62842250f;
    data->d[4] = 1.53515518f;
    data->d[5] = -6.35970831f;
    data->d[6] = -2.03812718f;
    data->d[7] = 1.24927533f;
    data->d[8] = 0.09469673f;
    data->d[9] = 0.03854243f;
    data->d[10] = 5.43840885f;
    data->d[11] = 1.14435399f;
    data->d[12] = 0.07835887f;
    data->d[13] = -0.78365219f;
    data->d[14] = -0.96650815f;
    data->d[15] = 0.47573355f;
    data->d[16] = -5.29800701f;
    data->d[17] = -3.79051876f;
    data->d[18] = 1.20394504f;
    data->d[19] = 0.76096851f;
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
    *(result->MaxResult()) = 0.00750786f;
    *(result->EvolveAge1()) = 0;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = 3.95388699f;
    data->d[1] = 0.07850792f;
    data->d[2] = -1.07511997f;
    data->d[3] = 1.28419423f;
    data->d[4] = -0.43446892f;
    data->d[5] = 0.34499970f;
    data->d[6] = -1.17352366f;
    data->d[7] = -1.77023840f;
    data->d[8] = -0.58284920f;
    data->d[9] = -9.09788704f;
    data->d[10] = 0.99303573f;
    data->d[11] = 0.89471716f;
    data->d[12] = -0.50994432f;
    data->d[13] = 0.88021410f;
    data->d[14] = 0.31138107f;
    data->d[15] = -0.10592423f;
    data->d[16] = -6.48138142f;
    data->d[17] = 0.08084926f;
    data->d[18] = -31.01918983f;
    data->d[19] = 0.21979327f;
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
    *(result->MaxResult()) = 0.00637048f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 9;
    FireStarterData *data = result->Data();
    data->d[0] = 2.15754342f;
    data->d[1] = -0.23021023f;
    data->d[2] = -1.51615918f;
    data->d[3] = 0.17936449f;
    data->d[4] = 2.77903867f;
    data->d[5] = -2.55227590f;
    data->d[6] = 0.49663183f;
    data->d[7] = 1.07076812f;
    data->d[8] = 1.21569145f;
    data->d[9] = -0.38406959f;
    data->d[10] = -5.79033041f;
    data->d[11] = -0.01209850f;
    data->d[12] = -0.36718333f;
    data->d[13] = -2.35128665f;
    data->d[14] = -0.28862524f;
    data->d[15] = 1.93899608f;
    data->d[16] = 0.17042877f;
    data->d[17] = 4.31859255f;
    data->d[18] = 0.43202350f;
    data->d[19] = 21.38410950f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 1);
    code->SetOperation(3, (FireStarterOpcode)1, 2);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 2);
    code->SetOperation(8, (FireStarterOpcode)0, 6);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 0);
    code->SetOperation(13, (FireStarterOpcode)0, 1);
    code->SetOperation(14, (FireStarterOpcode)1, 10);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 12);
    code->SetOperation(17, (FireStarterOpcode)1, 9);
    code->SetOperation(18, (FireStarterOpcode)1, 13);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)0, 17);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 15);
    code->SetOperation(25, (FireStarterOpcode)0, 18);
    code->SetOperation(26, (FireStarterOpcode)0, 6);
    code->SetOperation(27, (FireStarterOpcode)1, 5);
    code->SetOperation(28, (FireStarterOpcode)0, 14);
    code->SetOperation(29, (FireStarterOpcode)0, 7);
    code->SetOperation(30, (FireStarterOpcode)0, 19);
    code->SetOperation(31, (FireStarterOpcode)0, 12);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 8;
    state.m_evolution = 1;
    state.m_index = 15;
    state.m_evolveIndex = 1;
    state.m_id = 1;
    state.m_test = 0;
    state.m_seed = 15848445234129052003;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.01771143f;
    state.m_evolveWeight = 0.123980f;
    state.m_optimizeValid = true;
} // LoadState
