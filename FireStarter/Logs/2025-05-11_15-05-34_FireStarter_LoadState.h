#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 15:05:34 Pacific Daylight Time
// Run duration = 9.841744 seconds
// Run test = 0
// Run generation = 14
// Run evolution = 0
// Run precision  = 0.00088094
// Run max result = 0.00065156
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
    *(result->MaxResult()) = 0.00033860f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = 0.10720231f;
    data->d[1] = -2.17384028f;
    data->d[2] = -1.53830087f;
    data->d[3] = 0.46302581f;
    data->d[4] = -1.06373823f;
    data->d[5] = -1.80933213f;
    data->d[6] = 1.75046778f;
    data->d[7] = 1.08464718f;
    data->d[8] = -1.91008008f;
    data->d[9] = 1.00865436f;
    data->d[10] = -1.87904644f;
    data->d[11] = 0.37984243f;
    data->d[12] = 1.46809828f;
    data->d[13] = 3.17990947f;
    data->d[14] = 0.52259725f;
    data->d[15] = 0.48276767f;
    data->d[16] = 1.17431915f;
    data->d[17] = -1.00079477f;
    data->d[18] = -11.63416672f;
    data->d[19] = -0.08614468f;
    data->d[20] = 0.64096540f;
    data->d[21] = 1.15362632f;
    data->d[22] = -0.50521392f;
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
    *(result->MaxResult()) = 0.00016316f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 1.36678553f;
    data->d[1] = 0.19845615f;
    data->d[2] = 0.46413589f;
    data->d[3] = -0.47289109f;
    data->d[4] = 1.21185565f;
    data->d[5] = 0.62868470f;
    data->d[6] = 2.62855315f;
    data->d[7] = 2.30126762f;
    data->d[8] = -0.86662549f;
    data->d[9] = 0.74729121f;
    data->d[10] = -1.80094695f;
    data->d[11] = 1.90619361f;
    data->d[12] = -0.90856403f;
    data->d[13] = 1.04846549f;
    data->d[14] = -0.20513402f;
    data->d[15] = 14.08655071f;
    data->d[16] = -1.79996407f;
    data->d[17] = -0.49478585f;
    data->d[18] = 0.00083701f;
    data->d[19] = 2.08673358f;
    data->d[20] = 0.83942270f;
    data->d[21] = -1.72085452f;
    data->d[22] = 0.07431174f;
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
    *(result->MaxResult()) = 0.00065156f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -0.83836699f;
    data->d[1] = 0.57498395f;
    data->d[2] = 1.10163987f;
    data->d[3] = 0.16328217f;
    data->d[4] = -0.88226092f;
    data->d[5] = 0.43098119f;
    data->d[6] = 1.70525420f;
    data->d[7] = -1.06726491f;
    data->d[8] = 1.88524222f;
    data->d[9] = 0.17864926f;
    data->d[10] = -0.94082350f;
    data->d[11] = -2.29100728f;
    data->d[12] = 1.57288623f;
    data->d[13] = 3.66500974f;
    data->d[14] = 6.99964809f;
    data->d[15] = 4.29131079f;
    data->d[16] = -0.07906093f;
    data->d[17] = 0.02695714f;
    data->d[18] = -13.48152542f;
    data->d[19] = -6.39388180f;
    data->d[20] = -2.33680153f;
    data->d[21] = 0.28664854f;
    data->d[22] = 2.94984698f;
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
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)1, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)1, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 3);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)1, 4);
    code->SetOperation(14, (FireStarterOpcode)0, 12);
    code->SetOperation(15, (FireStarterOpcode)1, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 6);
    code->SetOperation(17, (FireStarterOpcode)0, 14);
    code->SetOperation(18, (FireStarterOpcode)0, 10);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)0, 16);
    code->SetOperation(21, (FireStarterOpcode)0, 17);
    code->SetOperation(22, (FireStarterOpcode)0, 18);
    code->SetOperation(23, (FireStarterOpcode)0, 19);
    code->SetOperation(24, (FireStarterOpcode)0, 7);
    code->SetOperation(25, (FireStarterOpcode)1, 20);
    code->SetOperation(26, (FireStarterOpcode)1, 10);
    code->SetOperation(27, (FireStarterOpcode)1, 20);
    code->SetOperation(28, (FireStarterOpcode)0, 12);
    code->SetOperation(29, (FireStarterOpcode)0, 3);
    code->SetOperation(30, (FireStarterOpcode)1, 21);
    code->SetOperation(31, (FireStarterOpcode)0, 22);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 14;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 4100713604552236810;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00065156f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
