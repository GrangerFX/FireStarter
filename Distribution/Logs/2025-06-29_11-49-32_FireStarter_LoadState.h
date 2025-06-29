#pragma once
#include "FireStarterState.h"

// Run date: 06/29/25 11:49:32 Pacific Daylight Time
// Run duration = 4148.493563 seconds
// Run test = 1
// Run generation = 322
// Run evolution = 7
// Run precision  = 0.00000219
// Run max result = 0.00000425
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
    *(result->MaxResult()) = 0.00000054f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14243627f;
    data->d[1] = -0.00000327f;
    data->d[2] = -7.27881145f;
    data->d[3] = 1.42923141f;
    data->d[4] = 0.00912353f;
    data->d[5] = -0.11947212f;
    data->d[6] = 5.31376696f;
    data->d[7] = -2.02120686f;
    data->d[8] = 0.00076076f;
    data->d[9] = -0.49912792f;
    data->d[10] = 0.09594303f;
    data->d[11] = 0.84326649f;
    data->d[12] = -3.35280204f;
    data->d[13] = -0.96901578f;
    data->d[14] = -2.13162827f;
    data->d[15] = 1.84138632f;
    data->d[16] = -1.38776803f;
    data->d[17] = 0.00024628f;
    data->d[18] = 1.90971279f;
    data->d[19] = 1.00654471f;
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
    *(result->MaxResult()) = 0.00000262f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09614873f;
    data->d[1] = 0.00000058f;
    data->d[2] = 3.34914517f;
    data->d[3] = -0.29586691f;
    data->d[4] = -0.43172079f;
    data->d[5] = 1.10401106f;
    data->d[6] = -0.62119007f;
    data->d[7] = -2.66645050f;
    data->d[8] = 0.00990274f;
    data->d[9] = -0.03431431f;
    data->d[10] = 0.02773583f;
    data->d[11] = 8.44916725f;
    data->d[12] = 6.40321398f;
    data->d[13] = 5.74974728f;
    data->d[14] = -8.27882099f;
    data->d[15] = -9.21432400f;
    data->d[16] = -2.28692651f;
    data->d[17] = -0.07353518f;
    data->d[18] = 0.93098831f;
    data->d[19] = 1.68897939f;
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
    *(result->MaxResult()) = 0.00000425f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -1.64850330f;
    data->d[1] = 1.22436929f;
    data->d[2] = 0.90742862f;
    data->d[3] = -3.89684272f;
    data->d[4] = -0.46070969f;
    data->d[5] = 1.89381766f;
    data->d[6] = -0.02052700f;
    data->d[7] = 1.02042484f;
    data->d[8] = -1.83433473f;
    data->d[9] = 0.07982856f;
    data->d[10] = -3.08281732f;
    data->d[11] = -1.04081547f;
    data->d[12] = 0.64183098f;
    data->d[13] = -1.20727861f;
    data->d[14] = 1.57544208f;
    data->d[15] = -0.43645003f;
    data->d[16] = 0.02056138f;
    data->d[17] = -0.19466637f;
    data->d[18] = 2.71880317f;
    data->d[19] = -1.02594447f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)1, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 0);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 6);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 9);
    code->SetOperation(14, (FireStarterOpcode)0, 10);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 8);
    code->SetOperation(17, (FireStarterOpcode)1, 9);
    code->SetOperation(18, (FireStarterOpcode)0, 0);
    code->SetOperation(19, (FireStarterOpcode)1, 12);
    code->SetOperation(20, (FireStarterOpcode)0, 13);
    code->SetOperation(21, (FireStarterOpcode)0, 0);
    code->SetOperation(22, (FireStarterOpcode)1, 14);
    code->SetOperation(23, (FireStarterOpcode)1, 4);
    code->SetOperation(24, (FireStarterOpcode)0, 3);
    code->SetOperation(25, (FireStarterOpcode)1, 15);
    code->SetOperation(26, (FireStarterOpcode)0, 9);
    code->SetOperation(27, (FireStarterOpcode)0, 16);
    code->SetOperation(28, (FireStarterOpcode)1, 17);
    code->SetOperation(29, (FireStarterOpcode)0, 18);
    code->SetOperation(30, (FireStarterOpcode)0, 19);
    code->SetOperation(31, (FireStarterOpcode)1, 8);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 322;
    state.m_evolution = 7;
    state.m_index = 11;
    state.m_evolveIndex = 2;
    state.m_id = 2;
    state.m_test = 1;
    state.m_seed = 10072513561272438616;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000425f;
    state.m_oldResult = 0.00000960f;
    state.m_evolveWeight = 0.001814f;
    state.m_optimizeValid = true;
} // LoadState
